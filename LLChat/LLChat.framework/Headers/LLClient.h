//
//  LLClient.h
//  ChatMars
//
//  Created by baiyang on 2024/9/11.
//  Copyright © 2024 Taole. All rights reserved.
//

#ifndef LLClient_h
#define LLClient_h

#include "LLCommon.h"

class LLClient
{
public:
    
//    static std::string StartUpApiKTool(const char *aApiK, unsigned long time);
    
    LLClient(int _port, int _pid, int _uin, const char* _ip);
    
    void Connect(ONRECV funOnRecv, ONSEND funOnSend, ONCONNECT funOnConnect, ONDISCONNECT funOnDisConnect, ONTIMER funOnTimer, ONRECV_PROTO funOnProto);
    void SendJsonData(void *data, int len);
    int  SendProtoData(unsigned int protoCmd, const char* protoMsg, unsigned int protoLen);
    
    void ShutDown();// 销毁
    
    ~LLClient();

private:
    void *pClient;
};

#endif /* LLClient_h */
