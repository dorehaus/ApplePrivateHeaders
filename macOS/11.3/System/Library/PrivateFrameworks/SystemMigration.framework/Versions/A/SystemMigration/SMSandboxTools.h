/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SMSandboxTools : NSObject
+(char)shoveSandboxAtPath:(id)arg1 sandBoxPath:(id)arg2 destinationPath:(id)arg3 error:(id*)arg4 ;
+(char)prepareSandboxForSystem:(id)arg1 atPath:(id)arg2 sandBoxPath:(id)arg3 ;
+(void)cleanupSandboxForSystem:(id)arg1 atPath:(id)arg2 sandBoxPath:(id)arg3 ;
+(id)sandboxPath;
+(id)sandboxPathWithName:(id)arg1 ;
+(id)_dhsafeTemporaryDirectory;
+(void)removeSandboxAtURL:(id)arg1 ;
+(void)clearExistingBundleOnTarget:(id)arg1 ;
+(id)retreiveErrorFromShoveFailures:(id)arg1 forErrorCode:(int)arg2 ;
+(char)shoveSandboxAtPath:(id)arg1 sandBoxPath:(id)arg2 error:(id*)arg3 ;
@end

