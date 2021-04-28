/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVFAudio.framework/Versions/A/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <libobjc.A.dylib/Endpointer.h>

@class NSString;

@interface SpeexEndpointer : NSObject <Endpointer> {

	double mStartWaitTime;
	double mInterspeechWaitTime;
	double mEndWaitTime;
	int mEndpointMode;
	unsigned mFrameRate;
	int mLastStatus;
	void* _impl;

}

@property (assign) int endpointMode; 
@property (assign) double startWaitTime; 
@property (assign) double interspeechWaitTime; 
@property (assign) double endWaitTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)reset;
-(double)startWaitTime;
-(void)setStartWaitTime:(double)arg1 ;
-(int)endpointMode;
-(void)setEndpointMode:(int)arg1 ;
-(double)interspeechWaitTime;
-(void)setInterspeechWaitTime:(double)arg1 ;
-(double)endWaitTime;
-(void)setEndWaitTime:(double)arg1 ;
-(char)configureWithASBD:(AudioStreamBasicDescription*)arg1 andFrameRate:(unsigned)arg2 ;
-(int)getStatus:(AudioQueueBuffer*)arg1 ;
-(char)configureWithSampleRate:(double)arg1 andFrameRate:(unsigned)arg2 ;
-(int)getStatus:(float*)arg1 count:(unsigned)arg2 ;
@end
