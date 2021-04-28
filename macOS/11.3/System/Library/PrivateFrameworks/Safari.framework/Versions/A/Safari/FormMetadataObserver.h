/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FormMetadataObserver <NSObject>
@required
-(void)textDidChangeInTextFieldDelayCompletedForTextFieldWithUniqueID:(id)arg1 inFrame:(id)arg2;
-(void)textDidChangeInTextFieldWithMetadata:(id)arg1 formMetadata:(id)arg2 inFrame:(id)arg3;
-(void)passwordFieldFocusedInFrame:(id)arg1 formMetadata:(id)arg2 passwordFieldMetadata:(id)arg3;
-(void)passwordFieldBlurredInFrame:(id)arg1 formMetadata:(id)arg2 passwordFieldMetadata:(id)arg3;
-(void)creditCardFieldFocusedInFrame:(id)arg1 formMetadata:(id)arg2 creditCardFieldMetadata:(id)arg3;
-(void)creditCardFieldBlurredInFrame:(id)arg1 formMetadata:(id)arg2 creditCardFieldMetadata:(id)arg3;
-(void)usernameFieldFocusedInFrame:(id)arg1 formMetadata:(id)arg2 usernameFieldMetadata:(id)arg3;
-(void)usernameFieldBlurredInFrame:(id)arg1 formMetadata:(id)arg2 usernameFieldMetadata:(id)arg3;
-(void)sensitiveFieldFocusedInFrame:(id)arg1;
-(void)autoFilledFormWithMetadata:(id)arg1 inFrame:(id)arg2 shouldSubmit:(char)arg3;
-(void)addressBookAutoFillableFieldFocused:(id)arg1 textFieldMetadata:(id)arg2 formMetadata:(id)arg3 inFrame:(id)arg4;
-(void)addressBookAutoFillableFieldBlurredInFrame:(id)arg1 textFieldMetadata:(id)arg2;
-(void)oneTimeCodeFieldFocused:(id)arg1 textFieldMetadata:(id)arg2 formMetadata:(id)arg3 inFrame:(id)arg4;
-(void)oneTimeCodeFieldBlurredInFrame:(id)arg1 textFieldMetadata:(id)arg2;
-(void)otherCreditCardFieldOrUnidentifiedFieldFocusedInFrame:(id)arg1 formMetadata:(id)arg2 textFieldMetadata:(id)arg3;
-(void)otherCreditCardFieldOrUnidentifiedFieldBlurredInFrame:(id)arg1 formMetadata:(id)arg2 textFieldMetadata:(id)arg3;

@end

