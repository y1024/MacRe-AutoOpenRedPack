//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MQFaceUnit.h"

@interface MQRoamFaceUnit : MQFaceUnit
{
    BOOL _needRefresh;
    id <BHBigFaceImage> _bigFace;
}

+ (id)roamUnitWithBigFace:(id)arg1;
@property(retain, nonatomic) id <BHBigFaceImage> bigFace; // @synthesize bigFace=_bigFace;
@property(nonatomic) BOOL needRefresh; // @synthesize needRefresh=_needRefresh;
- (void).cxx_destruct;
- (BOOL)shouldBeRedownloaded;
- (id)convertToStoreEmoji;
- (BOOL)isMarket;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEquareToUnit:(id)arg1;
- (BOOL)isAvailable;
- (BOOL)preparePreviewImage;
- (struct CGSize)faceImageOriginSize;
- (id)imageWithState:(unsigned long long)arg1 path:(id)arg2;
- (id)getPreFaceImage;
- (id)getFaceImage;
- (id)md5;
- (id)fileFixName;
- (id)fileName;
- (id)gifPath;
- (unsigned long long)state;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
