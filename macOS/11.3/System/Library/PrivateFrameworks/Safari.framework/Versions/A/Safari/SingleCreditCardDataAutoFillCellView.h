/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/ColorInvertingTableCellView.h>

@class NSString, NSTextField;

@interface SingleCreditCardDataAutoFillCellView : ColorInvertingTableCellView {

	NSString* _displayText;
	NSString* _headerText;
	NSTextField* _singleCreditCardDataDisplayTextField;
	NSTextField* _singleCreditCardDataHeaderTextField;

}

@property (__weak) NSTextField * singleCreditCardDataDisplayTextField;              //@synthesize singleCreditCardDataDisplayTextField=_singleCreditCardDataDisplayTextField - In the implementation block
@property (__weak) NSTextField * singleCreditCardDataHeaderTextField;               //@synthesize singleCreditCardDataHeaderTextField=_singleCreditCardDataHeaderTextField - In the implementation block
@property (nonatomic,copy) NSString * displayText;                                  //@synthesize displayText=_displayText - In the implementation block
@property (nonatomic,copy) NSString * headerText;                                   //@synthesize headerText=_headerText - In the implementation block
+(CGSize)sizeForDisplayText:(id)arg1 headerText:(id)arg2 ;
-(void)awakeFromNib;
-(NSString *)displayText;
-(void)setDisplayText:(NSString *)arg1 ;
-(NSString *)headerText;
-(void)setHeaderText:(NSString *)arg1 ;
-(NSTextField *)singleCreditCardDataDisplayTextField;
-(void)setSingleCreditCardDataDisplayTextField:(NSTextField *)arg1 ;
-(NSTextField *)singleCreditCardDataHeaderTextField;
-(void)setSingleCreditCardDataHeaderTextField:(NSTextField *)arg1 ;
@end

