/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class HMFPairingIdentity;


@protocol HMDAccessoryUserManagement <NSObject>
@property (readonly) char supportsUserManagement; 
@property (copy,readonly) HMFPairingIdentity * pairingIdentity; 
@required
-(HMFPairingIdentity *)pairingIdentity;
-(void)removeUser:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(char)supportsUserManagement;
-(void)addUser:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)pairingsWithCompletionHandler:(/*^block*/id)arg1;

@end

