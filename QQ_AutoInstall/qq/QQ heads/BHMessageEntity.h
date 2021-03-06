//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface BHMessageEntity : NSObject
{
    int _msgId;
    int _session_type;
    int _time;
    int _type;
    int _flag;
    int _read;
    int _sendState;
    unsigned int _msgRandom;
    int _msgSeq;
    int _msgRelatedFlag;
    int _bubbleid;
    int _errorCode;
    int _appShareID;
    int _conseqMsg;
    int _fileMsgType;
    int _richSource;
    long long _uin;
    long long _cluster_id;
    NSString *_content;
    NSString *_nickName;
    id _fontInfo;
    NSString *_exInfo;
    NSData *_exData;
}

@property(retain, nonatomic) NSData *exData; // @synthesize exData=_exData;
@property(retain, nonatomic) NSString *exInfo; // @synthesize exInfo=_exInfo;
@property(nonatomic) int richSource; // @synthesize richSource=_richSource;
@property(nonatomic) int fileMsgType; // @synthesize fileMsgType=_fileMsgType;
@property(nonatomic) int conseqMsg; // @synthesize conseqMsg=_conseqMsg;
@property(nonatomic) int appShareID; // @synthesize appShareID=_appShareID;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) id fontInfo; // @synthesize fontInfo=_fontInfo;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(nonatomic) int bubbleid; // @synthesize bubbleid=_bubbleid;
@property(nonatomic) int msgRelatedFlag; // @synthesize msgRelatedFlag=_msgRelatedFlag;
@property(nonatomic) int msgSeq; // @synthesize msgSeq=_msgSeq;
@property(nonatomic) unsigned int msgRandom; // @synthesize msgRandom=_msgRandom;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) int sendState; // @synthesize sendState=_sendState;
@property(nonatomic) int read; // @synthesize read=_read;
@property(nonatomic) int flag; // @synthesize flag=_flag;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int time; // @synthesize time=_time;
@property(nonatomic) int session_type; // @synthesize session_type=_session_type;
@property(nonatomic) long long cluster_id; // @synthesize cluster_id=_cluster_id;
@property(nonatomic) long long uin; // @synthesize uin=_uin;
@property(nonatomic) int msgId; // @synthesize msgId=_msgId;
- (void).cxx_destruct;
- (id)description;

@end

