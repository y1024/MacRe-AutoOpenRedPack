//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "V5ViewController.h"

#import "MQAIORecentSessionCellViewDelegate.h"
#import "MQAIOTableView2Delegate.h"
#import "MQTableRowViewDelegate.h"
#import "NSMenuDelegate.h"
#import "NSTableViewDataSource.h"

@class MQColorTitleButton, MQSessionID, NSString, NSTableView;

@interface MQAIORecentSessionViewController : V5ViewController <NSMenuDelegate, MQAIORecentSessionCellViewDelegate, NSTableViewDataSource, MQAIOTableView2Delegate, MQTableRowViewDelegate>
{
    MQSessionID *_selectedSessionId;
    id <MQAIORecentSessionViewControllerDelegate> _delegate;
    BOOL _sessionDataLoaded;
    NSTableView *_recentSessionView;
    MQColorTitleButton *_topUnreadBtn;
    MQColorTitleButton *_bottomUnreadBtn;
    MQSessionID *_sessionIdForMenu;
    BOOL _didAwakeFromNib;
    unsigned long long _listType;
    BOOL _selectFromRefresh;
    long long _lastMovedRow;
    MQSessionID *_draggingSessionId;
    double _winBecomeKeyInterval;
    MQSessionID *_drawSessionId;
}

@property(retain) MQSessionID *drawSessionId; // @synthesize drawSessionId=_drawSessionId;
@property(readonly) MQSessionID *selectedSessionId; // @synthesize selectedSessionId=_selectedSessionId;
@property(readonly) unsigned long long listType; // @synthesize listType=_listType;
- (BOOL)canSelectPreviousSessionWrap:(BOOL)arg1;
- (BOOL)canSelectNextSessionWrap:(BOOL)arg1;
- (BOOL)selectPreviousSessionWrap:(BOOL)arg1;
- (void)selectPreviousSession;
- (void)selectNextSessionWrap:(BOOL)arg1;
- (void)selectNextSession;
- (void)setSelectionStatus:(id)arg1;
- (void)selectSession:(id)arg1;
- (void)removeTempItems;
- (void)updateSession:(id)arg1;
- (unsigned long long)currentSessionCount;
- (void)locateUnreadSession;
- (void)updateCellRecentTips:(id)arg1 sessionId:(id)arg2 unreadCount:(long long)arg3;
- (void)reportAt:(id)arg1;
- (void)setUnreadCount:(unsigned long long)arg1 forSession:(id)arg2;
- (void)changePublicRedDotState:(BOOL)arg1 ForSession:(id)arg2;
- (void)toggleTopMost:(id)arg1;
- (BOOL)isTopMost:(id)arg1;
- (BOOL)isSessionExists:(id)arg1;
- (BOOL)isSessionSelected:(id)arg1;
- (void)removeAllSessions;
- (void)tableView:(id)arg1 didClickRow:(long long)arg2;
- (void)removeSession:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)showRecentToolTipsAtRow:(long long)arg1;
- (void)tableViewMouseExit:(long long)arg1 mousePoint:(struct CGPoint)arg2;
- (void)tableViewMouseMove:(long long)arg1 mousePoint:(struct CGPoint)arg2;
- (void)tableViewMouseIn:(long long)arg1 mousePoint:(struct CGPoint)arg2;
- (void)wakeSingleChatRow:(long long)arg1;
- (BOOL)tableView:(id)arg1 isClickASingleChatRow:(long long)arg2;
- (id)sessionOfRow:(long long)arg1;
- (void)willSwitchToNormalModel:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (void)backGroupAssintant;
- (void)hiddenToolTips:(BOOL)arg1;
- (void)didResignKeyWindow;
- (void)commonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSessionList:(unsigned long long)arg1;
- (void)removeTempContactFromBlockList;
- (void)addTempContactToBlockList;
- (void)removeContactFromBlockList;
- (void)addContactToBlockList;
- (void)openSingleChatWindow;
- (void)markAllAsRead;
- (void)setDiscussMessageReceiveTypeNOTIP;
- (void)setDiscussMessageReceiveTypeNormal;
- (void)onUpdateDiscussInfo;
- (void)changeDiscussName;
- (void)addTheContact;
- (void)setInitialStateOfDiscussMessageTypeMenu:(id)arg1;
- (void)setInitialStateOfGroupMessageTypeMenu:(id)arg1;
- (void)showBatchGroupSettingWindow;
- (void)addGroupSettingAIOTips:(long long)arg1;
- (void)onChangeMsgSetting:(long long)arg1;
- (void)setGroupMessageReceiveTypeBlockAll;
- (void)setGroupMessageReceiveTypeNoTip;
- (void)setGroupMessageReceiveTypeNoAlert;
- (void)setGroupMessageReceiveTypeNormal;
- (void)visitQZoneWithSessionId:(id)arg1;
- (void)sendEmailWithSessionId:(id)arg1;
- (void)visitQZoneOfTheSession;
- (void)openGroupZoneWeb;
- (void)sendEmailToTheSession;
- (void)viewProfileOfTheSession;
- (void)removeTheSession;
- (void)viewInContactsWindowWithSessionId:(id)arg1;
- (void)viewInContactsWindow;
- (void)topMostTheSessionWithSessionId:(id)arg1;
- (void)topMostTheSession;
- (void)setupMenu:(id)arg1 forSessionId:(id)arg2;
- (void)addCommonItemsToMenu_RENAME_:(id)arg1;
- (void)addDiscussReceiveSetting:(id)arg1;
- (void)addDiscussItemsToMenu:(id)arg1;
- (void)addTempItemsToMenu:(id)arg1;
- (void)addGroupReceiveSetting:(id)arg1;
- (void)addGroupItemsToMenu:(id)arg1;
- (void)addBuddyItemsToMenu:(id)arg1;
- (void)addCommonItemsToMenu:(id)arg1;
- (void)menuDidClose:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)reportIfRecentSessionListIsEmpty;
- (void)reportTopmostSessionCount;
- (void)handleLoginOK:(id)arg1;
- (id)avStateIconNameBy:(int)arg1 isInRoom:(BOOL)arg2 isOnPMD:(BOOL)arg3;
- (void)singleChatAvSessionChanged:(id)arg1;
- (void)noteSelectedRowDidChange;
- (id)cellViewOfSession:(id)arg1;
- (void)setupCellView:(id)arg1 forSession:(id)arg2;
- (id)getAssistantLastRecentModel;
- (long long)getAssistantTotalUnreadCount;
- (id)statusIconOfSession:(id)arg1;
- (id)sessionInfoOfSessionId:(id)arg1;
- (id)sessionIdAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfGroupAssistantSession:(id)arg1;
- (unsigned long long)indexOfSession:(id)arg1;
- (unsigned long long)sessionIdCount;
- (id)sessionIdList;
- (void)updateCellViewRemoveSessionButton;
- (void)scrollRowToVisible:(long long)arg1 alignToTop:(BOOL)arg2;
- (void)selectSession:(id)arg1 scrollToVisible:(BOOL)arg2;
- (void)selectRowAtIndex:(long long)arg1 scrollToVisible:(BOOL)arg2;
- (void)selectRowAtIndex:(long long)arg1;
- (void)cleanupPrivate;
- (void)setupPrivate;
- (id)highlightView;
- (void)tableViewMouseUpEvent:(id)arg1 row:(long long)arg2;
- (void)tableViewMouseDownEvent:(id)arg1 row:(long long)arg2;
- (BOOL)selectASingleChatSession;
- (id)selectedTableViewCellSessionId;
- (void)updateSelectedSessionId;
- (struct CGRect)frameOfCellAtRow:(unsigned long long)arg1;
- (void)handleRefreshViewBySessionID:(id)arg1;
- (void)friendListChangedNotice:(id)arg1;
- (void)onDoubleClickItem:(id)arg1;
- (void)handleWindowBecomeKey:(id)arg1;
- (void)onSearchResultPannelRemove:(id)arg1;
- (void)handleAioViewDidLoadNotice:(id)arg1;
- (void)handleMAVSessionChanged:(id)arg1;
- (void)handleTableViewVisibleRectDidChange:(id)arg1;
- (void)alertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)handleSelfExitDiscuss:(unsigned long long)arg1;
- (void)handleSelfExitDiscussNotification:(id)arg1;
- (void)handleContactRemarkChange:(id)arg1;
- (void)handleDiscussEventNotification:(id)arg1;
- (void)handleGroupEventNotification:(id)arg1;
- (void)updatePubSubscribeSession:(id)arg1;
- (void)handleRecentSessionShieldStateDidChangeNotification:(id)arg1;
- (void)handleContactBigCustomHeadDidChange:(id)arg1;
- (void)handleContactIMInfoEvtDidChange:(id)arg1;
- (void)handleContactIMStatusDidChange:(id)arg1;
- (void)refreshAvatarOf:(unsigned long long)arg1;
- (void)handleAllSessionsRemoved:(id)arg1;
- (void)handleRecentSessionIndexChagned:(id)arg1;
- (void)handleRecentSessionInfoListLoaded:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)acceptsDraggingInfo:(id)arg1 atRow:(long long)arg2;
- (void)cleanupDataSource;
- (void)setupDataSource;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (void)drawSelectionForRowView:(id)arg1 inRect:(struct CGRect)arg2;
- (void)unreadNoticeButtonDidClicked:(id)arg1;
- (void)setButtonAttributeTitleWithTarget:(id)arg1 Value:(long long)arg2;
- (void)setUnreadButtonAttributeTitleWithType:(unsigned long long)arg1 Value:(long long)arg2;
- (void)sessionUnreadNumDidUpdated:(id)arg1;
- (void)resetListPositionWithRetrieve:(BOOL)arg1;
- (void)sessionListTableViewDidScroll;
- (void)sessionRefreshedByListType:(unsigned long long)arg1 SessionId:(id)arg2;
- (void)setupSessionUnreadBtn;
- (void)setupOptimizedData;
- (void)dragExit:(id)arg1;
- (void)dragEnter:(id)arg1;
- (id)cellMaskView;
- (void)tableView:(id)arg1 draggingSession:(id)arg2 endedAtPoint:(struct CGPoint)arg3 operation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)tableView:(id)arg1 draggingSession:(id)arg2 willBeginAtPoint:(struct CGPoint)arg3 forRowIndexes:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
