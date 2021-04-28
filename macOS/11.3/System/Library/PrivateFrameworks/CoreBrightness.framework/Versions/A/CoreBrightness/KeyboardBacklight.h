/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/Versions/A/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreBrightness/CoreBrightness-Structs.h>
#import <CoreBrightness/CBModule.h>
#import <libobjc.A.dylib/CBContainerModuleProtocol.h>
#import <libobjc.A.dylib/CBHIDServiceProtocol.h>

@protocol OS_dispatch_source;
@class HIDDevice, HIDElement, NSMutableArray, NSMutableDictionary, NSObject, NSLock, NSString;

@interface KeyboardBacklight : CBModule <CBContainerModuleProtocol, CBHIDServiceProtocol> {

	BOOL _muted;
	BOOL _keyboardAvailable;
	BOOL _manualAdjust;
	BOOL _saturated;
	BOOL _dimmed;
	BOOL _suspend;
	BOOL _suspendDimming;
	BOOL _userActive;
	BOOL _displayOn;
	float _previousLevelPercentage;
	int _numOfBacklightUpdateRetries;
	HIDDevice* _device;
	HIDElement* _levelElement;
	HIDElement* _levelFadeSpeedElement;
	HIDElement* _enableElement;
	HIDElement* _enableFadeSpeedElement;
	NSMutableArray* _elements;
	NSMutableArray* _alsServiceClients;
	unsigned long long _activityNotificationHandle;
	NSMutableDictionary* _properties;
	NSObject*<OS_dispatch_source> _forceLuxUpdateTimer;
	NSObject*<OS_dispatch_source> _backlightUpdateTimer;
	BOOL _backlightUpdateInProgress;
	NSLock* _backlightUpdateLock;
	mach_timebase_info _clockInfo;
	int _backlightUpdateFrequency;
	unsigned long long _lastBacklightUpdate;
	unsigned long long _backlightUpdateType;
	int _turnOnBacklightDelayMS;
	BOOL _forceDelayToTurnOnBacklight;
	NSObject*<OS_dispatch_source> _rampTimer;
	Ramp _ramp;
	BOOL _builtIn;
	BOOL _autoAdjust;
	int _dimTime;
	float _ambientOffset;
	float _ambientHighThreshold;
	float _ambientLowThreshold;
	float _levelPercentage;
	float _levelMin;
	float _levelMax;
	float _levelOff;
	int _color;
	unsigned _levelUnit;
	unsigned _unitExponent;
	float _ambientSlope;
	float _currentLux;
	float _previousLevel;
	unsigned long long _keyboardID;
	NSMutableDictionary* _keyboardSpecificPreferences;

}

@property (assign) int dimTime;                                                    //@synthesize dimTime=_dimTime - In the implementation block
@property (assign) float ambientOffset;                                            //@synthesize ambientOffset=_ambientOffset - In the implementation block
@property (readonly) float ambientHighThreshold;                                   //@synthesize ambientHighThreshold=_ambientHighThreshold - In the implementation block
@property (readonly) float ambientLowThreshold;                                    //@synthesize ambientLowThreshold=_ambientLowThreshold - In the implementation block
@property (assign) BOOL userActive; 
@property (assign) BOOL keyboardAvailable; 
@property (assign) HIDDevice * device;                                             //@synthesize device=_device - In the implementation block
@property (assign) BOOL manualAdjust; 
@property (assign) BOOL autoAdjust;                                                //@synthesize autoAdjust=_autoAdjust - In the implementation block
@property (assign) float levelPercentage;                                          //@synthesize levelPercentage=_levelPercentage - In the implementation block
@property (assign) float levelMin;                                                 //@synthesize levelMin=_levelMin - In the implementation block
@property (assign) float levelMax;                                                 //@synthesize levelMax=_levelMax - In the implementation block
@property (assign) float levelOff;                                                 //@synthesize levelOff=_levelOff - In the implementation block
@property (assign) int color;                                                      //@synthesize color=_color - In the implementation block
@property (assign) unsigned levelUnit;                                             //@synthesize levelUnit=_levelUnit - In the implementation block
@property (assign) unsigned unitExponent;                                          //@synthesize unitExponent=_unitExponent - In the implementation block
@property (readonly) float ambientSlope;                                           //@synthesize ambientSlope=_ambientSlope - In the implementation block
@property (readonly) float maxUserLevel; 
@property (assign) float currentLux;                                               //@synthesize currentLux=_currentLux - In the implementation block
@property (assign) BOOL muted; 
@property (retain) NSMutableDictionary * keyboardSpecificPreferences;              //@synthesize keyboardSpecificPreferences=_keyboardSpecificPreferences - In the implementation block
@property (assign) float previousLevel;                                            //@synthesize previousLevel=_previousLevel - In the implementation block
@property (readonly) BOOL suppressed; 
@property (assign) BOOL saturated; 
@property (assign) BOOL suspend; 
@property (assign) float brightness; 
@property (assign) BOOL builtIn;                                                   //@synthesize builtIn=_builtIn - In the implementation block
@property (assign) BOOL dimmed; 
@property (assign) unsigned long long keyboardID;                                  //@synthesize keyboardID=_keyboardID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)getHashIDForDevice:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)initWithQueue:(id)arg1 ;
-(void)start;
-(HIDDevice *)device;
-(float)level;
-(BOOL)suspend;
-(void)stop;
-(int)color;
-(void)setColor:(int)arg1 ;
-(void)setBrightness:(float)arg1 ;
-(void)setDevice:(HIDDevice *)arg1 ;
-(void)sendNotificationForKey:(id)arg1 withValue:(id)arg2 ;
-(id)copyPropertyForKey:(id)arg1 ;
-(id)copyPropertyForKey:(id)arg1 withParameter:(id)arg2 ;
-(void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2 ;
-(BOOL)builtIn;
-(BOOL)handleHIDEvent:(IOHIDEventRef)arg1 from:(IOHIDServiceClientRef)arg2 ;
-(BOOL)addHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
-(BOOL)removeHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
-(void)timerRoutine:(id)arg1 ;
-(unsigned long long)keyboardID;
-(id)initWithQueue:(id)arg1 device:(id)arg2 ;
-(void)setUserActive:(BOOL)arg1 ;
-(id)initWithQueue:(id)arg1 device:(id)arg2 ambientOffset:(float)arg3 ;
-(unsigned)levelUnit;
-(float)levelMax;
-(float)currentLux;
-(void)handleLuxUpdate:(float)arg1 ;
-(float)levelMin;
-(float)maxUserLevel;
-(void)getKeyboardBacklightPreferences;
-(void)storeKeyboardBacklightPreferences;
-(NSMutableDictionary *)keyboardSpecificPreferences;
-(BOOL)autoAdjust;
-(float)levelPercentage;
-(BOOL)suppressed;
-(BOOL)saturated;
-(float)levelOff;
-(BOOL)manualAdjust;
-(void)setLevelPercentage:(float)arg1 ;
-(void)setSaturated:(BOOL)arg1 ;
-(void)setMuted:(BOOL)arg1 ;
-(void)updateBacklightDeviceWithReason:(unsigned long long)arg1 ;
-(void)updateBacklightDeviceWithFadeSpeed:(int)arg1 commit:(BOOL)arg2 reason:(unsigned long long)arg3 ;
-(void)setCurrentLux:(float)arg1 ;
-(void)setManualAdjust:(BOOL)arg1 ;
-(float)currentLuxToAmbient;
-(void)calculateLevelPercentageAtAmbient:(float)arg1 ;
-(float)ambientSlope;
-(float)brightness;
-(void)setBrightness:(float)arg1 withFadeSpeed:(int)arg2 commit:(char)arg3 ;
-(BOOL)retrieveKeyboardBacklightElements;
-(void)setKeyboardID:(unsigned long long)arg1 ;
-(void)resetKeyDimTimeout;
-(unsigned)unitExponent;
-(void)setUnitExponent:(unsigned)arg1 ;
-(void)setLevelMin:(float)arg1 ;
-(void)setLevelMax:(float)arg1 ;
-(void)setLevelOff:(float)arg1 ;
-(void)setLevelUnit:(unsigned)arg1 ;
-(BOOL)dimmed;
-(BOOL)muted;
-(float)ambientOffset;
-(float)ambientLowThreshold;
-(float)ambientHighThreshold;
-(BOOL)userActive;
-(BOOL)keyboardAvailable;
-(void)sendSuppressedNotification:(BOOL)arg1 ;
-(void)stopRamp;
-(double)timeToNextBacklightUpdate;
-(void)scheduleBacklightUpdate:(int)arg1 ;
-(void)didUpdateBacklightLevel:(float)arg1 brightness:(float)arg2 result:(BOOL)arg3 error:(id)arg4 ;
-(void)updateBacklightDevice;
-(void)updateAmbientOffset;
-(void)setAmbientOffset:(float)arg1 ;
-(int)dimTime;
-(void)handlePMUserActivityStateChanged:(unsigned long long)arg1 ;
-(void)setDimmed:(BOOL)arg1 ;
-(void)endKeyDim;
-(void)forceLuxUpdate;
-(void)forceLuxUpdateRoutine;
-(void)getCurrentLux;
-(void)forceBacklightUpdateRoutine;
-(BOOL)KBBrightnessPropertyHandler:(id)arg1 ;
-(BOOL)KBAutoBrightnessSuspendPropertyHandler:(id)arg1 ;
-(BOOL)KBAutoBrightnessEnablePropertyHandler:(id)arg1 ;
-(BOOL)KBIdleDimPropertyHandler:(id)arg1 ;
-(BOOL)KBIdleDimTimeHandler:(id)arg1 ;
-(BOOL)KBSuspendDimmingPropertyHandler:(id)arg1 ;
-(BOOL)KBUserActivityUpdateHandler:(id)arg1 ;
-(BOOL)KBDisplayBrightnessFactorPropertyHandler:(id)arg1 ;
-(BOOL)KBUserOffsetPropertyHandler:(id)arg1 ;
-(BOOL)KBUpdateFrequencyHandler:(id)arg1 ;
-(void)setSuspend:(BOOL)arg1 ;
-(void)setAutoAdjust:(BOOL)arg1 ;
-(void)setDimTime:(int)arg1 ;
-(void)setKeyboardAvailable:(BOOL)arg1 ;
-(void)setKBPreferenceBacklightMaxUser;
-(void)startRamp;
-(void)toggleMute;
-(BOOL)KBAvailabilityUpdateHandler:(id)arg1 ;
-(void)rampToBrightness:(float)arg1 withDuration:(unsigned)arg2 ;
-(void)setBuiltIn:(BOOL)arg1 ;
-(void)setKeyboardSpecificPreferences:(NSMutableDictionary *)arg1 ;
-(float)previousLevel;
-(void)setPreviousLevel:(float)arg1 ;
@end

