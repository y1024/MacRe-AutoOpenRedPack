//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MQAIOToolsControllerV5.h"

@class MQAIOBuddyToolBox, MQAIODataLineToolBox, MQAIODiscussToolBox, MQAIOGroupToolBox, MQAIOTempToolBox, MQSessionID, TXHoverButton;

@interface MQAIOChatToolBoxController : MQAIOToolsControllerV5
{
    MQAIOBuddyToolBox *_buddyToolBox;
    MQAIODiscussToolBox *_discussToolBox;
    MQAIOGroupToolBox *_groupToolBox;
    MQAIOTempToolBox *_tempToolBox;
    MQAIODataLineToolBox *_datalineToolBox;
    MQSessionID *_lastSessionId;
    TXHoverButton *groupAddMemberBtn;
}

- (void).cxx_destruct;
- (void)changeShieldBtnSettings:(BOOL)arg1;
- (void)updateTempBoxBtnState;
- (void)receivedContactShieldStateChangeNotification:(id)arg1;
- (void)onShieldTempSession:(id)arg1;
- (void)onAddContact:(id)arg1;
- (void)sheetQuitDiscuss:(id)arg1 returnCode:(int)arg2 contextInfo:(id)arg3;
- (void)onQuitDiscuss:(id)arg1;
- (void)onGroupShare:(id)arg1;
- (void)onGroupSetting:(id)arg1;
- (void)didEndNewDiscussSheet:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)onDiscussAddMember:(id)arg1;
- (void)awakeFromNib;
- (void)receivedGroupOAAlertNotification:(id)arg1;
- (void)receivedGroupFileTransferNotification:(id)arg1;
- (void)receivedGroupFileUnreadNotification:(id)arg1;
- (BOOL)refreshToolBox;
- (BOOL)setChattingSession:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

