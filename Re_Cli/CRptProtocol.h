//
// Created by admin on 2023-06-06.
//

#ifndef REMOTE_EXEC_CRPTPROTOCOL_H
#define REMOTE_EXEC_CRPTPROTOCOL_H


#include <QObject>
#include "qDebug"

class CRptProtocol : public QObject{
    Q_OBJECT
public:
    explicit CRptProtocol(QObject *parent = nullptr);
};


#endif //REMOTE_EXEC_CRPTPROTOCOL_H
