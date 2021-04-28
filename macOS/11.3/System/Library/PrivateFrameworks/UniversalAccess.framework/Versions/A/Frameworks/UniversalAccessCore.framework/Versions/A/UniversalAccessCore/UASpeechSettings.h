/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UniversalAccess.framework/Versions/A/Frameworks/UniversalAccessCore.framework/Versions/A/UniversalAccessCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UniversalAccessCore/UASettings.h>

@interface UASpeechSettings : UASettings {

	char _canSetSpeakSelectionSentenceStyle;

}

@property (assign,nonatomic) char speakItemUnderMouseEnabled; 
@property (assign,nonatomic) long long speakItemUnderMouseMode; 
@property (assign,nonatomic) long long speakItemUnderMouseVerbosity; 
@property (assign,nonatomic) double speakItemUnderMouseDelayTime; 
@property (assign,nonatomic) unsigned long long spokenContentControllerMode; 
@property (assign,nonatomic) unsigned long long speakSelectionHighlightOptions; 
@property (assign,nonatomic) unsigned long long speakSelectionWordHighlightColor; 
@property (assign,nonatomic) unsigned long long speakSelectionSentenceHighlightColor; 
@property (assign,nonatomic) unsigned long long speakSelectionSentenceStyle; 
@property (nonatomic,readonly) char canSetSpeakItemUnderMouseMode; 
@property (nonatomic,readonly) char canSetSpeakItemUnderMouseVerbosity; 
@property (nonatomic,readonly) char canSetSpeakItemUnderMouseDelayTime; 
@property (nonatomic,readonly) char canSetSpokenContentControllerMode; 
@property (nonatomic,readonly) char canSetSpeakSelectionHighlightOptions; 
@property (nonatomic,readonly) char canSetSpeakSelectionWordHighlightColor; 
@property (nonatomic,readonly) char canSetSpeakSelectionSentenceHighlightColor; 
@property (nonatomic,readonly) char canSetSpeakSelectionSentenceStyle;                             //@synthesize canSetSpeakSelectionSentenceStyle=_canSetSpeakSelectionSentenceStyle - In the implementation block
+(id)shared;
+(id)keyPathsForValuesAffectingSpeakItemUnderMouseEnabled;
+(id)keyPathsForValuesAffectingSpeakItemUnderMouseMode;
+(id)keyPathsForValuesAffectingSpeakItemUnderMouseVerbosity;
+(id)keyPathsForValuesAffectingSpeakItemUnderMouseDelayTime;
+(id)keyPathsForValuesAffectingSpokenContentControllerMode;
+(id)keyPathsForValuesAffectingSpeakSelectionHighlightOptions;
+(id)keyPathsForValuesAffectingSpeakSelectionWordHighlightColor;
+(id)keyPathsForValuesAffectingSpeakSelectionSentenctHighlightColor;
-(id)_init;
-(char)speakItemUnderMouseEnabled;
-(long long)_validateSpeakItemUnderMouseModeValue:(long long)arg1 ;
-(long long)speakItemUnderMouseMode;
-(long long)_validateSpeakItemUnderMouseVerbosityValue:(long long)arg1 ;
-(long long)speakItemUnderMouseVerbosity;
-(double)speakItemUnderMouseDelayTime;
-(unsigned long long)_validateSpokenContentControllerModeValue:(long long)arg1 ;
-(unsigned long long)spokenContentControllerMode;
-(unsigned long long)_validateSpeakSelectionHighlightOptionsValue:(long long)arg1 ;
-(unsigned long long)speakSelectionHighlightOptions;
-(unsigned long long)_validateSpeakSelectionHighlightColorValue:(long long)arg1 ;
-(unsigned long long)speakSelectionWordHighlightColor;
-(unsigned long long)speakSelectionSentenceHighlightColor;
-(unsigned long long)speakSelectionSentenceStyle;
-(void)setSpeakItemUnderMouseEnabled:(char)arg1 ;
-(void)setSpeakItemUnderMouseMode:(long long)arg1 ;
-(char)canSetSpeakItemUnderMouseMode;
-(void)setSpeakItemUnderMouseVerbosity:(long long)arg1 ;
-(char)canSetSpeakItemUnderMouseVerbosity;
-(void)setSpeakItemUnderMouseDelayTime:(double)arg1 ;
-(char)canSetSpeakItemUnderMouseDelayTime;
-(void)setSpokenContentControllerMode:(unsigned long long)arg1 ;
-(char)canSetSpokenContentControllerMode;
-(void)setSpeakSelectionHighlightOptions:(unsigned long long)arg1 ;
-(char)canSetSpeakSelectionHighlightOptions;
-(void)setSpeakSelectionWordHighlightColor:(unsigned long long)arg1 ;
-(char)canSetSpeakSelectionWordHighlightColor;
-(void)setSpeakSelectionSentenceHighlightColor:(unsigned long long)arg1 ;
-(void)setSpeakSelectionSentenceStyle:(unsigned long long)arg1 ;
-(char)canSetSpeakSelectionSentenceHighlightColor;
-(char)canSetSpeakSelectionSentenceStyle;
@end

