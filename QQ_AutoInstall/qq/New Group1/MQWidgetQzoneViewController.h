//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class MQWidgetQzoneData, NSImageView, NSTextField, NSView;

@interface MQWidgetQzoneViewController : NSViewController
{
    MQWidgetQzoneData *_qzoneData;
    unsigned long long widgetMode;
    int contentLines;
    NSView *_badgeView;
    NSImageView *_iconImageView;
    NSTextField *_titleTextField;
    NSTextField *_contentTextField;
    NSTextField *_dateTextField;
}

@property __weak NSTextField *dateTextField; // @synthesize dateTextField=_dateTextField;
@property __weak NSTextField *contentTextField; // @synthesize contentTextField=_contentTextField;
@property __weak NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property __weak NSImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain) NSView *badgeView; // @synthesize badgeView=_badgeView;
- (void).cxx_destruct;
- (int)setContent:(id)arg1 exceptString:(id)arg2 endString:(id)arg3;
- (id)cutSuffixString:(id)arg1;
- (void)setContentString:(id)arg1 endString:(id)arg2;
- (void)restoreBadgeView;
- (void)setQzoneData:(id)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)updateUI;
- (void)updateContentWidth;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;

@end
