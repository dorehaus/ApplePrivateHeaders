/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSBulkPointerArray, NSMutableIndexSet, NSIndexSet;

@interface _NSCollectionViewCachedSectionInfo : NSObject {

	id _representedObject;
	long long _itemCount;
	NSBulkPointerArray* _itemPointers;
	NSMutableIndexSet* _invalidIndexes;
	NSMutableIndexSet* _queuedDeletedItemIndexes;

}

@property (retain) id representedObject;                                     //@synthesize representedObject=_representedObject - In the implementation block
@property (assign) long long itemCount; 
@property (readonly) NSIndexSet * itemIndexesQueuedForDeletion; 
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(id)init;
-(id)objectAtIndex:(long long)arg1 ;
-(void)setObject:(id)arg1 atIndex:(long long)arg2 ;
-(long long)itemCount;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)setRepresentedObject:(id)arg1 ;
-(void)insertItemsAtIndexes:(id)arg1 ;
-(void)reloadItemsAtIndexes:(id)arg1 ;
-(id)representedObject;
-(void)moveItemFromIndex:(long long)arg1 toIndex:(long long)arg2 ;
-(id)initWithRepresentedObject:(id)arg1 itemCount:(long long)arg2 itemPointers:(id)arg3 invalidIndexes:(id)arg4 ;
-(void)deleteItemsAtIndexes:(id)arg1 ;
-(id)deepCopyForBatchUpdate;
-(void)setAllRepresentedObjectPointers:(id)arg1 ;
-(void)setItemCount:(long long)arg1 ;
-(char)needsToFetchAnyRepresentedObjects;
-(void)fetchAllNeededRepresentedObjectsFromObjectBasedDataSource:(id)arg1 forCollectionView:(id)arg2 ;
-(unsigned long long)actualItemCount;
-(void)queueDeleteItemsAtIndexes:(id)arg1 ;
-(NSIndexSet *)itemIndexesQueuedForDeletion;
-(void)deleteQueuedItems;
-(void)appendItemPointersTo:(id)arg1 ;
-(void)replaceItemPointersFromArray:(id)arg1 range:(NSRange)arg2 ;
@end

