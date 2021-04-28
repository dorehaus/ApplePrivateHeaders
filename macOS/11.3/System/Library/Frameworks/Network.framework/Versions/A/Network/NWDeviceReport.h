/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Network.framework/Versions/A/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NWAccumulator;

@interface NWDeviceReport : NSObject {

	char _batteryExternalPowerIsConnected;
	char _batteryIsCharging;
	char _batteryFullyCharged;
	char _batteryAtWarnLevel;
	char _batteryAtCriticalLevel;
	char _rnfEnabled;
	char _devicePluggedIn;
	char _deviceScreenOn;
	char _quicExperimentallyEnabled;
	unsigned _batteryPercentage;
	unsigned _batteryCurrentCapacity;
	unsigned _batteryMaximumCapacity;
	unsigned _batteryDesignCapacity;
	unsigned _batteryAbsoluteCapacity;
	unsigned _batteryVoltage;
	unsigned _batteryTimeRemaining;
	unsigned _motionState;
	unsigned _thermalPressure;
	NSString* _serialNumber;
	NWAccumulator* _batteryAccumulator;

}

@property (assign,nonatomic) unsigned batteryPercentage;                        //@synthesize batteryPercentage=_batteryPercentage - In the implementation block
@property (assign,nonatomic) unsigned batteryCurrentCapacity;                   //@synthesize batteryCurrentCapacity=_batteryCurrentCapacity - In the implementation block
@property (assign,nonatomic) unsigned batteryMaximumCapacity;                   //@synthesize batteryMaximumCapacity=_batteryMaximumCapacity - In the implementation block
@property (assign,nonatomic) unsigned batteryDesignCapacity;                    //@synthesize batteryDesignCapacity=_batteryDesignCapacity - In the implementation block
@property (assign,nonatomic) unsigned batteryAbsoluteCapacity;                  //@synthesize batteryAbsoluteCapacity=_batteryAbsoluteCapacity - In the implementation block
@property (assign,nonatomic) unsigned batteryVoltage;                           //@synthesize batteryVoltage=_batteryVoltage - In the implementation block
@property (assign,nonatomic) unsigned batteryTimeRemaining;                     //@synthesize batteryTimeRemaining=_batteryTimeRemaining - In the implementation block
@property (assign,nonatomic) char batteryExternalPowerIsConnected;              //@synthesize batteryExternalPowerIsConnected=_batteryExternalPowerIsConnected - In the implementation block
@property (assign,nonatomic) char batteryIsCharging;                            //@synthesize batteryIsCharging=_batteryIsCharging - In the implementation block
@property (assign,nonatomic) char batteryFullyCharged;                          //@synthesize batteryFullyCharged=_batteryFullyCharged - In the implementation block
@property (assign,nonatomic) char batteryAtWarnLevel;                           //@synthesize batteryAtWarnLevel=_batteryAtWarnLevel - In the implementation block
@property (assign,nonatomic) char batteryAtCriticalLevel;                       //@synthesize batteryAtCriticalLevel=_batteryAtCriticalLevel - In the implementation block
@property (nonatomic,retain) NSString * serialNumber;                           //@synthesize serialNumber=_serialNumber - In the implementation block
@property (assign,nonatomic) char rnfEnabled;                                   //@synthesize rnfEnabled=_rnfEnabled - In the implementation block
@property (assign,nonatomic) char devicePluggedIn;                              //@synthesize devicePluggedIn=_devicePluggedIn - In the implementation block
@property (assign,nonatomic) char deviceScreenOn;                               //@synthesize deviceScreenOn=_deviceScreenOn - In the implementation block
@property (assign,nonatomic) unsigned motionState;                              //@synthesize motionState=_motionState - In the implementation block
@property (assign,nonatomic) unsigned thermalPressure;                          //@synthesize thermalPressure=_thermalPressure - In the implementation block
@property (assign,nonatomic) char quicExperimentallyEnabled;                    //@synthesize quicExperimentallyEnabled=_quicExperimentallyEnabled - In the implementation block
@property (nonatomic,retain) NWAccumulator * batteryAccumulator;                //@synthesize batteryAccumulator=_batteryAccumulator - In the implementation block
-(char)rnfEnabled;
-(char)quicExperimentallyEnabled;
-(id)createAWDReport;
-(id)description;
-(NSString *)serialNumber;
-(void)setSerialNumber:(NSString *)arg1 ;
-(void)setMotionState:(unsigned)arg1 ;
-(unsigned)motionState;
-(void)setBatteryAccumulator:(NWAccumulator *)arg1 ;
-(void)setBatteryPercentage:(unsigned)arg1 ;
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
-(void)setDevicePluggedIn:(char)arg1 ;
-(void)setDeviceScreenOn:(char)arg1 ;
-(unsigned)thermalPressure;
-(void)setThermalPressure:(unsigned)arg1 ;
-(unsigned)batteryPercentage;
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
-(char)devicePluggedIn;
-(char)deviceScreenOn;
-(NWAccumulator *)batteryAccumulator;
-(void)setRnfEnabled:(char)arg1 ;
-(void)setQuicExperimentallyEnabled:(char)arg1 ;
@end

