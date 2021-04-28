/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioTransportCommon.framework/Versions/A/AudioTransportCommon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface ATCIOA2Device : NSObject {

	unsigned _clockDomain;
	unsigned _inputSafetyOffset;
	unsigned _inputLatency;
	unsigned _outputSafetyOffset;
	unsigned _outputLatency;
	unsigned _ioBufferSize;
	NSString* _name;
	NSString* _uid;
	double _sampleRate;
	NSArray* _availableSampleRates;
	NSArray* _inputStreams;
	NSArray* _outputStreams;

}

@property (nonatomic,copy) NSArray * inputStreams;                       //@synthesize inputStreams=_inputStreams - In the implementation block
@property (nonatomic,copy) NSArray * outputStreams;                      //@synthesize outputStreams=_outputStreams - In the implementation block
@property (nonatomic,copy) NSArray * availableSampleRates;               //@synthesize availableSampleRates=_availableSampleRates - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * uid;                      //@synthesize uid=_uid - In the implementation block
@property (nonatomic,readonly) double sampleRate;                        //@synthesize sampleRate=_sampleRate - In the implementation block
@property (nonatomic,readonly) unsigned clockDomain;                     //@synthesize clockDomain=_clockDomain - In the implementation block
@property (nonatomic,readonly) unsigned inputSafetyOffset;               //@synthesize inputSafetyOffset=_inputSafetyOffset - In the implementation block
@property (nonatomic,readonly) unsigned inputLatency;                    //@synthesize inputLatency=_inputLatency - In the implementation block
@property (nonatomic,readonly) unsigned outputSafetyOffset;              //@synthesize outputSafetyOffset=_outputSafetyOffset - In the implementation block
@property (nonatomic,readonly) unsigned outputLatency;                   //@synthesize outputLatency=_outputLatency - In the implementation block
@property (nonatomic,readonly) unsigned ioBufferSize;                    //@synthesize ioBufferSize=_ioBufferSize - In the implementation block
+(id)iokitMatchingDictionary;
-(NSString *)name;
-(NSString *)uid;
-(double)sampleRate;
-(id)initWithService:(id)arg1 ;
-(NSArray *)inputStreams;
-(NSArray *)outputStreams;
-(unsigned)clockDomain;
-(unsigned)inputLatency;
-(unsigned)outputLatency;
-(NSArray *)availableSampleRates;
-(unsigned)inputSafetyOffset;
-(unsigned)outputSafetyOffset;
-(char)changeToSampleRate:(double)arg1 error:(id*)arg2 ;
-(char)startIOError:(id*)arg1 ;
-(char)stopIOError:(id*)arg1 ;
-(void)setAvailableSampleRates:(NSArray *)arg1 ;
-(unsigned)ioBufferSize;
-(void)setInputStreams:(NSArray *)arg1 ;
-(void)setOutputStreams:(NSArray *)arg1 ;
@end

