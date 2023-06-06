#include <QCoreApplication>
#include <QDebug>
#include <memory>
class CModel;
class CView;
class CRptProtocol;
#include "CController.h"

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);


    //requst network connect
    // Create MVC
    //use std_ptr to avoid memory leak

    //CController* controller =
    new CController(new CModel, new CView);

    return QCoreApplication::exec();
}
