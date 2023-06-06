//
// Created by admin on 2023-06-06.
//

#include "CController.h"

CController::CController(CModel *modelParam, CView *viewParam, QObject *parent) : QObject(parent), model(modelParam), view(viewParam) {
    connect(model, &CModel::dataChanged, view, &CView::refresh);
    qDebug()<<"CController::CController()";
}

void CController::control(){
    // Control model based on user input or network input
}
