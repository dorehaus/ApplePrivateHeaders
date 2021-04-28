/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSObject, NSMutableArray, PLPhotoLibraryPathManager, NSURL;

@interface PLChangeStore : NSObject {

	NSObject*<OS_dispatch_queue> _eventsIsolation;
	NSMutableArray* _events;
	sqlite3Ref _database;
	NSObject*<OS_dispatch_queue> _databaseIsolation;
	unsigned long long _firstOnDiskEventIndex;
	PLPhotoLibraryPathManager* _photoLibraryPathManager;
	NSURL* _databaseFileURL;

}

@property (nonatomic,readonly) unsigned long long firstOnDiskEventIndex; 
@property (nonatomic,readonly) NSURL * databaseFileURL;                                          //@synthesize databaseFileURL=_databaseFileURL - In the implementation block
@property (nonatomic,readonly) PLPhotoLibraryPathManager * photoLibraryPathManager;              //@synthesize photoLibraryPathManager=_photoLibraryPathManager - In the implementation block
-(void)dealloc;
-(unsigned long long)lastIndex;
-(sqlite3_stmtRef)prepareStatement:(const char*)arg1 ;
-(void)setupDatabase;
-(NSURL *)databaseFileURL;
-(void)openDatabase;
-(id)initWithPhotoLibraryPathManager:(id)arg1 ;
-(void)prepareAndEvaluateStatement:(const char*)arg1 ;
-(unsigned long long)firstOnDiskEventIndex;
-(PLPhotoLibraryPathManager *)photoLibraryPathManager;
-(void)getEventsSinceIndex:(unsigned long long)arg1 filteredBy:(/*^block*/id)arg2 onQueue:(id)arg3 withBlock:(/*^block*/id)arg4 ;
-(void)clearStore:(/*^block*/id)arg1 ;
-(char)getInMemoryEventsSinceIndex:(unsigned long long)arg1 filteredBy:(/*^block*/id)arg2 onQueue:(id)arg3 withBlock:(/*^block*/id)arg4 ;
-(id)newArrayWithEventsSince:(unsigned long long)arg1 filteredBy:(/*^block*/id)arg2 lastEventIndex:(unsigned long long*)arg3 ;
-(void)getOnDiskEventsSinceIndex:(unsigned long long)arg1 filteredBy:(/*^block*/id)arg2 onQueue:(id)arg3 withBlock:(/*^block*/id)arg4 ;
-(void)enumeratePersistedDidSaveEventsInRange:(NSRange)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performBlockAsTransaction:(/*^block*/id)arg1 ;
-(void)bindInt:(int)arg1 toStatement:(sqlite3_stmtRef)arg2 column:(int)arg3 ;
-(void)bindInt64:(long long)arg1 toStatement:(sqlite3_stmtRef)arg2 column:(int)arg3 ;
-(void)bindXPCData:(id)arg1 toStatement:(sqlite3_stmtRef)arg2 column:(int)arg3 ;
-(void)bindString:(id)arg1 toStatement:(sqlite3_stmtRef)arg2 column:(int)arg3 ;
-(void)bindUUID:(unsigned char)arg1 toStatement:(sqlite3_stmtRef)arg2 column:(int)arg3 ;
-(void)_backupStore;
-(void)_clearStore;
@end

