/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/Navigation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, GEOTrafficBannerText, MNActiveRouteInfo, NSDate, NSArray, NSString, NSMutableArray, GEORouteIncident, GEOComposedRoute, GEONavigabilityInfo;

@interface MNTrafficIncidentAlert : NSObject <NSSecureCoding> {

	NSData* _alertID;
	NSData* _etaResponseID;
	unsigned long long _alertType;
	GEOTrafficBannerText* _geoTrafficBannerText;
	MNActiveRouteInfo* _mainRouteInfo;
	MNActiveRouteInfo* _alternateRouteInfo;
	PolylineCoordinate _startValidCoordinateRange;
	PolylineCoordinate _endValidCoordinateRange;
	PolylineCoordinate _incidentCoordinate;
	PolylineCoordinate _alternateEndValidCoordinateRange;
	NSDate* _alertDate;
	double _distanceToIncident;
	NSDate* _eta;
	char _isAutomaticReroute;
	NSArray* _buttonActionTitles;
	char _shouldShowTimer;
	double _alertDisplayDuration;
	NSString* _bannerDescription;
	NSString* _bannerID;

}

@property (nonatomic,readonly) double newEstimatedTime; 
@property (nonatomic,readonly) double oldEstimatedTime; 
@property (nonatomic,readonly) double oldHistoricTime; 
@property (nonatomic,readonly) NSMutableArray * oldRouteIncidents; 
@property (nonatomic,readonly) NSData * alertID;                                                 //@synthesize alertID=_alertID - In the implementation block
@property (nonatomic,readonly) NSData * etaResponseID;                                           //@synthesize etaResponseID=_etaResponseID - In the implementation block
@property (nonatomic,readonly) NSString * bannerID;                                              //@synthesize bannerID=_bannerID - In the implementation block
@property (nonatomic,readonly) unsigned long long alertType;                                     //@synthesize alertType=_alertType - In the implementation block
@property (nonatomic,readonly) char shouldShowTimer;                                             //@synthesize shouldShowTimer=_shouldShowTimer - In the implementation block
@property (nonatomic,readonly) NSString * bannerDescription;                                     //@synthesize bannerDescription=_bannerDescription - In the implementation block
@property (assign,nonatomic) double distanceToIncident;                                          //@synthesize distanceToIncident=_distanceToIncident - In the implementation block
@property (nonatomic,retain) NSDate * eta;                                                       //@synthesize eta=_eta - In the implementation block
@property (nonatomic,readonly) NSArray * alertTitles; 
@property (nonatomic,readonly) NSArray * alertDescriptions; 
@property (nonatomic,readonly) NSArray * spokenTexts; 
@property (nonatomic,readonly) GEORouteIncident * incident; 
@property (nonatomic,readonly) MNActiveRouteInfo * mainRouteInfo;                                //@synthesize mainRouteInfo=_mainRouteInfo - In the implementation block
@property (nonatomic,readonly) GEOComposedRoute * originalRoute; 
@property (nonatomic,readonly) GEONavigabilityInfo * originalRouteNavigability; 
@property (nonatomic,readonly) MNActiveRouteInfo * alternateRouteInfo;                           //@synthesize alternateRouteInfo=_alternateRouteInfo - In the implementation block
@property (nonatomic,readonly) GEOComposedRoute * alternateRoute; 
@property (nonatomic,readonly) PolylineCoordinate startValidCoordinateRange;                     //@synthesize startValidCoordinateRange=_startValidCoordinateRange - In the implementation block
@property (nonatomic,readonly) PolylineCoordinate endValidCoordinateRange;                       //@synthesize endValidCoordinateRange=_endValidCoordinateRange - In the implementation block
@property (nonatomic,readonly) PolylineCoordinate incidentCoordinate;                            //@synthesize incidentCoordinate=_incidentCoordinate - In the implementation block
@property (nonatomic,readonly) PolylineCoordinate alternateEndValidCoordinateRange;              //@synthesize alternateEndValidCoordinateRange=_alternateEndValidCoordinateRange - In the implementation block
@property (nonatomic,readonly) NSDate * alertDate;                                               //@synthesize alertDate=_alertDate - In the implementation block
@property (nonatomic,readonly) double alertDisplayDuration; 
@property (nonatomic,readonly) char isAutomaticReroute;                                          //@synthesize isAutomaticReroute=_isAutomaticReroute - In the implementation block
@property (nonatomic,readonly) char isReroute; 
@property (nonatomic,readonly) unsigned long long secondsSaved; 
@property (nonatomic,readonly) int previousBannerChange; 
+(char)supportsSecureCoding;
+(id)validTrafficIncidentAlertForMainRouteInfo:(id)arg1 alternateRouteInfo:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)alertType;
-(id)dismissButtonTitle;
-(NSMutableArray *)oldRouteIncidents;
-(NSString *)bannerDescription;
-(int)previousBannerChange;
-(unsigned long long)secondsSaved;
-(char)shouldShowTimer;
-(NSDate *)eta;
-(void)setEta:(NSDate *)arg1 ;
-(GEORouteIncident *)incident;
-(char)isReroute;
-(GEOComposedRoute *)originalRoute;
-(void)updateLocation:(id)arg1 ;
-(GEOComposedRoute *)alternateRoute;
-(MNActiveRouteInfo *)mainRouteInfo;
-(MNActiveRouteInfo *)alternateRouteInfo;
-(NSData *)alertID;
-(NSData *)etaResponseID;
-(PolylineCoordinate)startValidCoordinateRange;
-(PolylineCoordinate)endValidCoordinateRange;
-(PolylineCoordinate)alternateEndValidCoordinateRange;
-(NSString *)bannerID;
-(void)updateAlertIDWithAlert:(id)arg1 ;
-(double)distanceToIncident;
-(void)setDistanceToIncident:(double)arg1 ;
-(NSArray *)spokenTexts;
-(id)_initWithGeoTrafficBannerText:(id)arg1 mainRouteInfo:(id)arg2 alternateRouteInfo:(id)arg3 ;
-(id)_dynamicStringValues;
-(int)_buttonDisplayForAlertAction:(unsigned long long)arg1 ;
-(id)buttonActionTitles;
-(id)_buttonTitleForAlertAction:(unsigned long long)arg1 ;
-(unsigned long long)_alertTypeForGeoBannerStyle:(int)arg1 ;
-(void)_initRouteCoordinates;
-(void)_populateServerFields:(id)arg1 ;
-(PolylineCoordinate)_routeCoordinateOnRoute:(id)arg1 distanceFromEnd:(double)arg2 ;
-(char)isAutomaticReroute;
-(void)_populateButtonActionAndTitles:(id)arg1 ;
-(NSArray *)alertTitles;
-(NSArray *)alertDescriptions;
-(GEONavigabilityInfo *)originalRouteNavigability;
-(double)alertDisplayDuration;
-(int)acceptButtonDisplay;
-(int)dismissButtonDisplay;
-(id)acceptButtonTitle;
-(PolylineCoordinate)incidentCoordinate;
-(NSDate *)alertDate;
-(double)newEstimatedTime;
-(double)oldEstimatedTime;
-(double)oldHistoricTime;
@end

