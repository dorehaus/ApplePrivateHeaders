/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/Versions/A/BookUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableOrderedSet;

@interface BUZipArchive : NSObject {

	unsigned long long _options;
	NSMutableDictionary* _entriesMap;
	NSMutableOrderedSet* _entries;
	long long _endOfLastEntry;

}

@property (assign,nonatomic) unsigned long long options;                      //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * entriesMap;                //@synthesize entriesMap=_entriesMap - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * entries;                   //@synthesize entries=_entries - In the implementation block
@property (assign,nonatomic) long long endOfLastEntry;                        //@synthesize endOfLastEntry=_endOfLastEntry - In the implementation block
@property (nonatomic,readonly) unsigned long long archiveLength; 
@property (nonatomic,readonly) char isValid; 
@property (nonatomic,readonly) unsigned long long entriesCount; 
@property (nonatomic,readonly) char hasNonEmptyEntries; 
+(void)test_setForceZipEntriesRecalculationOnRead:(char)arg1 ;
-(id)debugDescription;
-(id)init;
-(char)isValid;
-(void)addEntry:(id)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(unsigned long long)options;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(NSMutableOrderedSet *)entries;
-(void)setEntries:(NSMutableOrderedSet *)arg1 ;
-(unsigned long long)entriesCount;
-(long long)endOfLastEntry;
-(id)streamReadChannelForEntry:(id)arg1 ;
-(id)newArchiveReadChannel;
-(void)collapseCommonRootDirectory;
-(void)readLocalFileHeaderEntriesFromChannel:(id)arg1 offset:(long long)arg2 previousEntry:(id)arg3 seekAttempts:(unsigned)arg4 seekForward:(char)arg5 completion:(/*^block*/id)arg6 ;
-(void)readEndOfCentralDirectoryData:(id)arg1 eocdOffset:(long long)arg2 channel:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)readZip64EndOfCentralDirectoryLocatorWithChannel:(id)arg1 eocdOffset:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)readCentralDirectoryWithEntryCount:(unsigned long long)arg1 offset:(long long)arg2 size:(unsigned long long)arg3 channel:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)readZip64EndOfCentralDirectoryLocatorData:(id)arg1 channel:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)readZip64EndOfCentralDirectoryWithChannel:(id)arg1 offset:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)readZip64EndOfCentralDirectoryData:(id)arg1 channel:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)readCentralDirectoryData:(id)arg1 entryCount:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(char)readCentralFileHeaderWithBuffer:(const void*)arg1 dataSize:(unsigned long long*)arg2 error:(id*)arg3 ;
-(char)readFilenameFromBuffer:(const void*)arg1 nameLength:(unsigned short)arg2 entry:(id)arg3 dataSize:(unsigned long long*)arg4 error:(id*)arg5 ;
-(char)readExtraFieldsFromBuffer:(const void*)arg1 extraFieldsLength:(unsigned short)arg2 entry:(id)arg3 dataSize:(unsigned long long*)arg4 error:(id*)arg5 ;
-(char)readFileCommentFromBuffer:(const void*)arg1 fileCommentLength:(unsigned short)arg2 entry:(id)arg3 dataSize:(unsigned long long*)arg4 error:(id*)arg5 ;
-(char)readZip64ExtraFieldFromBuffer:(const void*)arg1 dataLength:(unsigned short)arg2 entry:(id)arg3 error:(id*)arg4 ;
-(void)readLocalFileHeaderData:(id)arg1 atOffset:(long long)arg2 channel:(id)arg3 completion:(/*^block*/id)arg4 ;
-(char)readLocalFileHeaderFilenameAndExtraFieldsData:(id)arg1 forEntry:(id)arg2 error:(id*)arg3 ;
-(id)normalizeEntryName:(id)arg1 ;
-(char)hasNonEmptyEntries;
-(id)readChannelForEntry:(id)arg1 ;
-(id)containedZipArchiveForEntry:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)entryForName:(id)arg1 ;
-(void)readArchiveWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)archiveLength;
-(void)enumerateEntriesUsingBlock:(/*^block*/id)arg1 ;
-(id)readChannelForEntry:(id)arg1 validateCRC:(char)arg2 ;
-(id)streamReadChannelForEntry:(id)arg1 validateCRC:(char)arg2 ;
-(NSMutableDictionary *)entriesMap;
-(void)setEntriesMap:(NSMutableDictionary *)arg1 ;
-(void)setEndOfLastEntry:(long long)arg1 ;
-(void)test_removeEntryWithName:(id)arg1 ;
@end

