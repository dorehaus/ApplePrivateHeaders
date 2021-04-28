/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString, NSData, NSURL;

@interface NSFileWrapper : NSObject <NSSecureCoding> {

	NSDictionary* _fileAttributes;
	NSString* _preferredFileName;
	NSString* _fileName;
	id _contents;
	id _icon;
	id _moreVars;

}

@property (getter=isDirectory,readonly) char directory; 
@property (getter=isRegularFile,readonly) char regularFile; 
@property (getter=isSymbolicLink,readonly) char symbolicLink; 
@property (copy) NSString * preferredFilename; 
@property (copy) NSString * filename; 
@property (copy) NSDictionary * fileAttributes; 
@property (copy,readonly) NSData * serializedRepresentation; 
@property (copy,readonly) NSDictionary * fileWrappers; 
@property (copy,readonly) NSData * regularFileContents; 
@property (copy,readonly) NSURL * symbolicLinkDestinationURL; 
+(void)initialize;
+(char)supportsSecureCoding;
+(id)_pathForURL:(id)arg1 reading:(char)arg2 error:(id*)arg3 ;
+(char)_canSafelyMapFilesAtPath:(id)arg1 ;
+(char)_forPath:(id)arg1 getItemKind:(id*)arg2 modificationDate:(id*)arg3 ;
+(id)_newContentsAtURL:(id)arg1 path:(id)arg2 itemKind:(id)arg3 oldChildrenByUniqueFileName:(id)arg4 options:(unsigned long long)arg5 error:(id*)arg6 ;
+(id)_temporaryDirectoryURLForWritingToURL:(id)arg1 error:(id*)arg2 ;
+(char)_finishWritingToURL:(id)arg1 byTakingContentsFromItemAtURL:(id)arg2 addingAttributes:(id)arg3 usingTemporaryDirectoryAtURL:(id)arg4 backupFileName:(id)arg5 error:(id*)arg6 ;
+(char)_finishWritingToURL:(id)arg1 byMovingItemAtURL:(id)arg2 addingAttributes:(id)arg3 error:(id*)arg4 ;
+(void)_removeTemporaryDirectoryAtURL:(id)arg1 ;
+(void)_writeAttributes:(id)arg1 toURL:(id)arg2 ;
+(id)_newReaderWithItemAtPath:(id)arg1 ;
+(id)_readWithReader:(id)arg1 preferredFileName:(id)arg2 ;
+(id)_newWriterWithData:(id)arg1 preferredName:(id*)arg2 ;
+(char)attemptOverwrite:(id)arg1 ;
+(char)_writeWithWriter:(id)arg1 toItemAtPath:(id)arg2 ;
+(id)_newFileWrapperWithWriter:(id)arg1 uniqueFileName:(id)arg2 ;
+(id)_temporaryDirectoryPathForWritingToPath:(id)arg1 forResaving:(char)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(char)isRegularFile;
-(char)isDirectory;
-(char)isSymbolicLink;
-(id)initWithPath:(id)arg1 ;
-(NSDictionary *)fileAttributes;
-(id)initWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initRegularFileWithContents:(id)arg1 ;
-(char)_readContentsFromURL:(id)arg1 path:(id)arg2 itemKind:(id)arg3 options:(unsigned long long)arg4 error:(id*)arg5 ;
-(NSString *)preferredFilename;
-(void)setPreferredFilename:(NSString *)arg1 ;
-(id)_addChild:(id)arg1 forUniqueFileName:(id)arg2 ;
-(void)_initDirectoryContents;
-(id)_initWithImpl:(id)arg1 preferredFileName:(id)arg2 uniqueFileName:(id)arg3 docInfo:(id)arg4 iconData:(id)arg5 ;
-(void)_removeParent:(id)arg1 ;
-(NSDictionary *)fileWrappers;
-(void)removeFileWrapper:(id)arg1 ;
-(id)addFileWrapper:(id)arg1 ;
-(void)_observePreferredFileNameOfChild:(id)arg1 ;
-(void)_setFileType:(id)arg1 ;
-(char)_matchesItemKind:(id)arg1 modificationDate:(id)arg2 ;
-(char)matchesContentsOfURL:(id)arg1 ;
-(char)readFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)_removeChild:(id)arg1 forUniqueFileName:(id)arg2 ;
-(void)setFileAttributes:(NSDictionary *)arg1 ;
-(NSString *)filename;
-(char)writeToURL:(id)arg1 options:(unsigned long long)arg2 originalContentsURL:(id)arg3 error:(id*)arg4 ;
-(char)_forWritingToURL:(id)arg1 returnContentsLazyReadingError:(id*)arg2 ;
-(NSData *)regularFileContents;
-(NSURL *)symbolicLinkDestinationURL;
-(void)setFilename:(NSString *)arg1 ;
-(void)_updateDescendantFileNames;
-(char)_writeContentsToURL:(id)arg1 path:(id)arg2 originalContentsURL:(id)arg3 tryHardLinking:(char)arg4 didHardLinking:(char*)arg5 error:(id*)arg6 ;
-(id)_attributesToWrite;
-(id)_newImpl;
-(void)_addParent:(id)arg1 ;
-(id)keyForFileWrapper:(id)arg1 ;
-(void)_resetFileModificationDate;
-(id)_uniqueFileNameOfChild:(id)arg1 ;
-(NSData *)serializedRepresentation;
-(id)initWithSerializedRepresentation:(id)arg1 ;
-(id)initDirectoryWithFileWrappers:(id)arg1 ;
-(id)initSymbolicLinkWithDestinationURL:(id)arg1 ;
-(id)addRegularFileWithContents:(id)arg1 preferredFilename:(id)arg2 ;
-(id)_icon;
-(void)_loadIcon;
-(void)_setIcon:(id)arg1 ;
-(id)_fileType;
-(id)_fullDescription:(char)arg1 ;
-(id)initSymbolicLinkWithDestination:(id)arg1 ;
-(char)needsToBeUpdatedFromPath:(id)arg1 ;
-(char)updateFromPath:(id)arg1 ;
-(char)writeToFile:(id)arg1 atomically:(char)arg2 updateFilenames:(char)arg3 ;
-(id)addFileWithPath:(id)arg1 ;
-(id)addSymbolicLinkWithDestination:(id)arg1 preferredFilename:(id)arg2 ;
-(id)symbolicLinkDestination;
@end

