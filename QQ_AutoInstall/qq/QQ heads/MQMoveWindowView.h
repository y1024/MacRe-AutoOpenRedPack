//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TXColorView.h"

@interface MQMoveWindowView : TXColorView
{
    struct CGPoint _initialLocation;
    BOOL _canDragWindow;
}

@property(nonatomic) BOOL canDragWindow; // @synthesize canDragWindow=_canDragWindow;
- (void)mouseDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end
