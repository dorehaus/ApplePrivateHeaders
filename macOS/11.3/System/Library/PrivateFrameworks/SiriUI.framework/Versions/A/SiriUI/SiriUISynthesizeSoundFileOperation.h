/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/Versions/A/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/NSSpeechSynthesizerDelegate.h>

@class NSSpeechSynthesizer, NSString, NSURL;

@interface SiriUISynthesizeSoundFileOperation : NSOperation <NSSpeechSynthesizerDelegate> {

	char _executing;
	char _finished;
	char _speakingCompletedNormally;
	NSSpeechSynthesizer* _synthesizer;
	NSString* _string;
	NSURL* _url;

}

@property (readonly) NSSpeechSynthesizer * synthesizer;              //@synthesize synthesizer=_synthesizer - In the implementation block
@property (copy,readonly) NSString * string;                         //@synthesize string=_string - In the implementation block
@property (copy,readonly) NSURL * url;                               //@synthesize url=_url - In the implementation block
@property (readonly) char speakingCompletedNormally;                 //@synthesize speakingCompletedNormally=_speakingCompletedNormally - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)string;
-(NSURL *)url;
-(void)start;
-(char)isFinished;
-(char)isExecuting;
-(char)isAsynchronous;
-(void)speechSynthesizer:(id)arg1 didFinishSpeaking:(char)arg2 ;
-(NSSpeechSynthesizer *)synthesizer;
-(id)initWithSynthesizer:(id)arg1 string:(id)arg2 toURL:(id)arg3 ;
-(char)speakingCompletedNormally;
@end

