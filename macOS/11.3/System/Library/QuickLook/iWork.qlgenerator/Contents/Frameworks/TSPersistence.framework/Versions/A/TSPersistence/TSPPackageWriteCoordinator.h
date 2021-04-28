/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPArchiverManagerDelegate.h>
#import <TSPersistence/TSPComponentWriterDelegate.h>
#import <TSPersistence/TSPDataArchiver.h>
#import <TSPersistence/TSPExternalReferenceDelegate.h>
#import <TSPersistence/TSPPersistedObjectUUIDMapDelegate.h>
#import <TSPersistence/TSPObjectModifyDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSURL, TSPObjectContext, TSPDocumentRevision, TSPObject, TSPDataAttributesSnapshot, TSPObjectReferenceMap, TSPArchiverManager, NSObject, NSSet, NSMutableSet, TSPObjectContainer, TSPPersistedObjectUUIDMap, TSPPersistedDataReferenceMap, NSMapTable, NSHashTable, TSPComponentExternalReferenceMap, NSMutableArray, NSError, TSPSupportPackageWriteCoordinator, TSPPackageMetadata, NSString;

@interface TSPPackageWriteCoordinator : NSObject <TSPArchiverManagerDelegate, TSPComponentWriterDelegate, TSPDataArchiver, TSPExternalReferenceDelegate, TSPPersistedObjectUUIDMapDelegate, TSPObjectModifyDelegate> {

	Ac _didWriteObjectContainer;
	TSPObjectContext* _context;
	unsigned char _packageIdentifier;
	TSPDocumentRevision* _documentRevision;
	unsigned long long _fileFormatVersion;
	unsigned long long _saveToken;
	long long _preferredPackageType;
	TSPObject* _metadataObject;
	TSPDataAttributesSnapshot* _dataAttributesSnapshot;
	TSPObjectReferenceMap* _objectReferenceMap;
	TSPArchiverManager* _archiverManager;
	NSObject*<OS_dispatch_queue> _completionQueue;
	NSObject*<OS_dispatch_group> _completionGroup;
	NSSet* _knownComponentLocators;
	IdentifierMap<TSP::ComponentPropertiesSnapshot>* _componentPropertiesSnapshot;
	NSObject*<OS_dispatch_queue> _accessQueue;
	AQ _accessQueueSuspendCount;
	Av* _currentComponentWriterPointer;
	IdentifierMap<TSP::WrittenComponentInfo>* _writtenComponents;
	IdentifierMap<TSP::ComponentProperties>* _componentProperties;
	map<unsigned int, std::__1::map<long long, TSPComponent *, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, TSPComponent *>>>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::map<long long, TSPComponent *, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, TSPComponent *>>>>>>* _remainingComponentsQueue;
	NSMutableSet* _packageLocatorSet;
	TSPObjectContainer* _objectContainer;
	long long _objectContainerIdentifier;
	TSPPersistedObjectUUIDMap* _persistedUUIDMap;
	TSPPersistedDataReferenceMap* _persistedDataReferenceMap;
	NSMapTable* _loadedObjects;
	AQ _wastefullyEnqueuedComponentCount;
	IdentifierMap<TSP::WrittenObjectInfo>* _writtenObjects;
	IdentifierMap<long long>* _delayedObjects;
	queue<TSP::WrittenObjectInfo, std::__1::deque<TSP::WrittenObjectInfo, std::__1::allocator<TSP::WrittenObjectInfo>>>* _writtenLazyReferences;
	NSObject*<OS_dispatch_queue> _modifyObjectQueue;
	NSHashTable* _modifiedObjectsDuringWrite;
	char _captureSnapshots;
	NSObject*<OS_dispatch_queue> _externalLazyReferencesQueue;
	TSPComponentExternalReferenceMap* _externalLazyReferencesMap;
	NSObject*<OS_dispatch_queue> _externalReferenceQueue;
	NSMutableArray* _externalReferenceBlocks;
	NSMutableSet* _duplicateUUIDs;
	NSObject*<OS_dispatch_queue> _metadataQueue;
	unsigned long long _readVersion;
	unsigned long long _writeVersion;
	NSMutableSet* _featureIdentifiers;
	NSHashTable* _referencedDatas;
	NSMutableArray* _dataFinalizeHandlers;
	Ac _writeSuccess;
	Ac _didAttemptRecoveryByDirtyingAllComponents;
	Ac _isRecoverableError;
	Ac _isCancelled;
	Ac _didWriteRootObject;
	Ac _didWriteMetadata;
	os_unfair_lock_s _packageWriterErrorLock;
	NSError* _packageWriterError;
	NSURL* _documentTargetURL;
	TSPSupportPackageWriteCoordinator* _supportPackageWriteCoordinator;
	IdentifierMap<bool>* _validatedExternalReferences;
	NSURL* _relativeURLForExternalData;
	TSPPackageMetadata* _packageMetadata;

}

@property (nonatomic,readonly) TSPPackageMetadata * packageMetadata;              //@synthesize packageMetadata=_packageMetadata - In the implementation block
@property (nonatomic,readonly) TSPObjectContainer * objectContainer; 
@property (nonatomic,readonly) NSSet * featureIdentifiers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSURL * relativeURLForExternalData;                //@synthesize relativeURLForExternalData=_relativeURLForExternalData - In the implementation block
-(void)dealloc;
-(id)init;
-(TSPPackageMetadata *)packageMetadata;
-(id)objectForIdentifier:(long long)arg1 ;
-(void)willModifyObject:(id)arg1 options:(unsigned long long)arg2 ;
-(id)initWithContext:(id)arg1 archiverClass:(Class)arg2 archiverFlags:(char)arg3 documentRevision:(id)arg4 saveToken:(unsigned long long)arg5 packageIdentifier:(unsigned char)arg6 fileFormatVersion:(unsigned long long)arg7 preferredPackageType:(long long)arg8 metadataObject:(id)arg9 dataAttributesSnapshot:(id)arg10 ;
-(NSURL *)relativeURLForExternalData;
-(void)setSupportPackageWriteCoordinator:(id)arg1 ;
-(unsigned long long)writeRootObject:(id)arg1 withPackageWriter:(id)arg2 saveOperationState:(id)arg3 error:(id*)arg4 ;
-(void)stopCapturingSnapshots;
-(void)didFinishWritingWithSupportPackageWriteCoordinator:(id)arg1 ;
-(void)enumerateWrittenObjectsWithBlock:(/*^block*/id)arg1 ;
-(void)updateObjectContextForSuccessfulSaveWithPackageWriter:(id)arg1 packageURL:(id)arg2 allDataIdentifiers:(id)arg3 ;
-(TSPObjectContainer *)objectContainer;
-(NSSet *)featureIdentifiers;
-(unsigned long long)objectTargetType;
-(void)didReferenceData:(id)arg1 ;
-(id)persistedObjectUUIDMap:(id)arg1 needsDescriptionForComponentIdentifier:(long long)arg2 objectIdentifier:(long long)arg3 ;
-(void)persistedObjectUUIDMap:(id)arg1 foundDuplicateUUID:(id)arg2 firstObjectLocation:(TSPObjectLocation)arg3 secondObjectLocation:(TSPObjectLocation)arg4 ;
-(id)initWithContext:(id)arg1 archiverClass:(Class)arg2 archiverFlags:(char)arg3 documentRevision:(id)arg4 saveToken:(unsigned long long)arg5 packageIdentifier:(unsigned char)arg6 fileFormatVersion:(unsigned long long)arg7 preferredPackageType:(long long)arg8 metadataObject:(id)arg9 dataAttributesSnapshot:(id)arg10 packageWriteCoordinator:(id)arg11 captureSnapshots:(char)arg12 ;
-(void)writeRootObject:(id)arg1 withPackageWriter:(id)arg2 saveOperationState:(id)arg3 completionQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)createPackageMetadataWritingDatasWithPackageWriter:(id)arg1 saveOperationState:(id)arg2 error:(id*)arg3 ;
-(id)packageWriterError;
-(void)writeRootObjectAndRelatedComponents:(id)arg1 withPackageWriter:(id)arg2 completionQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)writeRemainingRootObjectsAndRelatedComponents:(id)arg1 withPackageWriter:(id)arg2 completionQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(const IdentifierMap<TSP::WrittenComponentInfo>*)writtenComponents;
-(void)writeRemainingComponentsWithPackageWriter:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)enqueueRootObject:(id)arg1 forceArchive:(char)arg2 isAddingDelayedObjectReferencedByObjectContainer:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)enqueueRootObjectImpl:(id)arg1 forceArchive:(char)arg2 isAddingDelayedObjectReferencedByObjectContainer:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)forceArchivingComponentIdentifier:(long long)arg1 ;
-(char)enqueueComponent:(id)arg1 rootObjectOrNil:(id)arg2 forceArchive:(char)arg3 isWastefullyEnqueueing:(char)arg4 isWeakReference:(char)arg5 referencingComponent:(id)arg6 referencedObject:(id)arg7 hasArchiverAccessLock:(char)arg8 ;
-(char)isComponentPersisted:(id)arg1 ;
-(char)shouldEnqueueComponent:(id)arg1 ;
-(void)enqueueReferencedObject:(id)arg1 referencingComponent:(id)arg2 isWeakReference:(char)arg3 forWastefullyEnqueuedComponent:(id)arg4 componentRootObject:(id)arg5 componentInfo:(WrittenComponentInfo*)arg6 hasArchiverAccessLock:(char)arg7 ;
-(char)shouldArchiveComponent:(id)arg1 checkForceArchive:(char)arg2 ;
-(char)isObjectInExternalPackage:(id)arg1 claimingComponent:(id*)arg2 componentReadVersion:(unsigned long long*)arg3 ;
-(long long)updateDelayedObjectsSetForWrittenComponentInfo:(WrittenComponentInfo*)arg1 componentIdentifier:(long long)arg2 withObject:(id)arg3 canDelayObjects:(char)arg4 ;
-(void)addDelayedObjectToObjectContainer:(id)arg1 referencingComponent:(id)arg2 forWastefullyEnqueuedComponent:(id)arg3 componentRootObject:(id)arg4 ;
-(void)addDelayedObject:(id)arg1 forComponentRootObject:(id)arg2 claimingComponent:(id)arg3 isDelayedObjectReferencedByObjectContainer:(char)arg4 completion:(/*^block*/id)arg5 ;
-(void)nextComponentAndRootObjectForComponentWriteWithCompletion:(/*^block*/id)arg1 ;
-(void)writeComponent:(id)arg1 rootObjectOrNil:(id)arg2 forceArchive:(char)arg3 withPackageWriter:(id)arg4 ;
-(char)isComponentExternalWithIdentifier:(long long)arg1 wasCopied:(char*)arg2 componentReadVersion:(unsigned long long*)arg3 ;
-(char)isObjectWrittenInExternalPackageWithIdentifier:(long long)arg1 ;
-(void)archiveComponent:(id)arg1 locator:(id)arg2 compressionAlgorithm:(long long)arg3 storeOutsideObjectArchive:(char)arg4 rootObject:(id)arg5 withPackageWriter:(id)arg6 ;
-(void)copyComponent:(id)arg1 locator:(id)arg2 preferredLocator:(id)arg3 rootObject:(id)arg4 packageWriter:(id)arg5 ;
-(void)writeExternalReferences:(id)arg1 andUpdateLazyReferences:(id)arg2 withPackageWriter:(id)arg3 forComponent:(id)arg4 locator:(id)arg5 ;
-(void)setArchivedObjects:(id)arg1 componentObjectUUIDMap:(id)arg2 objectReferenceMap:(id)arg3 externalStrongReferences:(id)arg4 ambiguousReferences:(id)arg5 externalWeakReferences:(id)arg6 featureInfos:(id)arg7 componentDataReferenceMap:(id)arg8 forComponent:(id)arg9 ;
-(char)shouldCopyComponentOfObject:(id)arg1 ;
-(id)componentForObjectIdentifier:(long long)arg1 objectOrNil:(id)arg2 componentReadVersion:(unsigned long long*)arg3 ;
-(id)explicitComponentRootObjectForObject:(id)arg1 archiverOrNil:(id)arg2 claimingComponent:(id)arg3 newClaimingComponent:(id)arg4 newClaimingRootObject:(id)arg5 willEnqueueDelayedObject:(char)arg6 hasArchiverAccessLock:(char)arg7 ;
-(void)updateExternalReferencesForCopiedComponent:(id)arg1 ;
-(void)setPackageWriterErrorIfNeeded:(id)arg1 ;
-(void)calculateExternalReferences;
-(void)attemptDocumentRecovery;
-(unsigned long long)objectTargetTypeForComponentWriter:(id)arg1 ;
-(id)componentWriter:(id)arg1 wantsExplicitComponentRootObjectForObject:(id)arg2 archiverOrNil:(id)arg3 claimingComponent:(id)arg4 hasArchiverAccessLock:(char)arg5 ;
-(void)componentWriter:(id)arg1 canSkipArchivingStronglyReferencedObject:(id)arg2 fromComponentRootObject:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)componentWriterWantsDelayedObjects:(id)arg1 ;
-(id)componentWriter:(id)arg1 wantsComponentOfObject:(id)arg2 componentReadVersion:(unsigned long long*)arg3 ;
-(void)componentWriterNeedsDocumentRecovery:(id)arg1 ;
-(id)componentWriter:(id)arg1 locatorForClaimingComponent:(id)arg2 ;
-(char)componentWriter:(id)arg1 object:(id)arg2 belongsToCopiedComponent:(id)arg3 ;
-(void)addDataFinalizeHandlerForSuccessfulSave:(/*^block*/id)arg1 ;
-(long long)componentIdentifierForObjectIdentifier:(long long)arg1 objectOrNil:(id)arg2 objectUUIDOrNil:(id)arg3 outComponentIsVersioned:(char*)arg4 ;
-(char)wasComponentCopied:(long long)arg1 ;
-(id)explicitComponentRootObjectForObject:(id)arg1 ;
-(char)didWriteObjectWithIdentifier:(long long)arg1 ;
-(char)didWriteObject:(id)arg1 claimingComponent:(id*)arg2 componentReadVersion:(unsigned long long*)arg3 ;
-(char)didWriteComponentWithIdentifier:(long long)arg1 wasCopied:(char*)arg2 componentReadVersion:(unsigned long long*)arg3 ;
-(char)didWriteData:(id)arg1 ;
@end

