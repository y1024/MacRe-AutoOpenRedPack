//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseSingleton.h"

@class NSMutableArray, NSMutableSet, NSOperationQueue, NSString, OCRFaceGetFaceUnitOperation, OCRFaceGetNoOCROperation;

@interface OCRFaceDataAccess : QQBaseSingleton
{
    BOOL _disableOCR;
    NSString *_OCRUserRateJson;
    NSString *_OCRTimeIntervalJson;
    long long _ocrTimeInterval;
    NSMutableArray *_ocrTasks;
    NSMutableSet *_ocrTaskSet;
    NSOperationQueue *_getQueue;
    NSOperationQueue *_ocrQueue;
    NSOperationQueue *_ocrQueueRightNow;
    OCRFaceGetFaceUnitOperation *_getRomaFaceOperation;
    OCRFaceGetFaceUnitOperation *_getCustomeFaceOperation;
    OCRFaceGetNoOCROperation *_getStoreFaceOperation;
}

@property(retain, nonatomic) OCRFaceGetNoOCROperation *getStoreFaceOperation; // @synthesize getStoreFaceOperation=_getStoreFaceOperation;
@property(retain, nonatomic) OCRFaceGetFaceUnitOperation *getCustomeFaceOperation; // @synthesize getCustomeFaceOperation=_getCustomeFaceOperation;
@property(retain, nonatomic) OCRFaceGetFaceUnitOperation *getRomaFaceOperation; // @synthesize getRomaFaceOperation=_getRomaFaceOperation;
@property(retain, nonatomic) NSOperationQueue *ocrQueueRightNow; // @synthesize ocrQueueRightNow=_ocrQueueRightNow;
@property(retain, nonatomic) NSOperationQueue *ocrQueue; // @synthesize ocrQueue=_ocrQueue;
@property(retain, nonatomic) NSOperationQueue *getQueue; // @synthesize getQueue=_getQueue;
@property(retain, nonatomic) NSMutableSet *ocrTaskSet; // @synthesize ocrTaskSet=_ocrTaskSet;
@property(retain, nonatomic) NSMutableArray *ocrTasks; // @synthesize ocrTasks=_ocrTasks;
@property(nonatomic) long long ocrTimeInterval; // @synthesize ocrTimeInterval=_ocrTimeInterval;
@property(copy, nonatomic) NSString *OCRTimeIntervalJson; // @synthesize OCRTimeIntervalJson=_OCRTimeIntervalJson;
@property(copy, nonatomic) NSString *OCRUserRateJson; // @synthesize OCRUserRateJson=_OCRUserRateJson;
@property(nonatomic) BOOL disableOCR; // @synthesize disableOCR=_disableOCR;
- (void).cxx_destruct;
- (BOOL)_enableOCR;
- (void)_onWillLogoutCurrentAccount;
- (void)_networkStateChange:(id)arg1;
- (void)_getOCRedFaceModelsWithFaceType:(int)arg1 completion:(id)arg2;
- (void)_getForbidOCRFaceModelWithFaceType:(int)arg1 completion:(id)arg2;
- (void)_dispatchTask;
- (void)_removeTask:(id)arg1;
- (void)_addTasks:(id)arg1;
- (void)_initData;
- (void)dealloc;
- (void)removeTaskWithFaceIdentifier:(id)arg1;
- (void)saveOCRFaceModelToDatabase:(id)arg1 completion:(id)arg2;
- (void)removeOCRFaceModel:(id)arg1;
- (void)editOCRFaceModelToDatabase:(id)arg1;
- (void)editUsedTimestampeToDatabase:(id)arg1;
- (id)getFaceModelWithFaceIdentifier:(id)arg1;
- (id)getSystemRemark:(long long)arg1;
- (void)startOCRWithFaceModes:(id)arg1 completion:(id)arg2;
- (void)startOCRWithFaceModelRightNow:(id)arg1 completion:(id)arg2;
- (void)setDispatchTimeInterval:(long long)arg1;
- (void)launchOCR:(long long)arg1;
- (void)getNeedOCRRomaFaceModels:(id)arg1;
- (void)getNeedOCRCustomeFaceModels:(id)arg1;
- (void)getLoadedRomanFaceModels:(id)arg1;
- (void)getLoadedCustomeFaceModels:(id)arg1;
- (void)getStoreFaceModels:(id)arg1;
- (void)getSystemFaceModels:(id)arg1;
- (id)init;

@end

