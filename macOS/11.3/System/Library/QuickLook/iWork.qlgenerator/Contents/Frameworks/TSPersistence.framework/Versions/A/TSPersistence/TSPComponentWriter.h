/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSPComponentWriterDelegate, TSPComponentWriteChannel, OS_dispatch_semaphore, OS_dispatch_group, OS_dispatch_queue;
#import <TSPersistence/TSPersistence-Structs.h>
@class NSString, TSPObjectReferenceMap, TSPArchiverManager, NSObject, TSPReferenceOrderedSet, NSMapTable, TSPMutableComponentObjectUUIDMap, TSPMutableComponentDataReferenceMap, NSHashTable, NSMutableSet, NSIndexSet, NSMutableIndexSet, TSPComponent, TSPObject, NSSet;

@interface TSPComponentWriter : NSObject {

	NSString* _locator;
	id<TSPComponentWriterDelegate> _delegate;
	long long _mode;
	unsigned char _packageIdentifier;
	TSPObjectReferenceMap* _objectReferenceMap;
	id<TSPComponentWriteChannel> _writeChannel;
	TSPArchiverManager* _archiverManager;
	NSObject*<OS_dispatch_semaphore> _delegateSemaphore;
	unsigned long long _componentReadVersion;
	TSPReferenceOrderedSet* _archivedObjects;
	NSMapTable* _archivedObjectsDictionary;
	TSPMutableComponentObjectUUIDMap* _componentObjectUUIDMap;
	TSPMutableComponentDataReferenceMap* _componentDataReferenceMap;
	vector<TSP::ObjectStackEntry, std::__1::allocator<TSP::ObjectStackEntry>>* _objectStack;
	NSObject*<OS_dispatch_group> _writeGroup;
	NSObject*<OS_dispatch_queue> _writeQueue;
	TSPReferenceOrderedSet* _weakReferences;
	NSHashTable* _lazyReferences;
	NSHashTable* _dataReferences;
	NSMutableSet* _featureInfos;
	TSPReferenceOrderedSet* _externalReferences;
	NSIndexSet* _componentAmbiguousReferences;
	NSMutableIndexSet* _ambiguousReferences;
	unsigned long long _objectTargetType;
	struct {
		unsigned success : 1;
		unsigned isErrorRecoverable : 1;
		unsigned calculatedObjectTargetType : 1;
		unsigned delegateRespondsToNeedsDocumentRecovery : 1;
		unsigned delegateRespondsToLocatorForClaimingComponent : 1;
		unsigned delegateRespondsToObjectBelongsToCopiedComponent : 1;
		unsigned delegateRespondsToExternalPackageDidWriteObject : 1;
		unsigned delegateRespondsToShouldDelayWritingObject : 1;
	}  _flags;
	TSPComponent* _component;
	TSPObject* _rootObject;

}

@property (nonatomic,readonly) TSPComponent * component;              //@synthesize component=_component - In the implementation block
@property (nonatomic,readonly) TSPObject * rootObject;                //@synthesize rootObject=_rootObject - In the implementation block
@property (nonatomic,readonly) NSSet * featureInfos;                  //@synthesize featureInfos=_featureInfos - In the implementation block
-(id)init;
-(TSPObject *)rootObject;
-(TSPComponent *)component;
-(NSSet *)featureInfos;
-(id)initWithComponent:(id)arg1 locator:(id)arg2 rootObject:(id)arg3 delegate:(id)arg4 mode:(long long)arg5 packageIdentifier:(unsigned char)arg6 objectReferenceMapOrNil:(id)arg7 writeChannel:(id)arg8 archiverManager:(id)arg9 ;
-(void)writeWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)acquireArchiverAccessLockAndWriteObjects:(id)arg1 parentObject:(id)arg2 completion:(/*^block*/id)arg3 ;
-(char)shouldDelayWritingObject:(id)arg1 ;
-(void)writeWithArchiverAccessLockForObjects:(id)arg1 parentObject:(id)arg2 completion:(/*^block*/id)arg3 ;
-(char)isObjectExternal:(id)arg1 archiverOrNil:(id)arg2 parentObject:(id)arg3 hasArchiverAccessLock:(char)arg4 claimingComponent:(id*)arg5 isOwnedByDifferentPackage:(char*)arg6 isAmbiguousOwnership:(char*)arg7 ;
-(char)validateObjectContextForObject:(id)arg1 ;
-(char)shouldWriteObject:(id)arg1 ;
-(void)writeObject:(id)arg1 archiver:(id)arg2 parentObject:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)validateAmbiguousObjectOwnershipForObject:(id)arg1 explicitComponentRootObject:(id)arg2 parentObject:(id)arg3 claimingComponent:(id)arg4 claimingPackageIdentifier:(unsigned char)arg5 claimingComponentWillBeCopied:(char)arg6 claimingComponentReadVersion:(unsigned long long)arg7 isAmbiguousOwnership:(char*)arg8 ;
-(void)validateExplicitComponentOwnershipForObject:(id)arg1 archiverOrNil:(id)arg2 parentObject:(id)arg3 hasArchiverAccessLock:(char)arg4 ;
-(void)writeArchiver:(id)arg1 forObjectIdentifier:(long long)arg2 ;
-(char)isObjectExternalBecauseItAlreadyBelongsToAnotherComponent:(id)arg1 parentObject:(id)arg2 claimingComponent:(id*)arg3 claimingPackageIdentifier:(unsigned char*)arg4 claimingComponentWillBeCopied:(char*)arg5 claimingComponentReadVersion:(unsigned long long*)arg6 ;
-(char)isObjectExternalBecauseOfExplicitComponentOwnership:(id)arg1 archiverOrNil:(id)arg2 claimingComponentOrNil:(id)arg3 hasArchiverAccessLock:(char)arg4 explicitComponentRootObject:(id*)arg5 claimingComponent:(id*)arg6 isOwnedByDifferentPackage:(char*)arg7 ;
-(char)canSkipArchivingStronglyReferencedObject:(id)arg1 fromComponentRootObject:(id)arg2 ;
-(char)supportsAutomaticAmbiguousOwnershipResolutionWithComponentReadVersion:(unsigned long long)arg1 ;
@end

