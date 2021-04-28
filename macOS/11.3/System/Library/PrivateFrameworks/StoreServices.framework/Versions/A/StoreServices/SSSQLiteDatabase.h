/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <StoreServices/StoreServices-Structs.h>
@class NSObject, NSString;

@interface SSSQLiteDatabase : NSObject {

	sqlite3Ref _db;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _databasePath;
	char _readOnly;
	char _isInTransaction;
	NSString* _protectionType;
	/*^block*/id _setupBlock;
	CFDictionaryRef _statementCache;
	char _takesTaskCompletionAssertions;
	long long _taskAssertionCount;

}

@property (assign) char takesTaskCompletionAssertions; 
@property (nonatomic,copy) id setupBlock;                           //@synthesize setupBlock=_setupBlock - In the implementation block
+(char)statementDidFinishAfterStepping:(sqlite3_stmtRef)arg1 ;
+(char)statementHasRowAfterStepping:(sqlite3_stmtRef)arg1 ;
+(void)_stepStatement:(sqlite3_stmtRef)arg1 hasRow:(char*)arg2 didFinish:(char*)arg3 isCorrupt:(char*)arg4 ;
+(void)_setTakesTaskCompletionAssertions:(char)arg1 ;
-(void)dealloc;
-(long long)userVersion;
-(char)executeSQL:(id)arg1 ;
-(char)setUserVersion:(long long)arg1 ;
-(id)initWithDatabaseURL:(id)arg1 ;
-(void)dispatchAfter:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(int)_openDatabase;
-(int)_closeDatabase;
-(void)performTransactionWithBlock:(/*^block*/id)arg1 ;
-(void)_expireBackgroundTask;
-(char)statementDidFinishAfterStepping:(sqlite3_stmtRef)arg1 ;
-(void)prepareStatementForSQL:(id)arg1 cache:(char)arg2 usingBlock:(/*^block*/id)arg3 ;
-(char)statementHasRowAfterStepping:(sqlite3_stmtRef)arg1 ;
-(long long)countChanges;
-(void)setSetupBlock:(id)arg1 ;
-(id)initWithDatabaseURL:(id)arg1 readOnly:(char)arg2 ;
-(void)dispatchBlockAsync:(/*^block*/id)arg1 ;
-(id)initWithDatabaseURL:(id)arg1 readOnly:(char)arg2 protectionType:(id)arg3 ;
-(void)_beginTaskCompletionAssertion;
-(void)_endTaskCompletionAssertion;
-(void)expireBackgroundTask;
-(void)_accessDatabaseUsingBlock:(/*^block*/id)arg1 ;
-(void)_resetCorruptDatabase;
-(sqlite3_stmtRef)_statementForSQL:(id)arg1 cache:(char)arg2 ;
-(char)setUserVersion:(long long)arg1 forDatabase:(id)arg2 ;
-(long long)userVersionForDatabase:(id)arg1 ;
-(int)_openFlags;
-(int)_resetAndReopenDatabaseWithPath:(id)arg1 ;
-(void)_resetDatabaseWithPath:(id)arg1 ;
-(void)accessDatabaseUsingBlock:(/*^block*/id)arg1 ;
-(char)columnName:(id)arg1 existsInTable:(id)arg2 ;
-(void)dispatchBlockSync:(/*^block*/id)arg1 ;
-(id)newDispatchSourceWithType:(dispatch_source_type_sRef)arg1 ;
-(void)beginTaskCompletionAssertion;
-(void)endTaskCompletionAssertion;
-(void)setTakesTaskCompletionAssertions:(char)arg1 ;
-(char)takesTaskCompletionAssertions;
-(id)setupBlock;
@end

