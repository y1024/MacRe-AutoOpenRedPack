//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseSingleton.h"

@class BHCollectionManager;

@interface MCDataAccess : QQBaseSingleton
{
    BHCollectionManager *_collectionManager;
}

@property(retain) BHCollectionManager *collectionManager; // @synthesize collectionManager=_collectionManager;
- (void).cxx_destruct;
- (id)_getCollectionModelsFromMCModels:(id)arg1;
- (void)_adapterMsgCollectionModel:(id)arg1 mcModelsContainer:(id)arg2;
- (void)loadMoreCollectionsForSearchToFilterWithType:(unsigned long long)arg1 searchKey:(id)arg2 modifyTime:(unsigned long long)arg3 count:(unsigned int)arg4 complete:(id)arg5;
- (void)loadMoreCollectionsForSearchWithType:(unsigned long long)arg1 searchKey:(id)arg2 modifyTime:(unsigned long long)arg3 count:(unsigned int)arg4 complete:(id)arg5;
- (void)loadMoreCollectionsForFilterWithType:(unsigned long long)arg1 count:(unsigned long long)arg2 complete:(id)arg3;
- (void)loadMoreCollectionsForDefaultWithType:(unsigned long long)arg1 count:(unsigned long long)arg2 complete:(id)arg3;
- (void)_filterToFilterWithType:(unsigned long long)arg1 container:(id)arg2 count:(unsigned int)arg3 complete:(id)arg4;
- (void)refreshForFilter:(unsigned long long)arg1 count:(unsigned int)arg2 complete:(id)arg3;
- (void)refreshForFilterWithSearchResult:(id)arg1 type:(unsigned long long)arg2 complete:(id)arg3;
- (void)refreshForSearch:(id)arg1 complete:(id)arg2;
- (void)refreshForDefault:(unsigned long long)arg1 complete:(id)arg2;
- (id)init;

@end

