//
// Created by admin on 2023-06-06.
//

#ifndef REMOTE_EXEC_CVIEW_H
#define REMOTE_EXEC_CVIEW_H

#include <QObject>
#include "qDebug"
class CView: public QObject{
    Q_OBJECT
public:
    explicit CView(QObject *parent = nullptr);
public slots:
    void refresh();

};


#endif //REMOTE_EXEC_CVIEW_H
