/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSDB.framework/Versions/A/CoreSDB
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreSDB/CoreSDB-Structs.h>
@class NSObject, NSString, _CSDBThreadObject;

@interface CSDBThreadedRecordStore : NSObject {

	CSDBRecordStore* _recordStore;
	NSObject*<OS_dispatch_queue> _recordStoreQueue;
	NSString* _identifier;
	_CSDBThreadObject* _thread;
	CSDBLookAsideBufferConfig _lookAsideConfig;
	char _wantsRegister;
	NSObject*<OS_dispatch_queue> _dbBackupQueue;
	char _registeredWithBackupd;

}
-(void)dealloc;
-(void)performBlock:(/*^block*/id)arg1 waitUntilDone:(char)arg2 ;
-(void)registerClass:(const SCD_Struct_CS2*)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 afterDelay:(double)arg2 ;
-(id)initWithIdentifier:(CFStringRef)arg1 qosClass:(unsigned short)arg2 lookAsideConfig:(CSDBLookAsideBufferConfig)arg3 ;
-(char)ownsCurrentThreadOtherwiseAssert:(char)arg1 ;
-(void)setupDatabaseWithAllowLocalMigration:(char)arg1 pathBlock:(/*^block*/id)arg2 setupStoreHandler:(/*function pointer*/void*)arg3 connectionInitializer:(/*function pointer*/void*)arg4 versionChecker:(/*function pointer*/void*)arg5 migrationHandler:(/*function pointer*/void*)arg6 schemaVersion:(int)arg7 dataProtectionClass:(unsigned)arg8 registerBlock:(/*^block*/id)arg9 exclusiveOwnership:(char)arg10 ;
-(void)setupDatabaseWithAllowLocalMigration:(char)arg1 pathBlock:(/*^block*/id)arg2 setupStoreHandler:(/*function pointer*/void*)arg3 connectionInitializer:(/*function pointer*/void*)arg4 versionChecker:(/*function pointer*/void*)arg5 migrationHandler:(/*function pointer*/void*)arg6 schemaVersion:(int)arg7 dataProtectionClass:(unsigned)arg8 registerBlock:(/*^block*/id)arg9 ;
-(void)teardownDatabase;
-(void)_teardownDatabaseOnQueue;
-(void)_registerWithBackupd:(CFStringRef)arg1 ;
-(void)_unregisterWithBackupd:(CFStringRef)arg1 ;
@end

