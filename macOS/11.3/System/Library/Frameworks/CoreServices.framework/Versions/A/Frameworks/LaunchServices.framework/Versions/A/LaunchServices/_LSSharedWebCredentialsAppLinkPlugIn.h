/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LaunchServices/LaunchServices-Structs.h>
#import <LaunchServices/_LSAppLinkPlugIn.h>

@interface _LSSharedWebCredentialsAppLinkPlugIn : _LSAppLinkPlugIn
-(id)init;
-(id)appLinksWithContext:(LSContext*)arg1 error:(id*)arg2 ;
-(id)callingBundleIdentifier;
-(optional<LSBinding>*)bindingWithContext:(LSContext*)arg1 forServiceDetails:(id)arg2 callingBundleIdentifier:(id)arg3 ;
-(void)enumerateBindingsWithContext:(LSContext*)arg1 forSWCResults:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)appLinksWithContext:(LSContext*)arg1 forSWCResults:(id)arg2 ;
@end

