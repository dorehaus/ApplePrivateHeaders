/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/Versions/A/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
#import <CoreBrightness/CoreBrightness-Structs.h>
@class NSObject, NSLock;

@interface AmbientLightSensorStats : NSObject {

	SCD_Struct_Am54 _activityFilteredStats;
	SCD_Struct_Am54 _unfilteredStats;
	NSObject*<OS_dispatch_source> _reportTimer;
	unsigned long long _alsIdleEventStartTime;
	NSObject*<OS_dispatch_source> _alsIdleTimer;
	NSObject*<OS_dispatch_source> _userBrightnessTimer;
	unsigned long long _activityNotification;
	unsigned _clamshellNotification;
	IONotificationPortRef _port;
	unsigned _clamshellStateIterator;
	NSLock* _alsEventLock;
	BOOL _clamshellOpened;
	BOOL _userIsActive;
	IOHIDEventSystemClientRef _hidEventSystemClient;

}
-(void)dealloc;
-(id)init;
-(void)updateALSEnabled:(BOOL)arg1 ;
-(void)logUserBrightnessChanged;
-(void)logALSEnabled:(BOOL)arg1 userChanged:(BOOL)arg2 ;
-(void)logALSEvent:(float)arg1 ;
-(void)startALSIdleTimer;
-(void)cancelALSIdleTimer;
-(void)logALSEventLocked:(float)arg1 forStats:(SCD_Struct_Am54*)arg2 ;
-(unsigned)floorTo2SigFig:(unsigned)arg1 ;
-(void)reportUnfilteredLux:(int)arg1 range:(int)arg2 changes:(int)arg3 enabled:(int)arg4 ;
-(void)reportActivityFilteredLux:(int)arg1 range:(int)arg2 ;
-(void)logALSIdleEvent:(BOOL)arg1 ;
@end
