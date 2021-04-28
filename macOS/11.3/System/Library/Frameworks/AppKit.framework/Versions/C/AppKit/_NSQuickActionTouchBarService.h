/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_NSQuickActionTouchBarControllerDelegate.h>
#import <libobjc.A.dylib/_NSQuickActionTouchBarServiceProtocol.h>

@class NSRunningApplication, NSMapTable, _NSQuickActionTouchBarController, NSString;

@interface _NSQuickActionTouchBarService : NSObject <_NSQuickActionTouchBarControllerDelegate, _NSQuickActionTouchBarServiceProtocol> {

	NSRunningApplication* _frontmostApplication;
	NSMapTable* _connectionsByApplication;
	NSMapTable* _applicationsByConnection;
	_NSQuickActionTouchBarController* _touchBarController;
	/*^block*/id _timeoutHandler;
	int _registrationToken;
	char _touchBarIsShowing;
	char _dismissOnApplicationSwitch;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)invokeQuickActionWithIdentifier:(id)arg1 ;
-(void)enableQuickActionsWithIdentifiers:(id)arg1 ;
-(void)registerClient;
-(void)unregisterClientForApp:(id)arg1 ;
-(void)handleShowPopoverNotification;
@end

