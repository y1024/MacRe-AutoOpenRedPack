//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString;

@protocol OCRListCellDelegate <NSObject>
- (void)resultTextHeightDidChangedInRow:(long long)arg1 NewFrame:(struct CGRect)arg2;
- (void)resultMsgDidChangedInRow:(long long)arg1 NewText:(NSAttributedString *)arg2;
@end
