//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface GameCoverInfo : JceObjectV2
{
    int jcev2_p_6_o_jmpType;
    double jcev2_p_0_o_xCoordLU;
    double jcev2_p_1_o_yCoordLU;
    double jcev2_p_2_o_xCoordRD;
    double jcev2_p_3_o_yCoordRD;
    NSString *jcev2_p_4_o_jmpUrl;
    NSString *jcev2_p_5_o_schema;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_jmpType, setter=setJce_jmpType:) int jcev2_p_6_o_jmpType; // @synthesize jcev2_p_6_o_jmpType;
@property(retain, nonatomic, getter=jce_schema, setter=setJce_schema:) NSString *jcev2_p_5_o_schema; // @synthesize jcev2_p_5_o_schema;
@property(retain, nonatomic, getter=jce_jmpUrl, setter=setJce_jmpUrl:) NSString *jcev2_p_4_o_jmpUrl; // @synthesize jcev2_p_4_o_jmpUrl;
@property(nonatomic, getter=jce_yCoordRD, setter=setJce_yCoordRD:) double jcev2_p_3_o_yCoordRD; // @synthesize jcev2_p_3_o_yCoordRD;
@property(nonatomic, getter=jce_xCoordRD, setter=setJce_xCoordRD:) double jcev2_p_2_o_xCoordRD; // @synthesize jcev2_p_2_o_xCoordRD;
@property(nonatomic, getter=jce_yCoordLU, setter=setJce_yCoordLU:) double jcev2_p_1_o_yCoordLU; // @synthesize jcev2_p_1_o_yCoordLU;
@property(nonatomic, getter=jce_xCoordLU, setter=setJce_xCoordLU:) double jcev2_p_0_o_xCoordLU; // @synthesize jcev2_p_0_o_xCoordLU;
- (void).cxx_destruct;
- (id)init;

@end
