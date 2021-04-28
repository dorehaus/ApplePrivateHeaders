/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVFAudio.framework/Versions/A/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFAudio/AVFAudio-Structs.h>
@class NSString, NSArray, AVAudioFormat, NSData;

@interface AVAudioConverter : NSObject {

	void* _impl;

}

@property (assign,nonatomic) long long bitRate; 
@property (nonatomic,retain) NSString * bitRateStrategy; 
@property (nonatomic,readonly) long long maximumOutputPacketSize; 
@property (nonatomic,readonly) NSArray * availableEncodeBitRates; 
@property (nonatomic,readonly) NSArray * applicableEncodeBitRates; 
@property (nonatomic,readonly) NSArray * availableEncodeSampleRates; 
@property (nonatomic,readonly) NSArray * applicableEncodeSampleRates; 
@property (nonatomic,readonly) NSArray * availableEncodeChannelLayoutTags; 
@property (nonatomic,readonly) AVAudioFormat * inputFormat; 
@property (nonatomic,readonly) AVAudioFormat * outputFormat; 
@property (nonatomic,retain) NSArray * channelMap; 
@property (nonatomic,retain) NSData * magicCookie; 
@property (assign,nonatomic) char downmix; 
@property (assign,nonatomic) char dither; 
@property (assign,nonatomic) long long sampleRateConverterQuality; 
@property (nonatomic,retain) NSString * sampleRateConverterAlgorithm; 
@property (assign,nonatomic) long long primeMethod; 
@property (assign,nonatomic) AVAudioConverterPrimeInfo primeInfo; 
-(void)dealloc;
-(void)reset;
-(AVAudioFormat *)outputFormat;
-(NSArray *)channelMap;
-(void)setChannelMap:(NSArray *)arg1 ;
-(long long)convertToBuffer:(id)arg1 error:(id*)arg2 withInputFromBlock:(/*^block*/id)arg3 ;
-(id)initFromFormat:(id)arg1 toFormat:(id)arg2 ;
-(NSData *)magicCookie;
-(void)setBitRate:(long long)arg1 ;
-(long long)bitRate;
-(AVAudioFormat *)inputFormat;
-(void)setSampleRateConverterQuality:(long long)arg1 ;
-(char)dither;
-(char)downmix;
-(void)setDither:(char)arg1 ;
-(void)setDownmix:(char)arg1 ;
-(long long)sampleRateConverterQuality;
-(NSString *)sampleRateConverterAlgorithm;
-(void)setSampleRateConverterAlgorithm:(NSString *)arg1 ;
-(void)setMagicCookie:(NSData *)arg1 ;
-(long long)maximumOutputPacketSize;
-(long long)primeMethod;
-(void)setPrimeMethod:(long long)arg1 ;
-(AVAudioConverterPrimeInfo)primeInfo;
-(void)setPrimeInfo:(AVAudioConverterPrimeInfo)arg1 ;
-(char)convertToBuffer:(id)arg1 fromBuffer:(id)arg2 error:(id*)arg3 ;
-(NSString *)bitRateStrategy;
-(void)setBitRateStrategy:(NSString *)arg1 ;
-(NSArray *)availableEncodeBitRates;
-(NSArray *)applicableEncodeBitRates;
-(NSArray *)availableEncodeSampleRates;
-(NSArray *)applicableEncodeSampleRates;
-(NSArray *)availableEncodeChannelLayoutTags;
@end
