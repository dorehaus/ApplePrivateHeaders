/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVFAudio.framework/Versions/A/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <AVFAudio/AVAudioBuffer.h>

@class NSArray;

@interface AVAudioPCMBuffer : AVAudioBuffer

@property (nonatomic,readonly) NSArray * peakPowerPerChannel; 
@property (nonatomic,readonly) NSArray * averagePowerPerChannel; 
@property (nonatomic,readonly) unsigned frameCapacity; 
@property (assign,nonatomic) unsigned frameLength; 
@property (nonatomic,readonly) unsigned long long stride; 
@property (nonatomic,readonly) float* floatChannelData; 
@property (nonatomic,readonly) short* int16ChannelData; 
@property (nonatomic,readonly) int* int32ChannelData; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned)frameLength;
-(unsigned long long)stride;
-(id)initWithPCMFormat:(id)arg1 frameCapacity:(unsigned)arg2 ;
-(void)setByteLength:(unsigned)arg1 ;
-(void)setFrameLength:(unsigned)arg1 ;
-(short*)int16ChannelData;
-(int*)int32ChannelData;
-(float*)floatChannelData;
-(unsigned)frameCapacity;
-(void)_initChannelPtrs;
-(char)appendDataFromBuffer:(id)arg1 ;
-(char)appendDataFromBuffer:(id)arg1 channel:(long long)arg2 ;
-(id)splitIntoSingleChannelBuffers;
-(NSArray *)averagePowerPerChannel;
-(NSArray *)peakPowerPerChannel;
-(id)calculatePower:(unsigned long long)arg1 ;
-(float)calculatePower:(unsigned long long)arg1 forFloatData:(float*)arg2 stride:(long long)arg3 frameLength:(unsigned)arg4 ;
@end

