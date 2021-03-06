//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class MQPhoto;

@interface MQPhotoLocationView : NSView
{
    MQPhoto *_myPhoto;
    struct CGRect _indicateRect;
    struct CGRect _previewRect;
}

@property(nonatomic) __weak MQPhoto *myPhoto; // @synthesize myPhoto=_myPhoto;
@property struct CGRect previewRect; // @synthesize previewRect=_previewRect;
@property struct CGRect indicateRect; // @synthesize indicateRect=_indicateRect;
- (void).cxx_destruct;
- (BOOL)mouseDownCanMoveWindow;
- (void)setPhoto:(id)arg1 indicateVisibleRect:(struct CGRect)arg2 inSize:(struct CGSize)arg3;
- (void)drawRect:(struct CGRect)arg1;
- (void)setUpUI;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

