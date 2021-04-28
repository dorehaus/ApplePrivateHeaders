/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/Versions/A/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLFileUtilities : NSObject
+(char)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(id)fileManager;
+(id)systemLibraryURL;
+(char)ingestItemAtURL:(id)arg1 toURL:(id)arg2 type:(long long)arg3 options:(unsigned long long)arg4 capabilities:(id)arg5 error:(id*)arg6 ;
+(char)filePath:(id)arg1 hasPrefix:(id)arg2 ;
+(char)secureMoveItemAtURL:(id)arg1 toURL:(id)arg2 capabilities:(id)arg3 error:(id*)arg4 ;
+(char)stripExtendedAttributesFromFileAtURL:(id)arg1 inDomain:(id)arg2 error:(id*)arg3 ;
+(char)fileURL:(id)arg1 isEqualToFileURL:(id)arg2 ;
+(id)realPathForPath:(id)arg1 error:(id*)arg2 ;
+(char)hasDiskSpaceToCopyFileAtURL:(id)arg1 ;
+(id)defaultSystemPhotoDataDirectory;
+(id)defaultSystemPhotoDataCPLDirectory;
+(id)defaultSystemPhotoDataMiscDirectory;
+(id)defaultSystemPhotoDCIMDirectory;
+(id)proxyLockFilePathForDatabasePath:(id)arg1 ;
+(id)proxyLockCoordinatingFilePathForDatabaseDirectory:(id)arg1 databaseName:(id)arg2 ;
+(id)defaultSystemLibraryURL;
+(id)_defaultSystemLibraryPath;
+(char)setPhotoLibraryBasePath:(id)arg1 ;
+(char)cloneFileAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
+(long long)directoryEntryCountAtURL:(id)arg1 error:(id*)arg2 ;
+(char)removeFilesInDirectoryAtURL:(id)arg1 withPrefix:(id)arg2 error:(id*)arg3 progress:(/*^block*/id)arg4 ;
+(char)removeDisconnectedSQLiteDatabaseFileWithPath:(id)arg1 error:(id*)arg2 ;
+(id)descriptionForFileIngestionType:(long long)arg1 ;
+(char)isFileExistsError:(id)arg1 ;
+(char)createDirectoryAtPath:(id)arg1 error:(id*)arg2 usingFileManager:(id)arg3 ;
+(char)createDirectoryAtPath:(id)arg1 error:(id*)arg2 ;
+(char)changeFileOwnerToMobileAtPath:(id)arg1 error:(id*)arg2 usingFileManager:(id)arg3 ;
+(char)changeFileOwnerToMobileAtPath:(id)arg1 error:(id*)arg2 ;
+(id)_mobileOwnerAttributes;
+(long long)fileLengthForFilePath:(id)arg1 ;
+(char)stripImmutableFlagIfNecessaryFromFileAtPath:(id)arg1 ;
+(char)filePath:(id)arg1 isEqualToFilePath:(id)arg2 ;
+(char)URLIsInTrash:(id)arg1 ;
+(id)redactedDescriptionForFileURL:(id)arg1 ;
+(id)redactedDescriptionForPath:(id)arg1 ;
@end
