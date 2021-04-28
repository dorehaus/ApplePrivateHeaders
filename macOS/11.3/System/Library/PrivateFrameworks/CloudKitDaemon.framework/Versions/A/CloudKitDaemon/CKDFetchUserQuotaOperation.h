/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@interface CKDFetchUserQuotaOperation : CKDDatabaseOperation {

	unsigned long long _quotaAvailable;

}

@property (assign,nonatomic) unsigned long long quotaAvailable;                                                //@synthesize quotaAvailable=_quotaAvailable - In the implementation block
@property (nonatomic,retain) id<CKFetchUserQuotaOperationCallbacks> clientOperationCallbackProxy; 
-(int)operationType;
-(void)main;
-(id)activityCreate;
-(void)setQuotaAvailable:(unsigned long long)arg1 ;
-(unsigned long long)quotaAvailable;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
@end

