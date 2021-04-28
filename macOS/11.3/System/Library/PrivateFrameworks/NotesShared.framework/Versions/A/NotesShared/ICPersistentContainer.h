/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/Versions/A/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSPersistentContainer.h>

@class NSDictionary, NSURL, NSString, NSMergePolicy;

@interface ICPersistentContainer : NSPersistentContainer {

	char _abortAfterReplacingDatabase;
	NSDictionary* _storeOptions;
	NSURL* _storeURL;
	NSString* _storeType;
	NSMergePolicy* _mergePolicy;
	unsigned long long _fakeFreeDiskSpace;

}

@property (nonatomic,retain) NSURL * storeURL;                                  //@synthesize storeURL=_storeURL - In the implementation block
@property (nonatomic,retain) NSString * storeType;                              //@synthesize storeType=_storeType - In the implementation block
@property (nonatomic,retain) NSDictionary * storeOptions;                       //@synthesize storeOptions=_storeOptions - In the implementation block
@property (nonatomic,retain) NSMergePolicy * mergePolicy;                       //@synthesize mergePolicy=_mergePolicy - In the implementation block
@property (nonatomic,readonly) NSURL * backupsDirectoryURL; 
@property (assign,nonatomic) unsigned long long fakeFreeDiskSpace;              //@synthesize fakeFreeDiskSpace=_fakeFreeDiskSpace - In the implementation block
@property (assign,nonatomic) char abortAfterReplacingDatabase;                  //@synthesize abortAfterReplacingDatabase=_abortAfterReplacingDatabase - In the implementation block
+(void)initialize;
+(id)managedObjectModel;
+(id)oldManagedObjectModel;
+(id)databaseOpenLock;
+(char)isDataProtectionError:(id)arg1 ;
+(id)standardStoreOptions;
-(char)isReadOnly;
-(void)setMergePolicy:(NSMergePolicy *)arg1 ;
-(id)newBackgroundContext;
-(NSMergePolicy *)mergePolicy;
-(NSURL *)storeURL;
-(void)setStoreURL:(NSURL *)arg1 ;
-(NSString *)storeType;
-(void)setStoreType:(NSString *)arg1 ;
-(NSDictionary *)storeOptions;
-(void)setStoreOptions:(NSDictionary *)arg1 ;
-(id)initWithStoreURL:(id)arg1 storeType:(id)arg2 options:(id)arg3 mergePolicy:(id)arg4 managedObjectModel:(id)arg5 ;
-(void)setupPersistentStoreDescriptions;
-(char)isTooLowOnDiskSpace;
-(id)initWithStoreURL:(id)arg1 storeType:(id)arg2 options:(id)arg3 mergePolicy:(id)arg4 ;
-(char)loadPersistentStore:(id*)arg1 ;
-(char)migrateFromOldDataModel;
-(void)backupPersistentStore;
-(char)abortAfterReplacingDatabase;
-(NSURL *)backupsDirectoryURL;
-(id)performBlockWithDatabaseOpenLock:(/*^block*/id)arg1 ;
-(void)setupViewContext;
-(unsigned long long)fakeFreeDiskSpace;
-(void)vacuumStoreWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)vacuumStore;
-(void)setFakeFreeDiskSpace:(unsigned long long)arg1 ;
-(void)setAbortAfterReplacingDatabase:(char)arg1 ;
@end
