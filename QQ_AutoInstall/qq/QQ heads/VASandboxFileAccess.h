//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface VASandboxFileAccess : NSObject
{
}

+ (void)pruneUnrestorableBookmarks;
+ (void)didDecodeRestorableState:(id)arg1;
+ (void)willEncodeRestorableState:(id)arg1;
+ (void)stopAccessingSecurityScopedResource:(id)arg1;
+ (BOOL)startAccessingSecurityScopedResource:(id)arg1;
+ (BOOL)addRegularBookmark:(id)arg1;
+ (BOOL)addSecurityBookmark:(id)arg1;
+ (id)getSecurityBookmark:(id)arg1 preferFileBookmark:(BOOL)arg2;
+ (id)getSecurityBookmark:(id)arg1;
+ (id)sandboxExpandTildeInPath:(id)arg1;
+ (BOOL)foundBookmarkForPath:(id)arg1;
+ (id)sandboxFileHandle:(id)arg1 forced:(BOOL)arg2 denyNotice:(id)arg3;
+ (BOOL)punchHoleInSandboxForPath:(id)arg1 denyNotice:(id)arg2;

@end
