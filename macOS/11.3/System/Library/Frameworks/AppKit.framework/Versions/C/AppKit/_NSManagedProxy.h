/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSManagedObjectContext, NSString, NSPredicate, NSArray;

@interface _NSManagedProxy : NSObject {

	id _callbackHandler;
	NSManagedObjectContext* _managedObjectContext;
	NSString* _entityName;
	NSPredicate* _fetchPredicate;
	NSArray* _sortDescriptors;
	id _lazyFetchingArray;

}
-(void)dealloc;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)sortDescriptors;
-(void)setSortDescriptors:(id)arg1 ;
-(id)entityName;
-(id)_lazyFetchResultProxyForObjects:(id)arg1 ;
-(void)deleteObject:(id)arg1 ;
-(void)setManagedObjectContext:(id)arg1 ;
-(id)usableSortDescriptorsFromArray:(id)arg1 ;
-(id)fetchRequestWithSortDescriptors:(id)arg1 limit:(unsigned long long)arg2 ;
-(id)fetchObjectsWithFetchRequest:(id)arg1 error:(id*)arg2 ;
-(void)updateBatchSizeForRange:(NSRange)arg1 ;
-(void)_setCallbackHandler:(id)arg1 ;
-(id)managedObjectContext;
-(id)newInsertedObject;
-(void)setEntityName:(id)arg1 ;
-(void)setFetchPredicate:(id)arg1 ;
-(id)fetchPredicate;
-(char)isEntityUsable:(id)arg1 ;
-(id)_relationshipKeyPathsForPrefetching;
-(void)_managedObjectsChangedInContext:(id)arg1 ;
-(void)_managedObjectContextDidSave:(id)arg1 ;
-(void)_refetchForContext:(id)arg1 ;
-(void)_storesDidChange:(id)arg1 ;
-(id)_managedObjectContext;
-(id)_persistentStoreCoordinator;
-(id)_entity;
-(id)newInsertedObjectForEntity:(id)arg1 ;
-(id)_callbackHandler;
-(char)_objectMatchesEntity:(id)arg1 ;
-(char)_objectMatchesFetchPredicate:(id)arg1 ;
-(void)_executeFetchForObjects:(id)arg1 ;
@end

