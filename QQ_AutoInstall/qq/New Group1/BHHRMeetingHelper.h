//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseSingleton.h"

@interface BHHRMeetingHelper : QQBaseSingleton
{
}

- (void)addHRMeetingStructTipsDiscuss:(id)arg1 helper:(id)arg2;
- (void)addHRMeetingTextTipsDiscuss:(id)arg1 tips:(id)arg2 helper:(id)arg3;
- (void)addHRMeetingTipsDiscuss:(id)arg1 tips:(id)arg2 containResume:(BOOL)arg3 helper:(id)arg4;
- (void)requestNameCardWithDisussUin:(long long)arg1 completion:(id)arg2;
- (void)requestGetUserNameWithUin:(long long)arg1 disussUin:(long long)arg2 completion:(id)arg3;
- (void)requestSetUserNameWithUin:(long long)arg1 disussUin:(long long)arg2 userName:(id)arg3 completion:(id)arg4;
- (id)getUrlParamWithKey:(id)arg1 url:(id)arg2;
- (void)shortUrlToSig:(id)arg1 completionWithObject:(id)arg2;

@end

