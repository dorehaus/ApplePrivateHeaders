/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/Versions/A/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/CLSDBCache.h>

@class NSPredicate;

@interface CLSBusinessCategoryCache : CLSDBCache {

	NSPredicate* _predicateEntryWithUpdateTimestamp;

}

@property (nonatomic,readonly) NSPredicate * predicateEntryWithUpdateTimestamp;              //@synthesize predicateEntryWithUpdateTimestamp=_predicateEntryWithUpdateTimestamp - In the implementation block
-(void)invalidateCacheForGeoServiceProviderChangeToProvider:(id)arg1 ;
-(id)updateBusinessItems:(id)arg1 ;
-(char)hasRegion:(id)arg1 ;
-(id)initWithDiskCacheName:(id)arg1 ;
-(id)dataModelName;
-(void)invalidateCacheItemsBeforeDateWithTimestamp:(double)arg1 ;
-(id)businessItemsForRegion:(id)arg1 ;
-(NSPredicate *)predicateEntryWithUpdateTimestamp;
-(id)predicateForEntryNearbyRegion:(id)arg1 ;
-(id)predicateForRegion:(id)arg1 ;
-(id)_fetchedBusinessItemByMUIDForBusinessItems:(id)arg1 ;
-(void)insertBatchesOfBusinessItems:(id)arg1 forRegions:(id)arg2 ;
-(id)nearestItemForRegion:(id)arg1 inItems:(id)arg2 ;
-(id)businessItemsInRegion:(id)arg1 categories:(id)arg2 maximumDistance:(double)arg3 ;
-(id)_businessItemInRegion:(id)arg1 matchingCategories:(id)arg2 maximumDistance:(double)arg3 forBusinessItems:(id)arg4 ;
-(id)businessItemsForMuid:(unsigned long long)arg1 ;
-(id)businessItemsForMuids:(id)arg1 ;
-(id)businessItemFromManagedObject:(id)arg1 ;
-(unsigned long long)numberOfBusinessItemsForRegion:(id)arg1 ;
-(id)_fetchBusinessItemsForMUIDs:(id)arg1 ;
-(void)_updateManagedBusinessItem:(id)arg1 withBusinessItem:(id)arg2 ;
@end

