/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/Versions/A/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCharacterSet, TISmartPunctuationOptions;

@interface TISmartPunctuationController : NSObject {

	char _leftSingleQuotationMarkInserted;
	char _leftDoubleQuotationMarkInserted;
	NSCharacterSet* _alphanumericCharacterSet;
	NSCharacterSet* _whitespaceAndNewlineCharacterSet;
	NSCharacterSet* _decimalDigitCharacterSet;
	NSCharacterSet* _punctuationCharacterSet;
	NSCharacterSet* _openerCharacterSet;
	NSCharacterSet* _germanApostrophePrecedingSet;
	NSCharacterSet* _dutchApostropheFollowingSet;
	NSCharacterSet* _cornerBracketCharacterSet;
	NSCharacterSet* _bookTitleMarkCharacterSet;
	NSCharacterSet* _dashCharacterSet;
	NSCharacterSet* _enDashCharacterSet;
	NSCharacterSet* _emDashCharacterSet;
	char _smartQuotesEnabled;
	char _smartDashesEnabled;
	unsigned long long _autoQuoteType;
	TISmartPunctuationOptions* _smartPunctuationOptions;

}

@property (assign,nonatomic) char smartQuotesEnabled;                                          //@synthesize smartQuotesEnabled=_smartQuotesEnabled - In the implementation block
@property (assign,nonatomic) char smartDashesEnabled;                                          //@synthesize smartDashesEnabled=_smartDashesEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long autoQuoteType;                                 //@synthesize autoQuoteType=_autoQuoteType - In the implementation block
@property (nonatomic,retain) TISmartPunctuationOptions * smartPunctuationOptions;              //@synthesize smartPunctuationOptions=_smartPunctuationOptions - In the implementation block
+(id)_chineseContextualVariantMapping;
-(id)init;
-(void)reset;
-(char)smartQuotesEnabled;
-(void)setSmartQuotesEnabled:(char)arg1 ;
-(char)smartDashesEnabled;
-(void)setSmartDashesEnabled:(char)arg1 ;
-(void)_initializeQuoteCharacterSetsIfNecessary;
-(void)_initializeDashCharacterSetsIfNecessary;
-(id)smartPunctuationResultsForString:(id)arg1 ;
-(id)smartPunctuationedStringForString:(id)arg1 ;
-(id)smartPunctuationOutputForInput:(id)arg1 isLockedInput:(char)arg2 documentState:(id)arg3 ;
-(id)_alternatingStringForInputString:(id)arg1 isLockedInput:(char)arg2 hasMarkedText:(char)arg3 ;
-(id)_checkInput:(id)arg1 forContextualQuotesInDocumentState:(id)arg2 ;
-(id)_checkInput:(id)arg1 forContextualChinesePunctuationInDocumentState:(id)arg2 ;
-(id)_checkInput:(id)arg1 forContextualDashesInDocumentState:(id)arg2 ;
-(id)_checkInput:(id)arg1 forContextualEllipsesInDocumentState:(id)arg2 ;
-(unsigned long long)autoQuoteType;
-(void)setAutoQuoteType:(unsigned long long)arg1 ;
-(TISmartPunctuationOptions *)smartPunctuationOptions;
-(void)setSmartPunctuationOptions:(TISmartPunctuationOptions *)arg1 ;
@end

