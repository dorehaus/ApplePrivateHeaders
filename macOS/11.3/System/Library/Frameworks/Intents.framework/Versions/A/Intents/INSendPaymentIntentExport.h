/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INPerson, INCurrencyAmount, NSString;


@protocol INSendPaymentIntentExport <NSObject,JSExport>
@property (copy) INPerson * payee; 
@property (copy) INCurrencyAmount * currencyAmount; 
@property (copy) NSString * note; 
@required
-(id)init;
-(NSString *)note;
-(void)setNote:(id)arg1;
-(INCurrencyAmount *)currencyAmount;
-(void)setCurrencyAmount:(id)arg1;
-(INPerson *)payee;
-(void)setPayee:(id)arg1;

@end
