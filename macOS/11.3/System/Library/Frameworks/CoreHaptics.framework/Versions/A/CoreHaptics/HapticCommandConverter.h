/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/Versions/A/CoreHaptics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HapticServerConfig;

@interface HapticCommandConverter : NSObject {

	HapticServerConfig* _serverConfig;

}
-(id)eventForTransientHapticEventType:(unsigned long long)arg1 time:(double)arg2 params:(id)arg3 duration:(double)arg4 ;
-(unsigned long long)nonSustainedEventTypeFromSharpness:(float)arg1 ;
-(unsigned long long)sustainedEventTypeFromSharpness:(float)arg1 ;
-(unsigned long long)eventTypeFromSharpness:(float)arg1 eventType:(int)arg2 ;
-(id)eventForLegacyTransientHapticEventType:(unsigned long long)arg1 time:(double)arg2 params:(id)arg3 duration:(double)arg4 ;
-(id)eventForContinuousHapticEventType:(int)arg1 time:(double)arg2 params:(id)arg3 duration:(double)arg4 ;
-(id)eventForAudioEventType:(unsigned long long)arg1 time:(double)arg2 eventParams:(id)arg3 duration:(double)arg4 ;
-(id)eventForSPIEventType:(unsigned long long)arg1 time:(double)arg2 eventParams:(id)arg3 duration:(double)arg4 ;
-(id)CHtoAVParameterCurve:(id)arg1 ;
-(id)initWithServerConfig:(id)arg1 ;
-(id)eventForEventEntry:(id)arg1 engine:(id)arg2 privileged:(char)arg3 ;
-(id)eventForDynamicParameterEntry:(id)arg1 ;
-(id)eventForParameterCurveEntry:(id)arg1 ;
@end

