/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFParameter.h>
#import <libobjc.A.dylib/WFParameterDialogProvider.h>

@class NSString;

@interface WFTextInputParameter : WFParameter <WFParameterDialogProvider> {

	char _secureTextEntry;
	char _smartQuotesDisabled;
	char _smartDashesDisabled;
	char _multiline;
	char _processesIntoContentItems;
	NSString* _textContentType;
	NSString* _prefix;
	long long _keyboardType;
	long long _autocapitalizationType;
	long long _autocorrectionType;
	long long _textAlignment;
	unsigned long long _hintDisplayMode;
	unsigned long long _syntaxHighlightingType;

}

@property (nonatomic,copy) NSString * prefix;                                              //@synthesize prefix=_prefix - In the implementation block
@property (getter=isSecureTextEntry,nonatomic,readonly) char secureTextEntry;              //@synthesize secureTextEntry=_secureTextEntry - In the implementation block
@property (nonatomic,readonly) long long keyboardType;                                     //@synthesize keyboardType=_keyboardType - In the implementation block
@property (nonatomic,copy,readonly) NSString * textContentType;                            //@synthesize textContentType=_textContentType - In the implementation block
@property (nonatomic,readonly) long long autocapitalizationType;                           //@synthesize autocapitalizationType=_autocapitalizationType - In the implementation block
@property (nonatomic,readonly) long long autocorrectionType;                               //@synthesize autocorrectionType=_autocorrectionType - In the implementation block
@property (nonatomic,readonly) char smartQuotesDisabled;                                   //@synthesize smartQuotesDisabled=_smartQuotesDisabled - In the implementation block
@property (nonatomic,readonly) char smartDashesDisabled;                                   //@synthesize smartDashesDisabled=_smartDashesDisabled - In the implementation block
@property (nonatomic,readonly) long long textAlignment;                                    //@synthesize textAlignment=_textAlignment - In the implementation block
@property (getter=isMultiline,nonatomic,readonly) char multiline;                          //@synthesize multiline=_multiline - In the implementation block
@property (nonatomic,readonly) unsigned long long hintDisplayMode;                         //@synthesize hintDisplayMode=_hintDisplayMode - In the implementation block
@property (nonatomic,readonly) unsigned long long syntaxHighlightingType;                  //@synthesize syntaxHighlightingType=_syntaxHighlightingType - In the implementation block
@property (nonatomic,readonly) char processesIntoContentItems;                             //@synthesize processesIntoContentItems=_processesIntoContentItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)prefix;
-(long long)keyboardType;
-(long long)autocorrectionType;
-(long long)textAlignment;
-(void)setPrefix:(NSString *)arg1 ;
-(char)isMultiline;
-(void)setLocalizedPlaceholder:(id)arg1 ;
-(long long)autocapitalizationType;
-(NSString *)textContentType;
-(char)isSecureTextEntry;
-(char)smartQuotesDisabled;
-(char)smartDashesDisabled;
-(id)initWithDefinition:(id)arg1 ;
-(Class)singleStateClass;
-(id)defaultSupportedVariableTypes;
-(void)createDialogRequestWithAttribution:(id)arg1 defaultState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)parameterStateFromDialogResponse:(id)arg1 ;
-(id)defaultSerializedRepresentation;
-(char)shouldAlignLabels;
-(id)hintForState:(id)arg1 ;
-(id)createDialogTextFieldConfigurationWithDefaultState:(id)arg1 ;
-(unsigned long long)hintDisplayMode;
-(unsigned long long)syntaxHighlightingType;
-(char)processesIntoContentItems;
@end

