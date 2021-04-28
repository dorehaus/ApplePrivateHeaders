/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/Versions/A/CPAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CPAnalytics/CPAnalyticsDashboardDestination.h>
#import <CPAnalytics/CPAnalyticsDynamicPropertyProvider.h>

@class CPAnalyticsScreenManager, NSSet, NSArray, NSString;

@interface CPAnalyticsAppStateDestination : CPAnalyticsDashboardDestination <CPAnalyticsDynamicPropertyProvider> {

	CPAnalyticsScreenManager* _screenManager;
	NSSet* _appEventNames;
	NSArray* _sessionCounters;
	NSArray* _featureCounters;

}

@property (nonatomic,readonly) CPAnalyticsScreenManager * screenManager;              //@synthesize screenManager=_screenManager - In the implementation block
@property (nonatomic,readonly) NSSet * appEventNames;                                 //@synthesize appEventNames=_appEventNames - In the implementation block
@property (nonatomic,retain) NSArray * sessionCounters;                               //@synthesize sessionCounters=_sessionCounters - In the implementation block
@property (nonatomic,retain) NSArray * featureCounters;                               //@synthesize featureCounters=_featureCounters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_isValidSessionEndEvent:(id)arg1 ;
-(void)registerSystemProperties:(id)arg1 ;
-(id)getDynamicProperty:(id)arg1 forEventName:(id)arg2 payloadForSystemPropertyExtraction:(id)arg3 ;
-(void)updateWithConfig:(id)arg1 ;
-(id)initWithConfig:(id)arg1 cpAnalyticsInstance:(id)arg2 ;
-(void)processEvent:(id)arg1 ;
-(id)allStandardProperties;
-(id)_createCountersFromConfig:(id)arg1 withKey:(id)arg2 ;
-(id)_createCountersFromAppEvents:(id)arg1 ;
-(id)_createCountersFromScreenNames:(id)arg1 ;
-(void)_resetCounters;
-(id)_validateAndParseAppEvents:(id)arg1 ;
-(void)_updateDependenciesBeforeProcessingEvent:(id)arg1 ;
-(id)_computeSessionData:(id)arg1 ;
-(void)_sendAppSessionEventFromSourceEvent:(id)arg1 payload:(id)arg2 ;
-(void)_sendFeatureCounts;
-(char)_shouldSendSampleWithRate:(unsigned long long)arg1 ;
-(void)_sendDashboardScreenViewEventForEvent:(id)arg1 ;
-(void)_sendDashboardAppEventForEvent:(id)arg1 ;
-(void)_sendDashboardMediaEventIfNeededForEvent:(id)arg1 ;
-(void)_sendDashboardMediaEventForEvent:(id)arg1 ;
-(void)_sendDashboardErrorEventIfNeededForEvent:(id)arg1 ;
-(void)_sendDashboardErrorEventForEvent:(id)arg1 ;
-(CPAnalyticsScreenManager *)screenManager;
-(NSSet *)appEventNames;
-(NSArray *)sessionCounters;
-(void)setSessionCounters:(NSArray *)arg1 ;
-(NSArray *)featureCounters;
-(void)setFeatureCounters:(NSArray *)arg1 ;
@end
