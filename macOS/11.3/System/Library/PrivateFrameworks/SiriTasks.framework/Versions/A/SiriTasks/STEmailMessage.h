/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/Versions/A/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/STSiriModelObject.h>

@class NSString, NSURL, STPerson, NSArray;

@interface STEmailMessage : STSiriModelObject {

	NSString* _messageBody;
	NSURL* _messageIdentifier;
	STPerson* _sender;
	NSString* _subject;
	long long _type;
	NSArray* _toRecipients;
	NSArray* _ccRecipients;
	NSArray* _bccRecipients;
	NSArray* _receivingAddresses;

}

@property (nonatomic,copy) NSString * messageBody;                      //@synthesize messageBody=_messageBody - In the implementation block
@property (nonatomic,retain) NSURL * messageIdentifier;                 //@synthesize messageIdentifier=_messageIdentifier - In the implementation block
@property (nonatomic,retain) STPerson * sender;                         //@synthesize sender=_sender - In the implementation block
@property (nonatomic,copy) NSString * subject;                          //@synthesize subject=_subject - In the implementation block
@property (assign,nonatomic) long long type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSArray * toRecipients;                    //@synthesize toRecipients=_toRecipients - In the implementation block
@property (nonatomic,retain) NSArray * ccRecipients;                    //@synthesize ccRecipients=_ccRecipients - In the implementation block
@property (nonatomic,retain) NSArray * bccRecipients;                   //@synthesize bccRecipients=_bccRecipients - In the implementation block
@property (nonatomic,retain) NSArray * receivingAddresses;              //@synthesize receivingAddresses=_receivingAddresses - In the implementation block
+(char)supportsSecureCoding;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(STPerson *)sender;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)subject;
-(NSString *)messageBody;
-(void)setSender:(STPerson *)arg1 ;
-(void)setMessageIdentifier:(NSURL *)arg1 ;
-(NSArray *)receivingAddresses;
-(void)setReceivingAddresses:(NSArray *)arg1 ;
-(NSURL *)messageIdentifier;
-(void)setToRecipients:(NSArray *)arg1 ;
-(id)_aceContextObjectValue;
-(void)setMessageBody:(NSString *)arg1 ;
-(void)setCcRecipients:(NSArray *)arg1 ;
-(void)setBccRecipients:(NSArray *)arg1 ;
-(NSArray *)toRecipients;
-(NSArray *)ccRecipients;
-(NSArray *)bccRecipients;
-(id)_personAttributesForRecipients:(id)arg1 ;
@end

