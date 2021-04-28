/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iLifeMediaBrowser.framework/Versions/A/iLifeMediaBrowser
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iLifeMediaBrowser/iLifeMediaBrowser-Structs.h>
#import <iLifeMediaBrowser/ILMediaManager.h>
#import <libobjc.A.dylib/ILMediaManagerPlugin_MustImplement.h>

@class NSMutableArray, NSLock, NSString;

@interface ILFolderPluginSDK : ILMediaManager <ILMediaManagerPlugin_MustImplement> {

	NSMutableArray* _folderPaths;
	NSLock* _folderPathsLock;
	NSString* _currentLoadPath;
	char _shouldAbortCurrentLoad;
	id _reserved4;
	id _reserved5;
	id _reserved6;

}
+(id)pluginBundle;
+(void)setPluginBundle:(id)arg1 ;
+(char)isManagedMediaSource;
+(id)sharedMediaManager;
+(id)_previewFileForGBProjectPath:(id)arg1 ;
+(char)_isSupportedMovieExtension:(id)arg1 orFileType:(unsigned)arg2 ;
+(char)_isSupportedImageExtension:(id)arg1 orFileType:(unsigned)arg2 ;
+(char)_isSupportedAudioExtension:(id)arg1 orFileType:(unsigned)arg2 ;
+(char)_isSupportedMovieFileBySpotlightDict:(id)arg1 ;
+(char)_isSupportedImageFileBySpotlightDict:(id)arg1 ;
+(char)_isSupportedAudioFileBySpotlightDict:(id)arg1 ;
+(void)releaseSharedMediaManager;
-(void)dealloc;
-(id)init;
-(id)displayName;
-(id)uniqueID;
-(id)displayImage;
-(void)updateChildGroup:(id)arg1 ;
-(void)removeChildGroup:(id)arg1 ;
-(char)isFolderSourcePlugin;
-(id)rootMediaGroupIcon;
-(void)addFolderPaths:(id)arg1 ;
-(void)removeFolderPath:(id)arg1 ;
-(void)addFolderPath:(id)arg1 ;
-(void)watchedPathChanged:(id)arg1 fileChangedEventFlags:(unsigned long long)arg2 ;
-(void)watchedQueryChanged:(id)arg1 queryScope:(id)arg2 ;
-(void)_createOrUpdateSmartFolderMediaForPath:(id)arg1 filePaths:(id)arg2 notification:(id)arg3 ;
-(id)performLoadData;
-(id)rootMediaGroupTitle;
-(id)badgeInfoForMediaObject:(id)arg1 inMediaGroups:(id)arg2 thumbnailRect:(CGRect)arg3 ;
-(unsigned long long)mediaTypesSupported;
-(char)writeMediaGroups:(id)arg1 toPasteboard:(id)arg2 ;
-(id)createMediaObjectForURL:(id)arg1 ;
-(void)removeFolderPaths:(id)arg1 ;
-(void)removeAllFolderPaths;
-(char)addUniquePath:(id)arg1 ;
-(void)_loadMediaFoldersThreaded:(id)arg1 ;
-(id)_mediaGroupForPath:(id)arg1 ;
-(void)removeMediaGroupFolders:(id)arg1 ;
-(void)killLoadThread:(id)arg1 ;
-(void)_removeMediaGroupWithPath:(id)arg1 ;
-(void)removeFolderPathThreaded:(id)arg1 ;
-(void)removeWatchRecursiveForMediaGroups:(id)arg1 ;
-(void)addWatchRecursiveForMediaGroups:(id)arg1 ;
-(id)_loadMediaFolders:(id)arg1 ;
-(void)setCurrentLoadPath:(id)arg1 ;
-(id)_createFolderMediaGroupForPath:(id)arg1 ;
-(id)mediaGroupForAliasTargetPath:(id)arg1 ;
-(char)loadShouldIgnoreThisPath:(id)arg1 ;
-(id)_createFolderMediaGroupForPath:(id)arg1 currentLoadAliases:(id)arg2 ;
-(char)_cyclicDependency:(id)arg1 parentPath:(id)arg2 ;
-(id)_checkForiMovieProjectAtPath:(id)arg1 alias:(char)arg2 infoRecFlags:(unsigned long long)arg3 ;
-(id)_createMediaObjectForPath_V2:(id)arg1 isAlias:(char)arg2 resolvedAliasPath:(id)arg3 dstInfoRec:(LSItemInfoRecord*)arg4 ;
-(void)reloadDataForPath:(id)arg1 ;
-(id)_createMediaObjectForURL:(id)arg1 isAlias:(char)arg2 resolvedAliasPath:(id)arg3 dstInfoRec:(LSItemInfoRecord*)arg4 ;
-(id)_createGBMediaObjectForPath:(id)arg1 isAlias:(char)arg2 resolvedAliasPath:(id)arg3 spotlightAttributesDict:(id)arg4 ;
-(id)_createMovieMediaObjectForPath:(id)arg1 isAlias:(char)arg2 resolvedAliasPath:(id)arg3 spotlightAttributesDict:(id)arg4 ;
-(id)_createImageMediaObjectWithPath:(id)arg1 isAlias:(char)arg2 resolvedAliasPath:(id)arg3 spotlightAttributesDict:(id)arg4 ;
-(id)_createAudioMediaObjectForPath:(id)arg1 isAlias:(char)arg2 spotlightAttributesDict:(id)arg3 ;
-(id)customFolderPaths;
-(void)watchSubFolder:(id)arg1 ;
-(id)mediaGroupForPath:(id)arg1 ;
-(id)_createMediaObjectForPath:(id)arg1 alias:(char)arg2 infoRecFlags:(unsigned long long)arg3 ;
-(id)currentLoadpath;
@end

