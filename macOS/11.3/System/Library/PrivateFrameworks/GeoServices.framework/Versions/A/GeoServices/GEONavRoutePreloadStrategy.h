/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>
#import <libobjc.A.dylib/GEORoutePreloadStrategy.h>

@protocol OS_dispatch_queue, GEORoutePreloadCamera, OS_dispatch_source;
@class NSObject, GEORoutePreloader, GEOComposedRoute, GEOTileKeyList, NSMutableArray, NSMapTable, NSMutableDictionary, NSString;

@interface GEONavRoutePreloadStrategy : NSObject <GEOResourceManifestTileGroupObserver, GEORoutePreloadStrategy> {

	NSObject*<OS_dispatch_queue> _workQueue;
	GEORoutePreloader* _preloader;
	GEOComposedRoute* _route;
	double _currentRoutePosition;
	int _downloadState;
	id<GEORoutePreloadCamera> _camera;
	GEOTileKeyList* _tilesLoadingOrLoaded;
	GEOTileKeyList* _tilesReceived;
	NSMutableArray* _steps;
	unsigned _stepGeneration;
	long long _currentLoadingSteps;
	NSMapTable* _stepErrors;
	NSMapTable* _stepLifetimeErrors;
	char _anyErrors;
	char _finished;
	double _beginTime;
	double _mostRecentErrorTime;
	char _hadEnoughTilesToDisableNetworking;
	NSObject*<OS_dispatch_source> _geodCrashTimer;
	double _maneuverSizeInMeters;
	char _enabled;
	double _stepSizeInMeters;
	NSMutableDictionary* _tileSetStyles;

}

@property (nonatomic,retain) id<GEORoutePreloadCamera> camera;                  //@synthesize camera=_camera - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) GEORoutePreloader * preloader;              //@synthesize preloader=_preloader - In the implementation block
@property (nonatomic,retain) GEOComposedRoute * route;                          //@synthesize route=_route - In the implementation block
-(id)init;
-(void)start;
-(void)stop;
-(void)_start;
-(void)_stop;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(void)setCamera:(id<GEORoutePreloadCamera>)arg1 ;
-(id<GEORoutePreloadCamera>)camera;
-(void)setPreloader:(GEORoutePreloader *)arg1 ;
-(void)updateWithRoute:(id)arg1 routeMatch:(id)arg2 ;
-(void)performTearDown;
-(GEOComposedRoute *)route;
-(void)updateWithRouteMatch:(id)arg1 ;
-(void)observedNetworkQualityDidChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 ;
-(void)setRoute:(GEOComposedRoute *)arg1 ;
-(void)_retryFailuresWithErrorsReset:(char)arg1 ;
-(void)_performNextRequests;
-(void)addTileSetStyle:(int)arg1 betweenZoom:(unsigned)arg2 andZoom:(unsigned)arg3 ;
-(void)_geodCrashed;
-(GEORoutePreloader *)preloader;
-(void)_resetErrCounts;
-(void)_cancelStep:(id)arg1 ;
-(id)_descriptionForStep:(id)arg1 ;
-(void)_incrementErrorForStep:(id)arg1 ;
-(char)_loadStep:(id)arg1 requireWiFi:(char)arg2 ;
-(void)_performTileRequestsWithCurrentRoutePositionStepIndex:(long long)arg1 firstErrorStepIndex:(long long)arg2 firstLoadStepIndex:(long long)arg3 loadStepsAhead:(long long)arg4 loadStepsAheadIfNoWiFi:(long long)arg5 ;
-(void)_accumulateSteps;
-(void)_cancelAllSteps;
-(void)_cancelRequestsInPast;
@end

