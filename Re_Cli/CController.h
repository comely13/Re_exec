//
// Created by admin on 2023-06-06.
//  It is used to receive control instructions sent by users to perform corresponding tasks.
//

#ifndef REMOTE_EXEC_CCONTROLLER_H
#define REMOTE_EXEC_CCONTROLLER_H


#include <QObject>
#include "CModel.h"
#include "CView.h"
#include "qDebug"
class CController: public QObject{
    Q_OBJECT
public:
    explicit CController(CModel *modelParam, CView *viewParam, QObject *parent = nullptr);

    void control();

private:
    CModel *model;
    CView *view;
};


#endif //REMOTE_EXEC_CCONTROLLER_H
