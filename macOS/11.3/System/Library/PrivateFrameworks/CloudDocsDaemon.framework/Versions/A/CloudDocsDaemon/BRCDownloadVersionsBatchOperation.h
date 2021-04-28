/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCTransferBatchOperation.h>

@class NSMutableDictionary;

@interface BRCDownloadVersionsBatchOperation : BRCTransferBatchOperation {

	NSMutableDictionary* _readers;
	/*^block*/id _perDownloadCompletionBlock;

}

@property (copy) id perDownloadCompletionBlock;              //@synthesize perDownloadCompletionBlock=_perDownloadCompletionBlock - In the implementation block
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)createActivity;
-(void)setPerDownloadCompletionBlock:(id)arg1 ;
-(void)addDownload:(id)arg1 ;
-(id)initWithSyncContext:(id)arg1 forNonLocalVersion:(char)arg2 ;
-(void)sendTransferCompletionCallBack:(id)arg1 error:(id)arg2 ;
-(void)mainWithTransfers:(id)arg1 ;
-(id)actionPrettyName;
-(void)addReaderID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelReaderID:(id)arg1 ;
-(id)perDownloadCompletionBlock;
-(id)transferredObjectsPrettyName;
@end
