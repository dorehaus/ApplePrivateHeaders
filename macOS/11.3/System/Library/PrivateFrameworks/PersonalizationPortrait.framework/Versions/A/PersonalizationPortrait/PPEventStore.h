/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/Versions/A/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PPFeedbackAccepting.h>
#import <libobjc.A.dylib/PPClientStore.h>

@class PPRecordMonitoringHelper, PPClientFeedbackHelper, NSString;

@interface PPEventStore : NSObject <PPFeedbackAccepting, PPClientStore> {

	PPRecordMonitoringHelper* _monitoringHelper;
	PPClientFeedbackHelper* _clientFeedbackHelper;

}

@property (nonatomic,retain) NSString * clientIdentifier; 
-(id)init;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)logEventInteractionForEventWithEventIdentifier:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3 ;
-(char)sendRTCLogsWithError:(id*)arg1 ;
-(/*^block*/id)_recordGenerator;
-(char)iterEventNameRecordsForClient:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(void)_sendChangesToDelegates:(id)arg1 ;
-(void)_loadEventNameRecordsWithDelegate:(id)arg1 ;
-(char)loadEventNameRecordsAndMonitorChangesWithDelegate:(id)arg1 error:(id*)arg2 ;
-(char)iterEventHighlightsFrom:(id)arg1 to:(id)arg2 options:(int)arg3 error:(id*)arg4 block:(/*^block*/id)arg5 ;
-(char)iterDailyEventHighlightsWithOptions:(int)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(char)iterWeeklyEventHighlightsWithOptions:(int)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(char)iterEventHighlightsFrom:(id)arg1 to:(id)arg2 error:(id*)arg3 block:(/*^block*/id)arg4 ;
-(char)iterDailyEventHighlightsError:(id*)arg1 block:(/*^block*/id)arg2 ;
-(char)iterWeeklyEventHighlightsError:(id*)arg1 block:(/*^block*/id)arg2 ;
-(char)iterScoredEventsWithQuery:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(char)interactionSummaryMetricsError:(id*)arg1 block:(/*^block*/id)arg2 ;
@end
