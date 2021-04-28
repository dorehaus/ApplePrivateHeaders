/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTService.h>

@class NSMutableDictionary, RTInvocationDispatcher, RTPersistenceManager;

@interface RTStore : RTService {

	NSMutableDictionary* _contexts;
	RTInvocationDispatcher* _dispatcher;
	unsigned long long _availability;
	RTPersistenceManager* _persistenceManager;

}

@property (nonatomic,retain) NSMutableDictionary * contexts;                         //@synthesize contexts=_contexts - In the implementation block
@property (nonatomic,retain) RTInvocationDispatcher * dispatcher;                    //@synthesize dispatcher=_dispatcher - In the implementation block
@property (assign,nonatomic) unsigned long long availability;                        //@synthesize availability=_availability - In the implementation block
@property (nonatomic,retain) RTPersistenceManager * persistenceManager;              //@synthesize persistenceManager=_persistenceManager - In the implementation block
+(id)availabilityToString:(unsigned long long)arg1 ;
+(id)contextTypeToString:(unsigned long long)arg1 ;
-(id)init;
-(NSMutableDictionary *)contexts;
-(void)setContexts:(NSMutableDictionary *)arg1 ;
-(RTInvocationDispatcher *)dispatcher;
-(void)_shutdown;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)setDispatcher:(RTInvocationDispatcher *)arg1 ;
-(void)storeWritableObjects:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)removeAll:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)purgePredating:(id)arg1 predicateMappings:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_performBlock:(/*^block*/id)arg1 contextType:(unsigned long long)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)executeDeleteRequests:(id)arg1 context:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)enumerateType:(Class)arg1 fetchRequest:(id)arg2 enumerationBlock:(/*^block*/id)arg3 ;
-(void)fetchEnumerableObjectsWithOptions:(id)arg1 offset:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(id)initWithPersistenceManager:(id)arg1 ;
-(unsigned long long)availability;
-(RTPersistenceManager *)persistenceManager;
-(void)setPersistenceManager:(RTPersistenceManager *)arg1 ;
-(void)updateWritableObjects:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchAvailabilityWithHandler:(/*^block*/id)arg1 ;
-(void)setAvailability:(unsigned long long)arg1 ;
-(void)onPersistenceManagerNotification:(id)arg1 ;
-(void)_setupContextsHandler:(/*^block*/id)arg1 ;
-(void)_onPersistenceManagerNotification:(id)arg1 ;
-(void)_storeWritableObjects:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_updateWritableObjects:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_removeAll:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_purgePredating:(id)arg1 predicateMappings:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchReadableObjectsOfType:(Class)arg1 fetchRequest:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_fetchReadableObjectsOfType:(Class)arg1 fetchRequest:(id)arg2 handler:(/*^block*/id)arg3 ;
@end

