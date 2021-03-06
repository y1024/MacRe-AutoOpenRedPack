//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TXHoverButton.h"

#import "MQFacesSelectorControllerDelegate.h"

@class MQFaceSelectViewController, NSTrackingArea;

@interface MQFaceButton : TXHoverButton <MQFacesSelectorControllerDelegate>
{
    id <MQFaceButtonDelegate> _faceButtonDelegate;
    MQFaceSelectViewController *_faceSelectViewController;
    NSTrackingArea *_trackArea;
}

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)insertEmojiFacesAtIndex:(int)arg1;
- (void)insertCustomFace:(id)arg1;
- (void)insertSyetemFacesAtIndex:(int)arg1;
- (void)selectStoreFace:(id)arg1;
- (void)setFaceButtonDelegate:(id)arg1;
- (void)onButtonClick:(id)arg1;
- (void)dealloc;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)beginShowFaces:(id)arg1;
- (struct CGPoint)pointToShowFaceView;
- (void)commonInit;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

