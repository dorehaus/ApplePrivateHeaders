/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpeechObjects.framework/Versions/A/Frameworks/DictationServices.framework/Versions/A/DictationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSPopUpButton.h>

@class NSMutableArray, NSTimer, NSImageView, NSTextField, NSView, SOMicrophoneLevelMeterController;

@interface SOMicrophonePopUpButton : NSPopUpButton {

	NSMutableArray* _currentMicrophoneArray;
	NSTimer* _microphoneSensingTimer;
	id _delegate;
	char _containsCautionaryInfo;
	char _suppressCautionaryInfo;
	NSImageView* _cautionaryImageView;
	NSTextField* _cautionaryExplanation;
	NSView* _hortizontallyCenteredView;
	SOMicrophoneLevelMeterController* _microphoneLevelController;

}

@property (assign) id delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) char containsCautionaryInfo;                    //@synthesize containsCautionaryInfo=_containsCautionaryInfo - In the implementation block
@property (assign) char suppressCautionaryInfo;                      //@synthesize suppressCautionaryInfo=_suppressCautionaryInfo - In the implementation block
@property (retain) NSImageView * cautionaryImageView;                //@synthesize cautionaryImageView=_cautionaryImageView - In the implementation block
@property (retain) NSTextField * cautionaryExplanation;              //@synthesize cautionaryExplanation=_cautionaryExplanation - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(long long)indexOfSelectedItem;
-(void)buildPopUpButton;
-(void)setSuppressCautionaryInfo:(char)arg1 ;
-(char)containsCautionaryInfo;
-(id)selectedMicrophoneIdentifier;
-(id)selectedMicrophoneName;
-(void)_audioDeviceRecievedNotification:(id)arg1 ;
-(void)_popUpMenuWillSendAction:(id)arg1 ;
-(void)_popUpMenuDidSendAction:(id)arg1 ;
-(void)_cancelMicrophoneLevelSensing;
-(void)_scheduleMicrophoneLevelSensingWithOriginalTitle:(id)arg1 ;
-(void)_initializeCautionIconView;
-(id)_selectedAudioSourceUsingResolvedAutomaticSelection:(char)arg1 ;
-(id)_selectedAudioDevice;
-(void)_finishMicrophoneLevelSensingWithTimer:(id)arg1 ;
-(id)selectedOrResolvedAutomaticMicrophoneIdentifier;
-(char)suppressCautionaryInfo;
-(NSImageView *)cautionaryImageView;
-(void)setCautionaryImageView:(NSImageView *)arg1 ;
-(NSTextField *)cautionaryExplanation;
-(void)setCautionaryExplanation:(NSTextField *)arg1 ;
@end

