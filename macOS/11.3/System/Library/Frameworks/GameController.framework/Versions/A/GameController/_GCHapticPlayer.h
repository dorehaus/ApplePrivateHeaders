/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GameController.framework/Versions/A/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameController/GameController-Structs.h>
@class NSMutableArray, _GCHapticDynamicParameter, _GCHapticClientProxy, NSArray, _GCHapticLogicalDevice, NSNumber;

@interface _GCHapticPlayer : NSObject {

	NSMutableArray* _scheduledCommands;
	NSMutableArray* _activeHapticEvents;
	NSMutableArray* _eventsToRemove;
	_GCHapticDynamicParameter* _intensityParameter;
	_GCHapticDynamicParameter* _sharpnessParameter;
	_GCHapticClientProxy* _client;
	BOOL _dirtyMuteState;
	BOOL _muted;
	int _muteReasons[5];
	char _transientsEnqueuedSinceLastQuery;
	char _activeEventThisSlice;
	double _initializationTime;
	double _activeLifetime;
	double _lastActiveTime;
	NSMutableArray* _intensityParamCurve;
	NSMutableArray* _sharpnessParamCurve;
	char _retainedByClient;
	float _continuousIntensity;
	float _continuousSharpness;
	int _totalEventsProcessed;
	int _transientEventsProcessed;
	int _continuousEventsProcessed;
	int _parameterCurvesProcessed;
	NSArray* _actuators;
	_GCHapticLogicalDevice* _hapticLogicalDevice;
	NSNumber* _identifier;
	double _totalLifetimeInSeconds;

}

@property (assign,nonatomic) int totalEventsProcessed;                                         //@synthesize totalEventsProcessed=_totalEventsProcessed - In the implementation block
@property (assign,nonatomic) int transientEventsProcessed;                                     //@synthesize transientEventsProcessed=_transientEventsProcessed - In the implementation block
@property (assign,nonatomic) int continuousEventsProcessed;                                    //@synthesize continuousEventsProcessed=_continuousEventsProcessed - In the implementation block
@property (assign,nonatomic) int parameterCurvesProcessed;                                     //@synthesize parameterCurvesProcessed=_parameterCurvesProcessed - In the implementation block
@property (assign,nonatomic) double totalLifetimeInSeconds;                                    //@synthesize totalLifetimeInSeconds=_totalLifetimeInSeconds - In the implementation block
@property (nonatomic,copy,readonly) NSArray * actuators;                                       //@synthesize actuators=_actuators - In the implementation block
@property (assign,nonatomic,__weak) _GCHapticLogicalDevice * hapticLogicalDevice;              //@synthesize hapticLogicalDevice=_hapticLogicalDevice - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) float continuousIntensity;                                      //@synthesize continuousIntensity=_continuousIntensity - In the implementation block
@property (nonatomic,readonly) float continuousSharpness;                                      //@synthesize continuousSharpness=_continuousSharpness - In the implementation block
@property (assign,getter=isRetainedByClient,nonatomic) char retainedByClient;                  //@synthesize retainedByClient=_retainedByClient - In the implementation block
-(void)dealloc;
-(id)description;
-(NSNumber *)identifier;
-(id)bundleIdentifier;
-(char)isMuted;
-(void)clearParameters;
-(NSArray *)actuators;
-(void)setMute:(BOOL)arg1 forReason:(unsigned long long)arg2 ;
-(void)scheduleCommand:(const HapticCommand*)arg1 ;
-(void)handleCommand:(id)arg1 ;
-(char)hasScheduledEventsByTime:(double)arg1 ;
-(void)processSliceForLogicalDevice:(id)arg1 startTime:(double)arg2 endTime:(double)arg3 ;
-(float)continuousIntensity;
-(float)continuousSharpness;
-(char)hasProcessedActiveEventsAfterTime:(double)arg1 ;
-(char)transientsEnqueuedSinceLastQuery;
-(char)isActiveAtTime:(double)arg1 ;
-(_GCHapticLogicalDevice *)hapticLogicalDevice;
-(char)hasScheduledCommands;
-(char)hasProcessedActiveEventsThisSlice;
-(id)initWithIdentifier:(unsigned long long)arg1 actuators:(id)arg2 client:(id)arg3 ;
-(void)setHapticLogicalDevice:(_GCHapticLogicalDevice *)arg1 ;
-(char)isMutedForReason:(unsigned long long)arg1 ;
-(id)controllerProductCategory;
-(int)totalEventsProcessed;
-(int)transientEventsProcessed;
-(int)continuousEventsProcessed;
-(int)parameterCurvesProcessed;
-(double)totalLifetimeInSeconds;
-(double)activeLifetimeInSeconds;
-(void)setRetainedByClient:(char)arg1 ;
-(void)teardown;
-(char)isRetainedByClient;
-(void)setTotalEventsProcessed:(int)arg1 ;
-(void)setTransientEventsProcessed:(int)arg1 ;
-(void)setContinuousEventsProcessed:(int)arg1 ;
-(void)setParameterCurvesProcessed:(int)arg1 ;
-(void)setTotalLifetimeInSeconds:(double)arg1 ;
@end

