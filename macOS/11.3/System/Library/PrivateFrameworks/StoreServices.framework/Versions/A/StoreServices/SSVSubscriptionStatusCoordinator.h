/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SSVSubscriptionStatusRequest, NSObject, SSVSubscriptionStatus, NSDate, NSMutableArray;

@interface SSVSubscriptionStatusCoordinator : NSObject {

	SSVSubscriptionStatusRequest* _activeRequest;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	char _didReset;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SSVSubscriptionStatus* _lastKnownStatus;
	NSDate* _lastStatusDate;
	int _notificationToken;
	long long _subscriptionStatusAccessPolicy;
	NSMutableArray* _statusBlocks;

}

@property (copy,readonly) SSVSubscriptionStatus * lastKnownStatus; 
+(id)sharedCoordinator;
+(id)copyStatusFromUserDefaults;
+(void)updateUserDefaultsWithStatus:(id)arg1 ;
+(id)_existingSharedCoordinator;
+(id)_changeNotificationSuspensionAccessQueue;
+(void)_sendChangeNotification;
+(void)sendChangeNotification;
+(void)beginSuspendingSubscriptionStatusChangeNotifications;
+(void)endSuspendingSubscriptionStatusChangeNotifications;
+(void)removeUserDefaultsForAccountIdentifier:(id)arg1 ;
+(void)updateWithResponseDictionary:(id)arg1 accountIdentifier:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)reset;
-(SSVSubscriptionStatus *)lastKnownStatus;
-(void)_externalChangeNotification;
-(void)_updateSubscriptionStatusAccessPolicyAllowingNotification:(char)arg1 ;
-(void)_accountStoreChangedNotification;
-(void)_deviceStoreFrontChangedNotification;
-(id)_copyValidStatusForStatus:(id)arg1 ;
-(id)_copyStatusDateFromUserDefaults;
-(id)_copyStatusFromUserDefaults;
-(void)_handleRequestResponseWithStatus:(id)arg1 isFinal:(char)arg2 error:(id)arg3 ;
-(void)_validateLastKnownStatus;
-(void)_fireStatusBlocksWithStatus:(id)arg1 isFinal:(char)arg2 error:(id)arg3 ;
-(void)getStatusWithOptions:(id)arg1 statusBlock:(/*^block*/id)arg2 ;
-(void)modifyLastKnownStatusUsingBlock:(/*^block*/id)arg1 ;
-(void)_invalidateLastKnownStatus;
@end

