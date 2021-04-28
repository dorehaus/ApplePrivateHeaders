/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@interface NSArray : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration>

@property (readonly) unsigned long long count; 
+(id)newWithContentsOf:(id)arg1 immutable:(char)arg2 ;
+(id)arrayWithContentsOfFile:(id)arg1 ;
+(id)arrayWithContentsOfURL:(id)arg1 ;
+(id)arrayWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
+(id)newWithContentsOf:(id)arg1 immutable:(char)arg2 error:(id*)arg3 ;
+(id)_scriptingArrayOfType:(id)arg1 withDescriptor:(id)arg2 ;
+(id)arrayByFilteringLaunchProhibitedAppsFrom:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)supportsSecureCoding;
+(id)array;
+(id)arrayWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
+(id)arrayWithObject:(id)arg1 ;
+(id)newArrayWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
+(id)arrayWithObjects:(id)arg1 ;
+(id)arrayWithArray:(id)arg1 range:(NSRange)arg2 copyItems:(char)arg3 ;
+(id)arrayWithArray:(id)arg1 range:(NSRange)arg2 ;
+(id)arrayWithArray:(id)arg1 copyItems:(char)arg2 ;
+(id)arrayWithArray:(id)arg1 ;
+(id)arrayWithOrderedSet:(id)arg1 range:(NSRange)arg2 copyItems:(char)arg3 ;
+(id)arrayWithOrderedSet:(id)arg1 range:(NSRange)arg2 ;
+(id)arrayWithOrderedSet:(id)arg1 copyItems:(char)arg2 ;
+(id)arrayWithOrderedSet:(id)arg1 ;
+(id)arrayWithSet:(id)arg1 copyItems:(char)arg2 ;
+(id)arrayWithSet:(id)arg1 ;
-(id)debugDescription;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(Class)classForCoder;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(id)valueForKeyPath:(id)arg1 ;
-(char)writeToFile:(id)arg1 atomically:(char)arg2 ;
-(id)sortedArrayUsingFunction:(/*function pointer*/void*)arg1 context:(void*)arg2 hint:(id)arg3 ;
-(id)_stringToWrite;
-(id)sortedArrayHint;
-(id)sortedArrayUsingSelector:(SEL)arg1 hint:(id)arg2 ;
-(char)writeToURL:(id)arg1 atomically:(char)arg2 ;
-(char)writeToURL:(id)arg1 error:(id*)arg2 ;
-(id)differenceFromArray:(id)arg1 withOptions:(unsigned long long)arg2 usingEquivalenceTest:(/*^block*/id)arg3 ;
-(id)_scriptingSetOfObjectsForSpecifier:(id)arg1 ;
-(id)_scriptingArrayOfObjectsForSpecifier:(id)arg1 ;
-(unsigned long long)_scriptingCountNonrecursively;
-(unsigned long long)_scriptingCount;
-(unsigned long long)_scriptingCountOfValueForKey:(id)arg1 ;
-(void)_scriptingRemoveValueForSpecifier:(id)arg1 ;
-(void)takeValue:(id)arg1 forKey:(id)arg2 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(id)_valueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2 ;
-(id)_sumForKeyPath:(id)arg1 ;
-(id)_unionOfArraysForKeyPath:(id)arg1 ;
-(id)_unionOfObjectsForKeyPath:(id)arg1 ;
-(id)_avgForKeyPath:(id)arg1 ;
-(id)_countForKeyPath:(id)arg1 ;
-(id)_maxForKeyPath:(id)arg1 ;
-(id)_minForKeyPath:(id)arg1 ;
-(id)_unionOfSetsForKeyPath:(id)arg1 ;
-(id)_distinctUnionOfArraysForKeyPath:(id)arg1 ;
-(id)_distinctUnionOfObjectsForKeyPath:(id)arg1 ;
-(id)_distinctUnionOfSetsForKeyPath:(id)arg1 ;
-(id)_mutableArrayValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2 ;
-(id)_mutableOrderedSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2 ;
-(id)_mutableSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2 ;
-(void)_setValue:(id)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3 ;
-(char)_validateValue:(inout id*)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3 error:(out id*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(void)addObserver:(id)arg1 toObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 options:(unsigned long long)arg4 context:(void*)arg5 ;
-(void)removeObserver:(id)arg1 fromObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 fromObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 ;
-(id)differenceFromArray:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(id)differenceFromArray:(id)arg1 ;
-(id)arrayByApplyingDifference:(id)arg1 ;
-(id)coerceValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueAtIndex:(unsigned long long)arg1 inPropertyWithKey:(id)arg2 ;
-(id)_scriptingValueForSpecifier:(id)arg1 ;
-(void)insertValue:(id)arg1 atIndex:(unsigned long long)arg2 inPropertyWithKey:(id)arg3 ;
-(void)replaceValueAtIndex:(unsigned long long)arg1 inPropertyWithKey:(id)arg2 withValue:(id)arg3 ;
-(void)removeValueAtIndex:(unsigned long long)arg1 fromPropertyWithKey:(id)arg2 ;
-(id)_scriptingObjectForSpecifier:(id)arg1 ;
-(id)pathsMatchingExtensions:(id)arg1 ;
-(id)stringsByAppendingPathComponent:(id)arg1 ;
-(id)filteredArrayUsingPredicate:(id)arg1 ;
-(int)_scriptingAlternativeValueRankWithDescriptor:(id)arg1 ;
-(id)_scriptingDescriptorOfListType:(id)arg1 orReasonWhyNot:(id*)arg2 ;
-(char)_scriptingMightHandleCommand:(id)arg1 ;
-(char)_scriptingCanHandleCommand:(id)arg1 ;
-(void)_scriptingAddToReceiversArray:(id)arg1 ;
-(id)sortedArrayUsingDescriptors:(id)arg1 ;
-(id)_scriptingSetValue:(id)arg1 forSpecifier:(id)arg2 ;
-(char)_scriptingExists;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)objectEnumerator;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)allObjects;
-(unsigned long long)countForObject:(id)arg1 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)initWithArray:(id)arg1 range:(NSRange)arg2 copyItems:(char)arg3 ;
-(id)initWithArray:(id)arg1 copyItems:(char)arg2 ;
-(id)initWithArray:(id)arg1 ;
-(id)_initByAdoptingBuffer:(id*)arg1 count:(unsigned long long)arg2 size:(unsigned long long)arg3 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(id)sortedArrayFromRange:(NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(/*^block*/id)arg3 ;
-(id)initWithObject:(id)arg1 ;
-(char)containsObject:(id)arg1 ;
-(id)initWithSet:(id)arg1 copyItems:(char)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(unsigned long long)_cfTypeID;
-(unsigned long long)indexOfObjectPassingTest:(/*^block*/id)arg1 ;
-(id)initWithOrderedSet:(id)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)getObjects:(id*)arg1 ;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2 ;
-(id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(char)isEqualToArray:(id)arg1 ;
-(unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)objectWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)objectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/id)arg2 ;
-(id)initWithOrderedSet:(id)arg1 range:(NSRange)arg2 copyItems:(char)arg3 ;
-(char)isNSArray__;
-(id)componentsJoinedByString:(id)arg1 ;
-(char)containsObject:(id)arg1 inRange:(NSRange)arg2 ;
-(char)containsObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(char)containsObjectIdenticalTo:(id)arg1 ;
-(unsigned long long)countForObject:(id)arg1 inRange:(NSRange)arg2 ;
-(void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)firstObject;
-(id)firstObjectCommonWithArray:(id)arg1 ;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(id)indexesOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(id)indexesOfObject:(id)arg1 ;
-(id)indexesOfObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(id)indexesOfObjectIdenticalTo:(id)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 inSortedRange:(NSRange)arg2 options:(unsigned long long)arg3 usingComparator:(/*^block*/id)arg4 ;
-(id)indexesOfObjectsPassingTest:(/*^block*/id)arg1 ;
-(id)lastObject;
-(void)makeObjectsPerformSelector:(SEL)arg1 ;
-(void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2 ;
-(id)objectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)objectPassingTest:(/*^block*/id)arg1 ;
-(id)objectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)objectsPassingTest:(/*^block*/id)arg1 ;
-(id)reverseObjectEnumerator;
-(id)reversedArray;
-(id)sortedArrayUsingComparator:(/*^block*/id)arg1 ;
-(id)sortedArrayUsingFunction:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(id)sortedArrayUsingSelector:(SEL)arg1 ;
-(id)subarrayWithRange:(NSRange)arg1 ;
-(id)initWithArray:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithObjects:(id)arg1 ;
-(id)initWithSet:(id)arg1 ;
-(id)initWithOrderedSet:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithOrderedSet:(id)arg1 copyItems:(char)arg2 ;
-(id)arrayByAddingObject:(id)arg1 ;
-(id)arrayByAddingObjectsFromArray:(id)arg1 ;
-(id)arrayByApplyingSelector:(SEL)arg1 ;
-(id)arrayByExcludingObjectsInArray:(id)arg1 ;
-(id)arrayByExcludingToObjectsInArray:(id)arg1 ;
@end

