/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, WBSSingleCreditCardData;

@interface SingleCreditCardDataCompletionListItemInformation : NSObject {

	NSString* _displayText;
	NSString* _headerTextForCompletionList;
	NSString* _headerTextForFunctionBar;
	WBSSingleCreditCardData* _singleCreditCardData;

}

@property (nonatomic,copy,readonly) NSString * displayText;                                 //@synthesize displayText=_displayText - In the implementation block
@property (nonatomic,copy,readonly) NSString * headerTextForCompletionList;                 //@synthesize headerTextForCompletionList=_headerTextForCompletionList - In the implementation block
@property (nonatomic,copy,readonly) NSString * headerTextForFunctionBar;                    //@synthesize headerTextForFunctionBar=_headerTextForFunctionBar - In the implementation block
@property (nonatomic,readonly) WBSSingleCreditCardData * singleCreditCardData;              //@synthesize singleCreditCardData=_singleCreditCardData - In the implementation block
-(id)init;
-(NSString *)displayText;
-(id)initWithSingleCreditCardData:(id)arg1 displayText:(id)arg2 headerTextForCompletionList:(id)arg3 headerTextForFunctionBar:(id)arg4 ;
-(WBSSingleCreditCardData *)singleCreditCardData;
-(NSString *)headerTextForCompletionList;
-(NSString *)headerTextForFunctionBar;
@end

