//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableRowView.h"

@interface MQContactTableRowView : NSTableRowView
{
    id <MQContactTableRowViewDelegate> _delegate;
}

@property(nonatomic) id <MQContactTableRowViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)drawSelectionInRect:(struct CGRect)arg1;
- (void)didAddSubview:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
