//
// Created by admin on 2023-06-06.
//

#ifndef REMOTE_EXEC_CMODEL_H
#define REMOTE_EXEC_CMODEL_H

#include <QObject>
#include "qDebug"

class CRptProtocol;

class CModel: public QObject{
    Q_OBJECT

public:
    explicit CModel(QObject *parent = nullptr);

signals:
    void dataChanged();

public slots:
    void updateData();

private:
    CRptProtocol *rptProtocol;
};


#endif //REMOTE_EXEC_CMODEL_H
