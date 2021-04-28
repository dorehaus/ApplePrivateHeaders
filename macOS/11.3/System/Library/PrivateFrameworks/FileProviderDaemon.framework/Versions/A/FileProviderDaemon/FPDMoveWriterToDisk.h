/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/Versions/A/FileProviderDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FPDMoveWriterExecutor.h>

@class FPDMoveWriter, NSFileManager;

@interface FPDMoveWriterToDisk : NSObject <FPDMoveWriterExecutor> {

	FPDMoveWriter* _writer;
	NSFileManager* _fileManager;
	char _stopAccessingDestination;

}
-(void)dealloc;
-(id)initWithWriter:(id)arg1 ;
-(void)_performCopyOfItem:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 bounceNumber:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)_respectLastUsageDatePolicyForDestinationURL:(id)arg1 withSource:(id)arg2 ;
-(void)_performMoveOfItem:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 bounceNumber:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)_resolveLocator:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performMoveOfItem:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)performCreateFolder:(id)arg1 inside:(id)arg2 as:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)performCopyOfItem:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)performMoveOfFolder:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 atomically:(char)arg6 completion:(/*^block*/id)arg7 ;
@end

