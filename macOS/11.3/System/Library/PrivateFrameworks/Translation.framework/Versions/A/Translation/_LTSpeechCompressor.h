/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Versions/A/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _LTSpeechCompressorDelegate;
#import <Translation/Translation-Structs.h>
@class NSMutableData;

@interface _LTSpeechCompressor : NSObject {

	id<_LTSpeechCompressorDelegate> _delegate;
	OpaqueAudioConverterRef _audioConverter;
	NSMutableData* _bufferedAudio;
	unsigned long long _packetIndex;
	unsigned long long _bytesConsumed;

}
-(void)dealloc;
-(void)reset;
-(id)initWithDelegate:(id)arg1 ;
-(void)addAudioSampleData:(id)arg1 ;
-(void)startCompressionNarrowband:(char)arg1 ;
@end

