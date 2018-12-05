//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "GroupAdminViewControllerDelegate.h"
#import "GroupMemberChangeDelegate.h"
#import "MQEditTextBoxDelegate.h"
#import "NSTextFieldDelegate.h"

@class Group, GroupAdminViewController, GroupMemberTableViewController, MQAutoSizeTextField, MQEditTextBox, MQFloatTextField, MQProfileSlideView, MQRoundRectImageView, NSArray, NSArrayController, NSButton, NSCollectionView, NSImageView, NSLayoutConstraint, NSMatrix, NSMutableArray, NSScrollView, NSString, NSTextField, NSView, ProfileMemberTableView, ProfileScrollDocumentView, TXColorView, TXHoverButton;

@interface GroupProfileViewController : NSViewController <GroupMemberChangeDelegate, NSTextFieldDelegate, GroupAdminViewControllerDelegate, MQEditTextBoxDelegate>
{
    unsigned long long m_dwGroupId;
    unsigned long long m_dwGroupCode;
    long long _viewType;
    TXHoverButton *closeBtn;
    NSScrollView *m_scrollViewMainPage;
    NSScrollView *m_scrollViewPreferencePage;
    NSView *m_viewMemberPage;
    MQRoundRectImageView *_headerBg;
    MQRoundRectImageView *_headerBgMask;
    NSImageView *m_CustomHeaderImageView;
    TXColorView *m_BackgroundColorView;
    ProfileScrollDocumentView *m_mainPage;
    ProfileScrollDocumentView *m_preferencePage;
    NSView *m_headerView;
    NSImageView *m_tabSpliteLine1;
    NSImageView *m_tabSpliteLine2;
    TXHoverButton *btnMainPage;
    TXHoverButton *btnPreferencePage;
    TXHoverButton *btnMemberPage;
    NSImageView *m_markMainPage;
    NSImageView *m_markPreferencePage;
    NSImageView *m_markMemberPage;
    NSView *m_adminHeaderContainView;
    MQAutoSizeTextField *textGroupName;
    MQFloatTextField *textEditGroupName;
    NSTextField *textGroupMemCount;
    NSTextField *textGroupAdminCount;
    NSTextField *textGroupCode;
    MQEditTextBox *textViewGroupBulletin;
    MQEditTextBox *textViewGroupIntroduction;
    MQFloatTextField *textCardName;
    NSTextField *labelGroupName;
    NSTextField *labelOwnerAndAdminister;
    NSTextField *labelIdentityVerification;
    NSTextField *labelMsgType;
    NSTextField *labelCardName;
    TXHoverButton *btnEditGroupName;
    TXHoverButton *btnEditCardName;
    NSButton *btnTableViewNickName;
    NSButton *btnTableViewCardName;
    NSButton *btnTableViewGender;
    NSButton *btnTableViewLastMsgTime;
    NSButton *btnQuitGroup;
    NSButton *btnOpenChat;
    NSImageView *imgAscendingNickName;
    NSImageView *imgAscendingGender;
    NSImageView *imgAscendingLastMsgTime;
    NSImageView *imgAscendingCardName;
    NSMatrix *radioMatrixMsg;
    NSMatrix *radioMatrixIdentity;
    TXHoverButton *btnGroupZone;
    TXHoverButton *btnMinGroupZone;
    ProfileMemberTableView *m_memberTableView;
    BOOL m_bSelfCeateor;
    BOOL m_bSelfManager;
    long long m_currentMatrixIdentityRow;
    GroupMemberTableViewController *m_tableViewController;
    NSMutableArray *m_memberUinArray;
    GroupAdminViewController *m_groupAdminViewController;
    NSString *m_lastSortIdentifier;
    BOOL _isGroupAdminEnclosingScrollViewNeedsToTop;
    MQProfileSlideView *_slideView;
    NSArray *m_ascendingImgs;
    long long selectTabIndex;
    NSMutableArray *_images;
    NSArrayController *arrayController;
    NSCollectionView *adminsCollectionView;
    NSLayoutConstraint *_mainScrollViewLead;
    NSLayoutConstraint *_mainScrollViewTail;
    NSLayoutConstraint *_tabLead;
    NSLayoutConstraint *_preferenceLead;
    NSLayoutConstraint *_preferenceTail;
    Group *_group;
    NSString *_lastCardName;
    NSArray *_memberList;
    NSString *_bsMemo;
}

@property(copy, nonatomic) NSString *bsMemo; // @synthesize bsMemo=_bsMemo;
@property(retain, nonatomic) NSArray *memberList; // @synthesize memberList=_memberList;
@property(retain, nonatomic) NSString *lastCardName; // @synthesize lastCardName=_lastCardName;
@property(retain, nonatomic) Group *group; // @synthesize group=_group;
@property NSLayoutConstraint *preferenceTail; // @synthesize preferenceTail=_preferenceTail;
@property NSLayoutConstraint *preferenceLead; // @synthesize preferenceLead=_preferenceLead;
@property NSLayoutConstraint *tabLead; // @synthesize tabLead=_tabLead;
@property NSLayoutConstraint *mainScrollViewTail; // @synthesize mainScrollViewTail=_mainScrollViewTail;
@property NSLayoutConstraint *mainScrollViewLead; // @synthesize mainScrollViewLead=_mainScrollViewLead;
@property(retain) NSMutableArray *images; // @synthesize images=_images;
- (void).cxx_destruct;
- (void)handleGroupListChage:(id)arg1;
- (void)itemClicked:(id)arg1;
- (void)onGroupConfigAgentCallBack:(id)arg1;
- (void)onFetchGroupFingerInfoNotification:(id)arg1;
- (void)remarkChanged;
- (void)handleGroupEventNotification:(id)arg1;
- (void)setBottomButtonType:(long long)arg1;
- (void)initBottomButton;
- (void)onClickGroupZone:(id)arg1;
- (void)onClickOpenChat:(id)arg1;
- (BOOL)isManager:(id)arg1;
- (BOOL)isCreator:(id)arg1;
- (void)alertDidEndByQuitGroupSuccess;
- (void)sheetQuitGroup:(id)arg1 returnCode:(int)arg2 contextInfo:(id)arg3;
- (void)onClickQuitGroup:(id)arg1;
- (void)onClickSortTableView:(id)arg1;
- (id)getAscendingImg:(id)arg1;
- (void)hideAllAscendingImg;
- (void)SaveGroupIntroduction;
- (void)saveGroupMemo;
- (void)onEnterEditingMode:(id)arg1;
- (void)onFinishEditing:(id)arg1 newString:(id)arg2;
- (void)floatTextFieldDidEndEditing:(id)arg1;
- (void)onClickEditCardName:(id)arg1;
- (void)onClickEditGroupName:(id)arg1;
- (void)handleMainPageFrameDidChange:(id)arg1;
- (void)setGroupAdminEnclosingScrollViewNeedsToTop;
- (void)didEndNewDiscussSheet:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)addMember;
- (void)grantOrCancelAdmin:(id)arg1 op:(BOOL)arg2;
- (void)onGrantOrCancelAdmin:(unsigned long long)arg1;
- (void)internalDeleteMember:(unsigned long long)arg1;
- (void)sheetDeleteMember:(id)arg1 returnCode:(int)arg2 contextInfo:(id)arg3;
- (void)deleteMember:(unsigned long long)arg1;
- (void)setupMemberPage;
- (void)setupPreferencePage;
- (void)initTab;
- (void)setFingerMemo:(id)arg1;
- (void)setGroupMemo:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)initMemberPage;
- (void)initAdminInfo;
- (void)setupAdminInfoView;
- (void)updateGroupMembers:(id)arg1 nameArray:(id)arg2;
- (void)setAdminInfoUinArray:(id)arg1 nameArray:(id)arg2;
- (void)initMainPage;
- (void)updateGroup:(id)arg1;
- (void)updateData:(unsigned long long)arg1 groupCode:(unsigned long long)arg2;
- (void)updateGroup;
- (void)updateData:(unsigned long long)arg1;
- (id)getAdminNameArrayByUin:(id)arg1;
- (id)getAdminUinArray;
- (void)initMemberUin;
- (void)initHeader;
- (void)initAuthority;
- (void)onGroupMessageReceiveTypeChanged:(id)arg1;
- (void)onChangeMsgSetting:(id)arg1;
- (void)onChangeIdentify:(id)arg1;
- (void)onChangePage:(id)arg1;
- (void)initPreferencePage;
- (void)SaveCardInfo;
- (void)initCardInfo;
- (void)initGroupBasicInfo;
- (void)onClose:(id)arg1;
- (void)updateAdminViewConstraints:(float)arg1;
- (void)modifyTabViewConstraints;
- (void)scrollMainPageFrameChanged:(id)arg1;
- (void)awakeFromNib;
- (unsigned long long)currentUin;
- (void)dealloc;
- (id)initWithType:(long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
