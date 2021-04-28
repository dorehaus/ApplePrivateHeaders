/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Versions/A/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, SDRDiagnosticReporter, NSMutableDictionary;

@interface IMMetricsCollector : NSObject {

	NSObject*<OS_dispatch_queue> _metricsQueue;
	SDRDiagnosticReporter* _diagnosticReporter;
	NSMutableDictionary* _onGoingEventsMap;

}

@property (nonatomic,retain) NSMutableDictionary * onGoingEventsMap;                 //@synthesize onGoingEventsMap=_onGoingEventsMap - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> metricsQueue;              //@synthesize metricsQueue=_metricsQueue - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(NSObject*<OS_dispatch_queue>)metricsQueue;
-(void)setMetricsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(char)updateEvent:(id)arg1 updateValue:(id)arg2 forKey:(id)arg3 ;
-(char)trackEvent:(id)arg1 ;
-(char)trackEvent:(id)arg1 withDictionary:(id)arg2 ;
-(char)startEvent:(id)arg1 initialDictionary:(id)arg2 timeout:(unsigned long long)arg3 autoBugCapture:(char)arg4 ;
-(char)finalizeEvent:(id)arg1 addingDicitonary:(id)arg2 ;
-(void)clearInitialCKSyncState;
-(void)noteSyncError:(id)arg1 ;
-(void)noteCompletedInitialSync;
-(void)noteMeticsForSyncStartFrom:(id)arg1 fullSync:(char)arg2 ;
-(void)noteMeticsForSyncEndedWithSuccces:(char)arg1 duration:(id)arg2 ;
-(void)_trackEvent:(id)arg1 ;
-(void)_trackEvent:(id)arg1 withStatistic:(id)arg2 ;
-(id)_trimedEventID:(id)arg1 ;
-(void)autoBugCaptureWithSubType:(id)arg1 errorPayload:(id)arg2 ;
-(void)_trackEvent:(id)arg1 withCount:(id)arg2 ;
-(void)_trackEvent:(id)arg1 withDictionary:(id)arg2 ;
-(void)_timeoutTimerFired:(id)arg1 ;
-(void)_finalizeEvent:(id)arg1 addingDicitonary:(id)arg2 ;
-(void)_resetTimerEventIfNeedForEventID:(id)arg1 ;
-(void)trackSpamEvent:(unsigned long long)arg1 withDictionary:(id)arg2 ;
-(id)_stringForSpamType:(unsigned long long)arg1 ;
-(void*)_ADClientAddValueForScalarKeyApiInit;
-(void*)_ADClientPushValueForDistributionKeyApiInit;
-(void*)_ADClientSetValueForScalarKeyApiInit;
-(char)trackEvent:(id)arg1 withStatistic:(id)arg2 ;
-(char)trackEvent:(id)arg1 withCount:(id)arg2 ;
-(char)startEvent:(id)arg1 initialDictionary:(id)arg2 ;
-(char)updateEvent:(id)arg1 addToCount:(id)arg2 forKey:(id)arg3 ;
-(void)forceAutoBugCaptureWithSubType:(id)arg1 errorPayload:(id)arg2 ;
-(void)metricAttachmentValidation:(char)arg1 attachmentSize:(id)arg2 operationalErrorDomain:(id)arg3 operationalErrorCode:(id)arg4 validationErrorDomain:(id)arg5 validationErrorCode:(id)arg6 ;
-(void)trackSpamEvent:(unsigned long long)arg1 ;
-(NSMutableDictionary *)onGoingEventsMap;
-(void)setOnGoingEventsMap:(NSMutableDictionary *)arg1 ;
@end
