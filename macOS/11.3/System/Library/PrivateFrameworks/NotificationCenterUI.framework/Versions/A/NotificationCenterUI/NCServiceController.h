/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotificationCenterUI.framework/Versions/A/NotificationCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCConnection, NSMutableDictionary, NSString;

@interface NCServiceController : NSObject <NSXPCListenerDelegate> {

	NSXPCConnection* _ncConnection;
	NSMutableDictionary* _viewServices;
	NSMutableDictionary* _alerts;
	unsigned long long _alertCounter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)_reconnect;
-(void)releaseKey:(id)arg1 ;
-(void)displayNCAlert:(id)arg1 animated:(BOOL)arg2 ;
-(void)dismissNCAlert:(id)arg1 animation:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)makeAlertKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)alertForUUID:(id)arg1 ;
-(void)registerHostViewService:(id)arg1 ;
-(void)_ncAlive:(id)arg1 ;
-(void)_checkAlertAndViewService:(id)arg1 ;
-(id)_notificationCenterConnection;
-(id)_optionsDictionaryForAlert:(id)arg1 ;
-(void)_resendExistingAlerts;
-(void)_installAlertViewInViewService:(id)arg1 ;
-(void)serviceDismissAlertUUID:(id)arg1 ;
@end

