/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>
#import <libobjc.A.dylib/_GEOCountryConfigurationServerProxyDelegate.h>

@protocol _GEOCountryConfigurationServerProxy;
@class geo_isolater, _GEOCountryConfigurationInfo, NSMutableArray, NSMutableDictionary, NSString;

@interface GEOCountryConfiguration : NSObject <GEOResourceManifestTileGroupObserver, _GEOCountryConfigurationServerProxyDelegate> {

	geo_isolater* _isolater;
	_GEOCountryConfigurationInfo* _countryCodeInfo;
	NSMutableArray* _updateCompletionHandlers;
	NSMutableDictionary* _supportedFeatures;
	geo_isolater* _currentCountrySupportsNavigationIsolater;
	char _currentCountrySupportsNavigation;
	char _determinedCurrentCountrySupportsNavigation;
	double _urlAuthenticationTimeToLive;
	char _hasURLAuthenticationTimeToLive;
	id<_GEOCountryConfigurationServerProxy> _serverProxy;

}

@property (nonatomic,readonly) char zilchPointsSupported; 
@property (nonatomic,readonly) char shouldUseGuidanceEventManager; 
@property (nonatomic,readonly) char shouldRequestLaneGuidance; 
@property (nonatomic,copy,readonly) NSString * countryCode; 
@property (nonatomic,readonly) char currentCountrySupportsTraffic; 
@property (nonatomic,readonly) char currentCountrySupportsDirections; 
@property (nonatomic,readonly) char currentCountrySupportsNavigation; 
@property (nonatomic,readonly) char currentCountrySupportsRouteGenius; 
@property (nonatomic,readonly) char currentCountrySupportsCarIntegration; 
@property (nonatomic,readonly) char currentCountrySupportsCommute; 
@property (nonatomic,readonly) char currentCountrySupportsElectricVehicleRouting; 
@property (nonatomic,readonly) double urlAuthenticationTimeToLive; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedConfiguration;
+(void)disableServerConnection;
+(void)setUseLocalProxy:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)countryCode;
-(id)defaultForKey:(id)arg1 defaultValue:(id)arg2 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(char)zilchPointsSupported;
-(char)shouldUseGuidanceEventManager;
-(char)shouldRequestLaneGuidance;
-(void)updateCountryConfiguration:(/*^block*/id)arg1 ;
-(void)updateCountryConfiguration:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(id)_defaultForKey:(id)arg1 inCountry:(id)arg2 defaultValue:(id)arg3 sourcePtr:(long long*)arg4 decoder:(/*^block*/id)arg5 ;
-(char)countryCode:(id)arg1 supportsFeature:(long long)arg2 ;
-(char)currentCountrySupportsFeature:(long long)arg1 ;
-(char)currentCountrySupportsTraffic;
-(char)currentCountrySupportsNavigation;
-(id)_countryCodeOnIsolationQueue;
-(id)countryCodeWithSource:(unsigned*)arg1 updatedAtTime:(id*)arg2 ;
-(id)_countryDefaultForKey:(id)arg1 inCountry:(id)arg2 sourcePtr:(long long*)arg3 decoder:(/*^block*/id)arg4 ;
-(id)defaultForKey:(id)arg1 defaultValue:(id)arg2 sourcePtr:(long long*)arg3 decoder:(/*^block*/id)arg4 ;
-(id)defaultForKey:(id)arg1 defaultValue:(id)arg2 sourcePtr:(long long*)arg3 ;
-(void)_resetSupportedFeatures;
-(void)serverProxyProvidersDidChange:(id)arg1 ;
-(void)serverProxy:(id)arg1 countryCodeDidChange:(id)arg2 ;
-(void)updateProvidersForCurrentCountry;
-(char)currentCountrySupportsDirections;
-(char)currentCountrySupportsRouteGenius;
-(char)currentCountrySupportsCarIntegration;
-(char)currentCountrySupportsCommute;
-(char)currentCountrySupportsElectricVehicleRouting;
-(double)urlAuthenticationTimeToLive;
-(id)defaultForKey:(id)arg1 defaultValue:(id)arg2 decoder:(/*^block*/id)arg3 ;
@end
