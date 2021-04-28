/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SecureWindow;
@class NSTimer;

@interface SecureWindowLockPolicyEnforcer : NSObject {

	id<SecureWindow> _secureWindow;
	id _windowStateNotificationToken;
	NSTimer* _lockingTimer;
	id _keybagLockStatusChangedObservationToken;
	char _lockPolicyEnforced;
	char _windowToSecureIsMainWindow;

}

@property (nonatomic,readonly) double windowFocusLostLockingGracePeriod; 
-(void)stopEnforcingLockPolicy;
-(id)initWithSecureWindow:(id)arg1 ;
-(void)startEnforcingLockPolicy;
-(void)scheduleSecureWindowLockingEvent;
-(void)cancelSecureWindowLockingEvent;
-(void)_secureWindowDidResignKeyNotification:(id)arg1 ;
-(void)_secureWindowDidBecomeKeyNotification:(id)arg1 ;
-(double)windowFocusLostLockingGracePeriod;
@end

