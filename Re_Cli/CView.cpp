//
// Created by admin on 2023-06-06.
//

#include "CView.h"

CView::CView(QObject *parent) : QObject(parent) {
    qDebug()<<"CView::CView()";
}

void CView::refresh()  {
    // Refresh view based on model data
}
