//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableRowView.h"

@class NSImageView;

@interface TChatTableRowView : NSTableRowView
{
    BOOL _isEditing;
    BOOL _checked;
    BOOL _groupRowNeedDrawWhiteBorder;
    id _selectionChangeBlock;
    NSImageView *_checkImageView;
}

@property(retain, nonatomic) NSImageView *checkImageView; // @synthesize checkImageView=_checkImageView;
@property(copy, nonatomic) id selectionChangeBlock; // @synthesize selectionChangeBlock=_selectionChangeBlock;
@property(nonatomic) BOOL groupRowNeedDrawWhiteBorder; // @synthesize groupRowNeedDrawWhiteBorder=_groupRowNeedDrawWhiteBorder;
@property(nonatomic) BOOL checked; // @synthesize checked=_checked;
@property(nonatomic) BOOL isEditing; // @synthesize isEditing=_isEditing;
- (void).cxx_destruct;
- (void)mouseDown:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (id)init;
- (void)drawRect:(struct CGRect)arg1;

@end

