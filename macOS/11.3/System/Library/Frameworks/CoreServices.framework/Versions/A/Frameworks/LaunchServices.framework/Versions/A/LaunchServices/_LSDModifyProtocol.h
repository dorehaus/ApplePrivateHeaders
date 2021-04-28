/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _LSDModifyProtocol
@required
-(void)setDatabaseIsSeeded:(char)arg1 completionHandler:(/*^block*/id)arg2;
-(void)registerItemInfo:(id)arg1 alias:(id)arg2 diskImageAlias:(id)arg3 bundleURL:(id)arg4 installationPlist:(id)arg5 completionHandler:(/*^block*/id)arg6;
-(void)unregisterBundleUnit:(unsigned)arg1 options:(unsigned)arg2 completionHandler:(/*^block*/id)arg3;
-(void)registerContainerURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)updateContainerUnit:(unsigned)arg1 completionHandler:(/*^block*/id)arg2;
-(void)registerExtensionPoint:(id)arg1 platform:(unsigned)arg2 declaringURL:(id)arg3 withInfo:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)unregisterExtensionPoint:(id)arg1 platform:(unsigned)arg2 withVersion:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)registerSelf;
-(void)setHandler:(id)arg1 version:(LSVersionNumber)arg2 roles:(unsigned)arg3 forContentType:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)removeHandlerForContentType:(id)arg1 roles:(unsigned)arg2 completionHandler:(/*^block*/id)arg3;
-(void)setHandler:(id)arg1 version:(LSVersionNumber)arg2 forURLScheme:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)removeHandlerForURLScheme:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)removeAllHandlersWithCompletionHandler:(/*^block*/id)arg1;
-(void)resetServerStoreWithCompletionHandler:(/*^block*/id)arg1;
-(void)updateRecordForApp:(id)arg1 withSINF:(id)arg2 iTunesMetadata:(id)arg3 placeholderMetadata:(id)arg4 sendNotification:(int)arg5 completionHandler:(/*^block*/id)arg6;
-(void)synchronizeWithMobileInstallation;
-(void)removeContainer:(unsigned)arg1;
-(void)registerSurrogateURL:(id)arg1 containerUnit:(unsigned)arg2 completionHandler:(/*^block*/id)arg3;
-(void)unregisterSurrogateUnit:(unsigned)arg1 options:(unsigned)arg2 completionHandler:(/*^block*/id)arg3;
-(void)garbageCollectDatabaseWithCompletionHandler:(/*^block*/id)arg1;
-(void)setPreferenceValue:(id)arg1 forKey:(id)arg2 forApplicationAtURL:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)setPreferenceValueForCallingApplication:(id)arg1 forKey:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end

