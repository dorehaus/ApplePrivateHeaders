/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@class NSString, NSMutableData;

@interface CannedAudioInjector : NSObject {

	NSString* _cannedMoviePath;
	NSMutableData* _samples;
	int _position;
	char _fromBeginning;
	opaque_pthread_mutex_t _samplesMutex;
	opaque_pthread_cond_t _samplesConditional;
	AudioStreamBasicDescription _internalFormat;

}

@property (nonatomic,retain) NSString * cannedMoviePath;              //@synthesize cannedMoviePath=_cannedMoviePath - In the implementation block
@property (nonatomic,retain) NSMutableData * samples;                 //@synthesize samples=_samples - In the implementation block
@property (assign,nonatomic) int position;                            //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) char fromBeginning;                      //@synthesize fromBeginning=_fromBeginning - In the implementation block
+(char)isAudioAvailable:(id)arg1 ;
-(void)dealloc;
-(int)position;
-(void)setPosition:(int)arg1 ;
-(NSMutableData *)samples;
-(void)setSamples:(NSMutableData *)arg1 ;
-(int)readRawAudioSamples;
-(int)decodeAudio;
-(NSString *)cannedMoviePath;
-(id)initWithPath:(id)arg1 withDescription:(AudioStreamBasicDescription)arg2 fromBeginning:(char)arg3 ;
-(void)injectToBuffer:(char*)arg1 size:(int)arg2 time:(double)arg3 muted:(char)arg4 ;
-(void)setCannedMoviePath:(NSString *)arg1 ;
-(char)fromBeginning;
-(void)setFromBeginning:(char)arg1 ;
@end

