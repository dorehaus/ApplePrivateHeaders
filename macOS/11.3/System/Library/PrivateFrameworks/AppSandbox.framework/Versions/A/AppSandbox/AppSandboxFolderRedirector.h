/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppSandbox.framework/Versions/A/AppSandbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSSet;

@interface AppSandboxFolderRedirector : NSObject {

	NSString* _homedir;
	NSSet* _redirectedPaths;

}
+(id)folderRedirectorForUserWithHomeDirectory:(id)arg1 error:(id*)arg2 ;
+(id)expandPathForFolder:(id)arg1 withUserHomeDirectory:(id)arg2 ;
+(id)folderRedirectorForUID:(unsigned)arg1 error:(id*)arg2 ;
+(id)redirectedFolders;
-(id)resolvedRedirectedFolders;
-(id)redirectedFolderPaths;
-(id)initForUserWithHomeDirectory:(id)arg1 error:(id*)arg2 ;
-(char)isRedirectionEnabledForPath:(id)arg1 ;
@end

