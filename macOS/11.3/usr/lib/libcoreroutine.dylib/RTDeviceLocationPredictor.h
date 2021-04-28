/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTService.h>
#import <libobjc.A.dylib/RTPurgable.h>

@protocol OS_dispatch_source;
@class RTDefaultsManager, RTDistanceCalculator, RTLearnedLocationManager, RTLocationManager, RTMapServiceManager, RTMetricManager, RTPlatform, RTNextPredictedLocationsOfInterestCache, NSObject, NSArray, NSMutableArray, NSSet, NSString;

@interface RTDeviceLocationPredictor : RTService <RTPurgable> {

	char _encryptedDataAvailabilityNotificationNeeded;
	char _pendingNextPredictedLocationsOfInterestRequest;
	RTDefaultsManager* _defaultsManager;
	RTDistanceCalculator* _distanceCalculator;
	RTLearnedLocationManager* _learnedLocationManager;
	RTLocationManager* _locationManager;
	RTMapServiceManager* _mapServiceManager;
	RTMetricManager* _metricManager;
	RTPlatform* _platform;
	RTNextPredictedLocationsOfInterestCache* _nextPredictedLocationsOfInterestCache;
	NSObject*<OS_dispatch_source> _nextPredictedLocationsOfInterestPollLocationTimer;
	NSArray* _nextPredictedLocationsOfInterest;
	double _nextPredictedLocationsOfInterestProcessInterval;
	double _nextPredictedLocationsOfInterestPollLocationInterval;
	NSMutableArray* _evalPredictedLocationsOfInterest;
	NSMutableArray* _evalPredictedExitDates;
	NSSet* _providers;

}

@property (nonatomic,retain) RTDefaultsManager * defaultsManager;                                                          //@synthesize defaultsManager=_defaultsManager - In the implementation block
@property (nonatomic,retain) RTDistanceCalculator * distanceCalculator;                                                    //@synthesize distanceCalculator=_distanceCalculator - In the implementation block
@property (nonatomic,retain) RTLearnedLocationManager * learnedLocationManager;                                            //@synthesize learnedLocationManager=_learnedLocationManager - In the implementation block
@property (nonatomic,retain) RTLocationManager * locationManager;                                                          //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) RTMapServiceManager * mapServiceManager;                                                      //@synthesize mapServiceManager=_mapServiceManager - In the implementation block
@property (nonatomic,retain) RTMetricManager * metricManager;                                                              //@synthesize metricManager=_metricManager - In the implementation block
@property (nonatomic,retain) RTPlatform * platform;                                                                        //@synthesize platform=_platform - In the implementation block
@property (nonatomic,retain) RTNextPredictedLocationsOfInterestCache * nextPredictedLocationsOfInterestCache;              //@synthesize nextPredictedLocationsOfInterestCache=_nextPredictedLocationsOfInterestCache - In the implementation block
@property (assign,nonatomic) char encryptedDataAvailabilityNotificationNeeded;                                             //@synthesize encryptedDataAvailabilityNotificationNeeded=_encryptedDataAvailabilityNotificationNeeded - In the implementation block
@property (assign,nonatomic) char pendingNextPredictedLocationsOfInterestRequest;                                          //@synthesize pendingNextPredictedLocationsOfInterestRequest=_pendingNextPredictedLocationsOfInterestRequest - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> nextPredictedLocationsOfInterestPollLocationTimer;              //@synthesize nextPredictedLocationsOfInterestPollLocationTimer=_nextPredictedLocationsOfInterestPollLocationTimer - In the implementation block
@property (nonatomic,retain) NSArray * nextPredictedLocationsOfInterest;                                                   //@synthesize nextPredictedLocationsOfInterest=_nextPredictedLocationsOfInterest - In the implementation block
@property (assign,nonatomic) double nextPredictedLocationsOfInterestProcessInterval;                                       //@synthesize nextPredictedLocationsOfInterestProcessInterval=_nextPredictedLocationsOfInterestProcessInterval - In the implementation block
@property (assign,nonatomic) double nextPredictedLocationsOfInterestPollLocationInterval;                                  //@synthesize nextPredictedLocationsOfInterestPollLocationInterval=_nextPredictedLocationsOfInterestPollLocationInterval - In the implementation block
@property (nonatomic,retain) NSMutableArray * evalPredictedLocationsOfInterest;                                            //@synthesize evalPredictedLocationsOfInterest=_evalPredictedLocationsOfInterest - In the implementation block
@property (nonatomic,retain) NSMutableArray * evalPredictedExitDates;                                                      //@synthesize evalPredictedExitDates=_evalPredictedExitDates - In the implementation block
@property (nonatomic,retain) NSSet * providers;                                                                            //@synthesize providers=_providers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(RTPlatform *)platform;
-(void)clear;
-(void)setPlatform:(RTPlatform *)arg1 ;
-(void)_setup;
-(NSSet *)providers;
-(void)_clear;
-(void)_unregisterForNotifications;
-(void)_registerForNotifications;
-(void)setProviders:(NSSet *)arg1 ;
-(RTDefaultsManager *)defaultsManager;
-(RTMetricManager *)metricManager;
-(void)_shutdown;
-(void)fetchNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 handler:(/*^block*/id)arg4 ;
-(void)fetchPredictedLocationsOfInterestOnDate:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)fetchPredictedExitDatesFromLocation:(id)arg1 onDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)fetchPredictedLocationsOfInterestBetweenStartDate:(id)arg1 endDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(RTLearnedLocationManager *)learnedLocationManager;
-(void)setLearnedLocationManager:(RTLearnedLocationManager *)arg1 ;
-(RTLocationManager *)locationManager;
-(void)setLocationManager:(RTLocationManager *)arg1 ;
-(RTMapServiceManager *)mapServiceManager;
-(void)setMapServiceManager:(RTMapServiceManager *)arg1 ;
-(void)setMetricManager:(RTMetricManager *)arg1 ;
-(RTDistanceCalculator *)distanceCalculator;
-(void)setDefaultsManager:(RTDefaultsManager *)arg1 ;
-(id)initWithQueue:(id)arg1 defaultsManager:(id)arg2 distanceCalculator:(id)arg3 learnedLocationManager:(id)arg4 locationManager:(id)arg5 mapServiceManager:(id)arg6 metricManager:(id)arg7 platfrom:(id)arg8 providers:(id)arg9 ;
-(void)performPurgeOfType:(long long)arg1 referenceDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setDistanceCalculator:(RTDistanceCalculator *)arg1 ;
-(void)onLearnedLocationManagerNotification:(id)arg1 ;
-(void)_setupEvalMode;
-(RTNextPredictedLocationsOfInterestCache *)nextPredictedLocationsOfInterestCache;
-(void)setNextPredictedLocationsOfInterestCache:(RTNextPredictedLocationsOfInterestCache *)arg1 ;
-(NSObject*<OS_dispatch_source>)nextPredictedLocationsOfInterestPollLocationTimer;
-(void)setNextPredictedLocationsOfInterestPollLocationTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_purgeWithReferenceDate:(id)arg1 ;
-(void)purgeWithReferenceDate:(id)arg1 ;
-(id)_mergedLocationOfInterest:(id)arg1 otherLocationOfInterest:(id)arg2 ;
-(id)_mergePredictedLocationsOfInterest:(id)arg1 ;
-(id)_dedupePredictedLocationsOfInterest:(id)arg1 ;
-(id)_sortPredictedLocationsOfInterest:(id)arg1 ;
-(id)_sortAndDedupePredictedLocationsOfInterest:(id)arg1 ;
-(NSMutableArray *)evalPredictedLocationsOfInterest;
-(void)_fetchNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 handler:(/*^block*/id)arg4 ;
-(NSMutableArray *)evalPredictedExitDates;
-(void)_fetchPredictedExitDatesFromLocation:(id)arg1 onDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)_fetchPredictedLocationsOfInterestBetweenStartDate:(id)arg1 endDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)_updateEvalMode;
-(void)setEvalPredictedLocationsOfInterest:(NSMutableArray *)arg1 ;
-(void)setEvalPredictedExitDates:(NSMutableArray *)arg1 ;
-(void)_onLearnedLocationManagerNotification:(id)arg1 ;
-(char)encryptedDataAvailabilityNotificationNeeded;
-(void)setEncryptedDataAvailabilityNotificationNeeded:(char)arg1 ;
-(char)pendingNextPredictedLocationsOfInterestRequest;
-(void)setPendingNextPredictedLocationsOfInterestRequest:(char)arg1 ;
-(NSArray *)nextPredictedLocationsOfInterest;
-(void)setNextPredictedLocationsOfInterest:(NSArray *)arg1 ;
-(double)nextPredictedLocationsOfInterestProcessInterval;
-(void)setNextPredictedLocationsOfInterestProcessInterval:(double)arg1 ;
-(double)nextPredictedLocationsOfInterestPollLocationInterval;
-(void)setNextPredictedLocationsOfInterestPollLocationInterval:(double)arg1 ;
@end

