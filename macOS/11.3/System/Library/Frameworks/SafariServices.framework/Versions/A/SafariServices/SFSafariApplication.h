/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SafariServices.framework/Versions/A/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SFSafariApplication : NSObject
+(void)getActiveWindowWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)getAllWindowsWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)openWindowWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)setToolbarItemsNeedUpdate;
+(void)getHostApplicationWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)showPreferencesForExtensionWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)dispatchMessageWithName:(id)arg1 toExtensionWithIdentifier:(id)arg2 userInfo:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

