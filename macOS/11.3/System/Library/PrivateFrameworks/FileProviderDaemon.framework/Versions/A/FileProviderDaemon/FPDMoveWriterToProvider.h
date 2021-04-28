/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/Versions/A/FileProviderDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FPDMoveWriterExecutor.h>

@class FPDMoveWriter;

@interface FPDMoveWriterToProvider : NSObject <FPDMoveWriterExecutor> {

	FPDMoveWriter* _writer;

}
-(id)_remoteProxy;
-(id)initWithWriter:(id)arg1 ;
-(void)performMoveOfItem:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)performCreateFolder:(id)arg1 inside:(id)arg2 as:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)performCopyOfItem:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)performMoveOfFolder:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 atomically:(char)arg6 completion:(/*^block*/id)arg7 ;
-(id)_targetSession;
-(void)_postImportStepForItem:(id)arg1 sourceURL:(id)arg2 targetURL:(id)arg3 tempFolder:(id)arg4 wasCopyRequested:(char)arg5 error:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)_createTargetItemWithProxy:(id)arg1 target:(id)arg2 contents:(id)arg3 targetName:(id)arg4 lastUsedDate:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)_importURL:(id)arg1 source:(id)arg2 target:(id)arg3 as:(id)arg4 lastUsedDate:(id)arg5 initialImportFinished:(/*^block*/id)arg6 progressAvailable:(/*^block*/id)arg7 completion:(/*^block*/id)arg8 ;
-(void)_createFolder:(id)arg1 under:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

