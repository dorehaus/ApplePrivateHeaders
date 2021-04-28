/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/LoginUIKit.framework/Versions/A/LoginUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LoginUIKit/LUIController.h>

@class NSImageView, CWInterface, CWWiFiClient;

@interface LUIWiFiStatusController : LUIController {

	NSImageView* _wifiImageView;
	CWInterface* _interface;
	CWWiFiClient* _client;
	char _paused;

}
+(id)controllerWithStyle:(int)arg1 ;
-(void)tearDownController;
-(void)_setupContentView;
-(void)pauseController;
-(void)resumeController;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 ;
-(void)interfaceAddedWithName:(id)arg1 ;
-(void)interfaceRemovedWithName:(id)arg1 ;
-(void)powerStateDidChangeForWiFiInterfaceWithName:(id)arg1 ;
-(void)ssidDidChangeForWiFiInterfaceWithName:(id)arg1 ;
-(void)linkDidChangeForWiFiInterfaceWithName:(id)arg1 ;
-(void)linkQualityDidChangeForWiFiInterfaceWithName:(id)arg1 rssi:(long long)arg2 transmitRate:(double)arg3 ;
-(void)modeDidChangeForWiFiInterfaceWithName:(id)arg1 ;
-(void)_updateStatus;
-(void)_handleNotification:(id)arg1 ;
@end

