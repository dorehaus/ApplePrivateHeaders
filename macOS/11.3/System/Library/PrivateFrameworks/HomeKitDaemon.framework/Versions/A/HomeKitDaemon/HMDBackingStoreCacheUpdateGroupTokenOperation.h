/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheGroup, CKServerChangeToken;

@interface HMDBackingStoreCacheUpdateGroupTokenOperation : HMDBackingStoreOperation {

	HMDBackingStoreCacheGroup* _record;
	CKServerChangeToken* _serverChangeToken;

}

@property (nonatomic,retain) HMDBackingStoreCacheGroup * record;                   //@synthesize record=_record - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * serverChangeToken;              //@synthesize serverChangeToken=_serverChangeToken - In the implementation block
-(void)setServerChangeToken:(CKServerChangeToken *)arg1 ;
-(CKServerChangeToken *)serverChangeToken;
-(HMDBackingStoreCacheGroup *)record;
-(void)setRecord:(HMDBackingStoreCacheGroup *)arg1 ;
-(id)mainReturningError;
-(id)initWithGroup:(id)arg1 serverChangeToken:(id)arg2 resultBlock:(/*^block*/id)arg3 ;
@end

