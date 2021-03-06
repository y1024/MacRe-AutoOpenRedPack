//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CompatibleBaseMsgTableOperation.h"

@interface CompatibleC2CMsgTableOperation : CompatibleBaseMsgTableOperation
{
}

- (id)messageWithMaxMsgID:(int)arg1 withCondition:(id)arg2 withArguments:(id)arg3 tableName:(id)arg4 inDb:(id)arg5;
- (id)messageIDsByDayWithMaxMsgID:(int)arg1 withCondition:(id)arg2 withArguments:(id)arg3 tableName:(id)arg4 inDb:(id)arg5;
- (id)getRecentMsgWithSessType:(int)arg1 identityUin:(long long)arg2 inDb:(id)arg3;
- (id)getC2CMessageWithIdentify:(unsigned long long)arg1 startTime:(int)arg2 endTime:(int)arg3 tableName:(id)arg4 inDb:(id)arg5;
- (id)getMessageListWithIdentify:(unsigned long long)arg1 EndTime:(unsigned int)arg2 exceptMsgId:(unsigned int)arg3 exceptBlankMsg:(BOOL)arg4 count:(unsigned int)arg5 tableName:(id)arg6 inDb:(id)arg7;
- (id)getLastMessageWithSessType:(int)arg1 tableName:(id)arg2 inDb:(id)arg3;
- (unsigned int)getMaxMsgIdWithTableName:(id)arg1 inDb:(id)arg2;
- (BOOL)deleteMessage:(id)arg1 containLargeMsg:(BOOL)arg2 tableName:(id)arg3 inDb:(id)arg4;
- (void)deleteMsgsWithTableName:(id)arg1 inDb:(id)arg2;
- (id)DecodeDiscussTmpMsg:(id)arg1 discussUin:(long long *)arg2;
- (id)DecodeGroupTmpMsg:(id)arg1 groupCode:(long long *)arg2;
- (id)DecodePttMsgiPadMsgType:(id)arg1 ptt_msgLen:(int *)arg2;
- (id)decodeImageTextMarketFaceMsg:(id)arg1 picUrlObj:(id)arg2;
- (id)decodeImageText:(id)arg1 picUrlObj:(id)arg2;
- (int)msgTypeWithDBMsgType:(int)arg1;
- (int)sessTypeWithDBMsgType:(int)arg1;
- (id)_commonMesssageModelFromQueryResult:(id)arg1;
- (id)commonMesssageModelFromQueryResult:(id)arg1;

@end

