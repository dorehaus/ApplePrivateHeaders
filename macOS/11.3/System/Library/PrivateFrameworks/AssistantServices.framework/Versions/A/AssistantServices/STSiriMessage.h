/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/STSiriModelObject.h>

@class STContactAddress, NSString, NSArray, NSURL, NSDate;

@interface STSiriMessage : STSiriModelObject {

	char _outbound;
	STContactAddress* _senderAddress;
	NSString* _senderInternalGUID;
	NSArray* _recipientAddresses;
	NSString* _groupName;
	NSString* _groupNameId;
	NSString* _subjectText;
	NSString* _bodyText;
	NSString* _effect;
	NSURL* _attachmentURL;
	NSDate* _sendDate;
	NSString* _chatIdentifier;

}
+(char)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setGroupName:(id)arg1 ;
-(id)groupName;
-(void)setRecipientAddresses:(id)arg1 ;
-(id)recipientAddresses;
-(id)effect;
-(void)setEffect:(id)arg1 ;
-(id)chatIdentifier;
-(void)setChatIdentifier:(id)arg1 ;
-(id)groupNameId;
-(void)setGroupNameId:(id)arg1 ;
-(id)bodyText;
-(void)setBodyText:(id)arg1 ;
-(id)_aceContextObjectValue;
-(id)attachmentURL;
-(id)sendDate;
-(char)isOutbound;
-(id)subjectText;
-(id)senderAddress;
-(void)setOutbound:(char)arg1 ;
-(void)setSenderAddress:(id)arg1 ;
-(id)senderInternalGUID;
-(void)_setSenderInternalGUID:(id)arg1 ;
-(void)setSubjectText:(id)arg1 ;
-(void)setAttachmentURL:(id)arg1 ;
-(void)setSendDate:(id)arg1 ;
@end

