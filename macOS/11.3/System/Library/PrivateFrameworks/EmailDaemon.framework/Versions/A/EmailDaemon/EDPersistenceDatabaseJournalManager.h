/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/Versions/A/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <libobjc.A.dylib/EFLoggable.h>

@protocol OS_dispatch_queue;
@class EDPersistenceDatabaseJournal, NSMutableIndexSet, NSMapTable, NSString, NSObject;

@interface EDPersistenceDatabaseJournalManager : NSObject <EFLoggable> {

	os_unfair_lock_s _journalLock;
	EDPersistenceDatabaseJournal* _currentJournal;
	char _shouldDeleteCurrentJournal;
	NSMutableIndexSet* _journalNumbers;
	NSMutableIndexSet* _pendingDeleteJournalNumbers;
	NSMapTable* _journalsByIndexes;
	NSString* _journalDirectoryPath;
	NSObject*<OS_dispatch_queue> _checkExistingQueue;
	NSObject*<OS_dispatch_queue> _deleteQueue;

}

@property (nonatomic,copy,readonly) NSString * journalDirectoryPath;                                //@synthesize journalDirectoryPath=_journalDirectoryPath - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> checkExistingQueue;              //@synthesize checkExistingQueue=_checkExistingQueue - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> deleteQueue;                     //@synthesize deleteQueue=_deleteQueue - In the implementation block
@property (nonatomic,readonly) EDPersistenceDatabaseJournal * oldestJournal; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(id)initWithBasePath:(id)arg1 ;
-(NSString *)journalDirectoryPath;
-(void)_journalNoLongerReferenced:(id)arg1 ;
-(id)_getJournalWithBlock:(/*^block*/id)arg1 ;
-(void)_deleteJournalNumber:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)deleteQueue;
-(NSObject*<OS_dispatch_queue>)checkExistingQueue;
-(id)currentJournalCreateIfNeeded:(char)arg1 ;
-(EDPersistenceDatabaseJournal *)oldestJournal;
-(void)mergedJournal:(id)arg1 ;
-(void)waitForDeletes;
@end

