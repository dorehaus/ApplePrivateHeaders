/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/Versions/A/IntentsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSDictionary;

@interface INCExtensionPlugInBundleManager : NSObject {

	NSMutableDictionary* _intentsSupported;
	NSObject*<OS_dispatch_queue> _intentsSupportedQueue;
	NSDictionary* _pluginsPlistDictionary;

}
+(id)sharedManager;
-(id)init;
-(id)extensionForIntent:(id)arg1 ;
-(id)_extensionPlugInBundleForIntent:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)_setExtensionPlugInBundle:(id)arg1 forIntent:(id)arg2 bundleIdentifier:(id)arg3 ;
-(char)loadBundleForBundleIdentifier:(id)arg1 wasPrewarmed:(char*)arg2 ;
-(char)_registerBundle:(id)arg1 bundleIdentifier:(id)arg2 ;
@end

