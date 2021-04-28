/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iLifeMediaBrowser.framework/Versions/A/iLifeMediaBrowser
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSRecursiveLock, NSMutableArray, NSLock, NSDictionary;

@interface ILPluginManager : NSObject {

	NSMutableDictionary* _pluginClasses;
	NSMutableDictionary* _pluginIDMMgrMap;
	NSMutableDictionary* _identifierToPluginsMap;
	NSRecursiveLock* _switchingPluginsLock;
	NSRecursiveLock* _disabledPluginsLock;
	NSRecursiveLock* _initLoadAllPluginsLock;
	NSMutableArray* _disabledPlugins;
	NSMutableDictionary* _customFileExtsMap;
	NSMutableDictionary* _customFileOSTypesMap;
	NSMutableArray* _customFolderPlugins;
	NSMutableArray* _customPackagePlugins;
	NSLock* _pluginLoadLockMapLock;
	NSMutableDictionary* _pluginLoadLockMap;
	id _delegate;
	long long _mediaLibraryMode;
	NSDictionary* _mediaLibraryOptions;
	long long _darkBackgroundIconMode;

}
+(void)initialize;
+(id)sharedPluginManager;
-(void)dealloc;
-(id)init;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)loadPlugin:(id)arg1 ;
-(id)allPlugins;
-(id)pluginForIdentifier:(id)arg1 ;
-(void)loadPluginsWithDelegate:(id)arg1 ;
-(long long)mediaLibraryMode;
-(id)pluginsForMediaType:(unsigned long long)arg1 ;
-(id)pluginForIdentifier:(id)arg1 forceLoad:(char)arg2 ;
-(void)setDarkBackgroundIconModeForBundleIdentifier:(id)arg1 ;
-(id)enabledPlugins;
-(char)shouldLoadDataForPluginWithIdentifier:(id)arg1 ;
-(void)setPluginDisabled:(id)arg1 ;
-(void)setPluginEnabled:(id)arg1 ;
-(id)findPluginsAtPath:(id)arg1 ;
-(void)_sendPluginsChangedKVO;
-(id)allPluginsForIdentifier:(id)arg1 ;
-(void)setExtendedAttributes:(id)arg1 forPluginIdentifier:(id)arg2 ;
-(void)setDarkBackgroundIconMode:(long long)arg1 ;
-(id)loadLockForIdentifier:(id)arg1 ;
-(void)setExtendedAttributes:(id)arg1 forKeys:(id)arg2 toPluginIdentifier:(id)arg3 ;
-(void)setMediaLibraryMode:(long long)arg1 ;
-(void)setMediaLibraryOptions:(id)arg1 ;
-(id)mediaLibraryOptions;
-(long long)darkBackgroundIconMode;
-(id)pluginsSupportFileExtension:(id)arg1 ;
-(id)pluginsSupportOSType:(id)arg1 ;
-(id)pluginsCreateMediaObjectFromFolder;
-(id)pluginsCreateMediaObjectFromPackage;
@end

