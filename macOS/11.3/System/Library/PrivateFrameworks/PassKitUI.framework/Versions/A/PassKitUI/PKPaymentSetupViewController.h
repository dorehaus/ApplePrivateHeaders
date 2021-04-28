/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/Versions/A/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/PKPaymentSetupFieldViewDelegate.h>
#import <libobjc.A.dylib/PKPaymentCameraCaptureDelegate.h>
#import <libobjc.A.dylib/NSTextViewDelegate.h>
#import <libobjc.A.dylib/PKPaymentTermsAndConditionsDelegate.h>
#import <libobjc.A.dylib/PKPaymentVerificationMethodsDelegate.h>
#import <libobjc.A.dylib/PKSelectCredentialsViewControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentProvisioningControllerDelegate.h>

@protocol PKPaymentSetupDelegate;
@class OBPrivacyLinkController, NSString, NSView, NSImageView, NSTextView, NSTextField, NSStackView, NSButton, PKPaymentWebService, PKPaymentProvisioningController, PKPaymentSetupFieldsModel, NSArray, PKSelectCredentialsViewController, PKPaymentSetupDisambiguationViewController, PKPaymentCameraCaptureViewController, PKPaymentTermsConditionsViewController, PKPaymentCardVerificationViewController, PKPaymentCredential;

@interface PKPaymentSetupViewController : NSViewController <PKPaymentSetupFieldViewDelegate, PKPaymentCameraCaptureDelegate, NSTextViewDelegate, PKPaymentTermsAndConditionsDelegate, PKPaymentVerificationMethodsDelegate, PKSelectCredentialsViewControllerDelegate, PKPaymentProvisioningControllerDelegate> {

	OBPrivacyLinkController* _privacyLinkController;
	char _isProcessingRequest;
	char _prefPaneIsUnselected;
	char _nextButtonEnabled;
	char _backButtonEnabled;
	char _selectCardsOnFileSkippedDueToSingleCredential;
	NSString* _currentTitle;
	unsigned long long _status;
	long long _context;
	id<PKPaymentSetupDelegate> _setupDelegate;
	NSString* _currentStatusString;
	NSView* _welcomeView;
	NSImageView* _welcomeImageView;
	NSView* _welcomeImageViewGEO;
	NSImageView* _welcomeSplashImageViewGEO;
	NSImageView* _welcomeHandImageViewGEO;
	NSView* _welcomeViewAboutPrivacyContainer;
	NSImageView* _paymentLogoImageView;
	NSTextView* _welcomeTextField;
	NSImageView* _welcomeViewPaymentPromptArrowImageView;
	NSTextField* _welcomeViewPaymentPromptTextField;
	NSImageView* _checkmarkView;
	NSView* _bootstrapingView;
	NSView* _mainLayoutView;
	NSView* _mainLayoutContentPlaceHolderView;
	NSView* _mainLayoutNavigationPlaceHolderView;
	NSImageView* _mainLayoutCardImageView;
	NSImageView* _cardImageView;
	NSView* _setupFieldsView;
	NSTextField* _setupFieldsTitleLabel;
	NSStackView* _setupFieldsStack;
	NSView* _navigationViewDefault;
	NSView* _navigationViewSelectCardsOnFile;
	NSView* _navigationViewProvisionCardOnFile;
	NSView* _navigationViewCardVerification;
	NSView* _navigationViewCardAdded;
	NSButton* _navigationViewCardAddedDoneButton;
	NSView* _buddyMainLayoutTopPlaceHolder;
	NSView* _buddyMainLayoutBottomPlaceHolder;
	NSView* _buddyBottomProgressIndicationView;
	NSView* _buddyBottomCardAddedView;
	NSView* _buddyBottomSelectCardsOnFileView;
	NSView* _buddyBottomSelectCardsOnFileViewAddDifferentCardLinkPlaceHolder;
	NSView* _buddyBottomSelectCardsOnFileViewSetUpLaterLinkPlaceHolder;
	NSView* _cameraCaptureView;
	NSView* _cameraCapturePlaceHolderView;
	NSView* _cameraCaptureManualEntryLinkPlaceHolder;
	NSView* _cameraCaptureSetupLaterContainer;
	NSButton* _didNotReceiveCodeButton;
	PKPaymentWebService* _webService;
	PKPaymentProvisioningController* _paymentProvisioningController;
	PKPaymentSetupFieldsModel* _fieldsModel;
	id _currentNextActionBlock;
	NSArray* _pendingCameraCaptureObjects;
	PKSelectCredentialsViewController* _selectCredentialsVC;
	PKPaymentSetupDisambiguationViewController* _disambiguationVC;
	PKPaymentCameraCaptureViewController* _cameraCaptureVC;
	PKPaymentTermsConditionsViewController* _termsConditionsVC;
	PKPaymentCardVerificationViewController* _verificationMethodsConditionsVC;
	PKPaymentCredential* _inFlightCardOnFileCredential;

}

@property (retain) NSString * currentStatusString;                                                                   //@synthesize currentStatusString=_currentStatusString - In the implementation block
@property (retain) NSView * welcomeView;                                                                             //@synthesize welcomeView=_welcomeView - In the implementation block
@property (retain) NSImageView * welcomeImageView;                                                                   //@synthesize welcomeImageView=_welcomeImageView - In the implementation block
@property (retain) NSView * welcomeImageViewGEO;                                                                     //@synthesize welcomeImageViewGEO=_welcomeImageViewGEO - In the implementation block
@property (retain) NSImageView * welcomeSplashImageViewGEO;                                                          //@synthesize welcomeSplashImageViewGEO=_welcomeSplashImageViewGEO - In the implementation block
@property (retain) NSImageView * welcomeHandImageViewGEO;                                                            //@synthesize welcomeHandImageViewGEO=_welcomeHandImageViewGEO - In the implementation block
@property (retain) NSView * welcomeViewAboutPrivacyContainer;                                                        //@synthesize welcomeViewAboutPrivacyContainer=_welcomeViewAboutPrivacyContainer - In the implementation block
@property (retain) NSImageView * paymentLogoImageView;                                                               //@synthesize paymentLogoImageView=_paymentLogoImageView - In the implementation block
@property (retain) NSTextView * welcomeTextField;                                                                    //@synthesize welcomeTextField=_welcomeTextField - In the implementation block
@property (retain) NSImageView * welcomeViewPaymentPromptArrowImageView;                                             //@synthesize welcomeViewPaymentPromptArrowImageView=_welcomeViewPaymentPromptArrowImageView - In the implementation block
@property (retain) NSTextField * welcomeViewPaymentPromptTextField;                                                  //@synthesize welcomeViewPaymentPromptTextField=_welcomeViewPaymentPromptTextField - In the implementation block
@property (retain) NSImageView * checkmarkView;                                                                      //@synthesize checkmarkView=_checkmarkView - In the implementation block
@property (retain) NSView * bootstrapingView;                                                                        //@synthesize bootstrapingView=_bootstrapingView - In the implementation block
@property (retain) NSView * mainLayoutView;                                                                          //@synthesize mainLayoutView=_mainLayoutView - In the implementation block
@property (retain) NSView * mainLayoutContentPlaceHolderView;                                                        //@synthesize mainLayoutContentPlaceHolderView=_mainLayoutContentPlaceHolderView - In the implementation block
@property (retain) NSView * mainLayoutNavigationPlaceHolderView;                                                     //@synthesize mainLayoutNavigationPlaceHolderView=_mainLayoutNavigationPlaceHolderView - In the implementation block
@property (retain) NSImageView * mainLayoutCardImageView;                                                            //@synthesize mainLayoutCardImageView=_mainLayoutCardImageView - In the implementation block
@property (retain) NSImageView * cardImageView;                                                                      //@synthesize cardImageView=_cardImageView - In the implementation block
@property (retain) NSView * setupFieldsView;                                                                         //@synthesize setupFieldsView=_setupFieldsView - In the implementation block
@property (retain) NSTextField * setupFieldsTitleLabel;                                                              //@synthesize setupFieldsTitleLabel=_setupFieldsTitleLabel - In the implementation block
@property (retain) NSStackView * setupFieldsStack;                                                                   //@synthesize setupFieldsStack=_setupFieldsStack - In the implementation block
@property (retain) NSView * navigationViewDefault;                                                                   //@synthesize navigationViewDefault=_navigationViewDefault - In the implementation block
@property (retain) NSView * navigationViewSelectCardsOnFile;                                                         //@synthesize navigationViewSelectCardsOnFile=_navigationViewSelectCardsOnFile - In the implementation block
@property (retain) NSView * navigationViewProvisionCardOnFile;                                                       //@synthesize navigationViewProvisionCardOnFile=_navigationViewProvisionCardOnFile - In the implementation block
@property (retain) NSView * navigationViewCardVerification;                                                          //@synthesize navigationViewCardVerification=_navigationViewCardVerification - In the implementation block
@property (retain) NSView * navigationViewCardAdded;                                                                 //@synthesize navigationViewCardAdded=_navigationViewCardAdded - In the implementation block
@property (retain) NSButton * navigationViewCardAddedDoneButton;                                                     //@synthesize navigationViewCardAddedDoneButton=_navigationViewCardAddedDoneButton - In the implementation block
@property (retain) NSView * buddyMainLayoutTopPlaceHolder;                                                           //@synthesize buddyMainLayoutTopPlaceHolder=_buddyMainLayoutTopPlaceHolder - In the implementation block
@property (retain) NSView * buddyMainLayoutBottomPlaceHolder;                                                        //@synthesize buddyMainLayoutBottomPlaceHolder=_buddyMainLayoutBottomPlaceHolder - In the implementation block
@property (retain) NSView * buddyBottomProgressIndicationView;                                                       //@synthesize buddyBottomProgressIndicationView=_buddyBottomProgressIndicationView - In the implementation block
@property (retain) NSView * buddyBottomCardAddedView;                                                                //@synthesize buddyBottomCardAddedView=_buddyBottomCardAddedView - In the implementation block
@property (retain) NSView * buddyBottomSelectCardsOnFileView;                                                        //@synthesize buddyBottomSelectCardsOnFileView=_buddyBottomSelectCardsOnFileView - In the implementation block
@property (retain) NSView * buddyBottomSelectCardsOnFileViewAddDifferentCardLinkPlaceHolder;                         //@synthesize buddyBottomSelectCardsOnFileViewAddDifferentCardLinkPlaceHolder=_buddyBottomSelectCardsOnFileViewAddDifferentCardLinkPlaceHolder - In the implementation block
@property (retain) NSView * buddyBottomSelectCardsOnFileViewSetUpLaterLinkPlaceHolder;                               //@synthesize buddyBottomSelectCardsOnFileViewSetUpLaterLinkPlaceHolder=_buddyBottomSelectCardsOnFileViewSetUpLaterLinkPlaceHolder - In the implementation block
@property (retain) NSView * cameraCaptureView;                                                                       //@synthesize cameraCaptureView=_cameraCaptureView - In the implementation block
@property (retain) NSView * cameraCapturePlaceHolderView;                                                            //@synthesize cameraCapturePlaceHolderView=_cameraCapturePlaceHolderView - In the implementation block
@property (retain) NSView * cameraCaptureManualEntryLinkPlaceHolder;                                                 //@synthesize cameraCaptureManualEntryLinkPlaceHolder=_cameraCaptureManualEntryLinkPlaceHolder - In the implementation block
@property (retain) NSView * cameraCaptureSetupLaterContainer;                                                        //@synthesize cameraCaptureSetupLaterContainer=_cameraCaptureSetupLaterContainer - In the implementation block
@property (retain) NSButton * didNotReceiveCodeButton;                                                               //@synthesize didNotReceiveCodeButton=_didNotReceiveCodeButton - In the implementation block
@property (nonatomic,retain) PKPaymentWebService * webService;                                                       //@synthesize webService=_webService - In the implementation block
@property (nonatomic,retain) PKPaymentProvisioningController * paymentProvisioningController;                        //@synthesize paymentProvisioningController=_paymentProvisioningController - In the implementation block
@property (getter=isComplete,nonatomic,readonly) char complete; 
@property (nonatomic,retain) PKPaymentSetupFieldsModel * fieldsModel;                                                //@synthesize fieldsModel=_fieldsModel - In the implementation block
@property (nonatomic,retain) id currentNextActionBlock;                                                              //@synthesize currentNextActionBlock=_currentNextActionBlock - In the implementation block
@property (nonatomic,copy) NSArray * pendingCameraCaptureObjects;                                                    //@synthesize pendingCameraCaptureObjects=_pendingCameraCaptureObjects - In the implementation block
@property (nonatomic,retain) PKSelectCredentialsViewController * selectCredentialsVC;                                //@synthesize selectCredentialsVC=_selectCredentialsVC - In the implementation block
@property (nonatomic,retain) PKPaymentSetupDisambiguationViewController * disambiguationVC;                          //@synthesize disambiguationVC=_disambiguationVC - In the implementation block
@property (nonatomic,retain) PKPaymentCameraCaptureViewController * cameraCaptureVC;                                 //@synthesize cameraCaptureVC=_cameraCaptureVC - In the implementation block
@property (nonatomic,retain) PKPaymentTermsConditionsViewController * termsConditionsVC;                             //@synthesize termsConditionsVC=_termsConditionsVC - In the implementation block
@property (nonatomic,retain) PKPaymentCardVerificationViewController * verificationMethodsConditionsVC;              //@synthesize verificationMethodsConditionsVC=_verificationMethodsConditionsVC - In the implementation block
@property (nonatomic,retain) PKPaymentCredential * inFlightCardOnFileCredential;                                     //@synthesize inFlightCardOnFileCredential=_inFlightCardOnFileCredential - In the implementation block
@property (assign,nonatomic) char selectCardsOnFileSkippedDueToSingleCredential;                                     //@synthesize selectCardsOnFileSkippedDueToSingleCredential=_selectCardsOnFileSkippedDueToSingleCredential - In the implementation block
@property (assign,nonatomic) char isProcessingRequest;                                                               //@synthesize isProcessingRequest=_isProcessingRequest - In the implementation block
@property (assign,nonatomic) char prefPaneIsUnselected;                                                              //@synthesize prefPaneIsUnselected=_prefPaneIsUnselected - In the implementation block
@property (assign) char nextButtonEnabled;                                                                           //@synthesize nextButtonEnabled=_nextButtonEnabled - In the implementation block
@property (assign) char backButtonEnabled;                                                                           //@synthesize backButtonEnabled=_backButtonEnabled - In the implementation block
@property (retain) NSString * currentTitle;                                                                          //@synthesize currentTitle=_currentTitle - In the implementation block
@property (nonatomic,readonly) unsigned long long status;                                                            //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) long long context;                                                                    //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentSetupDelegate> setupDelegate;                                        //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(char)isEmpty;
-(unsigned long long)status;
-(char)isComplete;
-(long long)context;
-(id)nibName;
-(id)nibBundle;
-(void)viewDidLoad;
-(char)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)textView:(id)arg1 willChangeSelectionFromCharacterRanges:(id)arg2 toCharacterRanges:(id)arg3 ;
-(id)textView:(id)arg1 willDisplayToolTip:(id)arg2 forCharacterAtIndex:(unsigned long long)arg3 ;
-(NSImageView *)checkmarkView;
-(void)setCheckmarkView:(NSImageView *)arg1 ;
-(PKPaymentWebService *)webService;
-(void)requestEligibility:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)requestRequirements:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)paymentPassUpdatedOnCredential:(id)arg1 ;
-(void)requestProvisioning:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)help:(id)arg1 ;
-(void)setNextButtonEnabled:(char)arg1 ;
-(void)updateView;
-(void)handleCancel:(id)arg1 ;
-(NSString *)currentTitle;
-(NSString *)currentStatusString;
-(void)setCurrentStatusString:(NSString *)arg1 ;
-(NSImageView *)cardImageView;
-(void)setCardImageView:(NSImageView *)arg1 ;
-(id<PKPaymentSetupDelegate>)setupDelegate;
-(void)setSetupDelegate:(id<PKPaymentSetupDelegate>)arg1 ;
-(void)didAcceptTerms:(char)arg1 ;
-(NSImageView *)paymentLogoImageView;
-(void)setPaymentLogoImageView:(NSImageView *)arg1 ;
-(void)cameraCaptureDidCancel;
-(void)cameraCaptureDidRecognizeObjects:(id)arg1 ;
-(NSTextField *)setupFieldsTitleLabel;
-(void)setIsProcessingRequest:(char)arg1 ;
-(void)setFieldsModel:(PKPaymentSetupFieldsModel *)arg1 ;
-(PKPaymentSetupFieldsModel *)fieldsModel;
-(void)shouldShowCodeNotReceivedButton:(char)arg1 ;
-(void)shouldTerminatePaymentSetup;
-(void)showVerificationSuccess;
-(void)setupFieldViewValueDidChange:(id)arg1 ;
-(void)setSetupFieldsTitleLabel:(NSTextField *)arg1 ;
-(char)nextButtonEnabled;
-(NSView *)cameraCaptureSetupLaterContainer;
-(id)_setupLaterLink;
-(void)_setupPaymentLogoImage;
-(void)_setupCheckmarkViewImage;
-(void)_setupWelcomeImageViewImages;
-(void)_setupWelcomeTextFieldShowsSetupLater:(char)arg1 ;
-(id)defaultFields;
-(void)_provisioningStateDidChange:(id)arg1 ;
-(void)_provisioningLocalizedProgressDescriptionDidChange:(id)arg1 ;
-(void)_accountCredentialRenewedSuccessfully:(id)arg1 ;
-(void)_bootStrapSetupFlow;
-(PKPaymentProvisioningController *)paymentProvisioningController;
-(char)prefPaneIsUnselected;
-(char)_pushNextCredentialForProvisioning;
-(void)_presentResetAndClaimSecureElementAlert:(unsigned long long)arg1 inWindow:(id)arg2 withErrorStateHandler:(/*^block*/id)arg3 ;
-(void)_presentDisplayableErrorAlert:(id)arg1 inWindow:(id)arg2 withErrorStateHandler:(/*^block*/id)arg3 ;
-(void)showProvisioningError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setControlsInView:(id)arg1 enabled:(char)arg2 ;
-(NSView *)mainLayoutContentPlaceHolderView;
-(void)setBackButtonEnabled:(char)arg1 ;
-(NSView *)buddyMainLayoutBottomPlaceHolder;
-(NSView *)buddyBottomProgressIndicationView;
-(id)_addThisCardLaterLink;
-(NSStackView *)setupFieldsStack;
-(id)visibleFieldIdentifiers;
-(id)fieldForIdentifier:(id)arg1 ;
-(id)readonlyFieldIdentifiers;
-(NSView *)welcomeImageViewGEO;
-(NSImageView *)welcomeSplashImageViewGEO;
-(NSImageView *)welcomeHandImageViewGEO;
-(NSImageView *)welcomeImageView;
-(PKPaymentCredential *)inFlightCardOnFileCredential;
-(NSImageView *)welcomeViewPaymentPromptArrowImageView;
-(NSTextField *)welcomeViewPaymentPromptTextField;
-(void)setCurrentTitle:(NSString *)arg1 ;
-(void)_updateWelcomeImagePaymentPrompt;
-(NSView *)welcomeView;
-(NSView *)welcomeViewAboutPrivacyContainer;
-(id)_privacyDisclosureSlice;
-(NSView *)bootstrapingView;
-(PKSelectCredentialsViewController *)selectCredentialsVC;
-(void)setSelectCredentialsVC:(PKSelectCredentialsViewController *)arg1 ;
-(NSView *)mainLayoutView;
-(NSView *)mainLayoutNavigationPlaceHolderView;
-(NSView *)navigationViewSelectCardsOnFile;
-(NSView *)buddyMainLayoutTopPlaceHolder;
-(NSView *)buddyBottomSelectCardsOnFileViewSetUpLaterLinkPlaceHolder;
-(NSView *)buddyBottomSelectCardsOnFileViewAddDifferentCardLinkPlaceHolder;
-(id)_useDifferentCardLink;
-(NSView *)buddyBottomSelectCardsOnFileView;
-(void)_updateCardImage;
-(void)_updateSetupFieldsTitle;
-(NSView *)setupFieldsView;
-(NSView *)navigationViewProvisionCardOnFile;
-(void)_stackSetupFields;
-(void)setCameraCaptureVC:(PKPaymentCameraCaptureViewController *)arg1 ;
-(PKPaymentCameraCaptureViewController *)cameraCaptureVC;
-(NSView *)cameraCapturePlaceHolderView;
-(NSView *)cameraCaptureManualEntryLinkPlaceHolder;
-(id)_creditCardManualEntryLink;
-(NSView *)cameraCaptureView;
-(NSView *)navigationViewDefault;
-(PKPaymentSetupDisambiguationViewController *)disambiguationVC;
-(PKPaymentCardVerificationViewController *)verificationMethodsConditionsVC;
-(NSView *)navigationViewCardVerification;
-(NSView *)navigationViewCardAdded;
-(NSButton *)navigationViewCardAddedDoneButton;
-(NSView *)buddyBottomCardAddedView;
-(void)updateFieldsModelWithCameraCaptureObjects:(id)arg1 ;
-(void)updateViewAnimated;
-(void)setPendingCameraCaptureObjects:(NSArray *)arg1 ;
-(NSArray *)pendingCameraCaptureObjects;
-(NSButton *)didNotReceiveCodeButton;
-(id)_didNotReceiveCodeLink;
-(id)_verifyLaterLink;
-(void)_processPendingCameraCaptureObjects;
-(void)setDisambiguationVC:(PKPaymentSetupDisambiguationViewController *)arg1 ;
-(void)_triggerNextActionLoop;
-(void)setInFlightCardOnFileCredential:(PKPaymentCredential *)arg1 ;
-(void)resetAllFieldsAndProvisioningStateForNewProvisioning;
-(void)updateFieldsModelWithPaymentCredential:(id)arg1 ;
-(void)_preflightPaymentCredential:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)requestPassDetailsForAccountCredential:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_presentAccountCredentialAuthPromptIfNeeded:(/*^block*/id)arg1 ;
-(void)resetAllFieldsAndProvisioningState;
-(void)performNextActionForProvisioningState:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_performRequirementsWithCompletion:(/*^block*/id)arg1 ;
-(void)_performEligibilityWithCompletion:(/*^block*/id)arg1 ;
-(void)_performSecondaryWithCompletion:(/*^block*/id)arg1 ;
-(void)_performTermsWithCompletion:(/*^block*/id)arg1 ;
-(void)_performProvisionWithCompletion:(/*^block*/id)arg1 ;
-(void)_performFinishWithCompletion:(/*^block*/id)arg1 ;
-(void)_internalPerformRequirementsWithCompletion:(/*^block*/id)arg1 ;
-(id)newPaymentRequirementsRequest;
-(void)logAggDCheckpointForKey:(id)arg1 ;
-(void)_performDisambiguationWithCompletion:(/*^block*/id)arg1 ;
-(void)showEligibilityIssueWithReason:(long long)arg1 learnMoreURL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)logAggDContextSpecificCheckpointForKey:(id)arg1 ;
-(id)newPaymentEligibilityRequest;
-(void)setTermsConditionsVC:(PKPaymentTermsConditionsViewController *)arg1 ;
-(PKPaymentTermsConditionsViewController *)termsConditionsVC;
-(id)newPaymentProvisioningRequest;
-(void)setVerificationMethodsConditionsVC:(PKPaymentCardVerificationViewController *)arg1 ;
-(void)_bootStrapYellowFlow;
-(NSTextView *)welcomeTextField;
-(void)switchToManualEntryScreen:(id)arg1 ;
-(void)switchToCameraCaptureScreen:(id)arg1 ;
-(void)addThisCardLater:(id)arg1 ;
-(void)didNotReceiveVerificationCode:(id)arg1 ;
-(id)_makeLink:(id)arg1 withLabel:(id)arg2 ;
-(char)isProcessingRequest;
-(id)_contextSpecificStringForAggDKey:(id)arg1 ;
-(void)selectCredentialsViewControllerSelectedCredentialsDidChange:(id)arg1 ;
-(id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 ;
-(void)skipWelcomeScreen;
-(void)startSetupFlow;
-(void)setPrefPaneIsUnselected:(char)arg1 ;
-(void)handleNext:(id)arg1 ;
-(void)handleBack:(id)arg1 ;
-(void)setupLater:(id)arg1 ;
-(char)backButtonEnabled;
-(void)setWelcomeView:(NSView *)arg1 ;
-(void)setWelcomeImageView:(NSImageView *)arg1 ;
-(void)setWelcomeImageViewGEO:(NSView *)arg1 ;
-(void)setWelcomeSplashImageViewGEO:(NSImageView *)arg1 ;
-(void)setWelcomeHandImageViewGEO:(NSImageView *)arg1 ;
-(void)setWelcomeViewAboutPrivacyContainer:(NSView *)arg1 ;
-(void)setWelcomeTextField:(NSTextView *)arg1 ;
-(void)setWelcomeViewPaymentPromptArrowImageView:(NSImageView *)arg1 ;
-(void)setWelcomeViewPaymentPromptTextField:(NSTextField *)arg1 ;
-(void)setBootstrapingView:(NSView *)arg1 ;
-(void)setMainLayoutView:(NSView *)arg1 ;
-(void)setMainLayoutContentPlaceHolderView:(NSView *)arg1 ;
-(void)setMainLayoutNavigationPlaceHolderView:(NSView *)arg1 ;
-(NSImageView *)mainLayoutCardImageView;
-(void)setMainLayoutCardImageView:(NSImageView *)arg1 ;
-(void)setSetupFieldsView:(NSView *)arg1 ;
-(void)setSetupFieldsStack:(NSStackView *)arg1 ;
-(void)setNavigationViewDefault:(NSView *)arg1 ;
-(void)setNavigationViewSelectCardsOnFile:(NSView *)arg1 ;
-(void)setNavigationViewProvisionCardOnFile:(NSView *)arg1 ;
-(void)setNavigationViewCardVerification:(NSView *)arg1 ;
-(void)setNavigationViewCardAdded:(NSView *)arg1 ;
-(void)setNavigationViewCardAddedDoneButton:(NSButton *)arg1 ;
-(void)setBuddyMainLayoutTopPlaceHolder:(NSView *)arg1 ;
-(void)setBuddyMainLayoutBottomPlaceHolder:(NSView *)arg1 ;
-(void)setBuddyBottomProgressIndicationView:(NSView *)arg1 ;
-(void)setBuddyBottomCardAddedView:(NSView *)arg1 ;
-(void)setBuddyBottomSelectCardsOnFileView:(NSView *)arg1 ;
-(void)setBuddyBottomSelectCardsOnFileViewAddDifferentCardLinkPlaceHolder:(NSView *)arg1 ;
-(void)setBuddyBottomSelectCardsOnFileViewSetUpLaterLinkPlaceHolder:(NSView *)arg1 ;
-(void)setCameraCaptureView:(NSView *)arg1 ;
-(void)setCameraCapturePlaceHolderView:(NSView *)arg1 ;
-(void)setCameraCaptureManualEntryLinkPlaceHolder:(NSView *)arg1 ;
-(void)setCameraCaptureSetupLaterContainer:(NSView *)arg1 ;
-(void)setDidNotReceiveCodeButton:(NSButton *)arg1 ;
-(void)setWebService:(PKPaymentWebService *)arg1 ;
-(void)setPaymentProvisioningController:(PKPaymentProvisioningController *)arg1 ;
-(id)currentNextActionBlock;
-(void)setCurrentNextActionBlock:(id)arg1 ;
-(char)selectCardsOnFileSkippedDueToSingleCredential;
-(void)setSelectCardsOnFileSkippedDueToSingleCredential:(char)arg1 ;
@end
