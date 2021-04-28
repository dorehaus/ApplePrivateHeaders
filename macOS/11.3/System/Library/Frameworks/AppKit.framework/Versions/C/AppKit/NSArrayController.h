/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSObjectController.h>

@class NSMutableArray, NSMutableIndexSet, NSIndexSet, NSArray, NSPredicate;

@interface NSArrayController : NSObjectController {

	id _rearrangementExtensions;
	NSMutableArray* _temporaryWorkObjects;
	struct {
		unsigned _avoidsEmptySelection : 1;
		unsigned _preservesSelection : 1;
		unsigned _selectsInsertedObjects : 1;
		unsigned _alwaysUsesMultipleValuesMarker : 1;
		unsigned _refreshesAllModelObjects : 1;
		unsigned _filterRestrictsInsertion : 1;
		unsigned _overridesArrangeObjects : 1;
		unsigned _overridesDidChangeArrangementCriteria : 1;
		unsigned _explicitlyCannotInsert : 1;
		unsigned _generatedEmptyArray : 1;
		unsigned _isObservingKeyPathsThroughArrangedObjects : 1;
		unsigned _arrangedObjectsIsMutable : 1;
		unsigned _clearsFilterPredicateOnInsertion : 1;
		unsigned _skipSortingAfterFetch : 1;
		unsigned _automaticallyRearrangesObjects : 1;
		unsigned _reservedArrayController : 17;
	}  _arrayControllerFlags;
	unsigned long long _observedIndexHint;
	NSMutableIndexSet* _selectionIndexes;
	NSMutableArray* _objects;
	NSIndexSet* _cachedSelectedIndexes;
	NSArray* _cachedSelectedObjects;
	NSArray* _arrangedObjects;

}

@property (assign) char automaticallyRearrangesObjects; 
@property (copy,readonly) NSArray * automaticRearrangementKeyPaths; 
@property (copy) NSArray * sortDescriptors; 
@property (retain) NSPredicate * filterPredicate; 
@property (assign) char clearsFilterPredicateOnInsertion; 
@property (readonly) id arrangedObjects; 
@property (assign) char avoidsEmptySelection; 
@property (assign) char preservesSelection; 
@property (assign) char selectsInsertedObjects; 
@property (assign) char alwaysUsesMultipleValuesMarker; 
@property (copy,readonly) NSIndexSet * selectionIndexes; 
@property (readonly) unsigned long long selectionIndex; 
@property (copy,readonly) NSArray * selectedObjects; 
@property (readonly) char canInsert; 
@property (readonly) char canSelectNext; 
@property (readonly) char canSelectPrevious; 
+(void)initialize;
+(id)_nonAutomaticObservingKeys;
+(id)_keyValueBindingAccessPoints;
+(id)_modelAndProxyKeys;
-(id)description;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_init;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSArray *)sortDescriptors;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(void)remove:(id)arg1 ;
-(void)setContent:(id)arg1 ;
-(id)content;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(unsigned long long)selectionIndex;
-(char)setSelectionIndex:(unsigned long long)arg1 ;
-(unsigned long long)_multipleValuesObjectCount;
-(id)_multipleValuesObjectAtIndex:(unsigned long long)arg1 ;
-(id)_multipleValuesObjectsAtIndexes:(id)arg1 ;
-(id)_multipleValueForKeyPath:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_setMultipleValue:(id)arg1 forKeyPath:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(char)_validateMultipleValue:(id*)arg1 forKeyPath:(id)arg2 atIndex:(unsigned long long)arg3 error:(id*)arg4 ;
-(void)_invokeMultipleSelector:(SEL)arg1 withArguments:(id)arg2 onKeyPath:(id)arg3 atIndex:(unsigned long long)arg4 ;
-(NSIndexSet *)selectionIndexes;
-(id)_multipleMutableArrayValueForKeyPath:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(char)automaticallyRearrangesObjects;
-(id)arrangeObjects:(id)arg1 ;
-(void)rearrangeObjects;
-(void)_setObjects:(id)arg1 ;
-(void)didChangeArrangementCriteria;
-(id)_rearrangementExtensions:(char)arg1 ;
-(void)setAlwaysUsesMultipleValuesMarker:(char)arg1 ;
-(void)setClearsFilterPredicateOnInsertion:(char)arg1 ;
-(void)_setUpAutomaticRearrangingOfObjects;
-(void)_dealloc;
-(unsigned long long)_selectionIndexesCount;
-(char)_refreshesAllModelObjects;
-(char)alwaysUsesMultipleValuesMarker;
-(char)_registerObservingForAllModelObjects;
-(NSPredicate *)filterPredicate;
-(id)_filterObjects:(id)arg1 ;
-(id)_sortObjects:(id)arg1 ;
-(id)_arrayContent;
-(void)willChangeValuesForArrangedKeys:(char)arg1 objectKeys:(char)arg2 indexKeys:(char)arg3 ;
-(char)_selectObjectsAtIndexesNoCopy:(id)arg1 avoidsEmptySelection:(char)arg2 sendObserverNotifications:(char)arg3 forceUpdate:(char)arg4 ;
-(char)_modifySelectedObjects:(id)arg1 useExistingIndexesAsStartingPoint:(char)arg2 avoidsEmptySelection:(char)arg3 addOrRemove:(char)arg4 sendObserverNotifications:(char)arg5 forceUpdate:(char)arg6 ;
-(void)_cacheSelectedObjectsIfNecessary;
-(void)_updateObservingForAutomaticallyRearrangingObjects;
-(void)didChangeValuesForArrangedKeys:(char)arg1 objectKeys:(char)arg2 indexKeys:(char)arg3 ;
-(void)_didChangeArrangementCriteriaWithOperationsMask:(unsigned long long)arg1 useBasis:(id)arg2 ;
-(NSArray *)automaticRearrangementKeyPaths;
-(void)_addKeyPathsFromPredicate:(id)arg1 toSet:(id)arg2 ;
-(void)_updateAutomaticRearrangementKeysPaths;
-(char)preservesSelection;
-(NSArray *)selectedObjects;
-(void)_arrangeObjectsWithSelectedObjects:(id)arg1 avoidsEmptySelection:(char)arg2 operationsMask:(unsigned long long)arg3 useBasis:(id)arg4 ;
-(char)_sendsContentChangeNotifications;
-(char)avoidsEmptySelection;
-(void)setUsesLazyFetching:(char)arg1 ;
-(void)_stopObservingSelectionIfNecessary;
-(void)_startObservingSelectionIfNecessary;
-(char)_selectObjectsAtIndexes:(id)arg1 avoidsEmptySelection:(char)arg2 sendObserverNotifications:(char)arg3 forceUpdate:(char)arg4 ;
-(char)setSelectionIndexes:(NSIndexSet *)arg1 ;
-(void)_modifySelectionIndexes:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 addOrRemove:(char)arg3 sendObserverNotifications:(char)arg4 ;
-(char)_filterRestrictsInsertion;
-(char)clearsFilterPredicateOnInsertion;
-(void)setFilterPredicate:(NSPredicate *)arg1 ;
-(void)insertObject:(id)arg1 atArrangedObjectIndex:(unsigned long long)arg2 ;
-(void)insertObjects:(id)arg1 atArrangedObjectIndexes:(id)arg2 ;
-(void)_ensureObjectsAreMutable;
-(char)selectsInsertedObjects;
-(void)_addNumberOfIndexes:(unsigned long long)arg1 toSelectionIndexesAtIndex:(unsigned long long)arg2 sendObserverNotifications:(char)arg3 ;
-(void)_assertFilterRestrictsInsertionOfObjects:(id)arg1 atArrangedObjectIndexes:(id)arg2 ;
-(void)_insertObject:(id)arg1 atArrangedObjectIndex:(unsigned long long)arg2 objectHandler:(id)arg3 ;
-(void)_insertObjects:(id)arg1 atArrangedObjectIndexes:(id)arg2 objectHandler:(id)arg3 ;
-(void)_removeNumberOfIndexes:(unsigned long long)arg1 fromSelectionIndexesAtIndex:(unsigned long long)arg2 sendObserverNotifications:(char)arg3 ;
-(void)_ensureSelectionAfterRemoveWithPreferredIndex:(unsigned long long)arg1 sendObserverNotifications:(char)arg2 ;
-(void)_removeObjectAtArrangedObjectIndex:(unsigned long long)arg1 objectHandler:(id)arg2 ;
-(void)removeObjectAtArrangedObjectIndex:(unsigned long long)arg1 ;
-(void)_removeObjectsAtArrangedObjectIndexes:(id)arg1 contentIndexes:(id)arg2 objectHandler:(id)arg3 ;
-(void)removeObjects:(id)arg1 ;
-(void)_removeObjects:(id)arg1 objectHandler:(id)arg2 ;
-(char)canInsert;
-(void)_executeInsert:(id)arg1 didCommitSuccessfully:(char)arg2 actionSender:(id)arg3 ;
-(char)canAdd;
-(void)_executeAdd:(id)arg1 didCommitSuccessfully:(char)arg2 actionSender:(id)arg3 ;
-(char)canRemove;
-(void)removeObjectsAtArrangedObjectIndexes:(id)arg1 ;
-(void)_changeEditable:(char)arg1 ;
-(char)_explicitlyCannotInsert;
-(char)canSelectNext;
-(void)_executeSelectNext:(id)arg1 didCommitSuccessfully:(char)arg2 actionSender:(id)arg3 ;
-(char)canSelectPrevious;
-(void)_executeSelectPrevious:(id)arg1 didCommitSuccessfully:(char)arg2 actionSender:(id)arg3 ;
-(void)insert:(id)arg1 ;
-(void)selectNext:(id)arg1 ;
-(void)selectPrevious:(id)arg1 ;
-(id)_singleValueForKey:(id)arg1 ;
-(id)_singleValueForKeyPath:(id)arg1 ;
-(id)_multipleValueForKey:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_setMultipleValue:(id)arg1 forKey:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(char)_validateSingleValue:(id*)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
-(void)_setRefreshesAllModelObjects:(char)arg1 ;
-(char)_shouldSendObserverNotificationForModelOrProxyKey:(id)arg1 keyPath:(id)arg2 ofObject:(id)arg3 ;
-(void)setAutomaticallyRearrangesObjects:(char)arg1 ;
-(void)_setContentInBackground:(id)arg1 ;
-(void)_prepareContentWithNewObject:(id)arg1 ;
-(void)setAvoidsEmptySelection:(char)arg1 ;
-(void)setPreservesSelection:(char)arg1 ;
-(void)setSelectsInsertedObjects:(char)arg1 ;
-(char)addSelectionIndexes:(id)arg1 ;
-(char)removeSelectionIndexes:(id)arg1 ;
-(char)setSelectedObjects:(NSArray *)arg1 ;
-(char)addSelectedObjects:(id)arg1 ;
-(char)removeSelectedObjects:(id)arg1 ;
-(void)_setFilterRestrictsInsertion:(char)arg1 ;
-(void)addObjects:(id)arg1 ;
-(void)add:(id)arg1 ;
-(void)_setExplicitlyCannotAdd:(char)arg1 insert:(char)arg2 remove:(char)arg3 ;
-(id)_multipleMutableArrayValueForKey:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)_singleValueForKeyPath:(id)arg1 operationType:(long long)arg2 ;
-(id)_singleMutableArrayValueForKey:(id)arg1 ;
-(id)_singleMutableArrayValueForKeyPath:(id)arg1 ;
-(void)_setSingleValue:(id)arg1 forKey:(id)arg2 ;
-(void)_setSingleValue:(id)arg1 forKeyPath:(id)arg2 ;
-(void)_invokeSingleSelector:(SEL)arg1 withArguments:(id)arg2 onKeyPath:(id)arg3 ;
-(char)_validateSingleValue:(id*)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)_controllerKeys;
-(id)arrangedObjects;
-(void)setManagedObjectContext:(id)arg1 ;
-(void)_reactToMatchingInsertions:(id)arg1 deletions:(id)arg2 refreshed:(id)arg3 ;
-(id)defaultFetchRequest;
-(char)_performFetchWithRequest:(id)arg1 merge:(char)arg2 error:(id*)arg3 ;
-(void)addRangeOfInterest:(NSRange)arg1 ;
@end

