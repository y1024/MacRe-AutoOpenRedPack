//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TChatCellBuilder.h"

@interface TChatBaseBubbleBuilder : TChatCellBuilder
{
}

- (double)getFooterHeightWidthModel:(id)arg1 row:(long long)arg2 cellWidth:(double)arg3;
- (double)getContentHeightWidthModel:(id)arg1 row:(long long)arg2 cellWidth:(double)arg3;
- (double)getCellHeightWidthModel:(id)arg1 row:(long long)arg2 cellWidth:(double)arg3;
- (long long)getBubbleType;
- (id)getFooterView:(id)arg1 message:(id)arg2 parentView:(id)arg3 cellWidth:(double)arg4;
- (id)getContentView:(id)arg1 message:(id)arg2 parentView:(id)arg3 cellWidth:(double)arg4;
- (id)getCellView:(id)arg1 message:(id)arg2 cellWidth:(double)arg3;

@end

