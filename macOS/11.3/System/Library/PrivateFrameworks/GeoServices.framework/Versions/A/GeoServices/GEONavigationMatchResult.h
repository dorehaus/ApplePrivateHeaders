/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEORouteMatch, GEORoadMatch, GEOLocation, GEONavigationMatchInfo;

@interface GEONavigationMatchResult : NSObject {

	unsigned long long _type;
	GEORouteMatch* _routeMatch;
	GEORoadMatch* _roadMatch;
	GEOLocation* _rawLocation;
	GEONavigationMatchInfo* _detailedMatchInfo;
	char _locationUnreliable;

}

@property (nonatomic,readonly) unsigned long long type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) GEORouteMatch * routeMatch;                              //@synthesize routeMatch=_routeMatch - In the implementation block
@property (nonatomic,readonly) GEORoadMatch * roadMatch;                                //@synthesize roadMatch=_roadMatch - In the implementation block
@property (nonatomic,readonly) GEOLocation * rawLocation;                               //@synthesize rawLocation=_rawLocation - In the implementation block
@property (nonatomic,readonly) GEONavigationMatchInfo * detailedMatchInfo;              //@synthesize detailedMatchInfo=_detailedMatchInfo - In the implementation block
@property (nonatomic,readonly) char locationUnreliable;                                 //@synthesize locationUnreliable=_locationUnreliable - In the implementation block
+(id)matchResultWithRawLocation:(id)arg1 ;
+(id)matchResultWithRouteMatch:(id)arg1 location:(id)arg2 ;
+(id)matchResultWithRoadMatch:(id)arg1 location:(id)arg2 ;
-(unsigned long long)type;
-(GEORouteMatch *)routeMatch;
-(void)setRouteMatch:(GEORouteMatch *)arg1 ;
-(GEORoadMatch *)roadMatch;
-(void)setLocationUnreliable:(char)arg1 ;
-(GEONavigationMatchInfo *)detailedMatchInfo;
-(void)setDetailedMatchInfo:(GEONavigationMatchInfo *)arg1 ;
-(GEOLocation *)rawLocation;
-(id)initWithRouteMatch:(id)arg1 location:(id)arg2 ;
-(id)initWithRoadMatch:(id)arg1 location:(id)arg2 ;
-(id)initWithRawLocation:(id)arg1 ;
-(char)locationUnreliable;
@end

