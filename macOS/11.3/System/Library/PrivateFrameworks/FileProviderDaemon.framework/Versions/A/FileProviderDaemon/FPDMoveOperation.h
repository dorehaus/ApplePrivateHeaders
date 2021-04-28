/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/Versions/A/FileProviderDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProviderDaemon/FPDActionOperation.h>

@class FPDMoveReader, FPDMoveWriter, FPDActionOperationQueue, FPMoveInfo;

@interface FPDMoveOperation : FPDActionOperation {

	FPDMoveReader* _reader;
	FPDMoveWriter* _writer;
	FPDActionOperationQueue* _queue;

}

@property (nonatomic,readonly) FPMoveInfo * info; 
+(char)_validateInfo:(id)arg1 ;
-(void)cancel;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)dumpStateTo:(id)arg1 ;
-(void)_t_unblockReader;
-(void)cancelRoot:(id)arg1 ;
-(id)initWithActionInfo:(id)arg1 request:(id)arg2 server:(id)arg3 ;
-(id)moveInfo;
-(void)sendPastUpdatesToClient:(id)arg1 ;
@end

