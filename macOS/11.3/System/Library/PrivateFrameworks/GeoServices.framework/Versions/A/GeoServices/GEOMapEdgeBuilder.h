/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequest.h>

@class GEOMapTileFinder, GEOMapAccess;

@interface GEOMapEdgeBuilder : GEOMapRequest {

	char _buildAhead;
	char _buildBehind;
	Matrix<float, 2, 1> _firstTilePoint;
	Matrix<float, 2, 1> _lastTilePoint;
	GEOMapTileFinder* _currentTileFinder;
	/*^block*/id _edgeHandler;
	unordered_set<_GEOTileKey, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, std::__1::allocator<_GEOTileKey>>* _tileKeysSeen;
	char _searchDirection;
	unsigned long long _buildDirection;

}

@property (nonatomic,copy) id edgeHandler;                                   //@synthesize edgeHandler=_edgeHandler - In the implementation block
@property (nonatomic,readonly) GEOMapAccess * map; 
@property (assign,nonatomic) unsigned long long buildDirection;              //@synthesize buildDirection=_buildDirection - In the implementation block
-(void)cancel;
-(GEOMapAccess *)map;
-(Matrix<float, 2, 1>)_lastPoint;
-(void)setBuildDirection:(unsigned long long)arg1 ;
-(void)buildEdge:(/*^block*/id)arg1 ;
-(id)initWithMap:(id)arg1 ;
-(char)_pointConnects:(const Matrix<float, 2, 1>*)arg1 rect:(const SCD_Struct_GE36*)arg2 to:(const GEOCoarseLocationLatLng*)arg3 ;
-(unsigned long long)_maxTileCount;
-(void)_buildCompleteEdge;
-(char)_findEdgeAheadInTile:(id)arg1 ;
-(char)_findEdgeBehindInTile:(id)arg1 ;
-(char)_shouldFindEdgeAhead;
-(char)_shouldFindEdgeBehind;
-(Matrix<float, 2, 1>)_firstPoint;
-(id)_firstTile;
-(id)_lastTile;
-(id)_tileFinderForMap:(id)arg1 center:(GEOCoarseLocationLatLng)arg2 radius:(double)arg3 ;
-(void)setEdgeHandler:(id)arg1 ;
-(void)_findTilesAdjacentToTile:(const GEOTileKey*)arg1 containingPoint:(const Matrix<float, 2, 1>*)arg2 findAhead:(char)arg3 ;
-(char)_findEdgeAhead;
-(char)_findEdgeBehind;
-(char)_findNextEdge;
-(char)_edgeStart:(const Matrix<float, 2, 1>*)arg1 end:(const Matrix<float, 2, 1>*)arg2 connectsTo:(const Matrix<float, 2, 1>*)arg3 ;
-(id)edgeHandler;
-(unsigned long long)buildDirection;
@end

