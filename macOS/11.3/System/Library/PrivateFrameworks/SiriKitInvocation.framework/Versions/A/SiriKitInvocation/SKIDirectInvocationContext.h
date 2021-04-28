/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriKitInvocation.framework/Versions/A/SiriKitInvocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SKIDirectInvocationContext : NSObject {

	char _voiceTriggerEnabled;
	char _textToSpeechEnabled;
	char _eyesFree;
	NSString* _inputOrigin;
	NSString* _interactionType;

}

@property (assign,getter=isVoiceTriggerEnabled,nonatomic) char voiceTriggerEnabled;              //@synthesize voiceTriggerEnabled=_voiceTriggerEnabled - In the implementation block
@property (assign,getter=isTextToSpeechEnabled,nonatomic) char textToSpeechEnabled;              //@synthesize textToSpeechEnabled=_textToSpeechEnabled - In the implementation block
@property (assign,getter=isEyesFree,nonatomic) char eyesFree;                                    //@synthesize eyesFree=_eyesFree - In the implementation block
@property (nonatomic,copy) NSString * inputOrigin;                                               //@synthesize inputOrigin=_inputOrigin - In the implementation block
@property (nonatomic,copy) NSString * interactionType;                                           //@synthesize interactionType=_interactionType - In the implementation block
+(id)contextForCarPlayDirectAction;
+(id)contextForAnnounceNotifications;
-(id)init;
-(NSString *)interactionType;
-(void)setVoiceTriggerEnabled:(char)arg1 ;
-(char)isVoiceTriggerEnabled;
-(void)setEyesFree:(char)arg1 ;
-(NSString *)inputOrigin;
-(void)setInputOrigin:(NSString *)arg1 ;
-(void)setInteractionType:(NSString *)arg1 ;
-(void)setTextToSpeechEnabled:(char)arg1 ;
-(char)isEyesFree;
-(char)isTextToSpeechEnabled;
@end

