//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceRequestPacket.h"

@class UniAttributeQZ;

@interface UniPacket : JceRequestPacket
{
    UniAttributeQZ *_attributes;
}

+ (id)packet;
@property(readonly, nonatomic) UniAttributeQZ *attributes; // @synthesize attributes=_attributes;
- (void).cxx_destruct;
- (void)putObjectAttr:(id)arg1 value:(id)arg2;
- (void)putObjectAttr:(id)arg1 type:(id)arg2 value:(id)arg3;
- (void)putDataAttr:(id)arg1 value:(id)arg2;
- (id)getObjectAttr:(id)arg1 forClass:(Class)arg2;
- (void)__unpack:(id)arg1;
- (void)__pack:(id)arg1;
- (id)description;
- (void)setCommonUniPacket:(id)arg1 andFuncName:(id)arg2;
- (id)init;

@end

