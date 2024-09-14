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
#define LLKEY__SYSMSGTYPE    "sysMsgType"    //系统消息类型
#define LLKEY__LANGUAGE        "language"        //语言种类
#define LLKEY__TERMVER       "termVer"       //客户端终端版本
#define LLKEY__TERMVERVAL    "termVerVal"    //终端值
#define LLKEY__CMD            "cmd"            //命令号
#define LLKEY__SUBCMD        "subcmd"        //子命令号
#define LLKEY__RESULT        "result"        //返回值
#define LLKEY__PACKETID        "packetid"        //应用层发包时间戳
#define LLKEY__PACKETKEY        "packetkey"        //应用层发包时间戳
#define LLKEY__GIFEXPERIENCE "gifexperience" //礼物经验值
#define LLKEY__DEVTYPE        "deviceType"    //设备类型
#define LLKEY__FORBITTIME    "forBitTime"    //禁言剩余时间
#define LLKEY__BLOCKTIME        "blockTime"        //加入黑名单剩余时间
#define LLKEY__PACKETINDEX    "packetindex"
#define LLKEY__TOTALPACKET    "totalpacket"
#define LLKEY__HIDE            "bHide"
#define LLKEY__SERVER_STATE    "serverState"
#define LLKEY__TIPS            "tips"            //
#define LLKEY__USEWEBRTC        "useWebRTC"        //是否使用webrtc

#define LLKEY__PID            "pid"
#define LLKEY__UIN            "uin"
#define LLKEY__PASS            "password"        //用户密码
#define LLKEY__MACADDR        "macaddr"        //设备id
#define LLKEY__DEVNUM        "devNum"        //移动设备唯一识别码
#define LLKEY__BINDLOGIN        "bindLogin"        //是否乐淘绑定登录
#define LLKEY__PASSTYPE        "passType"        //密码类型
#define LLKEY__SRCUIN        "srcUin"        //源uin
#define LLKEY__SRCNICK        "srcNick"
#define LLKEY__DSTUIN        "dstUin"        //目标uin
#define LLKEY__DSTNICK        "dstNick"
#define LLKEY__DELUIN        "deluin"        //将要被替换删除的帐号
#define LLKEY__ADDUIN        "adduin"        //将要被设置为房管的帐号
#define LLKEY__MICUIN        "micUin"        //在麦uin
#define LLKEY__MICUIN1        "micUin1"        //1麦uin
#define LLKEY__MICUIN2        "micUin2"        //2麦uin
#define LLKEY__MICUIN3        "micUin3"        //3麦uin
#define LLKEY__MICTIME        "micTime"        //在麦剩余时间
#define LLKEY__MICQUEUEINDEX    "micQueueIndex"    //麦序列表中的第几位 从零开始
#define LLKEY__ROOMID        "roomid"        //房间id
#define LLKEY__ROOMNAME        "roomName"        //房间名称
#define LLKEY__ROOMPASS        "roomPassword"    //房间密码
#define LLKEY__ROOMOWNER        "roomOwnuin"    //室主uin
#define LLKEY__ROOMDES        "roomDescript"    //房间描述
#define LLKEY__ROOMBROADCAST    "roomBroadcast"    //房间广播
#define LLKEY__ROOMPUBLIC    "roomIspublic"    //房间是否开放
#define LLKEY__ROOMMAXINDEX    "roomMaxcfuser"    //房间最大视频个数
#define LLKEY__ROOMMICINDEX    "micIndex"        //几号麦
#define LLKEY__JOINCONF_FLAG "joinConfFlag"  //标识上麦还是下麦
#define LLKEY__ROOMMAXMICLIST    "roomMaxMicQueue"    //房间最大排麦数
#define LLKEY__ROOMSTATE        "roomOpenstatus"//房间状态
#define LLKEY__ROOMAUTOMIC    "roomAutoMic"    //是否自动排麦
#define LLKEY__ROOMSIZE        "roomSize"        //房间最大用户数
#define LLKEY__ROOMMAXMGR    "roomMaxMgr"    //最大房管
#define LLKEY__ROOMCRUUNUM    "roomCurrNum"    //房间当前人数
#define LLKEY__ROOMMICLIST    "roomMicList"    //房间麦序列表
#define LLKEY__USERNICK        "userNick"        //用户昵称
#define LLKEY__CUSTOMFACE    "customface"    //头像版本
#define LLKEY__USERRANK        "rank"            //用户管理身份
#define LLKEY__USERTYPE        "userType"        //全局性用户属性 具体参见comm/im/imdefine.h    CTaoleGlobleUserType
#define LLKEY__LEVEL            "level"            //会员等级
#define LLKEY__LORDLEVEL        "lordLevel"        //爵位等级
#define LLKEY__ACTIVETYPE    "activeType"    //活动类型
#define LLKEY__ACTIVEIDENTIFY "activeIdentify"    //活动身份
#define LLKEY__USERIDENTIFY "userIdentify"    //用户身份
#define LLKEY__SHOWUIN       "showuin"        //用于显示的uin，主要用于靓号
#define LLKEY__LOGINEXT      "loginExt"      //登录扩展信息
#define LLKEY__STYLETYPE        "styleType"        //身份&风格
#define LLKEY__USERLIST        "userList"        //用户列表
#define LLKEY__ENTERTITLE    "enter_title"    //进入房间显示的标题
#define LLKEY__ENTERPIC        "enter_pic"        //进入房间显示的图片
#define LLKEY__ACLCTRL        "aclctrlstr"    //权限列表
#define LLKEY__MAXMICTIME    "maxMicTime"    //房间表演麦，一麦，最大麦时
#define LLKEY__MICLIMIT        "micLimit"        //限制使用
#define LLKEY__CANDRAG        "canDrag"        //是否允许被抱麦
#define LLKEY__REDPAPER        "disableRedPaper"//红包开关
#define LLKEY__DSTLEVEL        "dstLevel"
#define LLKEY__DSTRANK        "dstRank"
#define LLKEY__DSTUSERTYPE    "dstUserType"
#define LLKEY__DSTACTIVETYPE        "dstActiveType"        //活动类型
#define LLKEY__DSTACTIVEIDENTIFY "dstActiveIdentify"    //活动身份
#define LLKEY__SHARE_EXP            "shareExp"            //分享经验
#define LLKEY__OFFLINE_MSGNUM    "offlinemsgnum"     //离线消息的条数
#define LLKEY__USER_ONROOM       "userIsOnRoom"      //用户是否在房间中
#define LLKEY__ATTACH_INFO       "attachInfo"        //不同类型消息附加信息
#define LLKEY__UNIQUE_TIME       "uniqueTime"        //消息唯一性时间
#define LLKEY__ADDFRIEND_FLAG    "addFriendFlag"     //1 request 0 agree
#define LLKEY__ADDFRIEND_REMARK  "addFriendRemark"   //添加好友备注
#define LLKEY__FRIENDCIR_ACTION  "friendCirAction"   //朋友圈操作动作
#define LLKEY__DYNAIMIC_ID       "dynamicId"         //动态id
#define LLKEY__TEXT_ID           "textId"            //动态中消息id
#define LLKEY__SEND_UNILIST      "sendUinList"       //通知的用户列表
#define LLKEY__SESSION_ID        "sessionId"         //会话id
#define LLKEY__VIDEO_ACTION      "videoAction"       //音视频或者音频
#define LLKEY__OPT_ACTION        "optAction"         //操作 0 request 1 agree 2 disagree
#define LLKEY__GROUPID           "groupId"           //群组id
#define LLKEY__MSGID              "msgId"            //群消息id
#define LLKEY__CLIENTVER          "clientVer"           //客户端版本号
#define LLKEY__CLIENTCHANNEL      "clientChannel"            //客户端渠道

#define LLKEY__AVSAMPLE        "roomAudiosampleindex"    //新码流控制
#define LLKEY__AVBITRATE        "roomAudiobitrateindex"    //音频采样控制
#define LLKEY__AVPORT        "roomAvPort"            //媒体端口
#define    LLKEY__AVIP            "roomAvIP"                //媒体ip
#define LLKEY__AVKEY            "roomAvSingnature"        //媒体密码

#define LLKEY__MONEY            "money"            //用户虚拟币
#define LLKEY__RECEIVED        "received"        //用户礼金
#define LLKEY__BANKMONEY     "bankmoney"     // 背包账户
#define LLKEY__ACCOUNTSTATE    "accountState"    //礼金账户类型
#define LLKEY__SHAREMONEY    "shareMoney"

#define LLKEY__RICHORDER        "richOrder"        //富豪排行

#define LLKEY__PRIZEMONEY    "prizeCount"    //中奖总金额
#define LLKEY__PRIZELIST        "prizeList"        //中奖列表
#define LLKEY__GIFTID        "giftid"        //礼物id
#define LLKEY__AMOUNT        "amount"        //礼物个数
#define LLKEY__COUNT            "giftcount"        //累计个数
#define LLKEY__GIFTNAME        "giftName"        //礼物名字
#define LLKEY__GIFTURL        "giftPicUrl"    //礼物图片url
#define LLKEY__PRICE            "prize"            //价格
#define LLKEY__GIFTID1        "giftid1"
#define LLKEY__GIFTID2        "giftid2"
#define LLKEY__AMOUNT1        "amount1"
#define LLKEY__AMOUNT2        "amount2"
#define LLKEY__ONMICLIST        "micList"        //上麦列表
#define LLKEY__FILTERIP        "filterIp"        //是否过滤ip

#define LLKEY__COLOR            "color"            //字体颜色
#define LLKEY__FONTSIZE        "fontsize"        //字体大小
#define LLKEY__BOLD            "isbold"        //是否粗体
#define LLKEY__ACTIONTYPE    "actionType"    //动作类型
#define LLKEY__MSG            "msgText"        //文本信息
#define LLKEY__ITALIC        "isitalic"        //是否斜体
#define LLKEY__ONTOCP        "showOnTopPlace"    //是否滚动显示

#define    LLKEY__CHATPUBLIC    "ispublic"            //是否公聊
#define LLKEY__CHATTIME        "msgtime"            //聊天时间
#define LLKEY__CHATTYPE        "type"                //聊天类型

#define LLKEY__CHATRANDOM1    "randNum1"            //掷骰子随机数1
#define LLKEY__CHATRANDOM2    "randNum2"            //掷骰子随机数2

#define LLKEY__STAMPID        "stampID"            //印章id
#define LLKEY__STAMPTIME        "stampTime"            //印章剩余时间
#define LLKEY__STAMPLIST        "stampList"
#define LLKEY__STAMREVERSE    "stampReverse"

#define LLKEY__KICKFLAG        "flag"                //踢出房间类型
#define LLKEY__KICKTYPE        "actionType"        //被踢出房间的 挤出房间，被踢出房间等

#define LLKEY__FORBIDORNOT    "forbidOrNot"        //1.禁言 0.解禁
#define LLKEY__FORBIDDEN_TYPR "forbiddenType"     //主播禁言。0全体禁言，1.全体都可以发言。2.只有在榜单上的用户可以发言
#define LLKEY__IP            "ip"
#define LLKEY__PORT            "port"

#define LLKEY__GIFTVER        "giftver"
#define LLKEY__STAMPVER        "stampver"
#define LLKEY__SORTVER        "sortver"
#define LLKEY__BROADCASEPRICE    "broadCasePrice"
#define LLKEY__DISCOUNT            "discount"
#define JSEKY_SINGERGIFT_MOUNEY    "singerGiftMoney"
#define LLKEY__REPAPERID            "redPaperID"


#define LLKEY__EXPRESSIONLIST        "expressionList"
#define LLKEY__EXPRESSIONID            "expressionid"
#define LLKEY__EXPRESSIONPACKETID    "expressionPacketid"
#define LLKEY__EXPRESSIONNUM            "expressionNum"
#define LLKEY__EXPRESSIONINDEX        "expressionIndex"


#define LLKEY__VIEWSTATE                "viewState"
#define LLKEY__VIEWID                "vid"
#define LLKEY__LAUDCOUNT                "laudCount"
#define LLKEY__TIMESTAMP                "timeStamp"
#define LLKEY__GETVID                "getVid"
#define LLKEY__ROOMVID                "roomVid"
#define LLKEY__VIDRES                "vidRes"
#define LLKEY__GIFTORDER                "giftOrder"

#define LLKEY__TOTALRECV                "totalRecved"
#define LLKEY__CHARMVALUE            "charmValue"
#define LLKEY__SRC_FACE                "srcFace"
#define LLKEY__DST_FACE                "dstFace"
#define LLKEY__KIND                    "kind"
#define LLKEY__WRITEHISTORY            "writeHistroy"        //是否写入回放记录
#define LLKEY__COMBO                    "comboCount"        //连击次数
#define LLKEY__DELAY                    "comboDelay"        //连击延迟重置
#define LLKEY__UINLIST                "uinList"            //帐号列表
#define LLKEY__MSGVER                "msgVer"            //轮播消息版本号
#define LLKEY__MSGVERDELAY            "delayMsgVer"        //轮播消息版本号
#define LLKEY__SERVERTIMESTAMP        "serverTimeStamp"    //服务器时间戳
#define LLKEY__MULTIPLE              "multiple"          //中奖倍数//活动相关
#define LLKEY__ACTIVE_LIST            "activeList"        //活动列表
#define LLKEY__ACTIVE_NAME            "activeName"        //活动名字
#define LLKEY__ACTIVE_ID                "activeID"            //活动id
#define LLKEY__ACTIVE_ICON            "activeIcon"        //活动图标
#define LLKEY__ACTIVE_START            "activeStart"        //开始时间
#define LLKEY__ACTIVE_END            "activeEnd"            //结束时间
#define LLKEY__ACTIVE_KIND            "activeKind"        //显示类型
#define LLKEY__ACTIVE_OWNURL            "activeOwnurl"        //活动地址 主播
#define LLKEY__ACTIVE_URL            "activeurl"            //活动地址 观看者
#define LLKEY__ACTIVE_SCORE            "activeScore"        //活动积分
#define LLKEY__ACTIVE_ORDER            "activeOrder"        //活动排名


#define LLKEY__DIAMOND                "diamond"            //钻石
#define LLKEY__DIAMONDRECV            "diamondReceived"    //钻石劵
#define LLKEY__DIAMONDEXP            "diamondExp"        //钻石经验
#define LLKEY__ECHOPUBLIC            "echoPubilc"        //是否公聊区显示
#define LLKEY__ECHOPRIVETE            "echoPrivate"        //是否私聊区显示
#define LLKEY__ORDER                    "order"                //排名
#define LLKEY__LIST                    "list"                //列表
#define LLKEY__SONGNAME                "songName"            //歌名
#define LLKEY__AUDIO                    "disableAudio"        //声音开关
#define LLKEY__VIDEO                    "disableVideo"        //视频开关
#define LLKEY__STREAM                "roomStreamPrv"        //码流
#define LLKEY__FRAMERATE                "frameRatePrv"        //帧率
#define LLKEY__NEWUIN                "newUin"            //新帐号
#define LLKEY__NEWNICK                "newNick"            //新昵称
#define LLKEY__SRCRANKNAME            "srcRankName"        //攻城礼物 称号
#define LLKEY__DSTRANKNAME            "dstRankName"        //攻城礼物 称号
#define LLKEY__TOTALTIME                "totalTime"            //总时间
#define LLKEY__SPANTIME                "spanTime"            //成功守城时间
#define LLKEY__ID                    "id"                //id
#define LLKEY__WINMONDY                "winMoney"            //挖中的奖励
#define LLKEY__CURRMONEY                "currMoney"            //当前金币
#define LLKEY__ITEMNAME                "itemName"            //中奖项目
#define LLKEY__FREECOUNT                "freeCount"            //免费次数
#define LLKEY__MAXWINMONDY            "maxAwardMoney"        //最大开奖金额
#define LLKEY__FREEINTERVAL            "freeInterval"        //免费间隔
#define LLKEY__ANCHORUIN                "anchorUin"            //主播uin
#define LLKEY__ORIGINAL                "original"            //原创
#define LLKEY__BBLACKIP                "bBlackIp"            //是否封锁ip
#define LLKEY__BBLACKMAC                "bBlackMac"            //是否封锁mac
#define LLKEY__BBLACKUIN                "bBlackUin"            //是否封锁uin

#define LLKEY__FINAL_USER_STATUS     "finalUserStatus"   //决赛用户状态
#define LLKEY__TIMEINTERVAL          "timeInterval"      //时间间隔
#define LLKEY__MIC1_STATUS           "mic1Status"        //1号麦声音状态
#define LLKEY__MIC2_STATUS           "mic2Status"        //2号麦声音状态
#define LLKEY__TICKET_NUM            "ticketNum"         //票数
#define LLKEY__DATATYPE              "dataType"          //数据类型



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
