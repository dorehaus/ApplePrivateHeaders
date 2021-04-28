/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioSession.framework/Versions/A/AudioSession
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioSession/AVAudioHardwareControl.h>

@class AVAudioFloatRange;

@interface AVAudioHardwareLevelControl : AVAudioHardwareControl

@property (nonatomic,readonly) float scalarValue; 
@property (nonatomic,readonly) float decibelValue; 
@property (nonatomic,readonly) AVAudioFloatRange * decibelRange; 
-(id)valueKeys;
-(AVAudioFloatRange *)decibelRange;
-(float)scalarValue;
-(char)setScalarValue:(float)arg1 controller:(id)arg2 error:(id*)arg3 ;
-(float)decibelValue;
-(char)setDecibelValue:(float)arg1 controller:(id)arg2 error:(id*)arg3 ;
-(float)decibelValueFromScalar:(float)arg1 ;
-(float)scalarValueFromDecibel:(float)arg1 ;
@end

