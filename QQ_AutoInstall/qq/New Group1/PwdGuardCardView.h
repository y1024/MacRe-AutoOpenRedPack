//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TXBaseAuthView.h"

@class NSDictionary, NSTextField;

@interface PwdGuardCardView : TXBaseAuthView
{
    NSDictionary *pDicItem;
    NSTextField *txUserInput1;
    NSTextField *txUserInput2;
    NSTextField *serialNo;
    BOOL isLoadingPic;
}

@property(retain) NSDictionary *pDicItem; // @synthesize pDicItem;
- (void).cxx_destruct;
- (void)textDidChange:(id)arg1;
- (void)getEMBKPic;
- (id)getUserInput;
- (BOOL)isCanVerify;
- (void)showTipInfo:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

