/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <SafariShared/WBSFormDataController.h>
#import <libobjc.A.dylib/WBSFormAutoFillCorrectionManagerDelegate.h>
#import <libobjc.A.dylib/WBSFormFieldClassificationCorrectorDelegate.h>

@protocol EncryptionProvider;
@class WBSCoalescedAsynchronousWriter, WBSFormAutoFillCorrectionManager, WBSFormAutoFillParsecFeedbackProcessor, AutoFillAuthorizationController, NSMutableDictionary, AutoFillLocalAuthenticationManager, NSString;

@interface FormDataController : WBSFormDataController <WBSFormAutoFillCorrectionManagerDelegate, WBSFormFieldClassificationCorrectorDelegate> {

	WBSCoalescedAsynchronousWriter* _formDataWriter;
	WBSFormAutoFillCorrectionManager* _autoFillCorrectionManager;
	WBSFormAutoFillParsecFeedbackProcessor* _autoFillFeedbackProcessor;
	AutoFillAuthorizationController* _autoFillAuthorizationController;
	id<EncryptionProvider> _encryptionProvider;
	char _shouldUseInsecureEncryptionKeyForMigration;
	NSMutableDictionary* _threadUnsafeDeniedCredentialsByProtectionSpace;
	char _hasAuthenticatedForPasswordAutoFillInClamshellMode;
	AutoFillLocalAuthenticationManager* _localAuthenticationManager;

}

@property (nonatomic,readonly) AutoFillLocalAuthenticationManager * localAuthenticationManager;              //@synthesize localAuthenticationManager=_localAuthenticationManager - In the implementation block
@property (assign,nonatomic) char hasAuthenticatedForPasswordAutoFillInClamshellMode;                        //@synthesize hasAuthenticatedForPasswordAutoFillInClamshellMode=_hasAuthenticatedForPasswordAutoFillInClamshellMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)localizedLowercaseContactProperty:(id)arg1 ;
+(char)contactIsMe:(id)arg1 ;
+(char)isAddressBookPropertyAnAddressProperty:(id)arg1 ;
+(id)sharedFormDataController;
+(unsigned long long)numberOfTextFieldsInForm:(id)arg1 ;
+(id)titleTextForSavingNewPassword;
-(void)savePendingChangesBeforeTermination;
-(char)autoFillCorrectionManagerShouldProcessFeedback:(id)arg1 ;
-(id)feedbackProcessorForAutoFillCorrectionManager:(id)arg1 ;
-(id)initWithAggressiveKeychainCaching:(char)arg1 ;
-(id)completionDBPath;
-(id)encryptOrDecryptData:(id)arg1 encrypt:(char)arg2 ;
-(void)domainsWithPreviousDataChanged;
-(void)saveCompletionDBSoon;
-(id)uniqueIDOfContact:(id)arg1 ;
-(id)addressBookMatchesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3 partialString:(id)arg4 contact:(id)arg5 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(char)arg6 ;
-(id)addressBookMatchesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3 ;
-(char)shouldAutoFillFromPreviousData;
-(char)shouldAutoFillFromAddressBook;
-(char)shouldAutoFillPasswords;
-(id)substituteCredential:(id)arg1 inProtectionSpace:(id)arg2 ;
-(char)hasUserDeniedAccessToCredential:(id)arg1 inProtectionSpace:(id)arg2 ;
-(id)formAutoFillCorrectionManagerForFormFieldClassificationCorrector:(id)arg1 ;
-(id)formFieldClassificationCorrector:(id)arg1 bestAddressBookLabelForControlValue:(id)arg2 ;
-(char)formFieldClassificationCorrector:(id)arg1 hasAddressBookDataForAddressBookLabel:(id)arg2 ;
-(void)warmUp;
-(void)migrateToSecureEncryptionKey;
-(void)offerToSaveCredentialsFromForm:(id)arg1 forFrame:(const Frame*)arg2 passwordGenerationCredentials:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(char)formContainsInformationToSave:(id)arg1 ;
-(char)shouldDeferLoadingWhileSavingFormDataInPage:(const Page*)arg1 frame:(const Frame*)arg2 sourceFrame:(const Frame*)arg3 formMetadata:(id)arg4 passwordGenerationCredentials:(id)arg5 ;
-(void)saveUnsubmittedFormDataFromRemovedFrameIfNecessary:(id)arg1 page:(const Page*)arg2 frame:(const Frame*)arg3 sourceFrame:(const Frame*)arg4 passwordGenerationCredentials:(id)arg5 ;
-(id)autogeneratedPasswordIfAllowedForURL:(id)arg1 frame:(const Frame*)arg2 formMetadata:(id)arg3 textField:(id)arg4 ;
-(char)shouldOfferAddressBookAutoFillInTextField:(id)arg1 formMetadata:(id)arg2 ;
-(id)preferredAddressLabelForContact:(id)arg1 ;
-(id)preferredAddressLabel;
-(void)autoFillActiveFormOrBestFormForPageLevelAutoFillInViewController:(id)arg1 metadataProvider:(id)arg2 autoFillDataType:(long long)arg3 contactLabel:(id)arg4 multiRoundAutoFillManager:(id)arg5 contact:(id)arg6 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(char)arg7 ;
-(BOOL)mayPrefillInFrame:(const Frame*)arg1 ;
-(void)showFlexibleContactsAutoFillUIForCompletionController:(FormAddressBookAutoFillCompletionController*)arg1 metadataProvider:(id)arg2 contactLabel:(id)arg3 ;
-(void)willSubmitFormInPage:(const Page*)arg1 toFrame:(const Frame*)arg2 fromFrame:(const Frame*)arg3 values:(id)arg4 userData:(const Type*)arg5 listener:(const FormSubmissionListener*)arg6 ;
-(id)uniqueIDOfMe;
-(char)canSaveGeneratedPasswordsForURL:(id)arg1 ;
-(char)hasAuthenticatedForPasswordAutoFillInClamshellMode;
-(AutoFillLocalAuthenticationManager *)localAuthenticationManager;
-(void)setHasAuthenticatedForPasswordAutoFillInClamshellMode:(char)arg1 ;
-(char)shouldSaveUsernamesAndPasswordsInFrame:(const Frame*)arg1 ;
-(void)notifyKeychainWasDirectlyAffectedBySafari:(id)arg1 ;
-(void)clearClamshellAuthenticationOverrideIfNecessary:(id)arg1 ;
-(id)addressBookMatchesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3 contact:(id)arg4 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(char)arg5 ;
-(id)_addressBookMatchesForValue:(id)arg1 property:(id)arg2 key:(id)arg3 label:(id)arg4 contact:(id)arg5 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(char)arg6 ;
-(id)_peopleWithWBSABProperty:(id)arg1 containingPrefix:(id)arg2 contactStore:(id)arg3 ;
-(int)_performCredentialAutoFillActionForForm:(id)arg1 ofType:(unsigned long long)arg2 inViewController:(id)arg3 isPreFill:(char)arg4 isUserInitiated:(char)arg5 frame:(const Frame*)arg6 ;
-(int)sendAutoFillDataForStandardForm:(id)arg1 inViewController:(id)arg2 frame:(const Frame*)arg3 autoFillDataType:(long long)arg4 contactLabel:(id)arg5 multiRoundAutoFillManager:(id)arg6 contact:(id)arg7 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(char)arg8 ;
-(void)displayNoAutoFillDialogForBrowserContentViewController:(id)arg1 result:(int)arg2 ;
-(void)_handleCredentialAutoFillActionWithSuccess:(char)arg1 shouldSubmit:(char)arg2 browserViewController:(id)arg3 isPreFill:(char)arg4 frameHandle:(id)arg5 mainFrameHandle:(id)arg6 autoFillValues:(id)arg7 formMetadata:(id)arg8 autoFillCredentialMatch:(id)arg9 ;
-(char)_shouldSynchronizeKeychainItems;
-(char)_shouldSaveCreditCardDataInFrame:(const Frame*)arg1 ;
-(void)saveCreditCardDataIfNecessary:(id)arg1 frame:(const Frame*)arg2 sourceFrame:(const Frame*)arg3 exitHandler:(ScopeExitHandler*)arg4 ;
-(char)_shouldSaveFormDataInFrame:(const Frame*)arg1 ;
-(void)willSubmitFormWithCredentials:(id)arg1 shouldPreferAnnotatedCredentials:(char)arg2 toFrame:(const Frame*)arg3 fromFrame:(const Frame*)arg4 forceConfirmationIfOverwritingSavedPassword:(char)arg5 passwordGenerationCredentials:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)displayInternetAccountSetupPromptForFrame:(const Frame*)arg1 sourceFrame:(const Frame*)arg2 userName:(id)arg3 password:(id)arg4 ;
-(char)_shouldSaveUsernamesAndPasswordsInFrame:(const Frame*)arg1 isGeneratedPassword:(char)arg2 ;
-(void)_saveFormDataIfNecessary:(id)arg1 page:(const Page*)arg2 frame:(const Frame*)arg3 sourceFrame:(const Frame*)arg4 values:(id)arg5 forceConfirmationIfOverwritingSavedPassword:(char)arg6 passwordGenerationCredentials:(id)arg7 completionHandler:(/*^block*/id)arg8 ;
-(char)_processCorrectionsIfPossibleForSourceFrame:(const Frame*)arg1 formMetadata:(id)arg2 formValues:(id)arg3 ;
-(void)willSubmitStandardForm:(id)arg1 values:(id)arg2 toFrame:(const Frame*)arg3 fromFrame:(const Frame*)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_findAllContactsWithSameFullNameAsContact:(id)arg1 andGetValuesForContactFormWithCompletionController:(FormAddressBookAutoFillCompletionController*)arg2 metadata:(id)arg3 inDomain:(id)arg4 contactLabel:(id)arg5 ;
-(id)_mutableSetForWBSAddressBookMatches;
-(unsigned long long)_numberOfAddressBookAutoFillableFieldsInControls:(id)arg1 ;
-(unsigned long long)_numberOfAddressBookElementsInControls:(id)arg1 ;
-(char)_savingFormDataIsAllowedInFrame:(const Frame*)arg1 dataContainsGeneratedPassword:(char)arg2 ;
-(id)_ensureKeychainEncryptionProvider;
-(id)_decryptDataUsingInsecureEncryptionKey:(id)arg1 ;
-(id)noAutoFillDialogTitleForResult:(int)arg1 ;
-(id)noAutoFillDialogDetailTextForResult:(int)arg1 ;
-(id)_autoFillCorrectionManager;
-(id)localizedAddressBookDescriptionForTextField:(id)arg1 ;
-(void)verifyKeychainAccessWithContentViewController:(id)arg1 ;
@end

