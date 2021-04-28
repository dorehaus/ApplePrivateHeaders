/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapEdgeBuilder.h>

@interface GEOMapEdgeTransitBuilder : GEOMapEdgeBuilder {

	deque<geo::TransitEdgePiece, std::__1::allocator<geo::TransitEdgePiece>>* _pieces;

}
-(Matrix<float, 2, 1>)_lastPoint;
-(id)initWithMap:(id)arg1 firstPiece:(const TransitEdgePiece*)arg2 ;
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
@end

