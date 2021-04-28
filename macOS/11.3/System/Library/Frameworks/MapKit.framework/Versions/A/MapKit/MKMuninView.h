/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/VKMapViewCameraDelegate.h>
#import <libobjc.A.dylib/VKMapViewDelegate.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol MKMapServiceTicket, MKMuninViewDelegate;
@class VKMapView, NSArray, NSString, MKMapItem, GEOStorefrontView, NSDate, MKHapticEngine, GEOMuninViewState, VKLabelMarker, VKMuninMarker, NSURL;

@interface MKMuninView : NSView <VKMapViewCameraDelegate, VKMapViewDelegate, NSCoding> {

	VKMapView* _muninView;
	CLLocationCoordinate2D _lastCoordinate;
	NSArray* _lastGroundViews;
	NSString* _lastJunctionName;
	id<MKMapServiceTicket> _refineTicket;
	id<MKMapServiceTicket> _revGeoTicket;
	CGRect _oldRect;
	char _hasValidViewState;
	char _storefrontFullyDrawn;
	char _wantsStorefrontCloseUpView;
	char _moveToStorefrontViewInProgress;
	char _didTriggerAdequatelyDrawnNotification;
	MKMapItem* _mapItem;
	MKMapItem* _revGeoMapItem;
	GEOStorefrontView* _requestedStorefrontView;
	NSDate* _startTime;
	int _triggerAction;
	MKHapticEngine* _hapticEngine;
	char _hasEnteredMunin;
	char _navigatingEnabled;
	char _panningEnabled;
	char _pinchingEnabled;
	id<MKMuninViewDelegate> _delegate;
	GEOMuninViewState* _muninViewState;

}

@property (nonatomic,retain) VKMapView * muninView;                                //@synthesize muninView=_muninView - In the implementation block
@property (assign,nonatomic) char hasEnteredMunin;                                 //@synthesize hasEnteredMunin=_hasEnteredMunin - In the implementation block
@property (assign,nonatomic) char navigatingEnabled;                               //@synthesize navigatingEnabled=_navigatingEnabled - In the implementation block
@property (assign,nonatomic) char panningEnabled;                                  //@synthesize panningEnabled=_panningEnabled - In the implementation block
@property (assign,nonatomic) char pinchingEnabled;                                 //@synthesize pinchingEnabled=_pinchingEnabled - In the implementation block
@property (assign,nonatomic) char showsRoadLabels; 
@property (assign,nonatomic) char showsPointLabels; 
@property (assign,nonatomic) CLLocationCoordinate2D centerCoordinate; 
@property (assign,nonatomic) double presentationYaw; 
@property (assign,nonatomic,__weak) id<MKMuninViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) GEOMuninViewState * muninViewState;                 //@synthesize muninViewState=_muninViewState - In the implementation block
@property (nonatomic,readonly) VKLabelMarker * selectedLabelMarker; 
@property (nonatomic,readonly) NSArray * visibleRoadLabels; 
@property (nonatomic,readonly) NSArray * imageResources; 
@property (nonatomic,readonly) VKMuninMarker * muninMarker; 
@property (nonatomic,readonly) NSArray * visiblePlaceMUIDs; 
@property (nonatomic,readonly) MKMapItem * mapItem;                                //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,readonly) MKMapItem * revGeoMapItem;                          //@synthesize revGeoMapItem=_revGeoMapItem - In the implementation block
@property (nonatomic,readonly) NSDate * collectionDate; 
@property (nonatomic,readonly) char adequatelyDrawn; 
@property (getter=isLoading,nonatomic,readonly) char loading; 
@property (nonatomic,readonly) NSURL * sharingURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<MKMuninViewDelegate>)delegate;
-(void)setDelegate:(id<MKMuninViewDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(MKMapItem *)mapItem;
-(CLLocationCoordinate2D)centerCoordinate;
-(GEOMuninViewState *)muninViewState;
-(char)isLoading;
-(void)setCenterCoordinate:(CLLocationCoordinate2D)arg1 ;
-(VKMuninMarker *)muninMarker;
-(void)addCustomFeatureDataSource:(id)arg1 ;
-(void)removeCustomFeatureDataSource:(id)arg1 ;
-(double)presentationYaw;
-(VKLabelMarker *)selectedLabelMarker;
-(id)labelMarkerForCustomFeatureAnnotation:(id)arg1 ;
-(void)selectLabelMarker:(id)arg1 ;
-(void)deselectLabelMarker;
-(void)mapLayerDidChangeSceneState:(id)arg1 withState:(unsigned long long)arg2 ;
-(void)mapLayer:(id)arg1 nearestJunctionDidChange:(id)arg2 currentRoad:(id)arg3 ;
-(void)mapLayerDidChangeVisibleRegion;
-(void)mapLayerDidChangeRegionAnimated:(char)arg1 ;
-(void)mapLayerWillAnimateToLocation:(CGSize)arg1 ;
-(void)mapLayerWasUnableToAnimate;
-(NSURL *)sharingURL;
-(char)showsPointLabels;
-(void)setNavigatingEnabled:(char)arg1 ;
-(void)setPanningEnabled:(char)arg1 ;
-(void)setPinchingEnabled:(char)arg1 ;
-(void)_maps_initCommon;
-(char)showsRoadLabels;
-(void)setShowsRoadLabels:(char)arg1 ;
-(void)setShowsPointLabels:(char)arg1 ;
-(char)hasEnteredMunin;
-(void)setPresentationYaw:(double)arg1 pitch:(double)arg2 animated:(char)arg3 ;
-(NSDate *)collectionDate;
-(void)recordTriggerAction:(int)arg1 ;
-(void)_enterMuninForMapItem:(id)arg1 wantsCloseUpView:(char)arg2 ;
-(void)_enterMuninForMuninMarker:(id)arg1 withHeading:(double)arg2 ;
-(void)_enterMuninForMuninViewState:(id)arg1 ;
-(void)_resetViewState;
-(char)cancelPendingMove;
-(void)_updateCameraFrame;
-(void)_updateCompass;
-(void)_updateLocationInfo;
-(void)_setInitialLocationInfo;
-(char)_moveToStorefrontView:(id)arg1 animated:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)tapAtPoint:(CGPoint)arg1 ;
-(void)moveToCloseUpViewAnimated:(char)arg1 ;
-(void)moveToStandOffViewAnimated:(char)arg1 ;
-(void)_refineLabelMarker:(id)arg1 ;
-(void)_updateLocationInfoForCoordinate:(CLLocationCoordinate2D)arg1 allowReverseGeocodeIfNeeded:(char)arg2 ;
-(void)moveToCloseUpView;
-(id)_locationInfoWithHeading:(double)arg1 ;
-(void)_reverseGeocodeCoordinate:(CLLocationCoordinate2D)arg1 ;
-(VKMapView *)muninView;
-(void)setPresentationYaw:(double)arg1 ;
-(void)setPresentationYaw:(double)arg1 animated:(char)arg2 ;
-(void)enterMuninWithEntryPoint:(id)arg1 ;
-(void)openInMapsWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)adequatelyDrawn;
-(char)moveToMapItem:(id)arg1 wantsCloseUpView:(char)arg2 orMuninMarker:(id)arg3 withHeading:(double)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)jumpToCloseUpView;
-(void)jumpToStandOffView;
-(void)moveToStandOffView;
-(void)_handleCompassTap;
-(NSArray *)visiblePlaceMUIDs;
-(NSArray *)visibleRoadLabels;
-(NSArray *)imageResources;
-(void)setMuninView:(VKMapView *)arg1 ;
-(void)setHasEnteredMunin:(char)arg1 ;
-(char)navigatingEnabled;
-(char)panningEnabled;
-(char)pinchingEnabled;
-(MKMapItem *)revGeoMapItem;
@end

