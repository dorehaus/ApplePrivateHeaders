/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/LoginUIKit.framework/Versions/A/LoginUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LoginUIKit/LUIController.h>

@class LUIBatteryView, NSNumberFormatter;

@interface LUIBatteryStatusController : LUIController {

	int _timeRemainingToken;
	int _lowBatteryToken;
	LUIBatteryView* _batteryView;
	NSNumberFormatter* _percentFormatter;

}
+(id)controllerWithStyle:(int)arg1 ;
-(void)tearDownController;
-(void)_setupContentView;
-(void)pauseController;
-(void)resumeController;
-(id)_colorForStyle;
-(id)_stringForBatteryPercentage:(id)arg1 ;
-(id)_imageForBattery:(id)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 ;
-(void)_layoutContentView;
@end

