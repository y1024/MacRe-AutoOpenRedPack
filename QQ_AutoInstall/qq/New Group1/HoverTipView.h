//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSTextField, NSTrackingArea, TXPopoverController;

@interface HoverTipView : NSViewController
{
    NSTextField *_tipText;
    long long maxWidth;
    NSTrackingArea *_trackArea;
    TXPopoverController *popOver_;
    BOOL _mouseEnter;
}

+ (id)shareHoverTipView;
@property(readonly, nonatomic) BOOL mouseEnter; // @synthesize mouseEnter=_mouseEnter;
- (void).cxx_destruct;
- (void)showTip:(id)arg1 point:(struct CGPoint)arg2 inView:(id)arg3;
- (id)menuPopoverController:(id)arg1;
- (BOOL)isVisibleInPopover;
- (void)removeTipView;
- (void)closePopover;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)removeTrackingArea;
- (void)layoutTipViewWithTip:(id)arg1;
- (id)createTipView;
- (id)init;

@end

