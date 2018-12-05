//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextAttachmentCell.h"

@class MQImageBubbleView, MQNinePartImage, NSImage, NSLayoutManager, NSString, NSTextView;

@interface MQForwardMsgAttachmentCell : NSTextAttachmentCell
{
    unsigned long long _charIndex;
    NSLayoutManager *_layoutManager;
    BOOL _isSelf;
    BOOL _ignoreArrow;
    BOOL _isLargeMode;
    NSImage *_forwardImage;
    NSString *_forwardTitle;
    NSString *_forwardSubTitle;
    NSString *_sourceIconUrlStr;
    NSString *_sourceName;
    NSTextView *_textView;
    SEL _cellClicked;
    MQNinePartImage *_bubbleImage;
    MQNinePartImage *_maskBubbleImage;
    MQNinePartImage *_maskDefaultImage;
    MQNinePartImage *_textBgImage;
    NSImage *_sourceImage;
    MQImageBubbleView *_imageBubbleView;
    NSImage *_cachedImage;
    struct NSEdgeInsets _contentPaddingEdgeInsets;
}

@property(nonatomic) BOOL isLargeMode; // @synthesize isLargeMode=_isLargeMode;
@property(retain, nonatomic) NSImage *cachedImage; // @synthesize cachedImage=_cachedImage;
@property(retain, nonatomic) MQImageBubbleView *imageBubbleView; // @synthesize imageBubbleView=_imageBubbleView;
@property(retain, nonatomic) NSImage *sourceImage; // @synthesize sourceImage=_sourceImage;
@property(retain, nonatomic) MQNinePartImage *textBgImage; // @synthesize textBgImage=_textBgImage;
@property(retain, nonatomic) MQNinePartImage *maskDefaultImage; // @synthesize maskDefaultImage=_maskDefaultImage;
@property(retain, nonatomic) MQNinePartImage *maskBubbleImage; // @synthesize maskBubbleImage=_maskBubbleImage;
@property(retain, nonatomic) MQNinePartImage *bubbleImage; // @synthesize bubbleImage=_bubbleImage;
@property(nonatomic) struct NSEdgeInsets contentPaddingEdgeInsets; // @synthesize contentPaddingEdgeInsets=_contentPaddingEdgeInsets;
@property(nonatomic) SEL cellClicked; // @synthesize cellClicked=_cellClicked;
@property(nonatomic) BOOL ignoreArrow; // @synthesize ignoreArrow=_ignoreArrow;
@property(nonatomic) BOOL isSelf; // @synthesize isSelf=_isSelf;
@property(nonatomic) NSTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(retain, nonatomic) NSString *sourceIconUrlStr; // @synthesize sourceIconUrlStr=_sourceIconUrlStr;
@property(retain, nonatomic) NSString *forwardSubTitle; // @synthesize forwardSubTitle=_forwardSubTitle;
@property(retain, nonatomic) NSString *forwardTitle; // @synthesize forwardTitle=_forwardTitle;
@property(retain, nonatomic) NSImage *forwardImage; // @synthesize forwardImage=_forwardImage;
- (void).cxx_destruct;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 atCharacterIndex:(unsigned long long)arg4 untilMouseUp:(BOOL)arg5;
- (id)sourceAttributes;
- (id)subtitleAttributes;
- (id)titleAttributes;
- (void)drawSource:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawBottomText:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawBackground:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2 selected:(BOOL)arg3 large:(BOOL)arg4;
- (struct CGSize)cellSize;
- (void)invalidateDisplay;
- (void)commonInit;
- (BOOL)isSelfMode;

@end
