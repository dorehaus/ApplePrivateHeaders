/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <libobjc.A.dylib/MNLocationProvider.h>

@protocol MNLocationProviderDelegate;
@class NSLock, CLLocationManager, MNLocationProviderCLParameters, NSBundle, NSString, NSRunLoop;

@interface MNCoreLocationProvider : NSObject <CLLocationManagerDelegate, MNLocationProvider> {

	char _waitingForAuthorization;
	char _hasQueriedAuthorization;
	NSLock* _authorizationLock;
	char _alternate;
	CLLocationManager* _clLocationManager;
	MNLocationProviderCLParameters* _clParameters;
	id<MNLocationProviderDelegate> _delegate;
	char _locationServicesPreferencesDialogEnabled;
	int _authorizationStatus;
	char _coarseModeEnabled;
	NSBundle* _effectiveBundle;
	NSString* _effectiveBundleIdentifier;
	/*^block*/id _authorizationRequestBlock;
	NSRunLoop* _debug_initRunLoop;
	NSRunLoop* _debug_deinitRunLoop;
	char _updatingLocations;

}

@property (nonatomic,readonly) CLLocationManager * _clLocationManager; 
@property (assign,nonatomic) char updatingLocations;                                                                                       //@synthesize updatingLocations=_updatingLocations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNLocationProviderDelegate> delegate;                                                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSBundle * effectiveBundle; 
@property (nonatomic,copy) NSString * effectiveBundleIdentifier; 
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,getter=isLocationServicesPreferencesDialogEnabled,nonatomic) char locationServicesPreferencesDialogEnabled; 
@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) char matchInfoEnabled; 
@property (nonatomic,readonly) double expectedGpsUpdateInterval; 
@property (nonatomic,readonly) int authorizationStatus; 
@property (nonatomic,readonly) char coarseModeEnabled;                                                                                     //@synthesize coarseModeEnabled=_coarseModeEnabled - In the implementation block
@property (nonatomic,readonly) char usesCLMapCorrection; 
@property (nonatomic,readonly) char isSimulation; 
@property (nonatomic,readonly) char isTracePlayer; 
@property (nonatomic,readonly) unsigned long long traceVersion; 
@property (nonatomic,readonly) double timeScale; 
-(void)dealloc;
-(id)init;
-(id<MNLocationProviderDelegate>)delegate;
-(void)setDelegate:(id<MNLocationProviderDelegate>)arg1 ;
-(NSString *)effectiveBundleIdentifier;
-(void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3 ;
-(void)locationManager:(id)arg1 didUpdateHeading:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManagerDidChangeAuthorization:(id)arg1 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(int)authorizationStatus;
-(void)setDesiredAccuracy:(double)arg1 ;
-(void)stopUpdatingLocation;
-(void)startUpdatingLocation;
-(double)desiredAccuracy;
-(char)isSimulation;
-(double)expectedGpsUpdateInterval;
-(char)isLocationServicesPreferencesDialogEnabled;
-(void)setLocationServicesPreferencesDialogEnabled:(char)arg1 ;
-(NSBundle *)effectiveBundle;
-(void)setEffectiveBundle:(NSBundle *)arg1 ;
-(void)setEffectiveBundleIdentifier:(NSString *)arg1 ;
-(void)stopUpdatingHeading;
-(void)startUpdatingHeading;
-(double)distanceFilter;
-(void)setDistanceFilter:(double)arg1 ;
-(char)matchInfoEnabled;
-(void)setMatchInfoEnabled:(char)arg1 ;
-(double)timeScale;
-(char)isTracePlayer;
-(void)startUpdatingVehicleSpeed;
-(void)stopUpdatingVehicleSpeed;
-(void)startUpdatingVehicleHeading;
-(void)stopUpdatingVehicleHeading;
-(void)_createCLLocationManager;
-(CLLocationManager *)_clLocationManager;
-(void)_updateAuthorizationStatus;
-(void)_resetForNewEffectiveBundle;
-(char)usesCLMapCorrection;
-(void)_sharedInit;
-(id)initWithEffectiveBundle:(id)arg1 ;
-(void)resetForActiveTileGroupChanged;
-(char)coarseModeEnabled;
-(unsigned long long)traceVersion;
-(id)initWithEffectiveBundleIdentifier:(id)arg1 ;
-(void)setCLParameters:(id)arg1 ;
-(void)_updateForCLParameters:(id)arg1 ;
-(void)setUpdatingLocations:(char)arg1 ;
-(void)requestLocation;
-(char)updatingLocations;
@end

