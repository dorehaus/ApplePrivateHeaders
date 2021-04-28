/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSResponseMessageType.h>
#import <libobjc.A.dylib/XSDefinitionProvider.h>

@class EWSEmailAddressType, EWSContactItemType, NSString;

@interface EWSResolutionType : EWSResponseMessageType <XSDefinitionProvider> {

	EWSEmailAddressType* _Mailbox;
	EWSContactItemType* _Contact;

}

@property (nonatomic,retain) EWSEmailAddressType * Mailbox;              //@synthesize Mailbox=_Mailbox - In the implementation block
@property (nonatomic,retain) EWSContactItemType * Contact;               //@synthesize Contact=_Contact - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)definition;
-(void)setContact:(EWSContactItemType *)arg1 ;
-(void)setMailbox:(EWSEmailAddressType *)arg1 ;
-(EWSContactItemType *)Contact;
-(EWSEmailAddressType *)Mailbox;
@end
