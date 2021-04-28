/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@protocol _CDAsyncLocalContext, _DKKnowledgeSaving, _DKKnowledgeEventStreamDeleting, _DKKnowledgeQuerying, OS_dispatch_queue;
@class NSObject, NSNotificationCenter;

@interface HMDDuetEventManager : HMFObject {

	id<_CDAsyncLocalContext> _context;
	id<_DKKnowledgeSaving> _saveStore;
	id<_DKKnowledgeEventStreamDeleting> _deleteStore;
	id<_DKKnowledgeQuerying> _queryStore;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSNotificationCenter* _notificationCenter;

}

@property (readonly) id<_CDAsyncLocalContext> context;                             //@synthesize context=_context - In the implementation block
@property (readonly) id<_DKKnowledgeSaving> saveStore;                             //@synthesize saveStore=_saveStore - In the implementation block
@property (readonly) id<_DKKnowledgeEventStreamDeleting> deleteStore;              //@synthesize deleteStore=_deleteStore - In the implementation block
@property (readonly) id<_DKKnowledgeQuerying> queryStore;                          //@synthesize queryStore=_queryStore - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                       //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) NSNotificationCenter * notificationCenter;                    //@synthesize notificationCenter=_notificationCenter - In the implementation block
+(id)eventTypeAsString:(unsigned long long)arg1 ;
+(id)identifierForType:(unsigned long long)arg1 eventValue:(id)arg2 ;
+(id)eventStreamForType:(unsigned long long)arg1 ;
-(id)init;
-(id<_CDAsyncLocalContext>)context;
-(NSNotificationCenter *)notificationCenter;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)logEvent:(id)arg1 ;
-(void)_handleServiceRemovedNotification:(id)arg1 ;
-(void)_handleAccessoryRemovedNotification:(id)arg1 ;
-(void)_handleHomeRemovedNotification:(id)arg1 ;
-(id<_DKKnowledgeEventStreamDeleting>)deleteStore;
-(id)queryEventsOfType:(unsigned long long)arg1 fromDate:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 ;
-(void)_handleActionSetEmptiedNotification:(id)arg1 ;
-(void)resetAllEvents;
-(void)deleteEventsOfType:(unsigned long long)arg1 fromDate:(id)arg2 ;
-(id)dumpAllEvents;
-(id)dumpEventsOfType:(unsigned long long)arg1 fromDate:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 ;
-(id)initWithSaveStore:(id)arg1 queryStore:(id)arg2 deleteStore:(id)arg3 clientContext:(id)arg4 notificationCenter:(id)arg5 workQueue:(id)arg6 ;
-(id<_DKKnowledgeSaving>)saveStore;
-(id<_DKKnowledgeQuerying>)queryStore;
-(void)logEventWithType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 typeIdentifier:(id)arg4 metadata:(id)arg5 ;
@end

