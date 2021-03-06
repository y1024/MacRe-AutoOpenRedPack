//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BHCollectionAuthor, BHCollectionContent, BHCollectionSummary, NSArray, NSString;

@interface BHCollectionModel : NSObject
{
    unsigned int _customGroupID;
    unsigned int _appId;
    NSString *_cid;
    unsigned long long _type;
    unsigned long long _CollectionStatus;
    unsigned long long _category;
    unsigned long long _bid;
    unsigned long long _createTime;
    unsigned long long _modifyTime;
    unsigned long long _contentCreateTime;
    NSString *_shareUrl;
    NSArray *_bizDataList;
    BHCollectionSummary *_summary;
    BHCollectionContent *_content;
    BHCollectionAuthor *_author;
    NSString *_qzone_ugc_key;
}

+ (id)createNewCollectionModel:(unsigned long long)arg1 components:(id)arg2;
@property(copy, nonatomic) NSString *qzone_ugc_key; // @synthesize qzone_ugc_key=_qzone_ugc_key;
@property(retain, nonatomic) BHCollectionAuthor *author; // @synthesize author=_author;
@property(retain, nonatomic) BHCollectionContent *content; // @synthesize content=_content;
@property(retain, nonatomic) BHCollectionSummary *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSArray *bizDataList; // @synthesize bizDataList=_bizDataList;
@property(nonatomic) unsigned int appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(nonatomic) unsigned int customGroupID; // @synthesize customGroupID=_customGroupID;
@property(nonatomic) unsigned long long contentCreateTime; // @synthesize contentCreateTime=_contentCreateTime;
@property(nonatomic) unsigned long long modifyTime; // @synthesize modifyTime=_modifyTime;
@property(nonatomic) unsigned long long createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned long long bid; // @synthesize bid=_bid;
@property(nonatomic) unsigned long long category; // @synthesize category=_category;
@property(nonatomic) unsigned long long CollectionStatus; // @synthesize CollectionStatus=_CollectionStatus;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
- (void).cxx_destruct;
- (id)description;
- (id)_buildCollectionRichMediaInfo:(id)arg1;
- (void)_fillFileSummary:(id)arg1;
- (void)_fillRichMediaContent:(id)arg1;
- (void)_fillRichMediaSummary:(id)arg1;
- (id)encodeForwardMsg;
- (BOOL)isHasPictureOnly;
- (struct CollectCommonInfo *)encode;

@end

