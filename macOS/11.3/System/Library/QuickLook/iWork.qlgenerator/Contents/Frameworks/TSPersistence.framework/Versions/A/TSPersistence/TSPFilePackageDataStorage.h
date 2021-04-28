/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPStreamDataStorage.h>

@protocol TSPCryptoInfo;
@class NSString, TSPFilePackage;

@interface TSPFilePackageDataStorage : TSPStreamDataStorage {

	NSString* _path;
	id<TSPCryptoInfo> _decryptionInfo;
	TSPFilePackage* _package;
	Ac _didCalculateEncodedLength;
	AQ _encodedLength;
	Ac _didCalculateCRC;
	AI _CRC;
	Ac _isMissingData;
	char _gilligan_isRemote;

}
-(id)init;
-(unsigned long long)length;
-(unsigned long long)encodedLength;
-(char)isReadable;
-(unsigned char)packageIdentifier;
-(unsigned)CRC;
-(id)packageLocator;
-(void)performIOChannelReadWithAccessor:(/*^block*/id)arg1 ;
-(char)isInPackage:(id)arg1 ;
-(char)isMissingData;
-(char)shouldValidateCRCOnWrite;
-(char)linkOrCopyToURL:(id)arg1 encryptionInfo:(id)arg2 canLink:(char)arg3 ;
-(id)decryptionInfo;
-(id)newDataCopyReadChannelProviderWithDocumentURL:(id)arg1 encryptionInfo:(id)arg2 error:(id*)arg3 ;
-(id)writeData:(id)arg1 toPackageWriter:(id)arg2 infoMessage:(DataInfo*)arg3 preferredFilename:(id)arg4 shouldRemoveData:(char)arg5 error:(id*)arg6 ;
-(void)didInitializeFromDocumentURL:(id)arg1 ;
-(void)setEncodedLength:(unsigned long long)arg1 isMissingData:(char)arg2 ;
-(char)gilligan_isRemote;
-(void)setGilligan_isRemote:(char)arg1 ;
-(id)initWithPath:(id)arg1 package:(id)arg2 decryptionInfo:(id)arg3 ;
-(id)streamReadChannelForWriteWithPackageWriter:(id)arg1 ;
@end

