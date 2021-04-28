/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableIndexSet;

@interface NSCollectionViewIndexMapper : NSObject {

	long long _oldIndexCount;
	long long _newIndexCount;
	long long* _oldIndexMap;
	long long* _newIndexMap;
	NSMutableIndexSet* _oldMovedRows;
	NSMutableIndexSet* _addedRows;
	NSMutableIndexSet* _items;
	NSMutableIndexSet* _movedItems;
	NSMutableIndexSet* _deletedRows;
	char _cleanupForMoves;
	char _hasPendingDeletes;

}
-(void)dealloc;
-(void)moveItemAtIndex:(long long)arg1 toIndex:(long long)arg2 ;
-(void)insertItemAtIndex:(long long)arg1 ;
-(id)initWithOldIndexCount:(long long)arg1 newIndexCount:(long long)arg2 ;
-(void)deleteItemAtIndex:(long long)arg1 ;
-(void)finishModifications;
-(long long)oldIndexAt:(long long)arg1 ;
-(long long)newIndexAt:(long long)arg1 ;
-(char)didDeleteIndex:(long long)arg1 ;
-(char)didInsertIndex:(long long)arg1 ;
-(void)_flushPendingDeletes;
-(void)_flushPendingInserts;
-(long long)oldIndexCount;
-(long long)newIndexCount;
-(long long*)oldIndexMap;
-(long long*)newIndexMap;
-(void)getNewIndexCount:(long long*)arg1 newIndexMap:(long long*)arg2 ;
@end

