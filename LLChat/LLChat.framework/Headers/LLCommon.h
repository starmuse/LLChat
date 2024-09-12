//
//  LLCommon.h
//  ChatMars
//
//  Created by baiyang on 2024/9/11.
//  Copyright © 2024 Taole. All rights reserved.
//

#ifndef LLCommon_h
#define LLCommon_h

typedef void (*ONRECV)(const char* pData, int nLen, void* para);
typedef void (*ONRECV_PROTO)(int cmd, const char* className, const char* pData, int nLen, void* para);
typedef void (*ONSEND)(const char* pData, int nLen, void* para);
typedef void (*ONDISCONNECT)(int nState, void* para);
typedef void (*ONCONNECT)(int nState, void* para);
typedef void (*ONTIMER)(void* para);

//////////////////////////////////////////////////////////////////////////
//jsonkey define
#define JSKEY_SYSMSGTYPE    "sysMsgType"    //系统消息类型
#define JSKEY_LANGUAGE        "language"        //语言种类
#define JSKEY_TERMVER       "termVer"       //客户端终端版本
#define JSKEY_TERMVERVAL    "termVerVal"    //终端值
#define JSKEY_CMD            "cmd"            //命令号
#define JSKEY_SUBCMD        "subcmd"        //子命令号
#define JSKEY_RESULT        "result"        //返回值
#define JSKEY_PACKETID        "packetid"        //应用层发包时间戳
#define JSKEY_PACKETKEY        "packetkey"        //应用层发包时间戳
#define JSKEY_GIFEXPERIENCE "gifexperience" //礼物经验值
#define JSKEY_DEVTYPE        "deviceType"    //设备类型
#define JSKEY_FORBITTIME    "forBitTime"    //禁言剩余时间
#define JSKEY_BLOCKTIME        "blockTime"        //加入黑名单剩余时间
#define JSKEY_PACKETINDEX    "packetindex"
#define JSKEY_TOTALPACKET    "totalpacket"
#define JSKEY_HIDE            "bHide"
#define JSKEY_SERVER_STATE    "serverState"
#define JSKEY_TIPS            "tips"            //
#define JSKEY_USEWEBRTC        "useWebRTC"        //是否使用webrtc

#define JSKEY_PID            "pid"
#define JSKEY_UIN            "uin"
#define JSKEY_PASS            "password"        //用户密码
#define JSKEY_MACADDR        "macaddr"        //设备id
#define JSKEY_DEVNUM        "devNum"        //移动设备唯一识别码
#define JSKEY_BINDLOGIN        "bindLogin"        //是否乐淘绑定登录
#define JSKEY_PASSTYPE        "passType"        //密码类型
#define JSKEY_SRCUIN        "srcUin"        //源uin
#define JSKEY_SRCNICK        "srcNick"
#define JSKEY_DSTUIN        "dstUin"        //目标uin
#define JSKEY_DSTNICK        "dstNick"
#define JSKEY_DELUIN        "deluin"        //将要被替换删除的帐号
#define JSKEY_ADDUIN        "adduin"        //将要被设置为房管的帐号
#define JSKEY_MICUIN        "micUin"        //在麦uin
#define JSKEY_MICUIN1        "micUin1"        //1麦uin
#define JSKEY_MICUIN2        "micUin2"        //2麦uin
#define JSKEY_MICUIN3        "micUin3"        //3麦uin
#define JSKEY_MICTIME        "micTime"        //在麦剩余时间
#define JSKEY_MICQUEUEINDEX    "micQueueIndex"    //麦序列表中的第几位 从零开始
#define JSKEY_ROOMID        "roomid"        //房间id
#define JSKEY_ROOMNAME        "roomName"        //房间名称
#define JSKEY_ROOMPASS        "roomPassword"    //房间密码
#define JSKEY_ROOMOWNER        "roomOwnuin"    //室主uin
#define JSKEY_ROOMDES        "roomDescript"    //房间描述
#define JSKEY_ROOMBROADCAST    "roomBroadcast"    //房间广播
#define JSKEY_ROOMPUBLIC    "roomIspublic"    //房间是否开放
#define JSKEY_ROOMMAXINDEX    "roomMaxcfuser"    //房间最大视频个数
#define JSKEY_ROOMMICINDEX    "micIndex"        //几号麦
#define JSKEY_JOINCONF_FLAG "joinConfFlag"  //标识上麦还是下麦
#define JSKEY_ROOMMAXMICLIST    "roomMaxMicQueue"    //房间最大排麦数
#define JSKEY_ROOMSTATE        "roomOpenstatus"//房间状态
#define JSKEY_ROOMAUTOMIC    "roomAutoMic"    //是否自动排麦
#define JSKEY_ROOMSIZE        "roomSize"        //房间最大用户数
#define JSKEY_ROOMMAXMGR    "roomMaxMgr"    //最大房管
#define JSKEY_ROOMCRUUNUM    "roomCurrNum"    //房间当前人数
#define JSKEY_ROOMMICLIST    "roomMicList"    //房间麦序列表
#define JSKEY_USERNICK        "userNick"        //用户昵称
#define JSKEY_CUSTOMFACE    "customface"    //头像版本
#define JSKEY_USERRANK        "rank"            //用户管理身份
#define JSKEY_USERTYPE        "userType"        //全局性用户属性 具体参见comm/im/imdefine.h    CTaoleGlobleUserType
#define JSKEY_LEVEL            "level"            //会员等级
#define JSKEY_LORDLEVEL        "lordLevel"        //爵位等级
#define JSKEY_ACTIVETYPE    "activeType"    //活动类型
#define JSKEY_ACTIVEIDENTIFY "activeIdentify"    //活动身份
#define JSKEY_USERIDENTIFY "userIdentify"    //用户身份
#define JSKEY_SHOWUIN       "showuin"        //用于显示的uin，主要用于靓号
#define JSKEY_LOGINEXT      "loginExt"      //登录扩展信息
#define JSKEY_STYLETYPE        "styleType"        //身份&风格
#define JSKEY_USERLIST        "userList"        //用户列表
#define JSKEY_ENTERTITLE    "enter_title"    //进入房间显示的标题
#define JSKEY_ENTERPIC        "enter_pic"        //进入房间显示的图片
#define JSKEY_ACLCTRL        "aclctrlstr"    //权限列表
#define JSKEY_MAXMICTIME    "maxMicTime"    //房间表演麦，一麦，最大麦时
#define JSKEY_MICLIMIT        "micLimit"        //限制使用
#define JSKEY_CANDRAG        "canDrag"        //是否允许被抱麦
#define JSKEY_REDPAPER        "disableRedPaper"//红包开关
#define JSKEY_DSTLEVEL        "dstLevel"
#define JSKEY_DSTRANK        "dstRank"
#define JSKEY_DSTUSERTYPE    "dstUserType"
#define JSKEY_DSTACTIVETYPE        "dstActiveType"        //活动类型
#define JSKEY_DSTACTIVEIDENTIFY "dstActiveIdentify"    //活动身份
#define JSKEY_SHARE_EXP            "shareExp"            //分享经验
#define JSKEY_OFFLINE_MSGNUM    "offlinemsgnum"     //离线消息的条数
#define JSKEY_USER_ONROOM       "userIsOnRoom"      //用户是否在房间中
#define JSKEY_ATTACH_INFO       "attachInfo"        //不同类型消息附加信息
#define JSKEY_UNIQUE_TIME       "uniqueTime"        //消息唯一性时间
#define JSKEY_ADDFRIEND_FLAG    "addFriendFlag"     //1 request 0 agree
#define JSKEY_ADDFRIEND_REMARK  "addFriendRemark"   //添加好友备注
#define JSKEY_FRIENDCIR_ACTION  "friendCirAction"   //朋友圈操作动作
#define JSKEY_DYNAIMIC_ID       "dynamicId"         //动态id
#define JSKEY_TEXT_ID           "textId"            //动态中消息id
#define JSKEY_SEND_UNILIST      "sendUinList"       //通知的用户列表
#define JSKEY_SESSION_ID        "sessionId"         //会话id
#define JSKEY_VIDEO_ACTION      "videoAction"       //音视频或者音频
#define JSKEY_OPT_ACTION        "optAction"         //操作 0 request 1 agree 2 disagree
#define JSKEY_GROUPID           "groupId"           //群组id
#define JSKEY_MSGID              "msgId"            //群消息id
#define JSKEY_CLIENTVER          "clientVer"           //客户端版本号
#define JSKEY_CLIENTCHANNEL      "clientChannel"            //客户端渠道

#define JSKEY_AVSAMPLE        "roomAudiosampleindex"    //新码流控制
#define JSKEY_AVBITRATE        "roomAudiobitrateindex"    //音频采样控制
#define JSKEY_AVPORT        "roomAvPort"            //媒体端口
#define    JSKEY_AVIP            "roomAvIP"                //媒体ip
#define JSKEY_AVKEY            "roomAvSingnature"        //媒体密码

#define JSKEY_MONEY            "money"            //用户虚拟币
#define JSKEY_RECEIVED        "received"        //用户礼金
#define JSKEY_BANKMONEY     "bankmoney"     // 背包账户
#define JSKEY_ACCOUNTSTATE    "accountState"    //礼金账户类型
#define JSKEY_SHAREMONEY    "shareMoney"

#define JSKEY_RICHORDER        "richOrder"        //富豪排行

#define JSKEY_PRIZEMONEY    "prizeCount"    //中奖总金额
#define JSKEY_PRIZELIST        "prizeList"        //中奖列表
#define JSKEY_GIFTID        "giftid"        //礼物id
#define JSKEY_AMOUNT        "amount"        //礼物个数
#define JSKEY_COUNT            "giftcount"        //累计个数
#define JSKEY_GIFTNAME        "giftName"        //礼物名字
#define JSKEY_GIFTURL        "giftPicUrl"    //礼物图片url
#define JSKEY_PRICE            "prize"            //价格
#define JSKEY_GIFTID1        "giftid1"
#define JSKEY_GIFTID2        "giftid2"
#define JSKEY_AMOUNT1        "amount1"
#define JSKEY_AMOUNT2        "amount2"
#define JSKEY_ONMICLIST        "micList"        //上麦列表
#define JSKEY_FILTERIP        "filterIp"        //是否过滤ip

#define JSKEY_COLOR            "color"            //字体颜色
#define JSKEY_FONTSIZE        "fontsize"        //字体大小
#define JSKEY_BOLD            "isbold"        //是否粗体
#define JSKEY_ACTIONTYPE    "actionType"    //动作类型
#define JSKEY_MSG            "msgText"        //文本信息
#define JSKEY_ITALIC        "isitalic"        //是否斜体
#define JSKEY_ONTOCP        "showOnTopPlace"    //是否滚动显示

#define    JSKEY_CHATPUBLIC    "ispublic"            //是否公聊
#define JSKEY_CHATTIME        "msgtime"            //聊天时间
#define JSKEY_CHATTYPE        "type"                //聊天类型

#define JSKEY_CHATRANDOM1    "randNum1"            //掷骰子随机数1
#define JSKEY_CHATRANDOM2    "randNum2"            //掷骰子随机数2

#define JSKEY_STAMPID        "stampID"            //印章id
#define JSKEY_STAMPTIME        "stampTime"            //印章剩余时间
#define JSKEY_STAMPLIST        "stampList"
#define JSKEY_STAMREVERSE    "stampReverse"

#define JSKEY_KICKFLAG        "flag"                //踢出房间类型
#define JSKEY_KICKTYPE        "actionType"        //被踢出房间的 挤出房间，被踢出房间等

#define JSKEY_FORBIDORNOT    "forbidOrNot"        //1.禁言 0.解禁
#define JSKEY_FORBIDDEN_TYPR "forbiddenType"     //主播禁言。0全体禁言，1.全体都可以发言。2.只有在榜单上的用户可以发言
#define JSKEY_IP            "ip"
#define JSKEY_PORT            "port"

#define JSKEY_GIFTVER        "giftver"
#define JSKEY_STAMPVER        "stampver"
#define JSKEY_SORTVER        "sortver"
#define JSKEY_BROADCASEPRICE    "broadCasePrice"
#define JSKEY_DISCOUNT            "discount"
#define JSEKY_SINGERGIFT_MOUNEY    "singerGiftMoney"
#define JSKEY_REPAPERID            "redPaperID"


#define JSKEY_EXPRESSIONLIST        "expressionList"
#define JSKEY_EXPRESSIONID            "expressionid"
#define JSKEY_EXPRESSIONPACKETID    "expressionPacketid"
#define JSKEY_EXPRESSIONNUM            "expressionNum"
#define JSKEY_EXPRESSIONINDEX        "expressionIndex"


#define JSKEY_VIEWSTATE                "viewState"
#define JSKEY_VIEWID                "vid"
#define JSKEY_LAUDCOUNT                "laudCount"
#define JSKEY_TIMESTAMP                "timeStamp"
#define JSKEY_GETVID                "getVid"
#define JSKEY_ROOMVID                "roomVid"
#define JSKEY_VIDRES                "vidRes"
#define JSKEY_GIFTORDER                "giftOrder"

#define JSKEY_TOTALRECV                "totalRecved"
#define JSKEY_CHARMVALUE            "charmValue"
#define JSKEY_SRC_FACE                "srcFace"
#define JSKEY_DST_FACE                "dstFace"
#define JSKEY_KIND                    "kind"
#define JSKEY_WRITEHISTORY            "writeHistroy"        //是否写入回放记录
#define JSKEY_COMBO                    "comboCount"        //连击次数
#define JSKEY_DELAY                    "comboDelay"        //连击延迟重置
#define JSKEY_UINLIST                "uinList"            //帐号列表
#define JSKEY_MSGVER                "msgVer"            //轮播消息版本号
#define JSKEY_MSGVERDELAY            "delayMsgVer"        //轮播消息版本号
#define JSKEY_SERVERTIMESTAMP        "serverTimeStamp"    //服务器时间戳
#define JSKEY_MULTIPLE              "multiple"          //中奖倍数//活动相关
#define JSKEY_ACTIVE_LIST            "activeList"        //活动列表
#define JSKEY_ACTIVE_NAME            "activeName"        //活动名字
#define JSKEY_ACTIVE_ID                "activeID"            //活动id
#define JSKEY_ACTIVE_ICON            "activeIcon"        //活动图标
#define JSKEY_ACTIVE_START            "activeStart"        //开始时间
#define JSKEY_ACTIVE_END            "activeEnd"            //结束时间
#define JSKEY_ACTIVE_KIND            "activeKind"        //显示类型
#define JSKEY_ACTIVE_OWNURL            "activeOwnurl"        //活动地址 主播
#define JSKEY_ACTIVE_URL            "activeurl"            //活动地址 观看者
#define JSKEY_ACTIVE_SCORE            "activeScore"        //活动积分
#define JSKEY_ACTIVE_ORDER            "activeOrder"        //活动排名


#define JSKEY_DIAMOND                "diamond"            //钻石
#define JSKEY_DIAMONDRECV            "diamondReceived"    //钻石劵
#define JSKEY_DIAMONDEXP            "diamondExp"        //钻石经验
#define JSKEY_ECHOPUBLIC            "echoPubilc"        //是否公聊区显示
#define JSKEY_ECHOPRIVETE            "echoPrivate"        //是否私聊区显示
#define JSKEY_ORDER                    "order"                //排名
#define JSKEY_LIST                    "list"                //列表
#define JSKEY_SONGNAME                "songName"            //歌名
#define JSKEY_AUDIO                    "disableAudio"        //声音开关
#define JSKEY_VIDEO                    "disableVideo"        //视频开关
#define JSKEY_STREAM                "roomStreamPrv"        //码流
#define JSKEY_FRAMERATE                "frameRatePrv"        //帧率
#define JSKEY_NEWUIN                "newUin"            //新帐号
#define JSKEY_NEWNICK                "newNick"            //新昵称
#define JSKEY_SRCRANKNAME            "srcRankName"        //攻城礼物 称号
#define JSKEY_DSTRANKNAME            "dstRankName"        //攻城礼物 称号
#define JSKEY_TOTALTIME                "totalTime"            //总时间
#define JSKEY_SPANTIME                "spanTime"            //成功守城时间
#define JSKEY_ID                    "id"                //id
#define JSKEY_WINMONDY                "winMoney"            //挖中的奖励
#define JSKEY_CURRMONEY                "currMoney"            //当前金币
#define JSKEY_ITEMNAME                "itemName"            //中奖项目
#define JSKEY_FREECOUNT                "freeCount"            //免费次数
#define JSKEY_MAXWINMONDY            "maxAwardMoney"        //最大开奖金额
#define JSKEY_FREEINTERVAL            "freeInterval"        //免费间隔
#define JSKEY_ANCHORUIN                "anchorUin"            //主播uin
#define JSKEY_ORIGINAL                "original"            //原创
#define JSKEY_BBLACKIP                "bBlackIp"            //是否封锁ip
#define JSKEY_BBLACKMAC                "bBlackMac"            //是否封锁mac
#define JSKEY_BBLACKUIN                "bBlackUin"            //是否封锁uin




//////////////////////////////////////////////////////////////////////////
//碰碰车相关定义
#define JSKEY_PPC_JETTON_LIST        "ppcJettonList"        //筹码列表
#define JSKEY_PPC_LIITLIST            "ppcBetLimitList"    //所有区域押注上限
#define JSKEY_PPC_AREAINDEX            "ppcAreaIndex"        //押注项
#define JSKEY_PPC_BETMONEY            "ppcBetMoney"        //押注金额
#define JSKEY_PPC_MAXPLACEAREA        "ppcMaxPlaceArea"    //当前区域剩余可压金额
#define JSKEY_PPC_BETRESULT            "ppcBetResult"        //押注结果
#define JSKEY_PPC_EXPERIENCE        "Experience"        //用户经验
#define JSKEY_PPC_AWARDITEM            "ppcAwardItem"        //中奖结果
#define JSKEY_PPC_AROUND            "ppcAround"            //局数
#define JSKEY_PPC_DELAYTIME            "ppcDelayTime"        //延迟时间 秒
#define JSKEY_PPC_UPDATELIST        "ppcUpdateList"        //更新列表
#define JSKEY_PPC_BETALLLIST        "ppcBetAllList"        //个区域押注总额列表

#define JSKEY_PPC_BANKERSCORE        "ppcBankerScore"    //庄家得分（当局输赢）
#define JSKEY_PPC_BANKERTOTALSOCRE    "ppcBankerTotalScore"    //总输赢
#define JSKEY_PPC_BANKERMONEY        "ppcBankerMoney"    //庄家总钱数
#define JSKEY_PPC_BANKERTIMES        "ppcBankerTimes"    //坐庄次数
#define JSKEY_PPC_BANKERUIN            "ppcBankerUin"        //庄家uin
#define JSKEY_PPC_USERSCORE            "ppcUserScore"        //玩家得分（当局输赢）
#define JSKEY_PPC_GAMETAX            "ppcTax"            //游戏税收
#define JSKEY_PPC_SUCCESS            "bSuccess"            //操作是否成功
#define JSKEY_PPC_WIN                "bWin"                //当局输赢
#define JSKEY_PPC_BANKERWAITLIST    "ppcBankerWaitList" //申请上庄列表
#define JSKEY_PPC_HISTORYLIST        "ppcHistoryList"    //历史中奖列表
#define JSKEY_PPC_MAXHISTORY        "ppcMaxHistorySize" //历史中奖记录最大保存多少条
#define JSKEY_PPC_CURRHISTORY        "ppcCurrHistorySize"//当前下发多少条
#define JSKEY_PPC_JETTION            "ppcJetton"            //筹码
#define JSKEY_PPC_BANKERLIMIT        "ppcBankerCondition"//庄家限制
#define JSKEY_PPC_USERLIMIT            "ppcUserLimit"//庄家限制

//////////////////////////////////////////////////////////////////////////
//才艺决赛
#define JSKEY_FINAL_USER_STATUS     "finalUserStatus"   //决赛用户状态
#define JSKEY_TIMEINTERVAL          "timeInterval"      //时间间隔
#define JSKEY_MIC1_STATUS           "mic1Status"        //1号麦声音状态
#define JSKEY_MIC2_STATUS           "mic2Status"        //2号麦声音状态
#define JSKEY_TICKET_NUM            "ticketNum"         //票数
#define JSKEY_DATATYPE              "dataType"          //数据类型

enum ChatUserType
{
    chat_user_general,
    chat_user_virtual,
    chat_user_ios,
    chat_user_android,
    chat_user_web,                                        //web
    chat_user_letao,                                    //pc
    chat_user_iospad,                                    //ios pad
    chat_user_androidpad,                                //��׿pad
};

typedef enum RoomCmdType
{
    IM_CHAT_KEEP_ALIVE = 0x0001,
    IM_CHAT_ACK,
    IM_CHAT_PING,                                                //���ټ�ⱨ��
    IM_CHAT_OBTAIN_IP,                                            //����û��ɣ�
    IM_CHAT_ANDROID_LOGON,                                        //�����˵�½
    IM_CHAT_ANDROID_LOGON2,
    IM_CHAT_MARS_KEEP,                                            //mars����
    IM_CHAT_TEXT_ACK,

    IM_CHAT_LOGON_ROOM            = 0x0100,                        //��½����
    IM_CHAT_LOGOUT_ROOM,                                        //�˳�����
    IM_CHAT_KICKOUT,                                            //�߳�
    IM_CHAT_VISITOR,                                            //��ȡ���䵱ǰ�û��б�
    IM_CHAT_FORBID_CHAT,                                        //����ĳ�û�
    IM_CHAT_EXTRA_MICTIME,                                        //�ӳ���ʱ
    IM_CHAT_MAC_PRESENTLIST,                                    //�ͻ������������ȡ���������б�
    IM_CHAT_PRIVATE_BIND,                                        //��˽��
    IM_CHAT_PRIVATE_UNBIND,                                        //��˽��
    IM_CHAT_PRIVATE_WATCH,                                        //�ۿ�˽��
    IM_CHAT_PRIVATE_UNWATCH,                                    //�˳��ۿ�˽��
    IM_CHAT_PRIVATE_WATCHLIST,                                    //����˽��ۿ��б�
    IM_CHAT_PRIVATE_LIST_REQ,                                    //����˽���б�
    IM_CHAT_KICKOUT_PRIVATE,                                    //����˽��
    IM_CHAT_PRIVATE_AVSTATE,                                    //˽������Ƶ״̬�޸�
    IM_CHAT_FORBID_CHAT_BY_ANCHOR,                               //�������Բ���
    
    IM_CHAT_MODIFY_INFO            = 0x0200,                        //�޸ķ�����Ϣ
    IM_CHAT_GET_ROOMINFO,                                        //��ȡ������Ϣ
    IM_CHAT_MODIFYPASS,                                            //�޸ķ�������
    IM_CHAT_ROOM_OPEN,                                            //�򿪷���
    IM_CHAT_ROOM_CLOSE,                                            //�رշ���

    IM_CHAT_MODIFY_MANGER,                                        //�޸Ĺ���ԱȨ��
    IM_CHAT_ROOM_MSG,                                            //���ͷ����ڲ��㲥
    IM_CHAT_MODIFY_ROOM_INFO_ITEM,                                //�����޸ķ�����Ϣ
    IM_CHAT_SUIBO_PAUSE,                                        //�����л�����̨
    IM_CHAT_MGRLIMIT_CONFIRM,                                    //���ܳ�������ȷ�Ͽ�����
    IM_CHAT_FACE_JUDGE,                                         //�沥����ֱ���Ƿ��������ж�
    IM_CHAT_REDDOT,                                             //δ����Ϣ��Ŀ
    IM_CHAT_FRIENDS_CIRCLE,                                     //����Ȧ��̬
    IM_CHAT_VIDEO_CHAT,                                         //����Ƶ����
    IM_CHAT_VIDEO_RECORD,                                       //����Ƶ�������������¼


    IM_CHAT_CONF_JOIN            = 0x0250,                        //����
    IM_CHAT_CONF_EXIT,                                            //��������
    IM_CHAT_CONF_KICKOUT,                                        //������
    IM_CHAT_CONF_DRAGIN,                                        //������������
    IM_CHAT_CANCEL_CFWAIT,                                        //ȡ���ȴ�����
    IM_CHAT_GET_MIC_LIST,                                        //��ȡ��ǰ�����б�
    IM_CHAT_CFWAITLIST,                                            //��ȡ�����б�
    IM_CHAT_CHANGE_AUTOMIC,                                        //����Զ�����״̬
    IM_CHAT_ADJUST_MIC_QUEUE,                                    //��������Ķ���
    IM_CHAT_DRAG_SETTING,                                        //���÷�����ѡ��
    IM_CHAT_SHAKE,                                                //�ζ��Է�
    IM_CHAT_STAMP,                                                //ӡ��
    IM_CHAT_GET_USER_STAMP_INFO,                                //��ȡ�����б�
    IM_CHAT_ERASESTAMP,                                            //��������
    IM_CHAT_REQUEST_OPENBOX,                                    //������ѿ���������
    IM_CHAT_VIEWSTATE,                                            //ֱ��״̬���
    IM_CHAT_LAUDCOUNT,                                            //����
    IM_CHAT_TAKEMIC,                                            //����
    IM_CHAT_MODIFYCARETAKER,                                    //�޸���ʱ����
    IM_CHAT_FILLUPMICQUEUE,                                        //������
    IM_CHAT_MODIFYMICTIME,                                        //�޸������ʱ
    IM_CHAT_CHANGE_MACLIMIT,                                    //��������
    IM_CHAT_GET_VID,                                            //��ȡvid
    IM_CHAT_OPEN_BOX,                                            //�ڱ�����
    IM_CHAT_MICINFO_REQ,                                        //���������û���Ϣ
    IM_CHAT_INVITE_FRIENDS,                                     //����QQ����
    IM_CHAT_REQ_REDLIST,                                        //�������б�


    IM_CHAT_TEXT                = 0x0300,                        //������Ϣ
    IM_CHAT_USEGIFT,                                            //����
    IM_CHAT_AUDIO,                                                //��Ƶ
    IM_CHAT_VIDEO,                                                //��Ƶ
    IM_CHAT_GLOBLE_MSG,                                            //����С������Ϣ
    IM_CHAT_RTP,                                                //RTP����
    IM_CHAT_RTP_ACK,                                            //RTP����ACK
    IM_CHAT_RTP_REQ,                                            //RTP��������ʧ����
    IM_CHAT_RTP_REQ_DIRECT,                                        //ֱ������ĳ����
    IM_CHAT_USEGIFT_LIST,                                        //Ⱥˢ���ܣ�
    IM_CHAT_GAME,                                                //������Ϸ
    IM_CHAT_GETPRESENT_MONEY,                                    //��ȡ������
    IM_CHAT_TRANS_TAX_RATE,                                     //��ȡת��˰�ʺ�Ȩ�� // [JWJ]
    IM_CHAT_ADDBLOCK,                                            //����ȫվ����
    IM_CHAT_MODIFYOWNER,                                        //�޸ĸ�����
    IM_CHAT_GUARD_LIST,                                            //�ػ��б�
    IM_CHAT_GUARD_ACL,                                            //�ػ�Ȩ�޽ӿ�
    IM_CHAT_FANS_LIST,                                            //��˿�б�
    IM_CHAT_SINGE_ORDER,                                        //����б�
    IM_CHAT_VOD,                                                //���
    IM_CHAT_VID_GIFTORDER,                                        //ֱ����
    IM_CHAT_MONTH_GIFTORDER,                                    //�°�
    IM_CHAT_SUIBO_REDUCEMONEY,                                    //�沥��Ǯ����ͨ�ýӿ�
    IM_CHAT_ANYCAST_INFO,                                        //�沥���뷿�����ݻ�ȡ�ӿ�
    IM_CHAT_REQ_MGRLIST,                                        //���󷿼�����б�
    IM_CHAT_ANYCAST_BLOCK,                                        //�沥����
    IM_CHAT_ANYCAST_REDLIST,                                    //�沥����б�
    IM_GET_OFFLINE_MSG,                                         //��ȡIM������Ϣ
    IM_CHAT_TEXT_CONFIRM,                                       //��Ϣ�Ѷ�δ��ȷ��
    IM_CHAT_ADD_FRIEND,                                         //��Ӻ���
    IM_CHAT_DEL_FRIEND,                                         //ɾ������
    IM_CHAT_GROUP_TEXT,                                         //Ⱥ����Ϣ
    IM_CHAT_MATCH,                                              //����ƥ����Ϣ
    IM_CHAT_PROTO_TEXT,                                         //protoBuf��Ϣ
    IM_CHAT_PROTO_DATA,                                         //protoBuf����


    IM_CHAT_ZZ_BET                    = 0x350,                    //תת��ע
    IM_CHAT_RELAY_MSG,                                            //ת����Ϣ


    IM_CHAT_SRV_USER_ONLINE        = 0x0400,                        //�û����뷿��
    IM_CHAT_SRV_USER_OFFLINE,                                    //����
    IM_CHAT_SRV_KICKOUT,                                        //ǿ������
    IM_CHAT_SRV_FORCE_OFFLINE,                                    //��ص�¼ǿ������

    IM_CHAT_SRV_MODIFY_MANGER,
    IM_CHAT_SRV_FORBIDCHAT_NTY,                                    //����֪ͨ�ӿ�
    IM_CHAT_SRV_MODIFYCARETAKER,                                //�޸��ٹ�
    IM_CHAT_SRV_PRIVATE_LIST,                                    //�·�˽���б�
    IM_CHAT_SRV_CONFIRM_ASK,                                    //˽����������֪ͨ
    IM_CHAT_SRV_CONFIRM_ANSWER,                                    //˽ȷ������
    IM_CHAT_SRV_WATCHLIST,                                        //�·�˽��ۿ��б�
    IM_CHAT_SRV_PRIVATEJOIN,                                    //��˽��֪ͨ
    IM_CHAT_SRV_PRIVATEEXIT,                                    //��˽��֪ͨ
    IM_CHAT_SRV_GUARDWEEKLIST,                                    //���ػ��б�
    IM_CHAT_SRV_FINALUSERLIST,                                  //�����û��б�
    IM_CHAT_SRV_APPLY_CONF,                                     //��������
    IM_CHAT_SRV_UPDATE_FINALUSERSTATUS,                         //���¾����û�״̬
    IM_CHAT_SRV_FINAL_COMPERE,                                  //�������ֱ�Ļ
    IM_CAHT_SVR_TICKETUSERLIST,                                 //ͶƱ�û��б�
    IM_CHAT_SVR_USERTICKETNUM,                                   //�û�Ʊ��


    IM_CHAT_SRV_CONF_JOIN        = 0x0500,                        //����
    IM_CHAT_SRV_CONF_EXIT,                                        //����
    IM_CHAT_SRV_CONF_KICKOUT,                                    //������
    IM_CHAT_SRV_ADDCFWAIT,                                        //���������ȴ�
    IM_CHAT_SRV_REMOVECFWAIT,                                    //���ӻ���ȴ������
    IM_CHAT_SRV_AUTOMIC_STATUS_CHANGE,                            //�Զ�����״̬�仯
    IM_CHAT_SRV_MICTIME_CHANGE,                                    //֪ͨʣ������ʱ
    IM_CHAT_SRV_MICPRESENT,                                        //֪ͨ��ȡ������
    IM_CHAT_SRV_LAUDCOUNT,                                        //���µ���
    IM_CHAT_SRV_SHARE,                                            //����
    IM_CHAT_SVR_FIREWORKS,                                        //��֪ͨ
    IM_CHAT_SVR_TOTALRECV,                                        //�沥����������㲥
    IM_CHAT_SRV_MSGCALLBACK,                                    //��Ϣ���ͳɹ�������ϢΨһ��ʶ
    IM_CHAT_SRV_GROUPCALLBACK,                                  //Ⱥ��Ϣ���ͳɹ�������Ϣ��ʶ


    IM_CHAT_SRV_ROOMINFO        = 0x0600,                        //���·�����Ϣ, ���ڹ���Ա�޸ķ�����Ϣ��
    IM_CHAT_SRV_ROOM_BROADCAST,                                    //���ͷ���㲥
    IM_CHAT_SRV_ROOM_OPEN,                                        //���䱻��
    IM_CHAT_SRV_ROOM_CLOSE,                                        //���䱻�ر�
    IM_CHAT_SRV_ROOM_WINDOW_BROADCAST,                            //������Ϣ
    IM_CHAT_SVR_ROOM_CLOATING_SCREEN,                            //�沥Ʈ����Ϣ
    IM_CHAT_SVR_ROOM_TASK_GIFT,                                    //��衢�赸��ģ��������
    IM_CHAT_SVR_ROOM_TASK_GIFT_UPDATE,                            //��衢�赸��ģ��������۸����
    IM_CHAT_SVR_ROOM_TASK_SCORE,                                //֪ͨ����û�����
    IM_CHAT_SVR_ROOM_STAR_NOTIFY,                                //���ǹ�֪ͨ
    IM_CHAT_SEND_STAR,                                            //�û������ǹ�
    IM_CHAT_SEND_STAR_NOTIFY_MSG,                                //���ǹ���֪ͨ
    IM_CHAT_SVR_REDPAPER_OVER,                                    //����ѱ�����
    IM_CHAT_SVR_OWNER_TASK_NUM,                                    //������ǰ������
    IM_CHAT_SVR_OWNER_STOP_LOOK_MP4,                            //�����ֶ����������ۿ�

    IM_CHAT_SRV_USEGIFT            = 0x0700,                        //����
    IM_CHAT_SRV_NTY_MSG,                                        //֪ͨ��Ϣ
    IM_CHAT_SRV_GLOBLE_MSG,                                        //С�԰���Ϣ
    IM_CHAT_SRV_PRIZE,                                            //�н���Ϣ
    IM_CHAT_SRV_GREAT_GIFT,                                        //������Ϣ
    IM_CHAT_SRV_IP_INFO,                                        //�û���IP��Ϣ
    IM_CHAT_SRV_MARQUEE_MSG,                                    //����Ʈ������Ϣ,ֻ�·�����
    IM_CHAT_SRV_GENERAL_MSG,                                    //�������Ϣ�㲥��Ϣ
    IM_CHAT_SRV_STAMP,                                            //ӡ��
    IM_CHAT_SRV_ERASESTAMP,                                        //����ӡ��
    IM_CHAT_SRV_GET_USER_STAMP_INFO,                            //��ȡ�������û������б�
    IM_CHAT_SRV_REQUEST_OPENBOX,                                //��������ѿ���
    IM_CHAT_SRV_ROOMINFO_CHANGE,                                //֪ͨ�������Ա��޸�
    IM_CHAT_SRV_GET_REDPAPER,                                    //�������֪ͨ��Ϣ    //---sqh
    IM_CHAT_SRV_SEND_REDPAPER,                                    //���ź��֪ͨ��Ϣ    //---sqh
    IM_CHAT_SRV_TRANS_TAX_RATE,                                 //ת��˰�� // [JWJ]
    IM_CHAT_SRV_USEGIFTNEW,                                        //������н���Ϣ
    IM_CHAT_SRV_NTY_MSGEX,                                        //��չ֪ͨ��Ϣ
    IM_CHAT_SRV_BOX_NOTIFY,                                        //����֪ͨ��Ϣ
    IM_CHAT_SRV_OPENBOX_NOTIFY,                                    //�ڱ�֪ͨ
    IM_CHAT_SRV_ONMIC_INFO,                                        //֪ͨ�����û���Ϣ
    IM_CHAT_SRV_ROOM_INVITE,                                     //����������Ϣ
    IM_CHAT_SRV_WEEKSTAR_CHANGE,                                //���Ǳ��֪ͨ��Ϣ
    IM_CHAT_SRV_DIAMOND_GIFT,                                    //��ʯ����֪ͨ
    IM_CHAT_SRV_WEEKSTAR_LIST,                                    //ȫ�������б�
    IM_CHAT_SRV_REDLIST,                                        //���ͺ���б�
    IM_CHAT_SRV_SIEGEGIFT,                                        //���¹�������

    IM_CHAT_SRV_ZZ_BET_START    = 0x0750,                        //תת��һ�ֿ�ʼͶע���·�Ͷעʱ��
    IM_CHAT_SRV_ZZ_BETMSG,                                        //תתĳ����ע��Ϣ
    IM_CHAT_SRV_ZZ_WAITING,                                        //ȷ����ע���ȴ���������
    IM_CHAT_SRV_ZZ_AWARDING,                                    //תת��ʼ����
    IM_CHAT_SRV_ZZ_AWARDED,                                        //תת������Ϣ����ʼ�·���һ��Ͷע��ʼ
    IM_CHAT_SRV_ZZ_AWARDMSG,                                    //ת��ĳ���н���Ϣ
    IM_CHAT_SRV_ZZ_STOP,                                        //ֹͣ����
    IM_CHAT_SRV_ZZ_AWARD_TODAY,                                    //���쿪����Ϣ


    IM_CHAT_SRV2SRV_RTP            = 0x800,                        //������֮�䴫��RTP����
    IM_CHAT_SRV2SRV_RTP_REQ,                                    //������֮�䶪���ط�����

    IM_CHAT_PPC_BET                = 0x900,                        //�û�PPCѺע
    IM_CHAT_PPC_BANKER_REQ,                                        //�û�ׯ�Ҳ���
    IM_CHAT_SVR_PPC_HISTORY,                                    //������ʷ�·�
    IM_CHAT_SVR_PPC_BETSTART,                                    //��һ�ֿ�ʼ
    IM_CHAT_SVR_PPC_SCENE,                                        //��ǰ�����·�
    IM_CHAT_SVR_PPC_AWARD_ITEM,                                    //�������
    IM_CHAT_SVR_PPC_BET_ACTION,                                    //��ע����֪ͨ
    IM_CHAT_SVR_PPC_BET_RESULT,                                    //�û���ע�������,��֪ͨ�µĽ������
    IM_CHAT_SVR_PPC_AWARD_RESULT,                                //�û��н�����֪ͨ.
    IM_CHAT_SVR_PPC_BANKER_CHANGE,                                //PPCׯ����Ϣ���
    IM_CAHT_SVR_PPC_STOP,                                        //ֹͣ����
    IM_CAHT_SVR_PPC_FREE,                                        //�ȴ�������
    IM_CHAT_SVR_PPC_GAMEEND,                                    //��Ϸ����֪ͨ
    IM_CHAT_PPC_SYNC_SCENE,                                        //ͬ����������
    IM_CHAT_PPC_SYNC_USERINFO,                                    //�����û��б�����


    REDPACKETS_GAME_START        = 0x1000,                        //��һ����Ϸ��ʼ
    REDPACKETS_SEND_REDPACKETS,                                    //���ͺ��
    REDPACKETS_SEND_REDPACKETS_NTY,                                //�����֪ͨ
    REDPACKETS_ROB_REDPACKETS,                                    //�����
    REDPACKETS_ROB_REDPACKETS_NTY,                                //�����֪ͨ
    REDPACKETS_SENCE_STATE,                                        //��Ϸ����״̬��������Ϸ�� ���û��������ʹ���Ϣ��
    REDPACKETS_GAME_END,                                        //��Ϸ�����·������������ٵ��û�
                                
    IM_CHAT_WEB_USERINFO    = 0x2000,                            //web�û���������Ϣ
    IM_CHAT_WEB_CHATTEXT,                                        //������Ϣ
    IM_CHAT_WEB_VIEWSTATE,                                        //ֱ��״̬

    //���ȷ���cmd
    DIS_SERVER_REGIST            = 0x3000,                        //��ӷ���
    DIS_SERVER_ADD_DELETE_ROOM,                                    //��ӻ�ɾ������
    DIS_SERVERINFO                ,                                //���������ϱ�
    DIS_SERVER_ROOMINFO            ,                                //�ϱ���������

    //�ͻ�������ȷ���
    DIS_CLIENT_GETSERVER        = 3100,                            //�ͻ��˻�ȡ��Ҫ��¼�ķ�����Ϣ
    IM_CHAT_CMD_LIMIT,
    IM_CHAT_CMD_SENDTIMEOUT,                                    //���������Ƿ�ɹ�
    IM_TEXT_SEND_TIMEOUT,                                       //����������Ϣ�Ƿ�ɹ�

}RoomCmdType;

typedef enum Language
{
    TL_ZH_CN,    //��������
    TL_ZH_TW,    //��������̨��
    TL_ZH_HK,    //�����������
    TL_EN,        //Ӣ��

    TL_LANGUAGE_LIMIT    //��������
}Language;

#endif /* LLCommon_h */
