/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libobjc.A.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/libobjc.A.dylib-Structs.h>
#import <libobjc.A.dylib/NSObject.h>
@class NSString;


@protocol NSObject
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@optional
-(NSString *)debugDescription;

@required
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(id)autorelease;
-(char)isEqual:(id)arg1;
-(Class)class;
-(id)self;
-(id)performSelector:(SEL)arg1;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
-(char)isProxy;
-(char)isKindOfClass:(Class)arg1;
-(char)isMemberOfClass:(Class)arg1;
-(char)conformsToProtocol:(id)arg1;
-(char)respondsToSelector:(SEL)arg1;
-(NSZone*)zone;
-(unsigned long long)hash;
-(Class)superclass;
-(NSString *)description;

@end


@class NSString, NSClassDescription, NSArray, NSDictionary;

@interface NSObject <NSObject> {

	Class isa;

}

@property (copy,readonly) NSClassDescription * classDescription; 
@property (copy,readonly) NSArray * attributeKeys; 
@property (copy,readonly) NSArray * toOneRelationshipKeys; 
@property (copy,readonly) NSArray * toManyRelationshipKeys; 
@property (assign) void* observationInfo; 
@property (readonly) Class classForKeyedArchiver; 
@property (retain,readonly) id autoContentAccessingProxy; 
@property (copy) NSDictionary * scriptingProperties; 
@property (readonly) unsigned classCode; 
@property (copy,readonly) NSString * className; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)load;
+(long long)version;
+(char)implementsSelector:(SEL)arg1 ;
+(char)instancesImplementSelector:(SEL)arg1 ;
+(void)poseAsClass:(Class)arg1 ;
+(void)setVersion:(long long)arg1 ;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)replacementObjectForPortCoder:(id)arg1 ;
+(id)classFallbacksForKeyedArchiver;
+(Class)classForKeyedUnarchiver;
+(objc_method_description*)methodDescriptionForSelector:(SEL)arg1 ;
+(char)useStoredAccessor;
+(char)accessInstanceVariablesDirectly;
+(const char*)_localClassNameForClass;
+(objc_method_description*)instanceMethodDescriptionForSelector:(SEL)arg1 ;
+(id)_createMutableArrayValueGetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(id)_createValueGetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(id)_createValueSetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(id)_createMutableOrderedSetValueGetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(id)_createMutableSetValueGetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(id)_createValuePrimitiveGetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(id)_createValuePrimitiveSetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(id)_createOtherValueGetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(id)_createOtherValueSetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(id)_keysForValuesAffectingValueForKey:(id)arg1 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(void)setKeys:(id)arg1 triggerChangeNotificationsForDependentKey:(id)arg2 ;
+(char)_shouldAddObservationForwardersForKey:(id)arg1 ;
+(void)cancelPreviousPerformRequestsWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
+(void)cancelPreviousPerformRequestsWithTarget:(id)arg1 ;
+(id)_scriptingValueOfOneOfAlternativeTypes:(id)arg1 withDescriptor:(id)arg2 ;
+(id)_scriptingEnumeratorOfType:(id)arg1 withDescriptor:(id)arg2 ;
+(id)_scriptingValueOfComplexType:(id)arg1 withDescriptor:(id)arg2 ;
+(id)_scriptingValueOfObjectType:(id)arg1 withDescriptor:(id)arg2 ;
+(id)_scriptingValueOfValueType:(id)arg1 withDescriptor:(id)arg2 ;
+(SEL)_selectorToGetValueWithNameForKey:(id)arg1 ;
+(SEL)_selectorToGetValueWithUniqueIDForKey:(id)arg1 ;
+(void)flushAllKeyBindings;
+(void)flushClassKeyBindings;
+(id)SFSQLiteClassName;
+(void)dealloc;
+(id)description;
+(id)init;
+(void)load;
+(void)doesNotRecognizeSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(id)methodSignatureForSelector:(SEL)arg1 ;
+(id)_copyDescription;
+(id)__allocWithZone_OA:(NSZone*)arg1 ;
+(id)retain;
+(oneway void)release;
+(unsigned long long)retainCount;
+(id)autorelease;
+(char)_tryRetain;
+(char)_isDeallocating;
+(id)copy;
+(id)copyWithZone:(NSZone*)arg1 ;
+(void)dealloc;
+(char)isEqual:(id)arg1 ;
+(Class)class;
+(id)self;
+(id)performSelector:(SEL)arg1 ;
+(id)performSelector:(SEL)arg1 withObject:(id)arg2 ;
+(id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 ;
+(char)isProxy;
+(char)isKindOfClass:(Class)arg1 ;
+(char)isMemberOfClass:(Class)arg1 ;
+(char)conformsToProtocol:(id)arg1 ;
+(char)respondsToSelector:(SEL)arg1 ;
+(NSZone*)zone;
+(unsigned long long)hash;
+(Class)superclass;
+(id)description;
+(id)debugDescription;
+(id)init;
+(char)retainWeakReference;
+(char)allowsWeakReference;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(id)new;
+(char)resolveInstanceMethod:(SEL)arg1 ;
+(char)resolveClassMethod:(SEL)arg1 ;
+(id)alloc;
+(id)mutableCopyWithZone:(NSZone*)arg1 ;
+(char)isSubclassOfClass:(Class)arg1 ;
+(char)isAncestorOfObject:(id)arg1 ;
+(char)instancesRespondToSelector:(SEL)arg1 ;
+(char)isFault;
+(/*function pointer*/void*)instanceMethodForSelector:(SEL)arg1 ;
+(/*function pointer*/void*)methodForSelector:(SEL)arg1 ;
+(void)doesNotRecognizeSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(id)methodSignatureForSelector:(SEL)arg1 ;
+(void)forwardInvocation:(id)arg1 ;
+(id)forwardingTargetForSelector:(SEL)arg1 ;
+(id)mutableCopy;
-(Class)classForCoder;
-(id)replacementObjectForCoder:(id)arg1 ;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(char)_allowsDirectEncoding;
-(char)implementsSelector:(SEL)arg1 ;
-(void)setObservationInfo:(void*)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)_notifyObserversOfChangeFromValuesForKeys:(id)arg1 toValuesForKeys:(id)arg2 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(void)willChangeValueForKey:(id)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)_willChangeValuesForKeys:(id)arg1 ;
-(void)_didChangeValuesForKeys:(id)arg1 ;
-(id)dictionaryWithValuesForKeys:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(Class)classForKeyedArchiver;
-(id)replacementObjectForKeyedArchiver:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(id)addObserver:(id)arg1 ;
-(id)objectSpecifier;
-(id)replacementObjectForArchiver:(id)arg1 ;
-(Class)classForArchiver;
-(NSArray *)attributeKeys;
-(NSArray *)toOneRelationshipKeys;
-(NSArray *)toManyRelationshipKeys;
-(id)inverseForRelationshipKey:(id)arg1 ;
-(NSClassDescription *)classDescription;
-(id)_scriptingSetOfObjectsForSpecifier:(id)arg1 ;
-(id)copyScriptingValue:(id)arg1 forKey:(id)arg2 withProperties:(id)arg3 ;
-(id)_scriptingAddObjectsFromSet:(id)arg1 toValueForKey:(id)arg2 ;
-(id)_scriptingArrayOfObjectsForSpecifier:(id)arg1 ;
-(char)_scriptingCanAddObjectsToValueForKey:(id)arg1 ;
-(char)_scriptingCanInsertBeforeOrReplaceObjectsAtIndexes:(id)arg1 inValueForKey:(id)arg2 ;
-(id)_scriptingAddObjectsFromArray:(id)arg1 toValueForKey:(id)arg2 ;
-(id)_scriptingReplaceObjectAtIndex:(unsigned long long)arg1 withObjects:(id)arg2 inValueForKey:(id)arg3 ;
-(id)_scriptingInsertObjects:(id)arg1 atIndexes:(id)arg2 inValueForKey:(id)arg3 ;
-(id)_scriptingIndexesOfObjectsForSpecifier:(id)arg1 ;
-(id)_scriptingObjectsAtIndexes:(id)arg1 inValueForKey:(id)arg2 ;
-(objc_method_description*)methodDescriptionForSelector:(SEL)arg1 ;
-(char)_conformsToProtocolNamed:(const char*)arg1 ;
-(unsigned long long)_scriptingObjectCountInValueForKey:(id)arg1 ;
-(id)_scriptingValueForKey:(id)arg1 ;
-(unsigned long long)_scriptingCountNonrecursively;
-(unsigned long long)_scriptingCount;
-(unsigned long long)_scriptingCountOfValueForKey:(id)arg1 ;
-(id)newScriptingObjectOfClass:(Class)arg1 forValueForKey:(id)arg2 withContentsValue:(id)arg3 properties:(id)arg4 ;
-(id)_scriptingInsertObject:(id)arg1 inValueForKey:(id)arg2 ;
-(void)_scriptingRemoveAllObjectsFromValueForKey:(id)arg1 ;
-(char)_scriptingCanSetValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)_scriptingSetValue:(id)arg1 forKey:(id)arg2 ;
-(void)_scriptingRemoveObjectsAtIndexes:(id)arg1 fromValueForKey:(id)arg2 ;
-(void)_scriptingRemoveValueForSpecifier:(id)arg1 ;
-(id)handleQueryWithUnboundKey:(id)arg1 ;
-(void)handleTakeValue:(id)arg1 forUnboundKey:(id)arg2 ;
-(id)storedValueForKey:(id)arg1 ;
-(void)takeStoredValue:(id)arg1 forKey:(id)arg2 ;
-(void)takeValue:(id)arg1 forKey:(id)arg2 ;
-(void)takeValue:(id)arg1 forKeyPath:(id)arg2 ;
-(id)_createKeyValueBindingForKey:(id)arg1 name:(const char*)arg2 bindingType:(unsigned long long)arg3 ;
-(id)_oldValueForKeyPath:(id)arg1 ;
-(id)valuesForKeys:(id)arg1 ;
-(void)takeValuesFromDictionary:(id)arg1 ;
-(void)unableToSetNilForKey:(id)arg1 ;
-(id)_oldValueForKey:(id)arg1 ;
-(id)keyValueBindingForKey:(id)arg1 typeMask:(unsigned long long)arg2 ;
-(id)createKeyValueBindingForKey:(id)arg1 typeMask:(unsigned long long)arg2 ;
-(const char*)_localClassNameForClass;
-(char)validateValue:(inout id*)arg1 forKeyPath:(id)arg2 error:(out id*)arg3 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(id)mutableArrayValueForKeyPath:(id)arg1 ;
-(id)mutableOrderedSetValueForKeyPath:(id)arg1 ;
-(id)mutableSetValueForKeyPath:(id)arg1 ;
-(id)addObserver:(id)arg1 forObservableKeyPath:(id)arg2 ;
-(void)removeObservation:(id)arg1 ;
-(void)receiveObservedValue:(id)arg1 ;
-(void)receiveObservedError:(id)arg1 ;
-(void)finishObserving;
-(char)_isToManyChangeInformation;
-(void)_receiveBox:(id)arg1 ;
-(void)setObservation:(id)arg1 forObservingKeyPath:(id)arg2 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(void)removeObservation:(id)arg1 forObservableKeyPath:(id)arg2 ;
-(NSString *)className;
-(void)_destroyObserverList;
-(void*)_observerStorageOfSize:(unsigned long long)arg1 ;
-(id*)_observerStorage;
-(char)_overrideUseFastBlockObservers;
-(id)addChainedObservers:(id)arg1 ;
-(id)addObserverBlock:(/*^block*/id)arg1 ;
-(id)addObservationTransformer:(/*^block*/id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)setNilValueForKey:(id)arg1 ;
-(char)validateValue:(inout id*)arg1 forKey:(id)arg2 error:(out id*)arg3 ;
-(id)mutableArrayValueForKey:(id)arg1 ;
-(id)mutableOrderedSetValueForKey:(id)arg1 ;
-(id)mutableSetValueForKey:(id)arg1 ;
-(void)setValuesForKeysWithDictionary:(id)arg1 ;
-(void)willChange:(unsigned long long)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3 ;
-(void)didChange:(unsigned long long)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3 ;
-(void)willChangeValueForKey:(id)arg1 withSetMutation:(unsigned long long)arg2 usingObjects:(id)arg3 ;
-(void)didChangeValueForKey:(id)arg1 withSetMutation:(unsigned long long)arg2 usingObjects:(id)arg3 ;
-(void*)observationInfo;
-(char)_isKVOA;
-(void)_changeValueForKey:(id)arg1 key:(id)arg2 key:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)_willBeginKeyValueObserving;
-(void)_didEndKeyValueObserving;
-(void)_addObserver:(id)arg1 forProperty:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(void)_removeObserver:(id)arg1 forProperty:(id)arg2 ;
-(void)_changeValueForKeys:(id*)arg1 count:(unsigned long long)arg2 maybeOldValuesDict:(id)arg3 maybeNewValuesDict:(id)arg4 usingBlock:(/*^block*/id)arg5 ;
-(id)_implicitObservationInfo;
-(void)_notifyObserversForKeyPath:(id)arg1 change:(id)arg2 ;
-(void)_changeValueForKey:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_pendingChangeNotificationsArrayForKey:(id)arg1 create:(char)arg2 ;
-(id)_scriptingObjectWithName:(id)arg1 inValueForKey:(id)arg2 ;
-(unsigned long long)_scriptingIndexOfObjectWithName:(id)arg1 inValueForKey:(id)arg2 ;
-(id)autoContentAccessingProxy;
-(id)_scriptingIndicesOfObjectsAfterValidatingSpecifier:(id)arg1 ;
-(id)_scriptingObjectAtIndex:(unsigned long long)arg1 inValueForKey:(id)arg2 ;
-(id)_scriptingCoerceValue:(id)arg1 forKey:(id)arg2 ;
-(void)_compatibility_takeValue:(id)arg1 forKey:(id)arg2 ;
-(id)coerceValue:(id)arg1 forKey:(id)arg2 ;
-(void)setScriptingProperties:(NSDictionary *)arg1 ;
-(id)_scriptingCopyWithProperties:(id)arg1 forValueForKey:(id)arg2 ofContainer:(id)arg3 ;
-(id)scriptingValueForSpecifier:(id)arg1 ;
-(NSDictionary *)scriptingProperties;
-(id)coerceValueForScriptingProperties:(id)arg1 ;
-(char)_scriptingShouldCheckObjectIndexes;
-(id)valueAtIndex:(unsigned long long)arg1 inPropertyWithKey:(id)arg2 ;
-(long long)_supportsGetValueWithNameForKey:(id)arg1 perhapsByOverridingClass:(Class)arg2 ;
-(id)valueWithName:(id)arg1 inPropertyWithKey:(id)arg2 ;
-(long long)_supportsGetValueWithUniqueIDForKey:(id)arg1 perhapsByOverridingClass:(Class)arg2 ;
-(id)valueWithUniqueID:(id)arg1 inPropertyWithKey:(id)arg2 ;
-(unsigned long long)_scriptingIndexOfObjectWithUniqueID:(id)arg1 inValueForKey:(id)arg2 ;
-(unsigned long long)_scriptingIndexOfObjectForSpecifier:(id)arg1 ;
-(id)_scriptingValueForSpecifier:(id)arg1 ;
-(void)insertValue:(id)arg1 atIndex:(unsigned long long)arg2 inPropertyWithKey:(id)arg3 ;
-(void)replaceValueAtIndex:(unsigned long long)arg1 inPropertyWithKey:(id)arg2 withValue:(id)arg3 ;
-(void)insertValue:(id)arg1 inPropertyWithKey:(id)arg2 ;
-(void)removeValueAtIndex:(unsigned long long)arg1 fromPropertyWithKey:(id)arg2 ;
-(long long*)_scriptingIndicesOfObjectsForSpecifier:(id)arg1 count:(long long*)arg2 ;
-(id)_scriptingObjectWithUniqueID:(id)arg1 inValueForKey:(id)arg2 ;
-(id)_scriptingObjectForSpecifier:(id)arg1 ;
-(Class)classForPortCoder;
-(void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 inModes:(id)arg4 ;
-(void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 ;
-(void)performSelector:(SEL)arg1 object:(id)arg2 afterDelay:(double)arg3 ;
-(id)_scriptingDebugDescription;
-(int)_scriptingAlternativeValueRankWithDescriptor:(id)arg1 ;
-(id)_scriptingDescriptorOfComplexType:(id)arg1 orReasonWhyNot:(id*)arg2 ;
-(id)_scriptingDescriptorOfEnumeratorType:(id)arg1 orReasonWhyNot:(id*)arg2 ;
-(id)_scriptingDescriptorOfObjectType:(id)arg1 orReasonWhyNot:(id*)arg2 ;
-(id)_scriptingDescriptorOfValueType:(id)arg1 orReasonWhyNot:(id*)arg2 ;
-(id)_asScriptTerminologyNameArray;
-(id)_asScriptTerminologyNameString;
-(unsigned)classCode;
-(char)_scriptingMightHandleCommand:(id)arg1 ;
-(char)_scriptingCanHandleCommand:(id)arg1 ;
-(void)_scriptingAddToReceiversArray:(id)arg1 ;
-(id)_scriptingSetValue:(id)arg1 forSpecifier:(id)arg2 ;
-(char)isEqualTo:(id)arg1 ;
-(char)isLessThanOrEqualTo:(id)arg1 ;
-(char)isLessThan:(id)arg1 ;
-(char)isGreaterThanOrEqualTo:(id)arg1 ;
-(char)isGreaterThan:(id)arg1 ;
-(char)isNotEqualTo:(id)arg1 ;
-(char)doesContain:(id)arg1 ;
-(char)isLike:(id)arg1 ;
-(char)isCaseInsensitiveLike:(id)arg1 ;
-(void)performSelector:(SEL)arg1 onThread:(id)arg2 withObject:(id)arg3 waitUntilDone:(char)arg4 modes:(id)arg5 ;
-(void)performSelectorOnMainThread:(SEL)arg1 withObject:(id)arg2 waitUntilDone:(char)arg3 modes:(id)arg4 ;
-(void)performSelectorOnMainThread:(SEL)arg1 withObject:(id)arg2 waitUntilDone:(char)arg3 ;
-(void)performSelector:(SEL)arg1 onThread:(id)arg2 withObject:(id)arg3 waitUntilDone:(char)arg4 ;
-(void)performSelectorInBackground:(SEL)arg1 withObject:(id)arg2 ;
-(id)classDescriptionForDestinationKey:(id)arg1 ;
-(id)entityName;
-(char)ownsDestinationObjectsForRelationshipKey:(id)arg1 ;
-(id)validateValue:(id*)arg1 forKey:(id)arg2 ;
-(char)isToManyKey:(id)arg1 ;
-(void)removeObject:(id)arg1 fromPropertyWithKey:(id)arg2 ;
-(void)addObject:(id)arg1 toPropertyWithKey:(id)arg2 ;
-(void)_setObject:(id)arg1 forBothSidesOfRelationshipWithKey:(id)arg2 ;
-(id)validateTakeValue:(id)arg1 forKeyPath:(id)arg2 ;
-(void)addObject:(id)arg1 toBothSidesOfRelationshipWithKey:(id)arg2 ;
-(id)allPropertyKeys;
-(void)clearProperties;
-(void)flushKeyBindings;
-(void)removeObject:(id)arg1 fromBothSidesOfRelationshipWithKey:(id)arg2 ;
-(void)takeStoredValuesFromDictionary:(id)arg1 ;
-(char)_scriptingExists;
-(id)_associatedUniversalLink;
-(char)isNSDate__;
-(char)isNSString__;
-(char)isNSCFConstantString__;
-(char)isNSNumber__;
-(unsigned long long)_cfTypeID;
-(char)isNSArray__;
-(char)isNSDictionary__;
-(char)isNSSet__;
-(char)isNSData__;
-(char)isNSObject__;
-(char)isNSOrderedSet__;
-(char)isNSTimeZone__;
-(char)isNSValue__;
-(NSString *)description;
-(void)doesNotRecognizeSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)_copyDescription;
-(void)__dealloc_zombie;
-(id)__retain_OA;
-(oneway void)__release_OA;
-(id)__autorelease_OA;
-(char)___tryRetain_OA;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(id)autorelease;
-(char)_tryRetain;
-(char)_isDeallocating;
-(id)copy;
-(void)finalize;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(Class)class;
-(id)self;
-(id)performSelector:(SEL)arg1 ;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2 ;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 ;
-(char)isProxy;
-(char)isKindOfClass:(Class)arg1 ;
-(char)isMemberOfClass:(Class)arg1 ;
-(char)conformsToProtocol:(id)arg1 ;
-(char)respondsToSelector:(SEL)arg1 ;
-(NSZone*)zone;
-(unsigned long long)hash;
-(Class)superclass;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)init;
-(char)retainWeakReference;
-(char)allowsWeakReference;
-(char)isFault;
-(/*function pointer*/void*)methodForSelector:(SEL)arg1 ;
-(void)doesNotRecognizeSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)mutableCopy;
@end

