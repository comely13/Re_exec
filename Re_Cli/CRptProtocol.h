//
// Created by admin on 2023-06-06.
//

#ifndef REMOTE_EXEC_CRPTPROTOCOL_H
#define REMOTE_EXEC_CRPTPROTOCOL_H

#include <srtp.h>

#include <QObject>
#include "qDebug"

class CRptProtocol : public QObject{
    Q_OBJECT
public:
    explicit CRptProtocol(QObject *parent = nullptr);
    // 添加你需要的方法
    bool initializeRTP(); // 初始化RTP
    bool sendRTPPacket(/* 你需要发送的数据 */); // 发送RTP包
    bool receiveRTPPacket(/* 你需要接收的数据 */); // 接收RTP包
private:
    // UDP连接
    // 添加处理错误的方法
    void handleError(/* 错误信息 */);
};


#endif //REMOTE_EXEC_CRPTPROTOCOL_H
