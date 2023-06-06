//
// Created by admin on 2023-06-06.
//

#include "CModel.h"
#include "CRptProtocol.h"

CModel::CModel(QObject *parent) : QObject(parent),rptProtocol(new CRptProtocol()) {

    qDebug()<<"CModel::CModel()";
    // Initialize model data
}

void CModel::updateData() {

    // Update model data
    emit dataChanged();
}
