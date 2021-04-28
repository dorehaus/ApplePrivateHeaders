/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol VKRouteOverlay;
@class MKMapCamera, NSAppearance, VKRouteContext, GEOComposedRoute, GEOApplicationAuditToken, MKPointOfInterestFilter, NSArray;

@interface MKMapSnapshotOptions : NSObject <NSSecureCoding, NSCopying> {

	MKMapCamera* _camera;
	SCD_Struct_MK7 _mapRect;
	SCD_Struct_MK6 _region;
	unsigned long long _mapType;
	long long _mode;
	char _showsPointLabels;
	char _showsBuildings;
	char _showsNightMode;
	CGSize _size;
	NSAppearance* _appearance;
	NSEdgeInsets _edgeInsets;
	unsigned long long _signpostId;
	VKRouteContext* _routeContext;
	id<VKRouteOverlay> _routeOverlay;
	GEOComposedRoute* _composedRouteForRouteLine;
	GEOApplicationAuditToken* _auditToken;
	char _usingRect;
	char _showsVenues;
	unsigned char _searchResultsType;
	MKPointOfInterestFilter* _pointOfInterestFilter;
	NSArray* _annotationViews;
	NSArray* _customFeatureAnnotations;

}

@property (nonatomic,readonly) char usingRect;                                                                                                                  //@synthesize usingRect=_usingRect - In the implementation block
@property (getter=_viewportMode,nonatomic,readonly) long long viewportMode;                                                                                     //@synthesize mode=_mode - In the implementation block
@property (assign,setter=_setShowsNightMode:,getter=_showsNightMode,nonatomic) char showsNightMode;                                                             //@synthesize showsNightMode=_showsNightMode - In the implementation block
@property (assign,setter=_setShowsVenues:,getter=_showsVenues,nonatomic) char showsVenues;                                                                      //@synthesize showsVenues=_showsVenues - In the implementation block
@property (assign,setter=_setShowsPointLabels:,getter=_showsPointLabels,nonatomic) char showsPointLabels;                                                       //@synthesize showsPointLabels=_showsPointLabels - In the implementation block
@property (assign,setter=_setEdgeInsets:,getter=_edgeInsets,nonatomic) NSEdgeInsets edgeInsets;                                                                 //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic) unsigned long long signpostId;                                                                                                     //@synthesize signpostId=_signpostId - In the implementation block
@property (setter=_setComposedRouteForRouteLine:,getter=_composedRouteForRouteLine,nonatomic,retain) GEOComposedRoute * composedRouteForRouteLine;              //@synthesize composedRouteForRouteLine=_composedRouteForRouteLine - In the implementation block
@property (setter=_setRouteContext:,getter=_routeContext,nonatomic,retain) VKRouteContext * routeContext;                                                       //@synthesize routeContext=_routeContext - In the implementation block
@property (setter=_setRouteOverlay:,getter=_routeOverlay,nonatomic,retain) id<VKRouteOverlay> routeOverlay;                                                     //@synthesize routeOverlay=_routeOverlay - In the implementation block
@property (nonatomic,copy) NSArray * annotationViews;                                                                                                           //@synthesize annotationViews=_annotationViews - In the implementation block
@property (assign,setter=_setSearchResultsType:,getter=_searchResultsType,nonatomic) unsigned char searchResultsType;                                           //@synthesize searchResultsType=_searchResultsType - In the implementation block
@property (setter=_setCustomFeatureAnnotations:,getter=_customFeatureAnnotations,nonatomic,copy) NSArray * customFeatureAnnotations;                            //@synthesize customFeatureAnnotations=_customFeatureAnnotations - In the implementation block
@property (setter=_setAuditToken:,getter=_auditToken,nonatomic,retain) GEOApplicationAuditToken * auditToken;                                                   //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,copy) MKMapCamera * camera;                                                                                                                //@synthesize camera=_camera - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK7 mapRect;                                                                                                            //@synthesize mapRect=_mapRect - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK34 region;                                                                                                            //@synthesize region=_region - In the implementation block
@property (assign,nonatomic) unsigned long long mapType;                                                                                                        //@synthesize mapType=_mapType - In the implementation block
@property (nonatomic,copy) MKPointOfInterestFilter * pointOfInterestFilter;                                                                                     //@synthesize pointOfInterestFilter=_pointOfInterestFilter - In the implementation block
@property (assign,nonatomic) char showsPointsOfInterest; 
@property (assign,nonatomic) char showsBuildings;                                                                                                               //@synthesize showsBuildings=_showsBuildings - In the implementation block
@property (assign,nonatomic) CGSize size;                                                                                                                       //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) NSAppearance * appearance;                                                                                                         //@synthesize appearance=_appearance - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)size;
-(char)isEqual:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_auditToken;
-(void)setSize:(CGSize)arg1 ;
-(NSAppearance *)appearance;
-(void)setAppearance:(NSAppearance *)arg1 ;
-(void)setRegion:(SCD_Struct_MK34)arg1 ;
-(NSEdgeInsets)_edgeInsets;
-(SCD_Struct_MK34)region;
-(void)setMapRect:(SCD_Struct_MK7)arg1 ;
-(void)setMapType:(unsigned long long)arg1 ;
-(void)setCamera:(MKMapCamera *)arg1 ;
-(unsigned long long)mapType;
-(MKMapCamera *)camera;
-(SCD_Struct_MK7)mapRect;
-(NSArray *)annotationViews;
-(void)_setCustomFeatureAnnotations:(id)arg1 ;
-(void)setPointOfInterestFilter:(MKPointOfInterestFilter *)arg1 ;
-(MKPointOfInterestFilter *)pointOfInterestFilter;
-(void)setShowsPointsOfInterest:(char)arg1 ;
-(void)setShowsBuildings:(char)arg1 ;
-(char)showsBuildings;
-(char)_showsNightMode;
-(char)showsPointsOfInterest;
-(char)_showsVenues;
-(void)_setShowsVenues:(char)arg1 ;
-(void)_setShowsNightMode:(char)arg1 ;
-(void)_setEdgeInsets:(NSEdgeInsets)arg1 ;
-(id)_routeContext;
-(void)_setSearchResultsType:(unsigned char)arg1 ;
-(char)usingRect;
-(char)_showsPointLabels;
-(void)_setShowsPointLabels:(char)arg1 ;
-(void)setAnnotationViews:(NSArray *)arg1 ;
-(unsigned long long)signpostId;
-(void)setSignpostId:(unsigned long long)arg1 ;
-(void)_setRouteContext:(id)arg1 ;
-(id)_routeOverlay;
-(void)_setRouteOverlay:(id)arg1 ;
-(void)_setAuditToken:(id)arg1 ;
-(id)_composedRouteForRouteLine;
-(void)_setComposedRouteForRouteLine:(id)arg1 ;
-(long long)_viewportMode;
-(unsigned char)_searchResultsType;
-(id)_customFeatureAnnotations;
@end
