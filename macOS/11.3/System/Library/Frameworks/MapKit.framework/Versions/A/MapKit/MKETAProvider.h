/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKLocationManagerObserver.h>
#import <libobjc.A.dylib/MKQuickRouteManagerDelegate.h>
#import <libobjc.A.dylib/MKQuickRouteConfigurableView.h>
#import <libobjc.A.dylib/MKQuickRouteTransportTypeFinding.h>

@protocol MKETAProviderDelegate, _MKPlaceItem, GEOTransitLineItem;
@class _MKQuickRouteManager, NSNumber, MKMapItem, NSString, NSTimer, CLLocation, GEOAutomobileOptions, GEOTransitOptions, GEOCyclingOptions, NSHashTable, NSLock;

@interface MKETAProvider : NSObject <MKLocationManagerObserver, MKQuickRouteManagerDelegate, MKQuickRouteConfigurableView, MKQuickRouteTransportTypeFinding> {

	_MKQuickRouteManager* _quickRouteManager;
	NSNumber* _lastTransportTypeFound;
	MKMapItem* _nearestStationItem;
	char _distanceOrETAIsSuppressed;
	char _distanceOrETAWasFound;
	NSString* _distanceTextItem;
	unsigned long long _etaTransportType;
	double _etaTravelTime;
	char _active;
	char _paused;
	char _inactiveInBackground;
	NSTimer* _refreshTimer;
	CLLocation* _currentLocation;
	id<MKETAProviderDelegate> _delegate;
	GEOAutomobileOptions* _automobileOptions;
	GEOTransitOptions* _transitOptions;
	GEOCyclingOptions* _cyclingOptions;
	id<_MKPlaceItem> _placeItem;
	id<GEOTransitLineItem> _lineItem;
	NSHashTable* _observers;
	NSLock* _observersLock;

}

@property (nonatomic,readonly) id<_MKPlaceItem> placeItem;                            //@synthesize placeItem=_placeItem - In the implementation block
@property (nonatomic,readonly) id<GEOTransitLineItem> lineItem;                       //@synthesize lineItem=_lineItem - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                 //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSLock * observersLock;                                  //@synthesize observersLock=_observersLock - In the implementation block
@property (nonatomic,readonly) CLLocation * currentLocation;                          //@synthesize currentLocation=_currentLocation - In the implementation block
@property (assign,nonatomic,__weak) id<MKETAProviderDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions;                //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (nonatomic,retain) GEOTransitOptions * transitOptions;                      //@synthesize transitOptions=_transitOptions - In the implementation block
@property (nonatomic,retain) GEOCyclingOptions * cyclingOptions;                      //@synthesize cyclingOptions=_cyclingOptions - In the implementation block
@property (nonatomic,readonly) NSString * distanceString; 
@property (nonatomic,readonly) unsigned long long etaTransportType; 
@property (nonatomic,readonly) double etaTravelTime; 
@property (nonatomic,readonly) NSNumber * transportTypePreferenceNumber; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<MKETAProviderDelegate>)delegate;
-(void)setDelegate:(id<MKETAProviderDelegate>)arg1 ;
-(void)pause;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)start;
-(void)cancel;
-(NSHashTable *)observers;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)_commonInit;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(void)_startTimer;
-(CLLocation *)currentLocation;
-(GEOAutomobileOptions *)automobileOptions;
-(GEOCyclingOptions *)cyclingOptions;
-(GEOTransitOptions *)transitOptions;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(void)setCyclingOptions:(GEOCyclingOptions *)arg1 ;
-(void)setTransitOptions:(GEOTransitOptions *)arg1 ;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(char)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)restart;
-(id<_MKPlaceItem>)placeItem;
-(id)initWithPlaceItem:(id)arg1 ;
-(void)_cancelTimer;
-(id)initWithLineItem:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(id<GEOTransitLineItem>)lineItem;
-(void)findDirectionsTypeForOriginCoordinate:(CLLocationCoordinate2D)arg1 destinationCoordinate:(CLLocationCoordinate2D)arg2 handler:(/*^block*/id)arg3 ;
-(void)quickRouteManager:(id)arg1 didUpdateETA:(id)arg2 error:(id)arg3 animated:(char)arg4 ;
-(char)quickRouteShouldIncludeTransitWhenNotPreferredTransportType;
-(char)quickRouteShouldOnlyUseAutomobile;
-(void)_configureETAForMapItem:(id)arg1 ;
-(void)_locationManagerApprovalDidChange:(id)arg1 ;
-(void)_updateETAHandler:(id)arg1 ;
-(id)currentMapItem;
-(void)_notifyETAAllObservers;
-(void)_updateETA;
-(void)_refreshTimer;
-(NSLock *)observersLock;
-(char)_areDistanceAndETAInformationAvailable;
-(char)_shouldUpdateETAForMapView:(id)arg1 ;
-(void)_notifyLocationAllObservers;
-(void)_updateETADisplayWithTransportType:(unsigned long long)arg1 travelTime:(double)arg2 distance:(double)arg3 ;
-(void)_didEnterBackground;
-(void)_willEnterForeground;
-(unsigned long long)etaTransportType;
-(double)etaTravelTime;
-(NSString *)distanceString;
-(NSNumber *)transportTypePreferenceNumber;
-(void)configureWithNearestStationMapItem:(id)arg1 ;
-(void)setObserversLock:(NSLock *)arg1 ;
@end

