//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface FileDownloadInfo : NSObject
{
    BOOL _transType;
    long long _destUin;
    NSString *_fileName;
    NSString *_fileUuid;
    NSString *_fileIndex;
    NSData *_fileMd5;
    long long _fileSize;
    BOOL _isDirect;
    NSString *_downloadUrl;
    unsigned int _groupID;
    unsigned int _groupSize;
    unsigned int _indexInGroup;
    unsigned int _batchID;
    unsigned int _groupFlag;
}

@property(nonatomic) unsigned int groupFlag; // @synthesize groupFlag=_groupFlag;
@property(nonatomic) unsigned int batchID; // @synthesize batchID=_batchID;
@property(nonatomic) unsigned int indexInGroup; // @synthesize indexInGroup=_indexInGroup;
@property(nonatomic) unsigned int groupSize; // @synthesize groupSize=_groupSize;
@property(nonatomic) unsigned int groupID; // @synthesize groupID=_groupID;
@property(retain, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl=_downloadUrl;
@property(nonatomic) BOOL isDirect; // @synthesize isDirect=_isDirect;
@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSData *fileMd5; // @synthesize fileMd5=_fileMd5;
@property(retain, nonatomic) NSString *fileIndex; // @synthesize fileIndex=_fileIndex;
@property(retain, nonatomic) NSString *fileUuid; // @synthesize fileUuid=_fileUuid;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(nonatomic) long long destUin; // @synthesize destUin=_destUin;
@property(nonatomic) BOOL transType; // @synthesize transType=_transType;
- (void).cxx_destruct;
- (id)description;

@end
