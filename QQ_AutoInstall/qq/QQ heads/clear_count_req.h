//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface clear_count_req : JceObjectV2
{
    int jcev2_p_0_o_clearType;
    NSString *jcev2_p_1_o_lastUndealCountTime;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_lastUndealCountTime, setter=setJce_lastUndealCountTime:) NSString *jcev2_p_1_o_lastUndealCountTime; // @synthesize jcev2_p_1_o_lastUndealCountTime;
@property(nonatomic, getter=jce_clearType, setter=setJce_clearType:) int jcev2_p_0_o_clearType; // @synthesize jcev2_p_0_o_clearType;
- (void).cxx_destruct;
- (id)init;

@end

