//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSColor, NSFont;

@interface MQCoreServices : NSObject
{
    NSFont *m_chatFont;
    NSColor *m_chatColor;
    BOOL m_bShouldRecord;
    BOOL m_bNeedChangeFont;
    BOOL _firstTimeUse_3_1;
    BOOL _firstTimeCloseDataLineTap_3_1;
    long long _timeFirstUse_3_1_3;
}

+ (void)setHotFixConfigInfo:(id)arg1;
+ (id)getHotFixConfigInfo;
+ (void)setHotFixConfigVersion:(long long)arg1;
+ (long long)getHotFixConfigVersion;
+ (void)setQzipDestinationPath:(id)arg1;
+ (id)qzipDestinationPath;
+ (id)dateForTheZeroTime:(id)arg1;
+ (long long)getLoginDurationWithDate:(id)arg1;
+ (void)setLoginDuration:(long long)arg1 date:(id)arg2;
+ (BOOL)isShowRedpackPush;
+ (void)setShowredpackPush:(BOOL)arg1;
+ (void)setShowSearchFileTips:(BOOL)arg1;
+ (BOOL)showSearchFileTips;
+ (void)setShowStrokeTranslationTips:(BOOL)arg1;
+ (BOOL)showStrokeTranslationTips;
+ (void)setShowTranslateSettingGrayTips:(BOOL)arg1;
+ (BOOL)showTranslateSettingGrayTips;
+ (void)setShowSaveToTips:(BOOL)arg1;
+ (BOOL)showSaveToTips;
+ (void)setShowTranslateTips:(BOOL)arg1;
+ (BOOL)showTranslateTips;
+ (void)setTranslateLanguageTagBySending:(long long)arg1;
+ (long long)TranslateLanguageTagBySending;
+ (void)setTranslateLanguageTagByAIO:(long long)arg1;
+ (long long)TranslateLanguageTagByAIO;
+ (void)setRedpackUserAgreement:(BOOL)arg1;
+ (BOOL)hasRedpackUserAgreement;
+ (void)setOpenSingleChat:(BOOL)arg1;
+ (BOOL)openSingleChat;
+ (void)setShowRoamFaceTip:(BOOL)arg1;
+ (BOOL)showRoamFaceTip;
+ (void)setDeleteLocalFile:(BOOL)arg1;
+ (BOOL)isDeleteLocalFile;
+ (void)setDeleteRoamMsg:(BOOL)arg1;
+ (BOOL)isDeleteRoamMsg;
+ (id)keyForItem:(int)arg1 model:(BOOL)arg2;
+ (void)resetReportStayTime;
+ (void)resetSingleChatSetting;
+ (void)setSingleChatOpenCount:(long long)arg1 forType:(int)arg2;
+ (long long)singleChatOpenCountByType:(int)arg1;
+ (void)setSingleChatStayTime:(double)arg1 forType:(int)arg2;
+ (double)singleChatStayTimeByType:(int)arg1;
+ (double)sougouInputReportTime;
+ (void)setSougouInputReportTime:(double)arg1;
+ (void)setSimpleMoreTabTimeInterval:(double)arg1;
+ (void)setMoreTabTimeInterval:(double)arg1;
+ (void)setSimpleContactTabTimeInterval:(double)arg1;
+ (void)setContactTabTimeInterval:(double)arg1;
+ (void)setSimpleSessionTabTimeInterval:(double)arg1;
+ (void)setSessionTabTimeInterval:(double)arg1;
+ (double)SimpleMoreTabTimeInterval;
+ (double)moreTabTimeInterval;
+ (double)SimpleContactTabTimeInterval;
+ (double)contactTabTimeInterval;
+ (double)SimpleSessionTabTimeInterval;
+ (double)sessionTabTimeInterval;
+ (void)setNormalTipCount:(long long)arg1;
+ (long long)showNormalTipCount;
+ (void)setSimpleTipCount:(long long)arg1;
+ (long long)showSimpleTipCount;
+ (void)setNormalStyleSavedWidth:(double)arg1;
+ (long long)normalStyleSavedWidth;
+ (void)setIsSimplestModel:(BOOL)arg1;
+ (BOOL)isSimplestModel;
+ (void)setIsScheduleSimplestModel:(BOOL)arg1;
+ (BOOL)isScheduleSimplestModel;
+ (void)setTempGroupUin:(id)arg1 forUin:(id)arg2;
+ (void)setTempGroupOrDiscussCode:(id)arg1 forUin:(id)arg2;
+ (void)setTempType:(id)arg1 forUin:(id)arg2;
+ (id)tempGroupUinForUin:(id)arg1;
+ (id)tempGroupOrDiscussCodeOfUin:(id)arg1;
+ (id)tempTypeOfUin:(id)arg1;
+ (void)refreshIfNeedProileUin:(id)arg1 completion:(id)arg2;
+ (BOOL)isShowMessageDetail;
+ (void)setShowMessageDetail:(BOOL)arg1;
+ (void)setOpenCpuBlockingReport:(BOOL)arg1;
+ (BOOL)isOpenCpuBlockingReport;
+ (void)setAIONumShow:(BOOL)arg1;
+ (BOOL)isAIONumShown;
+ (void)setFirstOpenSelfProfile:(BOOL)arg1;
+ (BOOL)isFirstOpenSelfProfile;
+ (void)setDbValueString:(id)arg1;
+ (id)dbValueString;
+ (void)setShowPhotoOCRTips:(BOOL)arg1;
+ (BOOL)showPhotoOCRTips;
+ (void)setShowedOCRToast:(BOOL)arg1;
+ (BOOL)showedOCRToast;
+ (void)setEnableFaceQuick:(BOOL)arg1;
+ (BOOL)enableFaceQuick;
+ (BOOL)disableFaceQuickSettings;
+ (void)setDisableFaceQuickSettings:(BOOL)arg1;
+ (void)setShowRoamPasswordTips:(BOOL)arg1;
+ (BOOL)showRoamPasswordTips;
+ (void)setShowRoamSettingTips:(BOOL)arg1;
+ (BOOL)showRoamSettingTips;
+ (void)setAutoRoaming:(BOOL)arg1;
+ (BOOL)autoRoaming;
+ (void)setShowSuspensionTips:(BOOL)arg1;
+ (BOOL)showSuspensionTips;
+ (void)setShowDraggingSuspension:(BOOL)arg1;
+ (BOOL)showDraggingSuspension;
+ (void)setUpdateNotifyTimeInterval:(double)arg1;
+ (double)updateNotifyTimeInterval;
+ (void)setAppUpdateVersion:(id)arg1;
+ (id)appUpdateVersion;
+ (void)setUpdateNotifySetConfig:(BOOL)arg1;
+ (BOOL)updateNotifySetConfig;
+ (BOOL)addScheduleGuide:(id)arg1;
+ (void)setAddScheduleGuide:(id)arg1;
+ (void)setLastSendShakeTime:(double)arg1 forUin:(id)arg2;
+ (double)lastSendShakeTimeForUin:(id)arg1;
+ (id)lastDailyLogDateString;
+ (void)setLastDailyLogDateString:(id)arg1;
+ (void)setInteger:(long long)arg1 forKey:(id)arg2;
+ (long long)integerForKey:(id)arg1 defaultValue:(long long)arg2;
+ (BOOL)boolForKey:(id)arg1 defaultValue:(BOOL)arg2 handleBlock:(id)arg3;
+ (void)setBool:(BOOL)arg1 forKey:(id)arg2;
+ (BOOL)boolForKey:(id)arg1 defaultValue:(BOOL)arg2;
+ (void)setVerificationType:(long long)arg1;
+ (long long)verificationType;
+ (void)setRecvTmpSession:(BOOL)arg1;
+ (BOOL)recvTmpSession;
+ (void)setCamaraVisiable:(BOOL)arg1;
+ (BOOL)camaraVisiable;
+ (void)setInOnlineList:(BOOL)arg1;
+ (BOOL)inOnlineList;
+ (void)setAutoLoginConfig:(BOOL)arg1;
+ (BOOL)autoLoginConfig;
+ (void)clearSavedPassword;
+ (void)setAIOFullScreenMode:(BOOL)arg1;
+ (BOOL)AIOFullScreenMode;
+ (void)setSplitterPos:(long long)arg1;
+ (long long)splitterPos;
+ (id)aioDescriptionOfSession:(id)arg1;
+ (id)descriptionOfTempSession:(unsigned long long)arg1;
+ (id)longNickNameOfSession:(id)arg1;
+ (void)setShowOnlineBuddyOnly:(BOOL)arg1;
+ (BOOL)showOnlineBuddyOnly;
+ (BOOL)isShowWidgetSettingTips;
+ (void)setShowWidgetSettingTips:(BOOL)arg1;
+ (void)setChatViewInputHeight:(long long)arg1;
+ (long long)chatViewInputHeight;
+ (void)setAioMemberListBulletinHeight:(long long)arg1;
+ (long long)aioMemberListBulletinHeight;
+ (void)setAioMemberListWidth:(long long)arg1;
+ (long long)aioMemberListWidth;
+ (void)setEnableAIOMemberList:(BOOL)arg1;
+ (BOOL)enableAIOMemberList;
+ (void)setEnableGroupAssistant:(BOOL)arg1;
+ (BOOL)enableGroupAssistant;
+ (void)setEnableMsgRoam:(BOOL)arg1;
+ (BOOL)enableMsgRoam;
+ (void)setShowDataLineTip:(BOOL)arg1;
+ (BOOL)showDataLineTip;
+ (void)setNewScheduleDefaultFlag:(BOOL)arg1;
+ (BOOL)newScheduleDefaultFlag;
+ (void)setShowGroupNotification:(BOOL)arg1;
+ (BOOL)showGroupNotification;
+ (BOOL)isWidgetStockAuth;
+ (void)setWidgetStockAuth:(BOOL)arg1;
+ (id)stockAuthKey;
+ (BOOL)isWidgetBadgeOn:(long long)arg1;
+ (void)setShowWidgetBadge:(long long)arg1 isShow:(BOOL)arg2;
+ (BOOL)isWidgetNotifyOn:(long long)arg1 defaultValue:(BOOL)arg2;
+ (BOOL)isWidgetNotifyOn:(long long)arg1;
+ (void)setShowWidgetNotify:(long long)arg1 isShow:(BOOL)arg2;
+ (BOOL)isWidgetOn:(long long)arg1;
+ (void)setUseWidget:(long long)arg1 isOn:(BOOL)arg2;
+ (void)setIntelligentIdentification:(BOOL)arg1;
+ (BOOL)intelligentIdentification;
+ (void)setShowStockBadge:(BOOL)arg1;
+ (BOOL)showStockBadge;
+ (void)setShowMailBadge:(BOOL)arg1;
+ (BOOL)showMailBadge;
+ (void)setImportSystemCalendar:(BOOL)arg1;
+ (BOOL)needImportSystemCalendar;
+ (void)setShowScheduleNotification:(BOOL)arg1;
+ (BOOL)showScheduleNotification;
+ (void)setShowStockNotification:(BOOL)arg1;
+ (BOOL)showStockNotification;
+ (void)setShowDiscussNotification:(BOOL)arg1;
+ (BOOL)showDiscussNotification;
+ (void)setShowBuddyNotification:(BOOL)arg1;
+ (BOOL)showBuddyNotification;
+ (void)setShowLocatingGuide:(BOOL)arg1;
+ (BOOL)showLocationGuide;
+ (void)setWeatherHistoryLocation:(id)arg1;
+ (id)weatherHistoryLocation;
+ (void)setUserSelectedLocation:(id)arg1;
+ (id)userSelectedLocation;
+ (void)setAutoLocatingMode:(BOOL)arg1;
+ (BOOL)AutoLocatingMode;
+ (void)setSavePathInPhotoViewer:(id)arg1;
+ (id)savePathInPhotoViewer;
+ (BOOL)showWeiboNotification;
+ (void)setShowWeiboNotification:(BOOL)arg1 count:(long long)arg2;
+ (int)QZoneNotificationShowCount;
+ (BOOL)showQZoneNotification;
+ (void)setShowQZoneNotification:(BOOL)arg1 count:(long long)arg2;
+ (int)emailNotificationShowCount;
+ (BOOL)showEmailNotification;
+ (void)setShowEmailNotification:(BOOL)arg1 count:(long long)arg2;
+ (void)refreshMailPublickInBackground;
+ (id)currentInputStatusBubble;
+ (id)currentInformativeMsgBubble;
+ (id)currentMsgBubble:(BOOL)arg1;
+ (int)realTimeChatTypeOfSingleSession:(unsigned long long)arg1;
+ (id)fileTransferDefaultPath;
+ (id)resetReceiveFileDir;
+ (void)setReceiveFilesDir:(id)arg1;
+ (id)receiveFilesDir;
+ (BOOL)isZH_CN;
+ (void)setCurrentSwiftlyHotkey:(long long)arg1;
+ (long long)currentSwiftlyHotkey;
+ (void)setNoInputEventConstactStatus:(id)arg1;
+ (id)noInputEventConstactStatus;
+ (void)setNoInputEventSeconds:(long long)arg1;
+ (long long)noInputEventSeconds;
+ (void)setAutoChangeConfig:(BOOL)arg1;
+ (BOOL)autoChangeConfig;
+ (void)setCurrentFloatPosition:(long long)arg1;
+ (int)currentFloatPosition;
+ (void)setCurrentOtherRepresent:(long long)arg1;
+ (long long)currentOtherRepresent;
+ (void)setCurrentSelfRepresent:(long long)arg1;
+ (long long)currentSelfRepresent;
+ (void)setEnterSetting:(long long)arg1;
+ (long long)enterSetting;
+ (void)setLoadAIOHistory:(BOOL)arg1;
+ (BOOL)loadAIOHistory;
+ (void)setAutoOpenGroupMemList:(BOOL)arg1;
+ (BOOL)autoOpenGroupMemList;
+ (void)setWarnBeforeQuit:(BOOL)arg1;
+ (BOOL)warnBeforeQuit;
+ (void)setfirstUseCmdWConfig:(BOOL)arg1;
+ (BOOL)firstUseCmdWConfig;
+ (void)setUseCmdWConfig:(BOOL)arg1;
+ (BOOL)useCmdWConfig;
+ (void)setJumpNotice:(BOOL)arg1;
+ (BOOL)jumpNotice;
+ (void)setShowCountOnDock:(BOOL)arg1;
+ (BOOL)showCountOnDock;
+ (void)setOneNetSetting:(BOOL)arg1;
+ (BOOL)oneNetSetting;
+ (void)setSystemSoundOff:(BOOL)arg1;
+ (BOOL)systemSoundOff;
+ (void)setCurrentMenuIconPosition:(long long)arg1;
+ (long long)currentMenuIconPosition;
+ (void)setUseLocalFontForAllMsg:(BOOL)arg1;
+ (BOOL)useLocalFontForAllMsg;
+ (BOOL)showAllFloatMessageWindow;
+ (id)mdhmFormatterStringWithTimeInterval:(double)arg1;
+ (id)hmsFormatterStringWithTimeInterval:(double)arg1;
+ (id)hmFormatterStringWithTimeInterval:(double)arg1;
+ (id)ymdFormatterStringWithTimeInterval:(double)arg1;
+ (id)appBundleVersion;
+ (long long)systemPatchVersion;
+ (long long)systemMinorVersion;
+ (long long)systemMajorVersion;
+ (void)initSystemVersionInfo;
+ (long long)regulatedTime;
+ (id)nameOfUin:(id)arg1;
+ (id)nameOfGroup:(id)arg1;
+ (void)setName:(id)arg1 forDiscuss:(unsigned long long)arg2;
+ (id)nameOfDiscuss:(unsigned long long)arg1;
+ (id)dispayNameOfDicusssMember:(unsigned long long)arg1 inDiscuss:(unsigned long long)arg2 selfInstead:(id)arg3;
+ (id)displayNameOfGroupMember:(unsigned long long)arg1 inGroup:(unsigned long long)arg2;
+ (id)displayNameOfUserId:(id)arg1;
+ (id)nameOfSession:(id)arg1;
+ (void)nameOfSession:(id)arg1 completion:(id)arg2;
+ (unsigned long long)terminalTypeOfUin:(id)arg1;
+ (BOOL)isSelfOffline;
+ (id)latestUin;
+ (int)statusOfUin:(id)arg1;
+ (void)saveCurrentChatFontAttributesToDefaultFont:(id)arg1;
+ (BOOL)chatFontHasChanged;
+ (void)setCurrentChatFontAttributes:(id)arg1;
+ (id)currentChatFontAttributes;
+ (void)setCurrentChatUIStyle:(int)arg1;
+ (int)currentChatUIStyle;
+ (void)setCurrentFloatShowType:(int)arg1;
+ (int)currentFloatShowType;
+ (void)setCurrentFloatNotice:(BOOL)arg1;
+ (BOOL)CurrentFloatNotice;
+ (id)sharedInstance;
+ (void)setCurrentSwiftlyForceKeyBoard:(id)arg1;
+ (id)currentSwiftlyForceKeyBoard;
+ (id)allInputSourceIds;
+ (id)allInputSourceNames;
+ (id)allInputSources;
@property long long timeFirstUse_3_1_3; // @synthesize timeFirstUse_3_1_3=_timeFirstUse_3_1_3;
@property BOOL firstTimeCloseDataLineTap_3_1; // @synthesize firstTimeCloseDataLineTap_3_1=_firstTimeCloseDataLineTap_3_1;
@property BOOL firstTimeUse_3_1; // @synthesize firstTimeUse_3_1=_firstTimeUse_3_1;
- (void).cxx_destruct;
- (void)onTextAttributesDidChagne;
- (void)changeColor:(id)arg1;
- (void)changeFont:(id)arg1;
- (void)changeFontSmaller;
- (void)changeFontBigger;
- (void)changeAttributes:(id)arg1;
- (id)typingAttributes;
- (id)currentChatColor;
- (id)currentChatFont;
- (void)restoreToDefaultSetting;
- (void)loadChatFontAndColor;
- (void)setNeedChangeFont:(BOOL)arg1;
- (void)recordRecentlyUsed;
- (void)showTextColorPenal:(id)arg1;
- (void)showFontPenal:(id)arg1;
- (id)init;

@end

