//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "V5ViewController.h"

@class MQSessionID, NSOpenPanel;

@interface MQAIOToolsControllerV5 : V5ViewController
{
    MQSessionID *_sessionId;
    NSOpenPanel *_sendFileOpenPanel;
    BOOL _isSupportOnline;
    id <MQAIOChatToolBoxControllerDelegate> _delegate;
}

@property(nonatomic) BOOL isSupportOnline; // @synthesize isSupportOnline=_isSupportOnline;
@property(retain) MQSessionID *sessionId; // @synthesize sessionId=_sessionId;
@property __weak id <MQAIOChatToolBoxControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showAvButtonErrorTips;
- (BOOL)isEnableForAVModule;
- (BOOL)isCurrenSessionCanCallAV;
- (_Bool)checkForCRM:(id)arg1;
- (_Bool)checkForOnline:(id)arg1;
- (void)onClickOAMenuItem:(id)arg1;
- (BOOL)isVideoDisable:(unsigned long long)arg1;
- (void)StartScreenShare;
- (void)onStartScreenShare:(id)arg1;
- (void)StartVideo;
- (void)onStartVideo:(id)arg1;
- (void)StartAudio;
- (void)onStartAudio:(id)arg1;
- (void)onStartGroupScreenShare:(id)arg1;
- (void)onStartGroupVideo:(id)arg1;
- (void)onStartGroupAudio:(id)arg1;
- (void)onStartDiscussScreenshare:(id)arg1;
- (void)onStartDiscussAudio:(id)arg1;
- (void)onStartDiscussVideo:(id)arg1;
@property(readonly) NSOpenPanel *sendFileOpenPanel;
- (void)SendFileMessage:(int)arg1 withUin:(unsigned long long)arg2 withChatType:(int)arg3;
- (void)sendGroupFile:(id)arg1;
- (void)showFileAssistant:(id)arg1;
- (void)onOnlineFile:(id)arg1;
- (void)onOfflineFile:(id)arg1;
- (void)onDirectFile:(id)arg1;
- (void)popUpFilesTransferMenuWithEvent:(id)arg1 forView:(id)arg2;
- (void)onSendFile:(id)arg1;
- (void)viewDidLoad;

@end

