/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Versions/A/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface RMPolicyStore : NSObject {

	id _policyChangeLock;

}
-(id)init;
-(id)currentPolicyByKey;
-(void)_setCurrentPolicyByKey:(id)arg1 ;
-(void)addOrUpdatePolicy:(id)arg1 ;
-(void)removePolicyWithKey:(id)arg1 ;
-(id)policyWithKey:(id)arg1 ;
@end

