/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, NSDictionary, NSArray;

@interface WBSFormControlMetadata : NSObject <NSSecureCoding, NSCopying, NSMutableCopying> {

	NSString* _addressBookLabel;
	NSString* _associatedUsername;
	NSString* _fieldClass;
	NSString* _fieldID;
	NSString* _fieldName;
	NSString* _tagName;
	NSString* _uniqueID;
	NSString* _nextControlUniqueID;
	NSString* _placeholder;
	NSString* _value;
	NSString* _passwordRules;
	NSString* _requiredFormatForDateTimeInput;
	NSDictionary* _radioButtonInfo;
	NSDictionary* _annotations;
	NSArray* _selectElementInfo;
	NSArray* _autocompleteTokens;
	NSArray* _ancestorFrameURLs;
	double _rectLeft;
	double _rectTop;
	double _rectWidth;
	double _rectHeight;
	SCD_Union_WB2 _flags;
	int _size;
	int _maxLength;
	int _minLength;
	int _selectionStart;
	int _selectionLength;
	int _autoFillButtonType;
	int _lastAutoFillButtonType;

}

@property (nonatomic,copy,readonly) NSString * addressBookLabel;                                     //@synthesize addressBookLabel=_addressBookLabel - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * annotations;                                      //@synthesize annotations=_annotations - In the implementation block
@property (nonatomic,copy,readonly) NSArray * autocompleteTokens;                                    //@synthesize autocompleteTokens=_autocompleteTokens - In the implementation block
@property (nonatomic,copy,readonly) NSString * associatedUsername;                                   //@synthesize associatedUsername=_associatedUsername - In the implementation block
@property (nonatomic,copy,readonly) NSString * passwordRules;                                        //@synthesize passwordRules=_passwordRules - In the implementation block
@property (nonatomic,copy,readonly) NSString * fieldClass;                                           //@synthesize fieldClass=_fieldClass - In the implementation block
@property (nonatomic,copy,readonly) NSString * fieldID;                                              //@synthesize fieldID=_fieldID - In the implementation block
@property (nonatomic,copy,readonly) NSString * fieldName;                                            //@synthesize fieldName=_fieldName - In the implementation block
@property (nonatomic,copy,readonly) NSString * tagName;                                              //@synthesize tagName=_tagName - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniqueID;                                             //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,copy,readonly) NSString * nextControlUniqueID;                                  //@synthesize nextControlUniqueID=_nextControlUniqueID - In the implementation block
@property (nonatomic,copy,readonly) NSString * placeholder;                                          //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,copy,readonly) NSString * requiredFormatForDateTimeInput;                       //@synthesize requiredFormatForDateTimeInput=_requiredFormatForDateTimeInput - In the implementation block
@property (nonatomic,copy,readonly) NSString * value;                                                //@synthesize value=_value - In the implementation block
@property (getter=isVisible,nonatomic,readonly) char visible; 
@property (getter=isActive,nonatomic,readonly) char active; 
@property (getter=isDisabled,nonatomic,readonly) char disabled; 
@property (getter=isReadOnly,nonatomic,readonly) char readOnly; 
@property (getter=isTextField,nonatomic,readonly) char textField; 
@property (getter=isSecureTextField,nonatomic,readonly) char secureTextField; 
@property (getter=isAutoFilledTextField,nonatomic,readonly) char autoFilledTextField; 
@property (getter=isUserEditedTextField,nonatomic,readonly) char userEditedTextField; 
@property (getter=isLabeledUsernameField,nonatomic,readonly) char labeledUsernameField; 
@property (nonatomic,readonly) char disallowsAutocomplete; 
@property (nonatomic,readonly) char claimsToBeCurrentPasswordViaAutocompleteAttribute; 
@property (nonatomic,readonly) char claimsToBeNewPasswordViaAutocompleteAttribute; 
@property (nonatomic,readonly) char claimsToBeUsernameViaAutocompleteAttribute; 
@property (nonatomic,readonly) char looksLikeCreditCardCardholderField; 
@property (nonatomic,readonly) char looksLikeCreditCardCompositeExpirationDateField; 
@property (nonatomic,readonly) char looksLikeCreditCardNumberField; 
@property (nonatomic,readonly) char looksLikeCreditCardSecurityCodeField; 
@property (nonatomic,readonly) char looksLikeCreditCardTypeField; 
@property (nonatomic,readonly) char looksLikeDayField; 
@property (nonatomic,readonly) char looksLikeMonthField; 
@property (nonatomic,readonly) char looksLikeYearField; 
@property (nonatomic,readonly) char looksLikeOneTimeCodeField; 
@property (nonatomic,readonly) char looksLikeIgnoredDataTypeField; 
@property (nonatomic,readonly) char looksLikePasswordCredentialField; 
@property (nonatomic,copy,readonly) NSDictionary * radioButtonInfo;                                  //@synthesize radioButtonInfo=_radioButtonInfo - In the implementation block
@property (nonatomic,copy,readonly) NSArray * selectElementInfo;                                     //@synthesize selectElementInfo=_selectElementInfo - In the implementation block
@property (nonatomic,readonly) double rectLeft;                                                      //@synthesize rectLeft=_rectLeft - In the implementation block
@property (nonatomic,readonly) double rectTop;                                                       //@synthesize rectTop=_rectTop - In the implementation block
@property (nonatomic,readonly) double rectWidth;                                                     //@synthesize rectWidth=_rectWidth - In the implementation block
@property (nonatomic,readonly) double rectHeight;                                                    //@synthesize rectHeight=_rectHeight - In the implementation block
@property (nonatomic,readonly) unsigned long long size; 
@property (nonatomic,readonly) unsigned long long maxLength; 
@property (nonatomic,readonly) unsigned long long minLength; 
@property (nonatomic,readonly) unsigned long long selectionStart; 
@property (nonatomic,readonly) unsigned long long selectionLength; 
@property (nonatomic,readonly) long long autoFillButtonType; 
@property (nonatomic,readonly) long long lastAutoFillButtonType; 
@property (nonatomic,readonly) long long oneTimeCodeFieldClassification; 
@property (nonatomic,readonly) NSArray * ancestorFrameURLs;                                          //@synthesize ancestorFrameURLs=_ancestorFrameURLs - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)size;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(char)isActive;
-(NSString *)value;
-(NSString *)placeholder;
-(NSString *)uniqueID;
-(NSDictionary *)dictionaryRepresentation;
-(char)isVisible;
-(char)isReadOnly;
-(NSString *)tagName;
-(char)isDisabled;
-(NSString *)fieldName;
-(unsigned long long)minLength;
-(unsigned long long)maxLength;
-(NSDictionary *)annotations;
-(unsigned long long)selectionStart;
-(char)isTextField;
-(id)initWithMetadata:(id)arg1 ;
-(char)disallowsAutocomplete;
-(char)claimsToBeCurrentPasswordViaAutocompleteAttribute;
-(char)claimsToBeNewPasswordViaAutocompleteAttribute;
-(char)claimsToBeUsernameViaAutocompleteAttribute;
-(char)looksLikeCreditCardCardholderField;
-(char)looksLikeCreditCardCompositeExpirationDateField;
-(char)looksLikeCreditCardNumberField;
-(char)looksLikeCreditCardSecurityCodeField;
-(char)looksLikeCreditCardTypeField;
-(char)looksLikeDayField;
-(char)looksLikeMonthField;
-(char)looksLikeYearField;
-(char)looksLikeIgnoredDataTypeField;
-(char)looksLikePasswordCredentialField;
-(char)looksLikeOneTimeCodeField;
-(char)isSecureTextField;
-(char)isAutoFilledTextField;
-(char)isUserEditedTextField;
-(char)isLabeledUsernameField;
-(unsigned long long)selectionLength;
-(long long)autoFillButtonType;
-(long long)lastAutoFillButtonType;
-(long long)oneTimeCodeFieldClassification;
-(NSString *)addressBookLabel;
-(NSArray *)autocompleteTokens;
-(NSString *)associatedUsername;
-(NSString *)passwordRules;
-(NSString *)fieldClass;
-(NSString *)fieldID;
-(NSString *)nextControlUniqueID;
-(NSString *)requiredFormatForDateTimeInput;
-(NSDictionary *)radioButtonInfo;
-(NSArray *)selectElementInfo;
-(double)rectLeft;
-(double)rectTop;
-(double)rectWidth;
-(double)rectHeight;
-(NSArray *)ancestorFrameURLs;
@end

