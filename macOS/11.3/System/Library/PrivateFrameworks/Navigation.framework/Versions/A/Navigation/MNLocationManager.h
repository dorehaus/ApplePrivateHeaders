/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>
#import <libobjc.A.dylib/MNLocationProviderDelegate.h>

@protocol MNLocationProvider, MNLocationRecorder;
@class NSBundle, NSString, NSHashTable, NSLock, MNLocation, GEOLocationShifter, CLHeading, NSDate, NSError;

@interface MNLocationManager : NSObject <GEOResourceManifestTileGroupObserver, MNLocationProviderDelegate> {

	unsigned long long _locationProviderType;
	id<MNLocationProvider> _locationProvider;
	id<MNLocationRecorder> _locationRecorder;
	NSBundle* _effectiveBundle;
	NSString* _effectiveBundleIdentifier;
	NSHashTable* _accessRequesters;
	NSHashTable* _locationObservers;
	NSHashTable* _locationListeners;
	NSHashTable* _headingObservers;
	NSLock* _observersLock;
	NSLock* _lastLocationLock;
	MNLocation* _lastLocation;
	GEOLocationShifter* _locationShifter;
	double _lastLocationUpdateTime;
	double _lastLocationReportTime;
	double _locationUpdateStartTime;
	double _expectedGpsUpdateInterval;
	CLHeading* _heading;
	NSDate* _lastUpdatedHeadingDate;
	char _hasCustomDesiredAccuracy;
	char _trackingLocation;
	char _logStartStopLocationUpdates;
	char _isLastLocationStale;
	char _lastLocationPushed;
	char _useCourseForHeading;
	char _trackingHeading;
	int _headingOrientation;
	/*^block*/id _locationCorrector;
	NSError* _locationError;

}

@property (nonatomic,copy) id locationCorrector;                                     //@synthesize locationCorrector=_locationCorrector - In the implementation block
@property (nonatomic,copy) NSString * effectiveBundleIdentifier; 
@property (nonatomic,retain) NSBundle * effectiveBundle; 
@property (nonatomic,readonly) char isHeadingServicesAvailable; 
@property (nonatomic,readonly) CLHeading * heading;                                  //@synthesize heading=_heading - In the implementation block
@property (nonatomic,readonly) MNLocation * lastLocation; 
@property (nonatomic,readonly) char hasLocation; 
@property (nonatomic,readonly) char isLastLocationStale;                             //@synthesize isLastLocationStale=_isLastLocationStale - In the implementation block
@property (nonatomic,readonly) char coarseModeEnabled; 
@property (nonatomic,readonly) NSError * locationError;                              //@synthesize locationError=_locationError - In the implementation block
@property (nonatomic,readonly) double expectedGpsUpdateInterval; 
@property (nonatomic,readonly) double timeScale; 
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) int headingOrientation;                                 //@synthesize headingOrientation=_headingOrientation - In the implementation block
@property (nonatomic,retain) id<MNLocationRecorder> locationRecorder;                //@synthesize locationRecorder=_locationRecorder - In the implementation block
@property (nonatomic,readonly) unsigned long long locationProviderType;              //@synthesize locationProviderType=_locationProviderType - In the implementation block
@property (nonatomic,retain) id<MNLocationProvider> locationProvider;                //@synthesize locationProvider=_locationProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedLocationManager;
-(void)dealloc;
-(id)init;
-(NSString *)effectiveBundleIdentifier;
-(void)_reset;
-(void)stop;
-(void)setDesiredAccuracy:(double)arg1 ;
-(double)desiredAccuracy;
-(MNLocation *)lastLocation;
-(void)setLastLocation:(MNLocation *)arg1 ;
-(void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3 ;
-(CLHeading *)heading;
-(char)hasLocation;
-(void)startLocationUpdateWithObserver:(id)arg1 ;
-(void)stopLocationUpdateWithObserver:(id)arg1 ;
-(double)expectedGpsUpdateInterval;
-(void)setLocationProvider:(id<MNLocationProvider>)arg1 ;
-(void)setLocationRecorder:(id<MNLocationRecorder>)arg1 ;
-(id<MNLocationProvider>)locationProvider;
-(char)isLocationServicesApproved;
-(char)isLocationServicesDenied;
-(char)isLocationServicesRestricted;
-(char)isLocationServicesAvailable;
-(NSBundle *)effectiveBundle;
-(void)setEffectiveBundle:(NSBundle *)arg1 ;
-(void)setEffectiveBundleIdentifier:(NSString *)arg1 ;
-(void)_setTrackingLocation:(char)arg1 ;
-(void)_reportLocationStatus:(SEL)arg1 ;
-(void)_reportLocationReset;
-(char)isLocationServicesPossiblyAvailable;
-(double)distanceFilter;
-(void)setDistanceFilter:(double)arg1 ;
-(double)timeScale;
-(void)locationProvider:(id)arg1 didReceiveError:(id)arg2 ;
-(id<MNLocationRecorder>)locationRecorder;
-(void)_reportLocationSuccess;
-(void)_reportLocationFailureWithError:(id)arg1 ;
-(char)isLocationServicesPossiblyAvailable:(id*)arg1 ;
-(void)_startLocationUpdateWithObserver:(id)arg1 desiredAccuracy:(double)arg2 ;
-(void)_setTrackingHeading:(char)arg1 ;
-(void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2 ;
-(void)locationProvider:(id)arg1 didUpdateHeading:(id)arg2 ;
-(void)locationProviderDidChangeAuthorizationStatus:(id)arg1 ;
-(char)locationProviderShouldPauseLocationUpdates:(id)arg1 ;
-(void)locationProviderDidPauseLocationUpdates:(id)arg1 ;
-(void)locationProviderDidResumeLocationUpdates:(id)arg1 ;
-(void)setLocationCorrector:(id)arg1 ;
-(char)isLocationServicesAuthorizationNeeded;
-(char)isHeadingServicesAvailable;
-(void)pushLocation:(id)arg1 ;
-(void)startHeadingUpdateWithObserver:(id)arg1 ;
-(void)stopHeadingUpdateWithObserver:(id)arg1 ;
-(char)isLastLocationStale;
-(NSError *)locationError;
-(id)locationCorrector;
-(int)headingOrientation;
-(void)setHeadingOrientation:(int)arg1 ;
-(char)coarseModeEnabled;
-(void)locationProvider:(id)arg1 didChangeCoarseMode:(char)arg2 ;
-(void)addLocationListener:(id)arg1 ;
-(void)removeLocationListener:(id)arg1 ;
-(void)setLocationProviderType:(unsigned long long)arg1 ;
-(void)_createLocationAssertion;
-(void)_clearLocationAssertion;
-(void)_updateForNewLocation:(id)arg1 rawLocation:(id)arg2 ;
-(void)useGPSLocationProviderWithCLParameters:(id)arg1 ;
-(void)useLeechedLocationProvider;
-(void)useHybridLocationProvider;
-(void)useTraceLocationProvider:(id)arg1 ;
-(void)useSimulationLocationProvider:(id)arg1 ;
-(void)_setLastLocationReceivedFromMaps:(id)arg1 ;
-(char)_hasLocationAssertion;
-(void)requestLocationAccessFor:(id)arg1 ;
-(void)removeLocationAccessFor:(id)arg1 ;
-(void)removeLocationAccessForAll;
-(unsigned long long)locationProviderType;
@end
