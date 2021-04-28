/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppSSO.framework/Versions/A/AppSSO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, SOExtensionFinder, NSArray;

@interface SOExtensionManager : NSObject {

	NSObject*<OS_dispatch_queue> _extensionManagerQueue;
	SOExtensionFinder* _extensionFinder;
	NSArray* _loadedExtensions;

}

@property (nonatomic,readonly) NSArray * loadedExtensions;              //@synthesize loadedExtensions=_loadedExtensions - In the implementation block
+(id)sharedInstance;
+(char)_isMatchedExtension:(id)arg1 forBundleIdentifier:(id)arg2 ;
+(id)internalExtensionBundleIdentifier;
+(void)_sendNotificationsLoadedExtensions:(id)arg1 new:(id)arg2 removed:(id)arg3 ;
+(id)internalExtensionsBundleIdentifiers;
+(char)isInternalExtensionBundleIdentifier:(id)arg1 ;
+(char)isAppleConnectExtensionBundleIdentifier:(id)arg1 ;
+(char)isTiburonExtensionBundleIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)loadExtensions;
-(void)unloadExtensions;
-(void)loadExtensionWithBundleIdentifer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)loadExtensionWithBundleIdentifier:(id)arg1 ;
-(void)_doBeginMatchingExtensions;
-(void)_doEndMatchingExtensions;
-(id)_doLoadExtensions;
-(NSArray *)loadedExtensions;
-(id)loadedExtensionWithBundleIdentifer:(id)arg1 ;
-(void)endMatchingExtensions;
-(void)beginMatchingExtensions;
-(id)loadInternalExtension;
-(id)loadedInternalExtension;
-(char)isLoadedExtensionWithBundleIdentifer:(id)arg1 ;
@end

