//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@interface TXProtocalBaseParser : NSObject
{
    NSURL *_url;
}

+ (id)getParser:(id)arg1;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)urlQueryItems:(id)arg1;
- (id)valueForKey:(id)arg1 fromQueryItems:(id)arg2;
- (void)doCommand;

@end

