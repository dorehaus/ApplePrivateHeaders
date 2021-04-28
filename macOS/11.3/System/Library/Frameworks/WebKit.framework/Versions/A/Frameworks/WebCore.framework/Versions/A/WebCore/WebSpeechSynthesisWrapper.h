/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <libobjc.A.dylib/NSSpeechSynthesizerDelegate.h>

@class NSString;

@interface WebSpeechSynthesisWrapper : NSObject <NSSpeechSynthesizerDelegate> {

	PlatformSpeechSynthesizer* m_synthesizerObject;
	PlatformSpeechSynthesisUtterance* m_utterance;
	RetainPtr<NSSpeechSynthesizer>* m_synthesizer;
	float m_basePitch;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(void)resume;
-(void)pause;
-(void)cancel;
-(void)speechSynthesizer:(id)arg1 didFinishSpeaking:(char)arg2 ;
-(void)speechSynthesizer:(id)arg1 willSpeakWord:(NSRange)arg2 ofString:(id)arg3 ;
-(void)updateBasePitchForSynthesizer;
-(float)convertPitchToNSSpeechValue:(float)arg1 ;
-(float)convertRateToWPM:(float)arg1 ;
-(id)initWithSpeechSynthesizer:(PlatformSpeechSynthesizer*)arg1 ;
-(void)speakUtterance:(PlatformSpeechSynthesisUtterance*)arg1 ;
@end
