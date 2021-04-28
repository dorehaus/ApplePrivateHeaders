/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioSession.framework/Versions/A/AudioSession
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioSession/AVAudioHardwareObject.h>

@class NSString, NSArray;

@interface AVAudioHardwareClock : AVAudioHardwareObject

@property (nonatomic,readonly) NSString * hardwareUID; 
@property (nonatomic,readonly) NSString * modelUID; 
@property (nonatomic,readonly) unsigned transportType; 
@property (nonatomic,readonly) unsigned long long clockDomain; 
@property (nonatomic,readonly) unsigned long long inputLatency; 
@property (nonatomic,readonly) unsigned long long outputLatency; 
@property (nonatomic,readonly) double sampleRate; 
@property (nonatomic,readonly) NSArray * availableSampleRates; 
@property (nonatomic,readonly) NSArray * controls; 
-(id)description;
-(double)latency;
-(double)sampleRate;
-(unsigned)transportType;
-(unsigned long long)clockDomain;
-(unsigned long long)inputLatency;
-(unsigned long long)outputLatency;
-(char)setSampleRate:(double)arg1 controller:(id)arg2 error:(id*)arg3 ;
-(NSArray *)availableSampleRates;
-(NSArray *)controls;
-(NSString *)hardwareUID;
-(NSString *)modelUID;
@end

