/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEOEnrouteNotice, NSArray, NSString, GEOComposedTrafficCamera, GEOComposedTrafficSignal, GEOComposedRouteAnnotation, GEOLatLng;

@interface GEOComposedEnrouteNotice : NSObject <NSSecureCoding> {

	GEOEnrouteNotice* _enrouteNotice;
	NSArray* _guidanceEvents;
	SCD_Struct_GE84 _routeCoordinate;

}

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) GEOComposedTrafficCamera * trafficCamera; 
@property (nonatomic,readonly) GEOComposedTrafficSignal * trafficSignal; 
@property (nonatomic,readonly) GEOComposedRouteAnnotation * routeAnnotation; 
@property (nonatomic,readonly) char hasHighlightDistance; 
@property (nonatomic,readonly) unsigned highlightDistance; 
@property (nonatomic,readonly) char hasGroupIdentifier; 
@property (nonatomic,readonly) unsigned groupIdentifier; 
@property (nonatomic,readonly) char hasGroupItemHorizontalDisplayOrder; 
@property (nonatomic,readonly) unsigned groupItemHorizontalDisplayOrder; 
@property (nonatomic,readonly) char hasGroupItemVerticalDisplayOrder; 
@property (nonatomic,readonly) unsigned groupItemVerticalDisplayOrder; 
@property (nonatomic,readonly) char hasPriority; 
@property (nonatomic,readonly) unsigned priority; 
@property (nonatomic,readonly) NSArray * guidanceEvents;                                  //@synthesize guidanceEvents=_guidanceEvents - In the implementation block
@property (nonatomic,readonly) GEOLatLng * position; 
@property (nonatomic,readonly) SCD_Struct_GE84 routeCoordinate;                           //@synthesize routeCoordinate=_routeCoordinate - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(unsigned)groupIdentifier;
-(unsigned)priority;
-(id)initWithEnrouteNotice:(id)arg1 enrouteNoticeIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3 onRoute:(id)arg4 ;
-(NSArray *)guidanceEvents;
-(char)hasHighlightDistance;
-(unsigned)highlightDistance;
-(char)hasGroupItemHorizontalDisplayOrder;
-(unsigned)groupItemHorizontalDisplayOrder;
-(char)hasGroupItemVerticalDisplayOrder;
-(unsigned)groupItemVerticalDisplayOrder;
-(char)hasPriority;
-(id)initWithEnrouteNotice:(id)arg1 enrouteNoticeIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3 onRoute:(id)arg4 withPosition:(id)arg5 ;
-(id)initWithEnrouteNotice:(id)arg1 enrouteNoticeIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3 onRoute:(id)arg4 withPolylineCoordinate:(SCD_Struct_GE84)arg5 ;
-(GEOComposedTrafficCamera *)trafficCamera;
-(GEOComposedTrafficSignal *)trafficSignal;
-(GEOComposedRouteAnnotation *)routeAnnotation;
-(id)titleFormatForLocation:(id)arg1 ;
-(id)detailFormatForLocation:(id)arg1 ;
-(char)hasGroupIdentifier;
-(SCD_Struct_GE84)routeCoordinate;
@end

