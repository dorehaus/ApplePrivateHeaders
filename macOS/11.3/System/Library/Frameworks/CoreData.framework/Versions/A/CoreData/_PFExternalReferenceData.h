/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSData.h>

@class NSData, NSString;

@interface _PFExternalReferenceData : NSData {

	NSData* _originalData;
	void* _bytesPtrForStore;
	unsigned long long _bytesLengthForStore;
	void* _bytesPtrForExternalReference;
	unsigned long long _bytesLengthForExternalReference;
	NSString* _externalReferenceLocation;
	NSString* _safeguardLocation;
	id _ubiquitousLocation;
	struct {
		unsigned _isStoredExternally : 1;
		unsigned _hasMappedData : 1;
		unsigned _cleanupOnDealloc : 1;
		unsigned _dataProtectionLevel : 3;
		unsigned _isStoredUbiquitously : 1;
		unsigned _createdByUbiquityImport : 1;
		unsigned _reserved : 24;
	}  _externalDataFlags;

}
+(char)_updateFileDescriptorsInUseReserveNew:(char)arg1 ;
+(char)_releaseReservedMapFileDescriptor;
+(char)_reserveMapFileDescriptor;
+(Class)classForKeyedUnarchiver;
-(char)hasExternalReferenceContent;
-(const char*)_externalReferenceLocation;
-(const char*)_safeguardLocation;
-(int)preferredProtectionLevel;
-(unsigned long long)_bytesLengthForExternalReference;
-(void)doCleanupOnDealloc;
-(id)_safeguardLocationString;
-(id)externalReferenceLocationString;
-(id)databaseValue;
-(const void*)_bytesPtrForStore;
-(unsigned long long)_bytesLengthForStore;
-(id)initWithStoreBytes:(const void*)arg1 length:(unsigned long long)arg2 externalLocation:(id)arg3 safeguardLocation:(id)arg4 protectionLevel:(int)arg5 ;
-(id)initWithStoreBytes:(const void*)arg1 length:(unsigned long long)arg2 externalLocation:(id)arg3 safeguardLocation:(id)arg4 protectionLevel:(int)arg5 ubiquitousLocation:(id)arg6 ;
-(char)_createdByUbiquityImport;
-(id)initForExternalLocation:(id)arg1 safeguardLocation:(id)arg2 data:(id)arg3 protectionLevel:(int)arg4 ;
-(const void*)_bytesPtrForExternalReference;
-(id)initForUbiquityDictionary:(id)arg1 store:(id)arg2 ;
-(void)_setBytesForExternalReference:(const void*)arg1 ;
-(void)_writeExternalReferenceToInterimLocation;
-(void)_moveExternalReferenceToPermanentLocation;
-(void)_deleteExternalReferenceFromPermanentLocation;
-(id)copy;
-(void)finalize;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(unsigned long long)length;
-(const void*)bytes;
-(id)mutableCopy;
-(Class)classForCoder;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
-(void)getBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)UUID;
-(id)subdataWithRange:(NSRange)arg1 ;
-(char)isEqualToData:(id)arg1 ;
-(id)_originalData;
@end

