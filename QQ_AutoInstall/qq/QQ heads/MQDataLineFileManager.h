//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FileAssistantCoreEngineFacadeCallBack.h"

@class NSString;

@interface MQDataLineFileManager : NSObject <FileAssistantCoreEngineFacadeCallBack>
{
}

+ (id)sharedManager;
- (void)infoFileBoxOfFileTransferingCompleted:(id)arg1;
- (int)convertFileTransStatus:(int)arg1;
- (id)datalineByMsgModel:(id)arg1;
- (BOOL)isDataLineFile:(id)arg1;
- (void)FileStatutChange:(unsigned long long)arg1 GroupID:(unsigned long long)arg2 Status:(unsigned int)arg3 Progress:(float)arg4;
- (void)MessageSendResult:(unsigned int)arg1 Seq:(unsigned int)arg2;
- (void)MessageAppend:(id)arg1;
- (void)addTaskGroup:(id)arg1;
- (void)addTaskInfo:(id)arg1 inTaskGroup:(id)arg2;
- (id)taskInfosForMessageModel:(id)arg1;
- (id)taskGroupForMessageModel:(id)arg1;
- (id)taskInfoForMessageModel:(id)arg1;
- (id)taskGroupForGroupID:(unsigned long long)arg1;
- (id)taskInfoForSessionID:(unsigned long long)arg1;
- (void)cancelTaskWithSessionID:(unsigned long long)arg1;
- (void)setFileSaveDirectory:(id)arg1;
- (void)sendText:(id)arg1 toDeviceUIN:(id)arg2;
- (void)sendText:(id)arg1 toDeviceUIN:(id)arg2 fontInfo:(id)arg3;
- (void)sendText:(id)arg1 toDevice:(unsigned long long)arg2;
- (void)sendText:(id)arg1 toDevice:(unsigned long long)arg2 fontInfo:(id)arg3;
- (void)sendFiles:(id)arg1 toDeviceUIN:(id)arg2;
- (void)sendFiles:(id)arg1 toDevice:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

