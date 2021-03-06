//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TChatStructuredViewModel.h"

@class NSMutableDictionary;

@interface TChatMultiMsgViewModel : TChatStructuredViewModel
{
    double _cellHeight;
    double _cellWidth;
    NSMutableDictionary *_msgInfo;
}

@property(retain) NSMutableDictionary *msgInfo; // @synthesize msgInfo=_msgInfo;
@property double cellWidth; // @synthesize cellWidth=_cellWidth;
@property double cellHeight; // @synthesize cellHeight=_cellHeight;
- (void).cxx_destruct;
- (void)_parseForwardMsg:(id)arg1;
- (void)_computeCellHeight;
- (double)_computeStrSize:(id)arg1;
- (id)attributedStringFormPasteboard;
- (id)initWithMessageModel:(id)arg1;

@end

