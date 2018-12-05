//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface MQFileTransmissionTaskId : NSObject <NSCopying>
{
    int _type;
    unsigned long long _cookie;
}

+ (id)taskIdWithType:(int)arg1 andCookie:(unsigned long long)arg2;
@property unsigned long long cookie; // @synthesize cookie=_cookie;
@property(readonly) int type; // @synthesize type=_type;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithType:(int)arg1 andCookie:(unsigned long long)arg2;

@end
