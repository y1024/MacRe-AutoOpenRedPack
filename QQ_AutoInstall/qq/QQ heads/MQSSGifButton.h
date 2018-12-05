//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@class CAKeyframeAnimation, CALayer, NSImage;

@interface MQSSGifButton : NSButton
{
    NSImage *_image;
    CAKeyframeAnimation *_animation;
    CALayer *_gifLayer;
}

- (void)setImage:(id)arg1 highlightGifData:(id)arg2;
- (id)createGIFAnimation:(id)arg1;
- (void)switchWithState:(long long)arg1;
- (void)setState:(long long)arg1;
- (void)mouseDown:(id)arg1;
- (void)layout;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)awakeFromNib;
- (id)init;

@end
