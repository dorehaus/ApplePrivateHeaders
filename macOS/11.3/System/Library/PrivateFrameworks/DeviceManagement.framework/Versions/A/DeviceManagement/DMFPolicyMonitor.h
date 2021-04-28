/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/Versions/A/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSMutableDictionary, NSMutableArray;

@interface DMFPolicyMonitor : NSObject {

	int _firstUnlockToken;
	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _firstUnlockQueue;
	NSObject*<OS_dispatch_queue> _registrationCallbackQueue;
	NSMutableDictionary* _notificationTokensByPolicyMonitorIdentifier;
	NSMutableArray* _pendingRequests;

}

@property (nonatomic,readonly) NSXPCConnection * xpcConnection;                                                //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,readonly) int firstUnlockToken;                                                           //@synthesize firstUnlockToken=_firstUnlockToken - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> firstUnlockQueue;                                  //@synthesize firstUnlockQueue=_firstUnlockQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> registrationCallbackQueue;                         //@synthesize registrationCallbackQueue=_registrationCallbackQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * notificationTokensByPolicyMonitorIdentifier;              //@synthesize notificationTokensByPolicyMonitorIdentifier=_notificationTokensByPolicyMonitorIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingRequests;                                               //@synthesize pendingRequests=_pendingRequests - In the implementation block
+(id)remoteInterface;
+(id)policyMonitor;
+(const char*)mobileKeyBagFirstUnlockNotificationName;
+(char)hasFirstUnlocked;
-(void)dealloc;
-(id)init;
-(NSXPCConnection *)xpcConnection;
-(id)initWithXPCConnection:(id)arg1 ;
-(NSMutableArray *)pendingRequests;
-(NSObject*<OS_dispatch_queue>)registrationCallbackQueue;
-(void)addRegistration:(id)arg1 forPolicyMonitorIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)requestPoliciesForTypes:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)invalidatePolicyMonitor:(id)arg1 ;
-(id)requestPoliciesForTypes:(id)arg1 withError:(id*)arg2 ;
-(NSMutableDictionary *)notificationTokensByPolicyMonitorIdentifier;
-(void)_dispatchRequest:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)firstUnlockQueue;
-(int)firstUnlockToken;
@end

