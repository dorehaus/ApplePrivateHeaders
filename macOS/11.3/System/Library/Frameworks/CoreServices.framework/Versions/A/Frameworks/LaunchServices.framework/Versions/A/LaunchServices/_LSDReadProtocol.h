/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _LSDReadProtocol
@required
-(void)getServerStoreNonBlockingWithCompletionHandler:(/*^block*/id)arg1;
-(void)getServerStoreWithCompletionHandler:(/*^block*/id)arg1;
-(void)getSelectedDeveloperDirectoryURLWithCompletionHandler:(/*^block*/id)arg1;
-(void)getServerStatusWithCompletionHandler:(/*^block*/id)arg1;
-(void)getKernelPackageExtensionsWithCompletionHandler:(/*^block*/id)arg1;
-(void)getPreferencesWithCompletionHandler:(/*^block*/id)arg1;
-(void)getLocalizedNameWithBundleType:(id)arg1 bundleIdentifier:(id)arg2 bundleUUID:(id)arg3 context:(id)arg4 shortNameOnly:(char)arg5 preferredLocalizations:(id)arg6 validationToken:(id)arg7 completionHandler:(/*^block*/id)arg8;
-(void)mapBundleIdentifiers:(id)arg1 orMachOUUIDs:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)mapPlugInBundleIdentifiersToContainingBundleIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end
