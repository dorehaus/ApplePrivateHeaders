/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SystemMigration/SystemMigration-Structs.h>
#import <SystemMigration/SMCopyEngineFileCopier.h>
#import <libobjc.A.dylib/SMYaaActionDelegate.h>

@class NSURL, NSString, SMNetworkSourceProxy;

@interface SMCopyEngineNetworkCopier : SMCopyEngineFileCopier <SMYaaActionDelegate> {

	NSURL* absoluteBaseSourcePath;
	NSURL* absoluteDestinationBasePath;
	long long operationCompletedSize;
	long long currentFileCompletedSize;
	NSString* lastSkippedFile;
	char _rosvSource;
	SMNetworkSourceProxy* _proxy;

}

@property (retain) SMNetworkSourceProxy * proxy;              //@synthesize proxy=_proxy - In the implementation block
@property (assign) char rosvSource;                           //@synthesize rosvSource=_rosvSource - In the implementation block
-(SMNetworkSourceProxy *)proxy;
-(void)setProxy:(SMNetworkSourceProxy *)arg1 ;
-(char)processReturningError:(id*)arg1 ;
-(void)setRosvSource:(char)arg1 ;
-(char)copyFrom:(id)arg1 relativeFrom:(id)arg2 to:(id)arg3 error:(id*)arg4 ;
-(char)rosvSource;
-(void)updateCompletedFilePermissions:(id)arg1 ;
-(void)fileFinishedFromArchiver:(id)arg1 totalSize:(unsigned long long)arg2 ;
-(void)yaaFileFinished:(id)arg1 filePath:(id)arg2 totalSize:(unsigned long long)arg3 ;
-(void)translateUID:(unsigned*)arg1 andGID:(unsigned*)arg2 ;
-(id)initWithProxy:(id)arg1 rosvSource:(char)arg2 ;
-(void)bomCopierCopyFileUpdate:(BOMCopierRef)arg1 filePath:(const char*)arg2 totalSizeCopied:(long long)arg3 ;
-(void)bomCopierCopyFileFinished:(BOMCopierRef)arg1 filePath:(const char*)arg2 type:(int)arg3 totalSize:(long long)arg4 result:(int)arg5 ;
-(void)bomCopierEncounteredFatalError:(BOMCopierRef)arg1 message:(const char*)arg2 ;
-(void)bomCopierEncounteredFatalFileError:(BOMCopierRef)arg1 atPath:(const char*)arg2 error:(int)arg3 ;
-(int)bomCopierEncounteredFileError:(BOMCopierRef)arg1 atPath:(const char*)arg2 error:(int)arg3 ;
@end

