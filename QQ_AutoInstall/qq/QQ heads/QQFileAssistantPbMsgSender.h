//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQPbMsgSenderBase.h"

#import "IEngineDispatchDelegate.h"

@class IEngineDispatchDelegateNonRetian, NSMutableDictionary, NSString;

@interface QQFileAssistantPbMsgSender : QQPbMsgSenderBase <IEngineDispatchDelegate>
{
    NSMutableDictionary *_dic0x346RetryCnt;
    NSMutableDictionary *_dic0x346RetryBuffer;
    NSMutableDictionary *_dic0x346Cmd;
    NSMutableDictionary *_dic0x346Cookie;
    IEngineDispatchDelegateNonRetian *_csDelegate;
}

- (void).cxx_destruct;
- (BOOL)OnReceiveSendMsgRespOfSendSeq:(id)arg1;
- (BOOL)OnReceiveSendMsgRespOfSendSeq:(unsigned int)arg1 ResultCode:(unsigned int)arg2 ErrMsg:(const basic_string_075b6133 *)arg3 ReqSendTimeFromServer:(unsigned int)arg4;
- (void)notifyMsgSentResult:(id)arg1 result:(int)arg2;
- (BOOL)retrySend:(id)arg1 ResultInfo:(id)arg2;
- (BOOL)retrySend0x211BySeq:(unsigned int)arg1;
- (id)GetNotifyInfoBySeq:(unsigned int)arg1;
- (id)LicenceNeedForSend;
- (void)SetC2CTypeRelatedInfoToPbSendMsgReq:(struct PbSendMsgReq *)arg1 ToUin:(unsigned long long)arg2;
- (id)SendingModelToUin:(long long)arg1 TimeStamp:(int)arg2 MsgId:(int)arg3 pkgNum:(BOOL)arg4 divSeq:(short)arg5 DispContent:(id)arg6;
- (int)SenC2cMsg0x211SubType0x7:(id)arg1 subType:(unsigned int)arg2 toUin:(id)arg3 TimeStamp:(int)arg4 MsgId:(int)arg5 MsgSeq:(unsigned int)arg6 MsgRandom:(unsigned int)arg7 deviceType:(int)arg8;
- (int)SenC2cMsg0x211SubType0x7:(id)arg1 subType:(unsigned int)arg2 toUin:(id)arg3 TimeStamp:(int)arg4 MsgId:(int)arg5 MsgSeq:(unsigned int)arg6 MsgRandom:(unsigned int)arg7;
- (int)SendFileAsstitant0x211subType0x7_MpFileNotify:(unsigned long long)arg1 SesseionID:(unsigned long long)arg2 Operate:(unsigned int)arg3 IP:(unsigned int)arg4 Port:(unsigned int)arg5 TimeStamp:(int)arg6 MsgId:(int)arg7 MsgSeq:(unsigned int)arg8 MsgRandom:(unsigned int)arg9;
- (void)SendFileAssistant0x211subType0x7_FileControlVec:(const struct FileControlVec *)arg1 Header:(const struct MsgHeader *)arg2 Cookie:(unsigned int)arg3;
- (void)SendFileAssistant0x211subType0x7_NFCNotifyVec:(const struct NFCNotifyVec *)arg1 Header:(const struct MsgHeader *)arg2 Cookie:(unsigned int)arg3 isThumb:(BOOL)arg4;
- (void)SendFileAssistant0x211subType0x7_FTNNotifyVec:(const struct FTNNotifyVec *)arg1 Header:(const struct MsgHeader *)arg2 Cookie:(unsigned int)arg3 isThumb:(BOOL)arg4;
- (void)SendFileAssistantMsg:(const struct MsgCSBody *)arg1 Cookie:(unsigned int)arg2;
- (int)SendFileAssistant0x211subType0x7_GenericSubCmd:(unsigned long long)arg1 SessionID:(unsigned long long)arg2 Size:(unsigned int)arg3 Index:(unsigned int)arg4 Type:(unsigned int)arg5 BufContent:(const void *)arg6 ContentLength:(unsigned int)arg7 TimeStamp:(int)arg8 MsgId:(int)arg9 MsgSeq:(unsigned int)arg10 MsgRandom:(unsigned int)arg11 deviceType:(int)arg12;
- (int)SendFileAssistant0x211subType0x7_GenericSubCmd:(unsigned long long)arg1 SessionID:(unsigned long long)arg2 Size:(unsigned int)arg3 Index:(unsigned int)arg4 Type:(unsigned int)arg5 BufContent:(const void *)arg6 ContentLength:(unsigned int)arg7 TimeStamp:(int)arg8 MsgId:(int)arg9 MsgSeq:(unsigned int)arg10 MsgRandom:(unsigned int)arg11;
- (int)SendFileAssistant0x211subType0x7_FileControl:(unsigned long long)arg1 SessionID:(unsigned long long)arg2 Operate:(unsigned int)arg3 Seq:(unsigned int)arg4 Code:(unsigned int)arg5 ErrorMsg:(id)arg6 TimeStamp:(int)arg7 MsgId:(int)arg8 MsgSeq:(unsigned int)arg9 MsgRandom:(unsigned int)arg10 GroupID:(unsigned int)arg11 IndexInGroup:(unsigned int)arg12 BatchID:(unsigned int)arg13;
- (int)doSendFileAssistant0x211subType0x7_FTNNotify:(id)arg1;
- (int)doSendFileAssistant0x211subType0x7_NFCNotify:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)onMsfPacketStateWithNoErr:(id)arg1;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_a00ab4be)arg1;
- (basic_string_075b6133)GetFileQueryBuffer:(const struct MsgCSBody *)arg1;
- (basic_string_075b6133)GetApplyCopyToBuffer:(const struct MsgCSBody *)arg1;
- (basic_string_075b6133)GetApplyDownloadBuffer:(const struct MsgCSBody *)arg1;
- (basic_string_075b6133)GetUploadSuccBuffer:(const struct MsgCSBody *)arg1;
- (basic_string_075b6133)GetApplyUploadV3Buffer:(const struct MsgCSBody *)arg1;
- (basic_string_075b6133)GetApplyUploadHitV2Buffer:(const struct MsgCSBody *)arg1;
- (basic_string_075b6133)GetApplyUploadV2Buffer:(const struct MsgCSBody *)arg1;
- (void)OnRecv0x346FileQueryRsp:(const RspBody_a94f23c8 *)arg1 Seq:(int)arg2;
- (void)OnRecv0x346ApplyCopyToRsp:(const RspBody_a94f23c8 *)arg1 Seq:(int)arg2;
- (void)OnRecv0x346ApplyDownloadRsp:(const RspBody_a94f23c8 *)arg1 Seq:(int)arg2;
- (void)OnRecv0x346UploadSuccRsp:(const RspBody_a94f23c8 *)arg1 Seq:(int)arg2;
- (void)OnRecv0x346UploadHitV2Rsp:(const RspBody_a94f23c8 *)arg1 Seq:(int)arg2;
- (void)OnRecv0x346UploadV2Rsp:(const RspBody_a94f23c8 *)arg1 Seq:(int)arg2;
- (void)OnRecv0x346UploadV3Rsp:(const RspBody_a94f23c8 *)arg1 Seq:(int)arg2;
- (void)OnRecv0x346Rsp:(const RspBody_a94f23c8 *)arg1 Seq:(int)arg2;
- (void)InitializeLitetransferSCBody:(struct MsgSCBody *)arg1;
- (void)SendFileAssistant0x346Req:(const struct MsgCSBody *)arg1 Cookie:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

