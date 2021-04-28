/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSDocument.h>

@class NSManagedObjectModel, NSManagedObjectContext;

@interface NSPersistentDocument : NSDocument {

	NSManagedObjectModel* _managedObjectModel;
	NSManagedObjectContext* _managedObjectContext;
	id _store;
	unsigned long long _pDocFlags;
	id _relatedRequestURLs;

}

@property (retain) NSManagedObjectContext * managedObjectContext; 
@property (readonly) NSManagedObjectModel * managedObjectModel; 
+(char)_hasOverrideForSelector:(SEL)arg1 fromBaseClass:(Class)arg2 ;
-(void)dealloc;
-(id)init;
-(void)close;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(char)_finishWritingToURL:(id)arg1 byMovingItemAtURL:(id)arg2 addingAttributes:(id)arg3 error:(id*)arg4 ;
-(void)setFileURL:(id)arg1 ;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(id)backupFileURL;
-(char)readFromURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(char)isEntireFileLoaded;
-(char)revertToContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(void)_discardEditing;
-(void)_commitEditingThenContinue:(/*^block*/id)arg1 ;
-(char)_unlockAndReturnError:(id*)arg1 ;
-(char)_revertToVersion:(id)arg1 preservingFirst:(char)arg2 error:(id*)arg3 ;
-(char)hasUndoManager;
-(char)_isBeingEdited;
-(char)writeSafelyToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 error:(id*)arg4 ;
-(void)moveToURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setHasUndoManager:(char)arg1 ;
-(void)setUndoManager:(id)arg1 ;
-(char)writeToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 originalContentsURL:(id)arg4 error:(id*)arg5 ;
-(NSManagedObjectContext *)managedObjectContext;
-(id)_persistentStoreCoordinator;
-(NSManagedObjectModel *)managedObjectModel;
-(void)_releaseRelatedItemsForURL:(id)arg1 ;
-(void)_documentEditor:(id)arg1 didCommit:(char)arg2 withContext:(void*)arg3 ;
-(id)_requestRelatedItemForURL:(id)arg1 withLastComponent:(id)arg2 ;
-(id)persistentStoreTypeForFileType:(id)arg1 ;
-(void)_requestSQLiteRelatedItemsForURL:(id)arg1 attributes:(id)arg2 ;
-(char)_configurePersistentStoreCoordinatorForURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(char)_movePersistentStore:(id)arg1 fromURL:(id)arg2 toURL:(id)arg3 attributes:(id)arg4 error:(id*)arg5 ;
-(char)_isAtomicPersistentStoreType:(id)arg1 ;
-(char)configurePersistentStoreCoordinatorForURL:(id)arg1 ofType:(id)arg2 modelConfiguration:(id)arg3 storeOptions:(id)arg4 error:(id*)arg5 ;
-(char)configurePersistentStoreCoordinatorForURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
@end
