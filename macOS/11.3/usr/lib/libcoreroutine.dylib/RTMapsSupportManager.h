/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTService.h>
#import <libobjc.A.dylib/MapsSync.MapsSyncDataQueryDelegate.h>

@class NSMutableDictionary, RTMapServiceManager;

@interface RTMapsSupportManager : RTService <MapsSync.MapsSyncDataQueryDelegate> {

	NSMutableDictionary* _queryMap;
	RTMapServiceManager* _mapServiceManager;

}

@property (nonatomic,retain) NSMutableDictionary * queryMap;                       //@synthesize queryMap=_queryMap - In the implementation block
@property (nonatomic,retain) RTMapServiceManager * mapServiceManager;              //@synthesize mapServiceManager=_mapServiceManager - In the implementation block
-(id)init;
-(void)_setup;
-(RTMapServiceManager *)mapServiceManager;
-(void)setMapServiceManager:(RTMapServiceManager *)arg1 ;
-(id)initWithMapServiceManager:(id)arg1 ;
-(void)fetchReviewedPlacesWithOptions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_createQueries;
-(NSMutableDictionary *)queryMap;
-(void)_showParkedCarBulletinForEvent:(id)arg1 ;
-(void)_showParkedCarReplacementBulletinForEvent:(id)arg1 replacingEvent:(id)arg2 ;
-(void)_clearParkedCarBulletin;
-(void)_fetchFavoritePlacesWithHandler:(/*^block*/id)arg1 ;
-(void)_fetchPinnedPlacesWithHandler:(/*^block*/id)arg1 ;
-(void)_fetchHistoryEntryPlaceDisplaysWithOptions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchHistoryEntryRoutesWithOptions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchReviewedPlacesWithOptions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchReviewedPlacesWrapperWithOptions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)queryContentsDidChangeWithQuery:(id)arg1 ;
-(void)showParkedCarBulletinForEvent:(id)arg1 ;
-(void)showParkedCarReplacementBulletinForEvent:(id)arg1 replacingEvent:(id)arg2 ;
-(void)clearParkedCarBulletin;
-(void)fetchFavoritePlacesWithHandler:(/*^block*/id)arg1 ;
-(void)fetchPinnedPlacesWithHandler:(/*^block*/id)arg1 ;
-(void)fetchHistoryEntryPlaceDisplaysWithOptions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchHistoryEntryRoutesWithOptions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(long long)_queryTypeForQuery:(id)arg1 ;
-(void)setQueryMap:(NSMutableDictionary *)arg1 ;
@end

