/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailCore/MailCore-Structs.h>
#import <MailCore/MCFileWrapper.h>

@class MCFileWrapper, NSURL, NSData, NSProgress;

@interface MCArchiveFileWrapper : MCFileWrapper {

	MCFileWrapper* _realFileWrapper;
	NSURL* _temporaryDirectory;
	os_unfair_lock_s _lock;
	NSData* _archiveData;
	long long _archiveType;
	NSURL* _compressedFileURL;
	unsigned long long _approximateSize;
	NSProgress* _overallProgress;
	NSProgress* _fileProgress;

}

@property (nonatomic,readonly) NSData * archiveData;                          //@synthesize archiveData=_archiveData - In the implementation block
@property (nonatomic,readonly) long long archiveType;                         //@synthesize archiveType=_archiveType - In the implementation block
@property (nonatomic,readonly) MCFileWrapper * realFileWrapper; 
@property (nonatomic,readonly) NSURL * compressedFileURL;                     //@synthesize compressedFileURL=_compressedFileURL - In the implementation block
@property (assign,nonatomic) unsigned long long approximateSize;              //@synthesize approximateSize=_approximateSize - In the implementation block
@property (nonatomic,retain) NSProgress * overallProgress;                    //@synthesize overallProgress=_overallProgress - In the implementation block
@property (nonatomic,retain) NSProgress * fileProgress;                       //@synthesize fileProgress=_fileProgress - In the implementation block
+(char)supportsSecureCoding;
+(id)log;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)isRegularFile;
-(char)isDirectory;
-(char)isSymbolicLink;
-(id)initWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initRegularFileWithContents:(id)arg1 ;
-(NSData *)archiveData;
-(id)preferredFilename;
-(id)fileWrappers;
-(void)removeFileWrapper:(id)arg1 ;
-(id)addFileWrapper:(id)arg1 ;
-(char)writeToURL:(id)arg1 options:(unsigned long long)arg2 originalContentsURL:(id)arg3 error:(id*)arg4 ;
-(id)keyForFileWrapper:(id)arg1 ;
-(id)serializedRepresentation;
-(id)initWithSerializedRepresentation:(id)arg1 ;
-(id)initDirectoryWithFileWrappers:(id)arg1 ;
-(id)initSymbolicLinkWithDestinationURL:(id)arg1 ;
-(id)addRegularFileWithContents:(id)arg1 preferredFilename:(id)arg2 ;
-(id)_temporaryDirectoryURL;
-(id)initWithData:(id)arg1 archiveType:(long long)arg2 ;
-(NSProgress *)overallProgress;
-(long long)archiveType;
-(unsigned long long)approximateSize;
-(id)initWithURL:(id)arg1 compressionLevel:(long long)arg2 error:(id*)arg3 ;
-(void)getCompressedData:(id*)arg1 compressedFileURL:(id*)arg2 archiveType:(long long*)arg3 ;
-(void)setOverallProgress:(NSProgress *)arg1 ;
-(void)_cleanupTemporaryDirectory;
-(NSURL *)compressedFileURL;
-(unsigned long long)approximateSizeAllowingDiskIO:(char)arg1 ;
-(MCFileWrapper *)realFileWrapper;
-(void)setApproximateSize:(unsigned long long)arg1 ;
-(NSProgress *)fileProgress;
-(void)setFileProgress:(NSProgress *)arg1 ;
@end
