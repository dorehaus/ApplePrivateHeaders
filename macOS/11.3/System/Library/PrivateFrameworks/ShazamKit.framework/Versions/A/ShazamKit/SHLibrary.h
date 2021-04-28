/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/Versions/A/ShazamKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SHLibrarySyncDelegate.h>
#import <libobjc.A.dylib/NSFetchedResultsControllerDelegate.h>

@protocol SHLibraryDelegate, OS_dispatch_group, OS_dispatch_queue;
@class SHLibrarySyncController, SHLibrarySyncResult, NSObject, SHLibraryDataStore, SHLibraryChangeset, NSString;

@interface SHLibrary : NSObject <SHLibrarySyncDelegate, NSFetchedResultsControllerDelegate> {

	id<SHLibraryDelegate> delegate;
	SHLibrarySyncController* _syncController;
	SHLibrarySyncResult* _syncResult;
	NSObject*<OS_dispatch_group> _syncGroup;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSObject*<OS_dispatch_queue> _syncQueue;
	SHLibraryDataStore* _dataStore;
	SHLibraryChangeset* _localChanges;

}

@property (retain) SHLibrarySyncController * syncController;                //@synthesize syncController=_syncController - In the implementation block
@property (retain) SHLibrarySyncResult * syncResult;                        //@synthesize syncResult=_syncResult - In the implementation block
@property (retain) NSObject*<OS_dispatch_group> syncGroup;                  //@synthesize syncGroup=_syncGroup - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> syncQueue;                  //@synthesize syncQueue=_syncQueue - In the implementation block
@property (retain) SHLibraryDataStore * dataStore;                          //@synthesize dataStore=_dataStore - In the implementation block
@property (retain) SHLibraryChangeset * localChanges;                       //@synthesize localChanges=_localChanges - In the implementation block
@property (__weak) id<SHLibraryDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultLibrary;
-(id)init;
-(id<SHLibraryDelegate>)delegate;
-(void)setDelegate:(id<SHLibraryDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(SHLibraryDataStore *)dataStore;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDataStore:(SHLibraryDataStore *)arg1 ;
-(NSObject*<OS_dispatch_group>)syncGroup;
-(void)library:(id)arg1 didCompleteSyncWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)library:(id)arg1 didProduceError:(id)arg2 withFailedItemIdentifiers:(id)arg3 ;
-(id)initWithDataStore:(id)arg1 configuration:(id)arg2 ;
-(void)loadFetchedResultsController;
-(void)synchronizeChanges:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setSyncResult:(SHLibrarySyncResult *)arg1 ;
-(SHLibrarySyncResult *)syncResult;
-(SHLibrarySyncController *)syncController;
-(void)setLocalChanges:(SHLibraryChangeset *)arg1 ;
-(SHLibraryChangeset *)localChanges;
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5 ;
-(void)controllerWillChangeContent:(id)arg1 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)addMediaItems:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)recentLibraryTracksWithLimit:(long long)arg1 ;
-(void)setSyncController:(SHLibrarySyncController *)arg1 ;
-(void)setSyncGroup:(NSObject*<OS_dispatch_group>)arg1 ;
@end

