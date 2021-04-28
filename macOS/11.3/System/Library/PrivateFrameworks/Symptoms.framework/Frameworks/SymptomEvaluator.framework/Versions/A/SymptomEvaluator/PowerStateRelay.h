/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/Versions/A/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@class NSObject;

@interface PowerStateRelay : NSObject {

	int powerStateToken;
	int screenStateToken;
	int thermalPressureToken;
	int keybagToken;
	NSObject*<OS_dispatch_queue> _powerStateQueue;
	unsigned _batteryService;
	unsigned _batteryNotification;
	IONotificationPortRef _batteryPort;
	char _pluggedIn;
	char _screenNotDark;
	char _screenUnlocked;
	char _batteryExternalPowerIsConnected;
	char _batteryIsCharging;
	char _batteryFullyCharged;
	char _batteryAtWarnLevel;
	char _batteryAtCriticalLevel;
	char _lowPowerModeEnabled;
	unsigned _batteryCurrentCapacity;
	unsigned _batteryMaximumCapacity;
	unsigned _batteryDesignCapacity;
	unsigned _batteryAbsoluteCapacity;
	unsigned _batteryVoltage;
	unsigned _batteryTimeRemaining;
	double _batteryPercentage;
	long long _thermalPressure;

}

@property (assign) char pluggedIn;                                    //@synthesize pluggedIn=_pluggedIn - In the implementation block
@property (assign) char screenNotDark;                                //@synthesize screenNotDark=_screenNotDark - In the implementation block
@property (assign) char screenUnlocked;                               //@synthesize screenUnlocked=_screenUnlocked - In the implementation block
@property (assign) double batteryPercentage;                          //@synthesize batteryPercentage=_batteryPercentage - In the implementation block
@property (assign) unsigned batteryCurrentCapacity;                   //@synthesize batteryCurrentCapacity=_batteryCurrentCapacity - In the implementation block
@property (assign) unsigned batteryMaximumCapacity;                   //@synthesize batteryMaximumCapacity=_batteryMaximumCapacity - In the implementation block
@property (assign) unsigned batteryDesignCapacity;                    //@synthesize batteryDesignCapacity=_batteryDesignCapacity - In the implementation block
@property (assign) unsigned batteryAbsoluteCapacity;                  //@synthesize batteryAbsoluteCapacity=_batteryAbsoluteCapacity - In the implementation block
@property (assign) unsigned batteryVoltage;                           //@synthesize batteryVoltage=_batteryVoltage - In the implementation block
@property (assign) unsigned batteryTimeRemaining;                     //@synthesize batteryTimeRemaining=_batteryTimeRemaining - In the implementation block
@property (assign) char batteryExternalPowerIsConnected;              //@synthesize batteryExternalPowerIsConnected=_batteryExternalPowerIsConnected - In the implementation block
@property (assign) char batteryIsCharging;                            //@synthesize batteryIsCharging=_batteryIsCharging - In the implementation block
@property (assign) char batteryFullyCharged;                          //@synthesize batteryFullyCharged=_batteryFullyCharged - In the implementation block
@property (assign) char batteryAtWarnLevel;                           //@synthesize batteryAtWarnLevel=_batteryAtWarnLevel - In the implementation block
@property (assign) char batteryAtCriticalLevel;                       //@synthesize batteryAtCriticalLevel=_batteryAtCriticalLevel - In the implementation block
@property (assign) long long thermalPressure;                         //@synthesize thermalPressure=_thermalPressure - In the implementation block
@property (assign,nonatomic) char lowPowerModeEnabled;                //@synthesize lowPowerModeEnabled=_lowPowerModeEnabled - In the implementation block
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)defaultRelay;
-(void)dealloc;
-(id)init;
-(char)screenUnlocked;
-(void)setBatteryPercentage:(double)arg1 ;
-(void)setBatteryCurrentCapacity:(unsigned)arg1 ;
-(void)setBatteryMaximumCapacity:(unsigned)arg1 ;
-(void)setBatteryDesignCapacity:(unsigned)arg1 ;
-(void)setBatteryAbsoluteCapacity:(unsigned)arg1 ;
-(void)setBatteryVoltage:(unsigned)arg1 ;
-(void)setBatteryTimeRemaining:(unsigned)arg1 ;
-(void)setBatteryExternalPowerIsConnected:(char)arg1 ;
-(void)setBatteryIsCharging:(char)arg1 ;
-(void)setBatteryFullyCharged:(char)arg1 ;
-(void)setBatteryAtWarnLevel:(char)arg1 ;
-(void)setBatteryAtCriticalLevel:(char)arg1 ;
-(long long)thermalPressure;
-(void)setThermalPressure:(long long)arg1 ;
-(double)batteryPercentage;
-(unsigned)batteryCurrentCapacity;
-(unsigned)batteryMaximumCapacity;
-(unsigned)batteryDesignCapacity;
-(unsigned)batteryAbsoluteCapacity;
-(unsigned)batteryVoltage;
-(unsigned)batteryTimeRemaining;
-(char)batteryExternalPowerIsConnected;
-(char)batteryIsCharging;
-(char)batteryFullyCharged;
-(char)batteryAtWarnLevel;
-(char)batteryAtCriticalLevel;
-(char)lowPowerModeEnabled;
-(void)setLowPowerModeEnabled:(char)arg1 ;
-(char)pluggedIn;
-(id)thermalPressureLevelToString:(long long)arg1 ;
-(void)setPluggedIn:(char)arg1 ;
-(char)screenNotDark;
-(void)setScreenNotDark:(char)arg1 ;
-(void)setScreenUnlocked:(char)arg1 ;
@end
