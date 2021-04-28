/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>
#import <libobjc.A.dylib/CKFetchUserQuotaOperationCallbacks.h>

@interface CKFetchUserQuotaOperation : CKDatabaseOperation <CKFetchUserQuotaOperationCallbacks> {

	/*^block*/id _fetchUserQuotaCompletionBlock;
	unsigned long long _quotaAvailable;

}

@property (assign,nonatomic) unsigned long long quotaAvailable;                                                  //@synthesize quotaAvailable=_quotaAvailable - In the implementation block
@property (nonatomic,readonly) id<CKFetchUserQuotaOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,copy) id fetchUserQuotaCompletionBlock;                                                     //@synthesize fetchUserQuotaCompletionBlock=_fetchUserQuotaCompletionBlock - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
+(SEL)daemonCallbackCompletionSelector;
-(id)init;
-(char)hasCKOperationCallbacksSet;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(id)fetchUserQuotaCompletionBlock;
-(void)setQuotaAvailable:(unsigned long long)arg1 ;
-(unsigned long long)quotaAvailable;
-(void)setFetchUserQuotaCompletionBlock:(id)arg1 ;
-(void)handleOperationDidCompleteWithQuotaAvailable:(unsigned long long)arg1 metrics:(id)arg2 error:(id)arg3 ;
@end

