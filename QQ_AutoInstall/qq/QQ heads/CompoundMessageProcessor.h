//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMessageProcessor.h"

@class TaskDistinctUtil;

@interface CompoundMessageProcessor : BaseMessageProcessor
{
    TaskDistinctUtil *_taskDistinct;
}

+ (id)sharedProcessor;
- (void).cxx_destruct;
- (void)__uploadImages:(id)arg1 inSession:(struct _BHMessageSession)arg2 progress:(id)arg3 completion:(id)arg4;
- (id)__checkImage:(id)arg1 uploadFilePath:(id)arg2;
- (void)aaaaa:(id)arg1 inSession:(struct _BHMessageSession)arg2 isForward:(BOOL)arg3 progressBlock:(id)arg4 completion:(id)arg5;
- (id)attrib6DataWithAtName:(id)arg1 atUin:(id)arg2;
- (struct Face *)allocatedFaceElemPointerWithFaceContentPart:(id)arg1;
- (struct Text *)allocatedAtElemPointerWithAtUin:(id)arg1;
- (struct Text *)allocatedTextElemPointerWithText:(id)arg1;
- (void)encodeMessageModelToPb:(id)arg1 messagePacket:(id)arg2 msgBody:(MsgBody_1bee2359 *)arg3 sendType:(int)arg4;
- (BOOL)performMessageModel:(id)arg1 messagePacket:(id)arg2 completion:(id)arg3 progressBlock:(id)arg4 sendType:(int)arg5;
- (void)prepareForMessageModel:(id)arg1 messagePacket:(id)arg2 sendType:(int)arg3;
- (void)forwardMessageModel:(id)arg1 sourceMessageModel:(id)arg2 completion:(id)arg3 progressBlock:(id)arg4 sendType:(int)arg5;
- (BOOL)multiMessageForward:(id)arg1 target:(struct _BHMessageSession)arg2 completion:(id)arg3 progressBlock:(id)arg4 sendType:(int)arg5;
- (BOOL)isSupportMessagePacket:(int)arg1 sendType:(int)arg2;
- (id)init;

@end

