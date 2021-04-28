/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Admin.framework/Versions/A/Admin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Admin/Admin-Structs.h>
@class NSMutableDictionary, NSDictionary;

@interface PowerActivityManager : NSObject {

	NSMutableDictionary* _powerPreferences;
	NSDictionary* _upsShutdownLevels;
	IONotificationPortRef _ioNotificationPort;
	unsigned _ioNotifier;

}
+(id)sharedPowerActivityManager;
-(void)finalize;
-(void)dealloc;
-(id)init;
-(char)hasBattery;
-(char)wakesOnLANFor:(id)arg1 ;
-(char)supportsWakeOnLANFor:(id)arg1 ;
-(void)registerPMFeatureChangedNotification;
-(void)unregisterPMFeatureChangedNotification;
-(id)_powerPreferences;
-(id)_valueForKey:(id)arg1 powerSource:(id)arg2 ;
-(void)_setValue:(id)arg1 forKey:(id)arg2 powerSource:(id)arg3 ;
-(id)upsActivityProfile;
-(void)writeUPSSettings:(id)arg1 forKey:(id)arg2 ;
-(void)refreshUPSShutdownLevels;
-(void)_refreshPowerPreferences;
-(char)supportsHDRLowPower;
-(char)isHDRLowPowerEnabled;
-(void)updateProfilesAndSendNotification;
-(unsigned long long)displaySleepsFor:(id)arg1 ;
-(unsigned long long)diskSleeps:(id)arg1 ;
-(unsigned long long)systemSleeps:(id)arg1 ;
-(void)setMinutesUntilDisplaySleeps:(unsigned long long)arg1 for:(id)arg2 ;
-(void)setMinutesUntilDiskSleeps:(unsigned long long)arg1 for:(id)arg2 ;
-(void)setMinutesUntilSystemSleeps:(unsigned long long)arg1 for:(id)arg2 ;
-(char)supportsProModeFor:(id)arg1 ;
-(char)proModeFor:(id)arg1 ;
-(void)setProMode:(char)arg1 for:(id)arg2 ;
-(char)supportsDarkWakeFor:(id)arg1 ;
-(char)supportsEnablePowerButtonSleepFor:(id)arg1 ;
-(char)supportsWakeOnRingFor:(id)arg1 ;
-(char)supportsAutoRestartFor:(id)arg1 ;
-(char)supportsReducedCPUSpeedFor:(id)arg1 ;
-(char)supportsDynamicPowerStep:(id)arg1 ;
-(char)supportsLowerDisplayBrightnessFor:(id)arg1 ;
-(char)supportsSleepUsesDimFor:(id)arg1 ;
-(char)supportsRestartOnHangFor:(id)arg1 ;
-(char)supportsVACT;
-(char)darkWakeFor:(id)arg1 ;
-(char)enablePowerButtonSleepFor:(id)arg1 ;
-(char)wakesOnRingFor:(id)arg1 ;
-(char)autoRestartsFor:(id)arg1 ;
-(char)reducedCPUSpeedFor:(id)arg1 ;
-(char)dynamicPowerStepFor:(id)arg1 ;
-(char)lowerDisplayBrightnessFor:(id)arg1 ;
-(char)sleepUsesDimFor:(id)arg1 ;
-(char)restartsOnHang:(id)arg1 ;
-(char)isVACTEnabled;
-(void)setDarkWake:(char)arg1 for:(id)arg2 ;
-(void)setEnablePowerButtonSleep:(char)arg1 for:(id)arg2 ;
-(void)setWakesOnLAN:(char)arg1 for:(id)arg2 ;
-(void)setWakesOnRing:(char)arg1 for:(id)arg2 ;
-(void)setAutoRestarts:(char)arg1 for:(id)arg2 ;
-(void)setReducedCPUSpeed:(char)arg1 for:(id)arg2 ;
-(void)setDynamicPowerStep:(char)arg1 for:(id)arg2 ;
-(void)setLowerDisplayBrightness:(char)arg1 for:(id)arg2 ;
-(void)setSleepUsesDim:(char)arg1 for:(id)arg2 ;
-(void)setRestartsOnHang:(char)arg1 for:(id)arg2 ;
-(void)setVACTEnabled:(char)arg1 ;
-(void)setHDRLowPowerEnabled:(char)arg1 ;
-(id)repeatingPowerEvents;
-(void)cancelAllRepeatingPowerEvents;
-(void)scheduleRepeatingPowerEvent:(id)arg1 ;
-(char)hasUPS;
-(char)upsSupportsShutdownKey:(id)arg1 ;
-(char)upsShutdownEnabledForKey:(id)arg1 ;
-(void)setUPSShutdownEnabled:(char)arg1 forKey:(id)arg2 ;
-(unsigned long long)upsShutdownValueForKey:(id)arg1 ;
-(void)setUPSShutdownValue:(unsigned long long)arg1 forKey:(id)arg2 ;
-(void)restoreDefaultSettingsForPowerSource:(id)arg1 ;
-(char)usingDefaultSettingsForPowerSource:(id)arg1 ;
@end

