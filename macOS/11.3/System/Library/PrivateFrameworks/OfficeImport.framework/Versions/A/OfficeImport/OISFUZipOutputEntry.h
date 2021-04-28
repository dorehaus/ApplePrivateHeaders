/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface OISFUZipOutputEntry : NSObject {

	NSString* name;
	unsigned long long utf8NameLength;
	char isCompressed;
	char isEncrypted;
	unsigned time;
	unsigned long long compressedSize;
	unsigned long long uncompressedSize;
	unsigned long long offset;
	unsigned long long compressedDataOffset;
	unsigned crc;
	char isWrittenDirectlyToFile;
	char is64Bit;

}
-(void)dealloc;
-(id)description;
-(long long)compareByOffset:(id)arg1 ;
@end

