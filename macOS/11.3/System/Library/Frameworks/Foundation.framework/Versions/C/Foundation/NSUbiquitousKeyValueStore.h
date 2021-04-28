/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface NSUbiquitousKeyValueStore : NSObject {

	id _private1;
	id _private2;
	id _private3;
	void* _private4;
	void** _reserved[3];
	int _daemonWakeToken;
	char _disabledSuddenTermination;

}

@property (copy,readonly) NSDictionary * dictionaryRepresentation; 
+(void)_synchronizeStoresForced:(char)arg1 ;
+(id)defaultStore;
+(id)additionalStoreWithIdentifier:(id)arg1 ;
+(void)_appWillActivate;
+(void)_appWillDeactivate;
-(void)dealloc;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(char)synchronize;
-(void)registerDefaultValues:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(char)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(id)dataForKey:(id)arg1 ;
-(double)doubleForKey:(id)arg1 ;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
-(void)setBool:(char)arg1 forKey:(id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 storeIdentifier:(id)arg2 additionalStore:(char)arg3 ;
-(void)_scheduleRemoteSynchronization;
-(void)_syncConcurrently;
-(void)_sourceDidChange:(id)arg1 ;
-(void)_configurationDidChange;
-(void)_sourceDidChangePassthroughNotification:(id)arg1 ;
-(void)_registerToDaemon;
-(void)_sendPingToDaemon;
-(void)_pleaseSynchronize:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 storeIdentifier:(id)arg2 additionalStore:(char)arg3 storeType:(long long)arg4 ;
-(id)initWithBundleIdentifier:(id)arg1 storeIdentifier:(id)arg2 ;
-(void)_setShouldAvoidSynchronize:(char)arg1 ;
-(int)_storeChangeFromSourceChange:(int)arg1 ;
-(char)_hasPendingSynchronize;
-(void)_setHasPendingSynchronize:(char)arg1 ;
-(void)_rethrowException:(id)arg1 ;
-(char)synchronizeWithSourceForced:(char)arg1 ;
-(char)_postDidChangeNotificationExternalChanges:(id)arg1 sourceChangeCount:(long long)arg2 ;
-(void)_syncConcurrentlyForced:(char)arg1 ;
-(void)_adjustTimer:(id)arg1 ;
-(void)_adjustTimerForAutosync;
-(char)_synchronizeForced:(char)arg1 notificationQueue:(id)arg2 ;
-(char)_shouldAvoidSynchronize;
-(char)_synchronizeForced:(char)arg1 ;
-(unsigned long long)maximumKeyCount;
-(unsigned long long)maximumKeyLength;
-(unsigned long long)maximumDataLengthPerKey;
-(unsigned long long)maximumTotalDataLength;
-(void)_useSourceAsyncWithBlock:(/*^block*/id)arg1 ;
-(void)_useSourceSyncWithBlock:(/*^block*/id)arg1 ;
-(id)_initWithStoreIdentifier:(id)arg1 usingEndToEndEncryption:(char)arg2 ;
-(void)synchronizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_unregisterFromDaemon;
-(id)_remotePreferencesSource;
-(void)setString:(id)arg1 forKey:(id)arg2 ;
-(void)setArray:(id)arg1 forKey:(id)arg2 ;
-(void)setDictionary:(id)arg1 forKey:(id)arg2 ;
-(void)setData:(id)arg1 forKey:(id)arg2 ;
-(long long)longLongForKey:(id)arg1 ;
-(void)setLongLong:(long long)arg1 forKey:(id)arg2 ;
@end
