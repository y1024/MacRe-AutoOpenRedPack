//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface TChatPasteboardItem : NSObject
{
    NSMutableDictionary *_nikeNameSelectRangeDict;
    NSMutableDictionary *_contentSelectRangeDict;
}

@property(retain, nonatomic) NSMutableDictionary *contentSelectRangeDict; // @synthesize contentSelectRangeDict=_contentSelectRangeDict;
@property(retain, nonatomic) NSMutableDictionary *nikeNameSelectRangeDict; // @synthesize nikeNameSelectRangeDict=_nikeNameSelectRangeDict;
- (void).cxx_destruct;
- (void)clear;
- (id)contentRealSelectedRanges;
- (id)nickNameRealSelectedRanges;
- (id)realSelectedRangesForSelectedDict:(id)arg1;
- (void)dealloc;
- (id)init;

@end

