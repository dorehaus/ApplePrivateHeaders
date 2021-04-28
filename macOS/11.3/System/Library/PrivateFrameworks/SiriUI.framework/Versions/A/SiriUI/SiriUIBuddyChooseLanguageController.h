/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/Versions/A/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <SiriUI/SiriUIBuddySubviewController.h>

@class SiriUIBuddyController, NSView, NSButton, SOSRSimpleLanguagePopUpButton, NSString, NSArray;

@interface SiriUIBuddyChooseLanguageController : NSViewController <SiriUIBuddySubviewController> {

	SiriUIBuddyController* _parentController;
	NSView* _ambiguousLangageContainer;
	NSButton* _languageOneButton;
	NSButton* _languageTwoButton;
	NSView* _unsupportedLangageContainer;
	SOSRSimpleLanguagePopUpButton* _languagePopUp;

}

@property (__weak) SiriUIBuddyController * parentController;                   //@synthesize parentController=_parentController - In the implementation block
@property (__weak) NSView * ambiguousLangageContainer;                         //@synthesize ambiguousLangageContainer=_ambiguousLangageContainer - In the implementation block
@property (__weak) NSButton * languageOneButton;                               //@synthesize languageOneButton=_languageOneButton - In the implementation block
@property (__weak) NSButton * languageTwoButton;                               //@synthesize languageTwoButton=_languageTwoButton - In the implementation block
@property (__weak) NSView * unsupportedLangageContainer;                       //@synthesize unsupportedLangageContainer=_unsupportedLangageContainer - In the implementation block
@property (__weak) SOSRSimpleLanguagePopUpButton * languagePopUp;              //@synthesize languagePopUp=_languagePopUp - In the implementation block
@property (readonly) long long layoutStyle; 
@property (readonly) NSString * templateTitle; 
@property (readonly) NSString * templateBodyText; 
@property (readonly) NSArray * privacyBundleIdentifiers; 
@property (readonly) NSString * templateAlternateButtonTitle; 
@property (readonly) id templateAlternateActionBlock; 
-(void)loadView;
-(void)viewWillAppear;
-(long long)layoutStyle;
-(void)setParentController:(SiriUIBuddyController *)arg1 ;
-(SiriUIBuddyController *)parentController;
-(NSString *)templateTitle;
-(NSString *)templateBodyText;
-(id)initWithParentController:(id)arg1 ;
-(void)willExitPane;
-(id)buttonTitleForAmbiguousLanguage:(id)arg1 ;
-(NSButton *)languageOneButton;
-(NSButton *)languageTwoButton;
-(SOSRSimpleLanguagePopUpButton *)languagePopUp;
-(void)setLanguageOneButton:(NSButton *)arg1 ;
-(void)setLanguageTwoButton:(NSButton *)arg1 ;
-(void)setLanguagePopUp:(SOSRSimpleLanguagePopUpButton *)arg1 ;
-(id)selectedRecognitionLanguage;
-(void)radioButtonPressed:(id)arg1 ;
-(void)popupSelectionChanged:(id)arg1 ;
-(NSView *)ambiguousLangageContainer;
-(void)setAmbiguousLangageContainer:(NSView *)arg1 ;
-(NSView *)unsupportedLangageContainer;
-(void)setUnsupportedLangageContainer:(NSView *)arg1 ;
@end

