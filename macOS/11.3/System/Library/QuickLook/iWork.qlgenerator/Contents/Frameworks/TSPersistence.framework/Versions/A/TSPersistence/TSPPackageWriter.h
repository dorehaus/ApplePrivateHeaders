/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPFileCoordinatorDelegate.h>
#import <TSPersistence/TSPPackageDataWriter.h>

@protocol TSPFileCoordinatorDelegate, TSPComponentWriteChannel, OS_dispatch_queue;
@class TSPDocumentMetadata, TSPPackage, NSObject, NSError, NSURL, TSPDocumentSaveValidationPolicy, SFUCryptoKey, TSUZipFileWriter, NSProgress, NSString;

@interface TSPPackageWriter : NSObject <TSPFileCoordinatorDelegate, TSPPackageDataWriter> {

	TSPDocumentMetadata* _documentMetadata;
	TSPPackage* _originalDocumentPackage;
	TSPPackage* _originalSupportPackage;
	id<TSPFileCoordinatorDelegate> _fileCoordinatorDelegate;
	id<TSPComponentWriteChannel> _componentWriteChannel;
	NSObject*<OS_dispatch_queue> _errorQueue;
	NSError* _error;
	TSPPackage* _writtenPackage;
	char _isOpened;
	NSURL* _URL;
	NSURL* _documentTargetURL;
	NSURL* _relativeURLForExternalData;
	long long _updateType;
	TSPDocumentSaveValidationPolicy* _documentSaveValidationPolicy;
	SFUCryptoKey* _encryptionKey;
	TSUZipFileWriter* _zipArchiveWriter;
	NSProgress* _progress;

}

@property (nonatomic,readonly) NSURL * URL;                                                                 //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) NSURL * documentTargetURL;                                                   //@synthesize documentTargetURL=_documentTargetURL - In the implementation block
@property (nonatomic,readonly) NSURL * relativeURLForExternalData;                                          //@synthesize relativeURLForExternalData=_relativeURLForExternalData - In the implementation block
@property (nonatomic,readonly) long long updateType;                                                        //@synthesize updateType=_updateType - In the implementation block
@property (nonatomic,readonly) TSPDocumentSaveValidationPolicy * documentSaveValidationPolicy;              //@synthesize documentSaveValidationPolicy=_documentSaveValidationPolicy - In the implementation block
@property (nonatomic,readonly) char canLinkData; 
@property (nonatomic,readonly) SFUCryptoKey * encryptionKey;                                                //@synthesize encryptionKey=_encryptionKey - In the implementation block
@property (nonatomic,readonly) TSUZipFileWriter * zipArchiveWriter;                                         //@synthesize zipArchiveWriter=_zipArchiveWriter - In the implementation block
@property (nonatomic,readonly) TSPPackage * originalPackage; 
@property (nonatomic,readonly) NSProgress * progress;                                                       //@synthesize progress=_progress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newPackageWriterWithPackageType:(long long)arg1 URL:(id)arg2 documentTargetURL:(id)arg3 relativeURLForExternalData:(id)arg4 packageIdentifier:(unsigned char)arg5 documentProperties:(id)arg6 documentMetadata:(id)arg7 fileFormatVersion:(unsigned long long)arg8 updateType:(long long)arg9 cloneMode:(char)arg10 documentSaveValidationPolicy:(id)arg11 encryptionKey:(id)arg12 originalDocumentPackage:(id)arg13 originalSupportPackage:(id)arg14 fileCoordinatorDelegate:(id)arg15 progress:(id)arg16 error:(id*)arg17 ;
-(void)dealloc;
-(id)init;
-(NSURL *)URL;
-(void)setError:(id)arg1 ;
-(char)closeAndReturnError:(id*)arg1 ;
-(NSProgress *)progress;
-(long long)updateType;
-(SFUCryptoKey *)encryptionKey;
-(void)closeWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performReadUsingAccessor:(/*^block*/id)arg1 ;
-(CGDataConsumerRef)newCGDataConsumerAtRelativePath:(id)arg1 ;
-(TSPDocumentSaveValidationPolicy *)documentSaveValidationPolicy;
-(NSURL *)relativeURLForExternalData;
-(char)writeData:(id)arg1 toRelativePath:(id)arg2 allowEncryption:(char)arg3 error:(id*)arg4 ;
-(id)writtenPackageWithURL:(id)arg1 ;
-(char)flushPendingWritesReturningError:(id*)arg1 ;
-(id)initWithURL:(id)arg1 documentTargetURL:(id)arg2 relativeURLForExternalData:(id)arg3 packageIdentifier:(unsigned char)arg4 documentProperties:(id)arg5 documentMetadata:(id)arg6 fileFormatVersion:(unsigned long long)arg7 updateType:(long long)arg8 cloneMode:(char)arg9 documentSaveValidationPolicy:(id)arg10 encryptionKey:(id)arg11 originalDocumentPackage:(id)arg12 originalSupportPackage:(id)arg13 fileCoordinatorDelegate:(id)arg14 progress:(id)arg15 error:(id*)arg16 ;
-(id)packageEntryInfoForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(char)arg2 packageURL:(id)arg3 ;
-(id)newRawComponentWriteChannelWithPackageLocator:(id)arg1 storeOutsideObjectArchive:(char)arg2 ;
-(id)filenameForData:(id)arg1 preferredFilename:(id)arg2 ;
-(char)canLinkData;
-(id)linkOrCopyData:(id)arg1 fromURL:(id)arg2 fromTemporaryLocation:(char)arg3 decryptionInfo:(id)arg4 preferredFilename:(id)arg5 error:(id*)arg6 ;
-(id)newPackageWithPackageIdentifier:(unsigned char)arg1 documentProperties:(id)arg2 fileFormatVersion:(unsigned long long)arg3 decryptionKey:(id)arg4 fileCoordinatorDelegate:(id)arg5 ;
-(id)newRawDataWriteChannelForRelativePath:(id)arg1 originalLastModificationDate:(id)arg2 originalSize:(unsigned long long)arg3 originalCRC:(unsigned)arg4 forceCalculatingSizeAndCRCForPreservingLastModificationDate:(char)arg5 ;
-(id)copyData:(id)arg1 withReadChannel:(id)arg2 decryptionInfo:(id)arg3 size:(unsigned long long)arg4 calculateCRC:(char)arg5 preferredFilename:(id)arg6 error:(id*)arg7 ;
-(NSURL *)documentTargetURL;
-(void)finalizeComponentAndDataSectionWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)newComponentWriteChannelWithPackageLocator:(id)arg1 compressionAlgorithm:(long long)arg2 storeOutsideObjectArchive:(char)arg3 ;
-(TSPPackage *)originalPackage;
-(void)copyComponent:(id)arg1 locator:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)willWriteData:(id)arg1 ;
-(char)addData:(id)arg1 infoMessage:(DataInfo*)arg2 saveOperationState:(id)arg3 error:(id*)arg4 ;
-(TSUZipFileWriter *)zipArchiveWriter;
-(id)componentZipArchiveWriter;
-(void)closeCurrentChannel;
-(id)newCompressionComponentWriteChannelWithComponentWriteChannel:(id)arg1 compressionAlgorithm:(long long)arg2 ;
-(id)dataForZipEntry:(id)arg1 inDataToWrite:(id)arg2 ;
@end

