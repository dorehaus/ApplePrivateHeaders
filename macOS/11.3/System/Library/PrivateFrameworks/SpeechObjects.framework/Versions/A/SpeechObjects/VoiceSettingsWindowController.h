/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpeechObjects.framework/Versions/A/SpeechObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpeechObjects/SpeechObjects-Structs.h>
#import <AppKit/NSWindowController.h>
#import <libobjc.A.dylib/NSSpeechSynthesizerDelegate.h>

@class NSButton, NSSlider, NSImageView, SOVoicePopUpButton, NSSpeechSynthesizer, NSString;

@interface VoiceSettingsWindowController : NSWindowController <NSSpeechSynthesizerDelegate> {

	NSButton* _useCustomRateCheckbox;
	NSButton* _useCustomVolumeCheckbox;
	NSButton* _startStopSpeakingButton;
	NSSlider* _rateSlider;
	NSSlider* _volumeSlider;
	NSImageView* _volumeQuietIcon;
	NSImageView* _volumeLoudIcon;
	SOVoicePopUpButton* _voicePopupMenu;
	NSSpeechSynthesizer* _speechSynthesizer;
	id _modalDelegate;
	NSString* _playDisplayString;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finalize;
-(void)dealloc;
-(void)speechSynthesizer:(id)arg1 didFinishSpeaking:(char)arg2 ;
-(void)closeWindow;
-(void)setUpWindowWithVoiceSettings:(id)arg1 modalDelegate:(id)arg2 ;
-(void)setValueOfSlider:(id)arg1 usingPercentOfNormal:(float)arg2 ;
-(float)percentOfNormalFromSlider:(id)arg1 ;
-(id)voiceSettingsFromWindow;
-(float)wordsPerMinuteFromSlider:(id)arg1 ;
-(void)playStopVoiceSettings:(id)arg1 ;
-(void)saveVoiceSettings:(id)arg1 ;
-(void)cancelVoiceSettings:(id)arg1 ;
-(void)voicePopupMenuChanged:(id)arg1 ;
-(void)rateSliderChanged:(id)arg1 ;
-(void)volumeSliderChanged:(id)arg1 ;
-(void)rateCheckboxClicked:(id)arg1 ;
-(void)volumeCheckboxClicked:(id)arg1 ;
-(void)setValueOfSlider:(id)arg1 usingWordsPerMinute:(float)arg2 ;
@end

