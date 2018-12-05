//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextField.h"

#import "NSTextFieldDelegate.h"
#import "StringFormatterDelegate.h"

@class NSShadow, NSString, NSView;

@interface MQFloatTextField : NSTextField <NSTextFieldDelegate, StringFormatterDelegate>
{
    NSTextField *mTextEditor;
    NSView *mBackView;
    BOOL mIsFocus;
    BOOL mIsInEditMode;
    BOOL mIsFixFloatBoxSize;
    BOOL mIsFixSize;
    BOOL mIsEditable;
    BOOL mIsShowShadow;
    BOOL mIsMouseover;
    BOOL mIsSingleLineMode;
    BOOL mIsPressEnterFinish;
    NSShadow *mShadow;
    struct CGSize mMaxSize;
    struct CGSize mMinSize;
    struct CGRect mOriginRect;
    struct CGSize mContentSize;
    int frameHeight;
    BOOL _isNotAutoChangeToNomalMode;
}

@property BOOL isNotAutoChangeToNomalMode; // @synthesize isNotAutoChangeToNomalMode=_isNotAutoChangeToNomalMode;
@property BOOL isPressEnterFinish; // @synthesize isPressEnterFinish=mIsPressEnterFinish;
@property BOOL isSingleLineMode; // @synthesize isSingleLineMode=mIsSingleLineMode;
@property BOOL isMouseover; // @synthesize isMouseover=mIsMouseover;
@property struct CGRect originRect; // @synthesize originRect=mOriginRect;
@property BOOL isShowShadow; // @synthesize isShowShadow=mIsShowShadow;
@property BOOL isFixSize; // @synthesize isFixSize=mIsFixSize;
@property BOOL isFixFloatBoxSize; // @synthesize isFixFloatBoxSize=mIsFixFloatBoxSize;
@property struct CGSize minSize; // @synthesize minSize=mMinSize;
@property struct CGSize maxSize; // @synthesize maxSize=mMaxSize;
- (void).cxx_destruct;
- (struct CGRect)changeToBorderFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)stringValueDidChange:(id)arg1;
- (void)changeToNoEditMode;
- (void)changeToNomalMode;
- (void)changeToEditMode;
- (BOOL)isFocus;
- (BOOL)isInEditModel;
- (void)dealloc;
- (void)changeToFocusMode;
- (void)handleResignKey:(id)arg1;
- (void)onTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)setStringValue:(id)arg1;
- (BOOL)isEditable;
- (void)setEditable:(BOOL)arg1;
- (void)beyondMaxLengthNotify:(id)arg1 exactIndex:(long long)arg2 exactStr:(id)arg3;
- (void)setFormatter:(id)arg1;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
