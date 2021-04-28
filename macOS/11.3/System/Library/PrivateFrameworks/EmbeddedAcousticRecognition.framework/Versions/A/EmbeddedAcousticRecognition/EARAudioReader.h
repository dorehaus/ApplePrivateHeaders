/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/Versions/A/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface EARAudioReader : NSObject {

	NSURL* _fileURL;
	unsigned long long _sampleRate;

}
-(id)_opx_enumerateAudioBuffersWithBlock:(/*^block*/id)arg1 ;
-(id)_avf_enumerateAudioBuffersWithBlock:(/*^block*/id)arg1 ;
-(id)_opx_enumeratePacketsWithBlock:(/*^block*/id)arg1 ;
-(id)initWithFileURL:(id)arg1 sampleRate:(unsigned long long)arg2 ;
-(id)enumerateAudioBuffersWithBlock:(/*^block*/id)arg1 ;
@end

