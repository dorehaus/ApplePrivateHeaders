/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSMutableDictionary, NSMutableArray;

@interface PLLocalChangeEventBuilder : NSObject {

	NSMutableSet* _insertedObjectIDs;
	NSMutableSet* _updatedObjectIDs;
	NSMutableSet* _deletedObjectIDs;
	NSMutableDictionary* _attributesByOID;
	NSMutableDictionary* _relationshipsByOID;
	NSMutableArray* _deletedAssetCloudGUIDs;
	NSMutableArray* _deletedAlbumCloudGUIDs;
	NSMutableArray* _deletedMemoryCloudGUIDs;
	NSMutableArray* _deletedPersonCloudGUIDs;
	NSMutableArray* _deletedFaceCropCloudGUIDs;
	NSMutableArray* _deletedOwnedShareCloudGUIDs;
	NSMutableArray* _deletedSubscribedShareCloudGUIDs;
	NSMutableArray* _deletedSuggestionCloudGUIDs;
	NSMutableArray* _deletedInternalResourceUUIDToResourceTypeMappings;
	char _coalescedEvent;
	char _syncChange;
	char _unknownMergeEvent;
	/*^block*/id _transactionFilter;
	/*^block*/id _updatedPropertyFilter;

}

@property (assign,getter=isCoalescedEvent,nonatomic) char coalescedEvent;                    //@synthesize coalescedEvent=_coalescedEvent - In the implementation block
@property (assign,getter=isSyncChange,nonatomic) char syncChange;                            //@synthesize syncChange=_syncChange - In the implementation block
@property (assign,getter=isUnknownMergeEvent,nonatomic) char unknownMergeEvent;              //@synthesize unknownMergeEvent=_unknownMergeEvent - In the implementation block
@property (nonatomic,copy) id transactionFilter;                                             //@synthesize transactionFilter=_transactionFilter - In the implementation block
@property (nonatomic,copy) id updatedPropertyFilter;                                         //@synthesize updatedPropertyFilter=_updatedPropertyFilter - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) char empty; 
+(id)localEventWithBuilderBlock:(/*^block*/id)arg1 ;
+(id)localEventFromTransaction:(id)arg1 ;
-(id)init;
-(char)isEmpty;
-(void)setUnknownMergeEvent:(char)arg1 ;
-(void)recordTransaction:(id)arg1 ;
-(void)recordChange:(id)arg1 ;
-(id)transactionFilter;
-(id)updatedPropertyFilter;
-(void)recordInsertedObjectID:(id)arg1 ;
-(void)recordUpdatedObjectID:(id)arg1 ;
-(void)recordDeletedObjectID:(id)arg1 ;
-(void)recordDeletedCloudGUID:(id)arg1 forType:(long long)arg2 ;
-(void)recordUpdatedAttributes:(unsigned long long)arg1 andRelationships:(unsigned long long)arg2 forObjectID:(id)arg3 ;
-(void)recordAllTransactionsFromIterator:(id)arg1 ;
-(char)_shouldRecordTransaction:(id)arg1 ;
-(void)_recordInsertChange:(id)arg1 ;
-(void)_recordUpdateChange:(id)arg1 ;
-(id)_filteredUpdatedPropertiesFromChange:(id)arg1 ;
-(void)_recordDeleteChange:(id)arg1 ;
-(void)_recordCloudDeleteForChange:(id)arg1 ;
-(Class)_cloudDeletableEntityFromObjectID:(id)arg1 ;
-(char)_isCloudStateDeletedOnTombstone:(id)arg1 ;
-(/*^block*/id)recordChangedObjectIDBlockForChangeKey:(id)arg1 ;
-(/*^block*/id)recordDeletedCloudGUIDBlockForChangeKey:(id)arg1 ;
-(id)buildLocalEvent;
-(char)isCoalescedEvent;
-(void)setCoalescedEvent:(char)arg1 ;
-(char)isSyncChange;
-(void)setSyncChange:(char)arg1 ;
-(char)isUnknownMergeEvent;
-(void)setTransactionFilter:(id)arg1 ;
-(void)setUpdatedPropertyFilter:(id)arg1 ;
@end
