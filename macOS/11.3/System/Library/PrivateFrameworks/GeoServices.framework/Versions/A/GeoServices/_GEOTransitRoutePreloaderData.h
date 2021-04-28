/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOTileKeyList, NSMutableSet, NSMutableArray, _GEOTransitPreloadCamera;

@interface _GEOTransitRoutePreloaderData : NSObject {

	GEOTileKeyList* _tilesLoadingOrLoaded;
	GEOTileKeyList* _tilesReceived;
	GEOTileKeyList* _tilesMissed;
	NSMutableSet* _placecardsReceived;
	NSMutableSet* _placecardsMissed;
	NSMutableArray* _preloadBatches;
	unsigned long long _currentBatchGeneration;
	_GEOTransitPreloadCamera* _camera;

}

@property (nonatomic,retain) GEOTileKeyList * tilesLoadingOrLoaded;                  //@synthesize tilesLoadingOrLoaded=_tilesLoadingOrLoaded - In the implementation block
@property (nonatomic,retain) GEOTileKeyList * tilesReceived;                         //@synthesize tilesReceived=_tilesReceived - In the implementation block
@property (nonatomic,retain) GEOTileKeyList * tilesMissed;                           //@synthesize tilesMissed=_tilesMissed - In the implementation block
@property (nonatomic,retain) NSMutableSet * placecardsReceived;                      //@synthesize placecardsReceived=_placecardsReceived - In the implementation block
@property (nonatomic,retain) NSMutableSet * placecardsMissed;                        //@synthesize placecardsMissed=_placecardsMissed - In the implementation block
@property (nonatomic,retain) NSMutableArray * preloadBatches;                        //@synthesize preloadBatches=_preloadBatches - In the implementation block
@property (assign,nonatomic) unsigned long long currentBatchGeneration;              //@synthesize currentBatchGeneration=_currentBatchGeneration - In the implementation block
@property (nonatomic,retain) _GEOTransitPreloadCamera * camera;                      //@synthesize camera=_camera - In the implementation block
-(id)init;
-(GEOTileKeyList *)tilesMissed;
-(void)setTilesMissed:(GEOTileKeyList *)arg1 ;
-(void)setCamera:(_GEOTransitPreloadCamera *)arg1 ;
-(_GEOTransitPreloadCamera *)camera;
-(GEOTileKeyList *)tilesLoadingOrLoaded;
-(void)setTilesLoadingOrLoaded:(GEOTileKeyList *)arg1 ;
-(GEOTileKeyList *)tilesReceived;
-(void)setTilesReceived:(GEOTileKeyList *)arg1 ;
-(NSMutableSet *)placecardsReceived;
-(void)setPlacecardsReceived:(NSMutableSet *)arg1 ;
-(NSMutableSet *)placecardsMissed;
-(void)setPlacecardsMissed:(NSMutableSet *)arg1 ;
-(NSMutableArray *)preloadBatches;
-(void)setPreloadBatches:(NSMutableArray *)arg1 ;
-(unsigned long long)currentBatchGeneration;
-(void)setCurrentBatchGeneration:(unsigned long long)arg1 ;
@end

