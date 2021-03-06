//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MsfSDKCallbackProtocol.h"

@class NSMutableDictionary, NSString;

@interface __MSFSDKCallback : NSObject <MsfSDKCallbackProtocol>
{
    BOOL _MSFConnected;
    NSString *_IP_PORT;
    NSMutableDictionary *_requestQueue;
}

@property(retain, nonatomic) NSMutableDictionary *requestQueue; // @synthesize requestQueue=_requestQueue;
@property(copy, nonatomic) NSString *IP_PORT; // @synthesize IP_PORT=_IP_PORT;
@property(nonatomic) BOOL MSFConnected; // @synthesize MSFConnected=_MSFConnected;
- (void).cxx_destruct;
- (void)onMSFServerTimeUpdated:(id)arg1;
- (void)onMSFNetworkSocketHandle:(id)arg1;
- (void)onMSFSSOReturn:(id)arg1;
- (void)onMSFSocketFlow:(id)arg1;
- (void)onMSFPacketState:(id)arg1;
- (void)onMSFApnState:(id)arg1;
- (void)onMSFNetworkState:(id)arg1;
- (void)onMSFNotGrayUser:(id)arg1;
- (void)onMSFIllegalApp:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

