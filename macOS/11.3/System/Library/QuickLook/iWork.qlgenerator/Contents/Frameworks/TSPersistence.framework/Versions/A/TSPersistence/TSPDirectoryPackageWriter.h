/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPPackageWriter.h>

@class TSPDirectoryPackageDataWriter;

@interface TSPDirectoryPackageWriter : TSPPackageWriter {

	TSPDirectoryPackageDataWriter* _dataWriter;

}
-(CGDataConsumerRef)newCGDataConsumerAtRelativePath:(id)arg1 ;
-(char)writeData:(id)arg1 toRelativePath:(id)arg2 allowEncryption:(char)arg3 error:(id*)arg4 ;
-(id)targetDataURLForPath:(id)arg1 ;
-(id)initWithURL:(id)arg1 documentTargetURL:(id)arg2 relativeURLForExternalData:(id)arg3 packageIdentifier:(unsigned char)arg4 documentProperties:(id)arg5 documentMetadata:(id)arg6 fileFormatVersion:(unsigned long long)arg7 updateType:(long long)arg8 cloneMode:(char)arg9 documentSaveValidationPolicy:(id)arg10 encryptionKey:(id)arg11 originalDocumentPackage:(id)arg12 originalSupportPackage:(id)arg13 fileCoordinatorDelegate:(id)arg14 progress:(id)arg15 error:(id*)arg16 ;
-(id)packageEntryInfoForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(char)arg2 packageURL:(id)arg3 ;
-(id)newRawComponentWriteChannelWithPackageLocator:(id)arg1 storeOutsideObjectArchive:(char)arg2 ;
-(id)linkOrCopyData:(id)arg1 fromURL:(id)arg2 fromTemporaryLocation:(char)arg3 decryptionInfo:(id)arg4 preferredFilename:(id)arg5 error:(id*)arg6 ;
-(id)newPackageWithPackageIdentifier:(unsigned char)arg1 documentProperties:(id)arg2 fileFormatVersion:(unsigned long long)arg3 decryptionKey:(id)arg4 fileCoordinatorDelegate:(id)arg5 ;
-(id)newRawDataWriteChannelForRelativePath:(id)arg1 originalLastModificationDate:(id)arg2 originalSize:(unsigned long long)arg3 originalCRC:(unsigned)arg4 forceCalculatingSizeAndCRCForPreservingLastModificationDate:(char)arg5 ;
@end

