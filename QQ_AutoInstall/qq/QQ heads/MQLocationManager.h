//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class CLLocationManager, MQLocation, NSDateFormatter, NSDictionary, NSMutableDictionary, NSString;

@interface MQLocationManager : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;
    NSMutableDictionary *_callBacks;
    NSDictionary *_zhCityCache;
    NSDictionary *_enCityCache;
    BOOL _isLocating;
    MQLocation *_curLocation;
    NSDateFormatter *_dateFormat;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSDateFormatter *dateFormat; // @synthesize dateFormat=_dateFormat;
@property(readonly) MQLocation *curLocation; // @synthesize curLocation=_curLocation;
@property(readonly) BOOL isLocating; // @synthesize isLocating=_isLocating;
- (void).cxx_destruct;
- (id)getLocationMsgByKeyword:(id)arg1;
- (void)callBackWithSuccess:(BOOL)arg1;
- (void)locatingDidStop;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)reverseGeocodeLocationFromPBByLatitude:(unsigned int)arg1 Lontitude:(unsigned int)arg2;
- (void)reverseGeocodeLocationFromSystem:(id)arg1;
- (void)updateMyLocationWithCompletion:(id)arg1;
- (void)updateMyLocation;
- (id)timeStringSinceNow;
- (BOOL)locateIsAvailabled;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

