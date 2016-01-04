#ifndef DATAOPR_H
#define DATAOPR_H
#include <QString>
#include <QMap>
#include <QList>

class DataOpr
{
public:
    struct DataItem
    {
        QString layerIndex;
        QString adjustSytax;
        QString solution;
    };
    // protocol var
#define RASK        0
#define LAYERINDED  1
#define ADJUSTSYTAX 2
#define SOLUTION    3

public:
    ~DataOpr();

    static DataOpr* GetDataManage();

    void Load();
    void Save();

    void Register(QString rask, QString layerIndex, QString adjustSytax, QString solution);
    void UnRegister(QString rask);
    DataItem getData(QString rask) const;
    QList<QString> getAllRask() const;
    QString getLayerIndex(QString rask) const;
    QString getAdjustSytax(QString rask) const;
    QString getSolution(QString rask) const;

private:
    DataOpr();
    static DataOpr m_sDataOpr;
    QMap<QString, DataItem> m_mapData;
    static const char* m_fileName;
};

#endif // DATAOPR_H
