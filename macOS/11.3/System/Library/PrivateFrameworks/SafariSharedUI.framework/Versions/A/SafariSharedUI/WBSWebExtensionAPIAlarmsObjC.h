/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/Versions/A/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariSharedUI/SafariSharedUI-Structs.h>
#import <SafariSharedUI/WBSWebExtensionAPIObject.h>

@class WBSWebExtensionAPIEventObjC;

@interface WBSWebExtensionAPIAlarmsObjC : WBSWebExtensionAPIObject {

	WBSWebExtensionAPIEventObjC* _onAlarm;

}

@property (nonatomic,readonly) WBSWebExtensionAPIAlarms* cpp; 
@property (nonatomic,readonly) WBSWebExtensionAPIEventObjC * onAlarm; 
+(id)alarmsWithExtensionIdentifier:(id)arg1 runtime:(id)arg2 ;
+(char)_isAlarmInfoValidWithName:(id)arg1 alarmInfo:(id)arg2 ;
+(char)_isAlarmInfoValid:(id)arg1 ;
-(WBSWebExtensionAPIAlarms*)cpp;
-(WBSWebExtensionAPIEventObjC *)onAlarm;
-(void)createAlarmWithName:(id)arg1 alarmInfo:(id)arg2 browserContextController:(id)arg3 ;
-(void)getAlarmWithName:(id)arg1 browserContextController:(id)arg2 completionHandler:(id)arg3 ;
-(void)getAllAlarmsWithBrowserContextController:(id)arg1 completionHandler:(id)arg2 ;
-(void)clearAlarmWithName:(id)arg1 browserContextController:(id)arg2 completionHandler:(id)arg3 ;
-(void)clearAllAlarmsWithBrowserContextController:(id)arg1 completionHandler:(id)arg2 ;
@end
