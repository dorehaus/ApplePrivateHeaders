/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/Versions/A/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/CRCoding.h>
#import <libobjc.A.dylib/CRUndoDelegate.h>
#import <libobjc.A.dylib/CRDataType.h>

@protocol CRUndoDelegate;
@class NSMutableOrderedSet, NSMapTable, CRDocument, NSObject, CRArray, CRSet, NSString;

@interface CRTombstoneOrderedSet : NSObject <CRCoding, CRUndoDelegate, CRDataType> {

	NSMutableOrderedSet* _cachedIdentifierSet;
	NSMapTable* _cachedIndexMapping;
	CRDocument* _document;
	NSObject*<CRUndoDelegate> _delegate;
	CRArray* _ordering;
	CRSet* _elements;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSMutableOrderedSet * cachedIdentifierSet;              //@synthesize cachedIdentifierSet=_cachedIdentifierSet - In the implementation block
@property (nonatomic,readonly) NSMapTable * cachedIndexMapping;                        //@synthesize cachedIndexMapping=_cachedIndexMapping - In the implementation block
@property (nonatomic,retain) CRArray * ordering;                                       //@synthesize ordering=_ordering - In the implementation block
@property (nonatomic,retain) CRSet * elements;                                         //@synthesize elements=_elements - In the implementation block
@property (assign,nonatomic,__weak) CRDocument * document;                             //@synthesize document=_document - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<CRUndoDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(NSObject*<CRUndoDelegate>)delegate;
-(void)setDelegate:(NSObject*<CRUndoDelegate>)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(CRSet *)elements;
-(CRDocument *)document;
-(CRArray *)ordering;
-(void)setOrdering:(CRArray *)arg1 ;
-(void)setDocument:(CRDocument *)arg1 ;
-(id)initWithDocument:(id)arg1 ;
-(id)tombstone;
-(id)objectForIdentifier:(id)arg1 ;
-(void)setElements:(CRSet *)arg1 ;
-(void)mergeWith:(id)arg1 ;
-(unsigned long long)indexOfEqualObject:(id)arg1 ;
-(void)moveObjectFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)addUndoCommandsForObject:(id)arg1 block:(/*^block*/id)arg2 ;
-(char)wantsUndoCommands;
-(id)initWithCRCoder:(id)arg1 ;
-(void)encodeWithCRCoder:(id)arg1 ;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(void)realizeLocalChangesIn:(id)arg1 ;
-(void)moveClock;
-(void)encodeWithCRCoder:(id)arg1 orderedSet:(OrderedSet*)arg2 ;
-(id)initWithCRCoder:(id)arg1 orderedSet:(const OrderedSet*)arg2 ;
-(id)initWithOrdering:(id)arg1 elements:(id)arg2 document:(id)arg3 ;
-(NSMutableOrderedSet *)cachedIdentifierSet;
-(void)regenerateNSOrderedIdentifierSetAndIndexMapping;
-(id)generateNSOrderedIdentifierSetWithIndexMapping:(id)arg1 ;
-(NSMapTable *)cachedIndexMapping;
-(id)identifierForObjectInCachedSet:(id)arg1 ;
-(void)shiftCachedIndicesStartingAtIndex:(unsigned long long)arg1 by:(long long)arg2 ;
-(void)undoablyRemoveObjectIdentifiersFromElements:(id)arg1 ;
-(void)wipeoutCaches;
-(void)undoablyInsertObjectIdentifiersIntoElements:(id)arg1 ;
-(void)_removeObjectsFromOrderingAtIndices:(id)arg1 ;
-(void)moveObjectFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 mutableSafe:(char)arg3 ;
-(void)reinsertIdentifier:(id)arg1 withMaskedIdentifiers:(id)arg2 atIndex:(unsigned long long)arg3 forObjectToMove:(id)arg4 ;
-(char)containsObjectEqualTo:(id)arg1 ;
-(void)safeMoveObjectFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)realizeElementMutations;
@end

