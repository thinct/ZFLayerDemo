#include "dataopr.h"
#include <QFile>
#include <QTextStream>

const char* DataOpr::m_fileName = "./solution.txt";
DataOpr DataOpr::m_sDataOpr;

DataOpr::DataOpr()
{
    Load();
}

DataOpr::~DataOpr()
{
    Save();
}

DataOpr* DataOpr::GetDataManage()
{
    return &m_sDataOpr;
}

void DataOpr::Load()
{
    m_mapData.clear();

    QFile file(m_fileName);
    if ( false == file.exists()) return;
    QTextStream in(&file);

    QString strDataItem;
    while (false != in.readLineInto(&strDataItem))
    {
        QStringList itemList = strDataItem.split("@");
        if (4 != itemList.size()) continue;
        DataItem dataItem = { itemList[LAYERINDED], itemList[ADJUSTSYTAX], itemList[SOLUTION] };
        m_mapData[itemList[RASK]] = dataItem;
    }

    file.close();
}

void DataOpr::Save()
{
    QFile file(m_fileName);
    if ( false == file.exists())
        file.open( QIODevice::WriteOnly );
    QTextStream out(&file);

    QMap<QString, DataItem>::iterator it = m_mapData.begin();
    while (it != m_mapData.end())
    {
        out<<QString("@rask:%1, @layerIndex:%2, @adjustSytax:%3, @solution:%4")
          .arg(it.key()).arg((*it).layerIndex).arg((*it).adjustSytax).arg((*it).solution)<<"\n";
        it++;
    }

    file.flush();
    file.close();
}

void DataOpr::Register(QString rask, QString layerIndex, QString adjustSytax, QString solution)
{
    DataItem item = { layerIndex, adjustSytax, solution};
    m_mapData[rask] = item;
}

void DataOpr::UnRegister(QString rask)
{
    m_mapData.remove(rask);
}

DataOpr::DataItem DataOpr::getData(QString rask) const
{
    return m_mapData[rask];
}

QList<QString> DataOpr::getAllRask() const
{
    return m_mapData.keys();
}

QString DataOpr::getLayerIndex(QString rask) const
{
    return m_mapData[rask].layerIndex;
}

QString DataOpr::getAdjustSytax(QString rask) const
{
    return m_mapData[rask].adjustSytax;
}

QString DataOpr::getSolution(QString rask) const
{
    return m_mapData[rask].solution;
}
