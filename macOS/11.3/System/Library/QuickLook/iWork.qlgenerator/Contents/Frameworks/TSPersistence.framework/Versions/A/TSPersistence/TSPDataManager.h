/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPDataManaging.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSArray, NSIndexSet, NSDictionary, NSObject, TSUTemporaryDirectory, TSUPathSet, TSPObjectContext, NSSet, NSString;

@interface TSPDataManager : NSObject <TSPDataManaging> {

	NSObject*<OS_dispatch_queue> _datasQueue;
	long long _nextNewIdentifier;
	IdentifierMap<TSPData *__weak>* _identifierToDataMap;
	unordered_map<const std::__1::array<unsigned char, 20>, TSPData *__weak, TSP::DigestHash, TSP::DigestEqualTo, std::__1::allocator<std::__1::pair<const std::__1::array<unsigned char, 20>, TSPData *__weak>>>* _digestToDataMap;
	NSObject*<OS_dispatch_queue> _temporaryDirectoryQueue;
	TSUTemporaryDirectory* _temporaryDirectory;
	TSUPathSet* _temporaryDirectoryPathSet;
	char _hasExternalReferences;
	NSObject*<OS_dispatch_queue> _externalReferenceRemovalQueue;
	NSObject*<OS_dispatch_group> _externalReferenceRemovalGroup;
	TSPObjectContext* _context;

}

@property (nonatomic,__weak,readonly) TSPObjectContext * context;                        //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSArray * allData; 
@property (nonatomic,readonly) NSArray * unmaterializedRemoteData; 
@property (nonatomic,readonly) NSArray * missingOrUnmaterializedRemoteData; 
@property (nonatomic,readonly) NSSet * dataWarnings; 
@property (nonatomic,readonly) NSIndexSet * allDataIdentifiers; 
@property (nonatomic,readonly) NSDictionary * identifierToDataMap; 
@property (nonatomic,readonly) NSDictionary * digestToDataMap; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)readWithChannel:(id)arg1 handler:(/*^block*/id)arg2 ;
+(void)readWithChannelImpl:(id)arg1 handler:(/*^block*/id)arg2 ;
+(char)isSupportedURL:(id)arg1 ;
+(void)readWithURL:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)init;
-(id)initWithContext:(id)arg1 ;
-(TSPObjectContext *)context;
-(NSArray *)allData;
-(void)addData:(id)arg1 ;
-(void)removeFileAtURL:(id)arg1 ;
-(void)didCloseDocument;
-(void)removeExternalReferences;
-(id)dataOrNilForIdentifier:(long long)arg1 ;
-(id)dataFromReadChannel:(id)arg1 filename:(id)arg2 ;
-(void)coordinateReadingNewFileURL:(id)arg1 byAccessor:(/*^block*/id)arg2 ;
-(id)dataForIdentifierImpl:(long long)arg1 ;
-(void)waitForRemoveExternalReferencesToComplete;
-(void)removeExternalReferenceForData:(id)arg1 storage:(id)arg2 ;
-(id)dataFromNSData:(id)arg1 filename:(id)arg2 ;
-(id)copyData:(id)arg1 ;
-(id)dataForIdentifier:(long long)arg1 ;
-(id)dataForDigest:(id)arg1 ;
-(void)dataForDigest:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(char)prepareSaveWithOldPackage:(id)arg1 saveOperationState:(id)arg2 ;
-(NSIndexSet *)allDataIdentifiers;
-(void)didSaveWithSaveOperationState:(id)arg1 ;
-(char)migrateDataToTemporaryStorageFromPackage:(id)arg1 ;
-(void)enumerateAllDataUsingBlock:(/*^block*/id)arg1 ;
-(id)dataForDocumentResourceInfo:(id)arg1 fromFileURL:(id)arg2 ;
-(id)dataFromFileURL:(id)arg1 filename:(id)arg2 useFileCoordination:(char)arg3 ;
-(id)dataFromReadChannel:(id)arg1 filename:(id)arg2 dataURL:(id)arg3 canLink:(char)arg4 ;
-(void)dataFromReadChannel:(id)arg1 filename:(id)arg2 dataURL:(id)arg3 canLink:(char)arg4 completion:(/*^block*/id)arg5 ;
-(void)willCreateData;
-(id)temporaryDataStorageURLForFilename:(id)arg1 ;
-(id)dataForExistingData:(id)arg1 digest:(id)arg2 hasValidatedDigestMatch:(char)arg3 filename:(id)arg4 temporaryDataStorageURL:(id)arg5 ;
-(char)linkOrCloneTemporaryURL:(id)arg1 fromURL:(id)arg2 canLink:(char)arg3 ;
-(void)findExistingDataForReadChannel:(id)arg1 dataURL:(id)arg2 dataURLType:(long long)arg3 readHandler:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)findExistingDataForReadChannel:(id)arg1 dataURL:(id)arg2 dataURLType:(long long)arg3 temporaryDataStorageURL:(id)arg4 keepTemporaryFileOnSuccess:(char)arg5 completion:(/*^block*/id)arg6 ;
-(id)addNewDataForStorage:(id)arg1 digest:(id)arg2 hasValidatedDigestMatch:(char)arg3 filename:(id)arg4 ;
-(int)openTemporaryURL:(id)arg1 ;
-(id)dataForDigestImpl:(id)arg1 documentResourceInfo:(id)arg2 skipDocumentResourcesLookup:(char)arg3 expectedLength:(unsigned long long)arg4 accessorBlock:(/*^block*/id)arg5 ;
-(id)dataWithTemporaryDataStorageURL:(id)arg1 digest:(id)arg2 hasValidatedDigestMatch:(char)arg3 filename:(id)arg4 ;
-(id)dataWithStorage:(id)arg1 digest:(id)arg2 hasValidatedDigestMatch:(char)arg3 filename:(id)arg4 skipDocumentResourcesLookup:(char)arg5 accessorBlock:(/*^block*/id)arg6 ;
-(void)addDataFromPackage:(id)arg1 packageURL:(id)arg2 dataInfo:(const DataInfo*)arg3 packageMetadata:(id)arg4 documentResourceInfo:(id)arg5 areExternalReferencesAllowed:(char)arg6 ;
-(char)prepareTemporaryDataStorageForData:(id)arg1 temporaryDataStorage:(id*)arg2 ;
-(id)unmaterializedRemoteDataIncludingExpiredUploads:(char)arg1 includingDataNotInDocument:(char)arg2 ;
-(char)shouldAttemptToMaterializeData:(id)arg1 expectedLength:(unsigned long long)arg2 ;
-(char)attemptToMaterializeData:(id)arg1 dataURL:(id)arg2 dataURLType:(long long)arg3 ;
-(id)preferredFilenameForDocumentResourceInfo:(id)arg1 ;
-(NSDictionary *)identifierToDataMap;
-(NSDictionary *)digestToDataMap;
-(id)dataFromURL:(id)arg1 filename:(id)arg2 useFileCoordination:(char)arg3 ;
-(void)dataFromFileURL:(id)arg1 filename:(id)arg2 context:(id)arg3 completionQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)documentResourceDataForInfo:(id)arg1 withStorage:(id)arg2 filename:(id)arg3 ;
-(id)remoteDataWithURL:(id)arg1 digest:(id)arg2 filename:(id)arg3 length:(unsigned long long)arg4 canDownload:(char)arg5 downloadPriority:(long long)arg6 uploadStatus:(long long)arg7 modificationDate:(id)arg8 ;
-(void)loadFromPackage:(id)arg1 packageURL:(id)arg2 packageMetadata:(id)arg3 areExternalReferencesAllowed:(char)arg4 dataIdentifiersIndexSet:(id*)arg5 ;
-(NSArray *)unmaterializedRemoteData;
-(NSArray *)missingOrUnmaterializedRemoteData;
-(id)dataFromExternalReferenceURL:(id)arg1 filename:(id)arg2 useFileCoordination:(char)arg3 ;
-(NSSet *)dataWarnings;
@end
