//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MQBaseElem.h"

@class NSMutableArray;

@interface SearchElem : MQBaseElem
{
    MQBaseElem *m_baseElem;
    NSMutableArray *m_findMsgIndexArr;
}

@property(retain) NSMutableArray *m_findMsgIndexArr; // @synthesize m_findMsgIndexArr;
- (void).cxx_destruct;
- (int)QQMsgSessionType;
- (void)DeleteAllMsg;
- (void)DeleteMsgByRecordID:(struct _MESSAGE_RECORD_ID)arg1;
- (void)DeleteMsgByIndex_Kernel:(long long)arg1;
- (id)QueryDateForHaveRecordWithBeginTime:(unsigned long long)arg1 endWith:(unsigned long long)arg2;
- (BOOL)GetMsgAtCurPage:(unsigned long long)arg1 outTo:(id *)arg2;
- (void)AnalyzeMsgResult:(id)arg1 gotoPage:(unsigned int *)arg2 pageIndex:(unsigned int *)arg3;
- (unsigned long long)AnalyzeMsgPageIndex:(long long)arg1 curPageMsgIndex:(long long)arg2;
- (long long)GetCurPageIndex;
- (long long)GetMsgTotalCount;
- (long long)GetPageCount;
- (long long)GetCurPageMsgCount;
- (void)MoveToPage:(long long)arg1;
- (void)RefreshMsg;
- (void)RefreshMsgArray;
- (long long)GetHummerPageCount;
- (id)findMsgResultArray;
- (void)addFindMsgResult:(id)arg1;
- (id)displayExtraInfo;
- (BOOL)isSearch;
- (unsigned long long)Id;
- (int)getElemType;
- (int)getElemIntType;
- (id)displayImage;
- (id)description;
- (id)uinForHummer;
- (id)Uin;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithElem:(id)arg1;

@end
