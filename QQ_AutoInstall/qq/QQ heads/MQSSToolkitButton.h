//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@class NSImage;

@interface MQSSToolkitButton : NSButton
{
    BOOL _isHover;
    BOOL _isSelected;
    BOOL _isPressed;
    NSImage *_selectedImage;
    NSImage *_normalImage;
    NSImage *_curImage;
}

- (BOOL)isFlipped;
- (void)setSelectedImage:(id)arg1;
- (void)setNormalImage:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)selected;
- (void)setSelected:(BOOL)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

