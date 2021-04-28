/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/Versions/A/CoreHaptics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CHHapticPatternPlayer.h>
#import <libobjc.A.dylib/PatternPlayerDetails.h>

@class CHHapticEngine, AVHapticPlayerChannel, NSArray, NSString;

@interface PatternPlayer : NSObject <CHHapticPatternPlayer, PatternPlayerDetails> {

	CHHapticEngine* _engine;
	AVHapticPlayerChannel* _channel;
	NSArray* _events;
	double _patternDuration;
	int _muteState;
	unsigned char _previousAction;

}

@property (readonly) double patternDuration;                        //@synthesize patternDuration=_patternDuration - In the implementation block
@property (assign) char isMuted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)setIsMuted:(char)arg1 ;
-(char)isMuted;
-(void)clearExternalResources:(id)arg1 ;
-(void)doSetMute:(char)arg1 ;
-(char)needsResetForAction:(unsigned char)arg1 ;
-(char)startAtTime:(double)arg1 error:(id*)arg2 ;
-(char)stopAtTime:(double)arg1 error:(id*)arg2 ;
-(char)sendParameters:(id)arg1 atTime:(double)arg2 error:(id*)arg3 ;
-(char)scheduleParameterCurve:(id)arg1 atTime:(double)arg2 error:(id*)arg3 ;
-(char)cancelAndReturnError:(id*)arg1 ;
-(double)patternDuration;
-(id)initWithPlayable:(id)arg1 engine:(id)arg2 privileged:(char)arg3 error:(id*)arg4 ;
@end

