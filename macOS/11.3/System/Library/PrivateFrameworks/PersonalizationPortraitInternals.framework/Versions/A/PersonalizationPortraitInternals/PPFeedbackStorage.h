/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/Versions/A/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PPSQLDatabase, PPLocalNamedEntityStore, PPLocalTopicStore, PPLocalLocationStore, PPLocalQuickTypeBroker, PPLocalContactStore, PPLocalEventStore, PPLocalConnectionsStore;

@interface PPFeedbackStorage : NSObject {

	PPSQLDatabase* _db;
	PPLocalNamedEntityStore* _namedEntityStoreOverride;
	PPLocalTopicStore* _topicStoreOverride;
	PPLocalLocationStore* _locationStoreOverride;
	PPLocalQuickTypeBroker* _quickTypeBrokerOverride;
	PPLocalContactStore* _contactStoreOverride;
	PPLocalEventStore* _eventStoreOverride;
	PPLocalConnectionsStore* _connectionsStoreOverride;

}
+(id)storeTypeDescription:(unsigned char)arg1 ;
+(void)transformOfferedItemsIntoEngagementAndRejection:(id)arg1 ;
+(void)logFeedback:(id)arg1 domain:(unsigned char)arg2 domainStatus:(unsigned char)arg3 ;
-(id)init;
-(id)locationStore;
-(id)eventStore;
-(id)contactStore;
-(id)topicStore;
-(id)namedEntityStore;
-(id)quickTypeBroker;
-(id)connectionsStore;
-(id)initWithDatabase:(id)arg1 namedEntityStoreOverride:(id)arg2 topicStoreOverride:(id)arg3 locationStoreOverride:(id)arg4 quickTypeBrokerOverride:(id)arg5 contactStoreOverride:(id)arg6 eventStoreOverride:(id)arg7 connectionsStoreOverride:(id)arg8 ;
-(void)filterPendingFeedbackItems:(id)arg1 storeType:(unsigned char)arg2 timestamp:(double)arg3 clientIdentifier:(id)arg4 clientBundleId:(id)arg5 mappingId:(id)arg6 ;
-(id)mappedTopicsPendingFeedbackWithShouldContinueBlock:(/*^block*/id)arg1 ;
-(char)processPendingFeedbackWithStoreType:(unsigned char)arg1 shouldContinueBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(char)_clearPendingFeedbackRecordsWithStoreType:(unsigned char)arg1 limit:(int)arg2 ;
-(void)_emitMaxRowCountEvent;
-(char)storePendingFeedback:(id)arg1 storeType:(unsigned char)arg2 error:(id*)arg3 ;
-(char)deleteAllPendingFeedbackOlderThanDate:(id)arg1 deletedCount:(unsigned long long*)arg2 error:(id*)arg3 ;
-(id)pendingTopicFeedback;
@end
