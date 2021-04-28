/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSPersistence/TSPersistence-Structs.h>
@class SFUFileDataRepresentation, SFUMemoryDataRepresentation, SFUZipEntry;

@interface TSPDistributableArchive : NSObject {

	map<long long, std::__1::pair<long long, long long>, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::pair<long long, long long>>>>* _entries;
	SFUFileDataRepresentation* _archiveFileRep;
	SFUMemoryDataRepresentation* _archiveMemoryRep;
	SFUZipEntry* _archiveZipEntryRep;
	SCD_Struct_TS270 _archivedVersions;

}
+(char)_checkFileHeader:(const char*)arg1 length:(unsigned long long)arg2 dffVersion:(unsigned short*)arg3 archivedVersions:(SCD_Struct_TS270*)arg4 defaultObjectVersion:(unsigned*)arg5 hasDescriptors:(char*)arg6 hasToc:(char*)arg7 otherDataLength:(unsigned*)arg8 closedCleanly:(char*)arg9 ;
+(id)_newStringFromUtf8DataInStream:(id)arg1 length:(unsigned long long)arg2 ;
+(char)readArchivedVersionsFromStream:(id)arg1 versions:(SCD_Struct_TS270*)arg2 error:(id*)arg3 ;
+(char)readCheckCrcFromArchiveInputStream:(id)arg1 crc:(unsigned*)arg2 error:(id*)arg3 ;
+(char)streamDistributableArchive:(id)arg1 estimatedDataLength:(long long)arg2 toUnarchiver:(id)arg3 supplementalDataBundle:(id)arg4 closedCleanly:(char*)arg5 context:(id)arg6 error:(id*)arg7 ;
+(void)cancelStreaming;
-(void)dealloc;
-(char)_readEntriesFromToc:(id)arg1 error:(id*)arg2 ;
-(id)_createInputStreamWithOffset:(long long)arg1 length:(long long)arg2 ;
-(id)initWithDffData:(id)arg1 error:(id*)arg2 ;
-(SCD_Struct_TS270)archivedVersions;
-(id)createStreamForObject:(long long)arg1 length:(long long*)arg2 ;
-(long long)lengthOfObject:(long long)arg1 ;
-(char)containsObjectWithIdentifier:(long long)arg1 ;
@end

