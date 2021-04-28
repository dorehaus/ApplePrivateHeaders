/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ChronoServices.framework/Versions/A/ChronoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString, NSFileManager;

@interface CHSScreenshotManager : NSObject {

	NSURL* _baseURL;
	NSString* _fileUTI;
	NSString* _fileExtension;
	NSFileManager* _fileManager;

}

@property (nonatomic,readonly) NSURL * baseURL;                          //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,readonly) NSString * fileUTI;                       //@synthesize fileUTI=_fileUTI - In the implementation block
@property (nonatomic,readonly) NSString * fileExtension;                 //@synthesize fileExtension=_fileExtension - In the implementation block
@property (nonatomic,readonly) NSFileManager * fileManager;              //@synthesize fileManager=_fileManager - In the implementation block
+(id)sharedManager;
-(NSURL *)baseURL;
-(NSString *)fileExtension;
-(NSFileManager *)fileManager;
-(NSString *)fileUTI;
-(id)initWithDirectory:(id)arg1 fileUTI:(id)arg2 fileExtension:(id)arg3 ;
-(id)initWithDirectory:(id)arg1 fileType:(id)arg2 fileManager:(id)arg3 ;
-(id)initWithDirectory:(id)arg1 fileUTI:(id)arg2 fileExtension:(id)arg3 fileManager:(id)arg4 ;
-(id)URLForWidget:(id)arg1 metrics:(id)arg2 inColorScheme:(long long)arg3 createIntermediateDirectories:(char)arg4 ;
-(id)indexingDirectoryNameForWidget:(id)arg1 ;
-(id)finalFileNameForWidget:(id)arg1 metrics:(id)arg2 inColorScheme:(long long)arg3 ;
-(id)initWithDirectory:(id)arg1 fileType:(id)arg2 ;
-(void)deleteAllCachedScreenshots;
-(id)URLIfScreenshotExistsForWidget:(id)arg1 metrics:(id)arg2 inColorScheme:(long long)arg3 ;
-(id)contentIdentifierForWidget:(id)arg1 metrics:(id)arg2 inColorScheme:(long long)arg3 ;
@end

