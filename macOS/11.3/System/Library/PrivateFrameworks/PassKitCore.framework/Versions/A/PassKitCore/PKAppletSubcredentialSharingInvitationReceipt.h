/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID, PKSharedAppletSubcredentialMetadata;

@interface PKAppletSubcredentialSharingInvitationReceipt : NSObject <NSSecureCoding> {

	char _forWatch;
	char _requiresAuthentication;
	NSString* _identifier;
	NSUUID* _sharingSessionIdentifier;
	NSString* _recipientIdentifier;
	PKSharedAppletSubcredentialMetadata* _metadata;
	unsigned long long _status;

}

@property (nonatomic,copy) NSString * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSUUID * sharingSessionIdentifier;                           //@synthesize sharingSessionIdentifier=_sharingSessionIdentifier - In the implementation block
@property (assign,getter=isForWatch,nonatomic) char forWatch;                             //@synthesize forWatch=_forWatch - In the implementation block
@property (assign,nonatomic) char requiresAuthentication;                                 //@synthesize requiresAuthentication=_requiresAuthentication - In the implementation block
@property (nonatomic,copy) NSString * recipientIdentifier;                                //@synthesize recipientIdentifier=_recipientIdentifier - In the implementation block
@property (nonatomic,retain) PKSharedAppletSubcredentialMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) unsigned long long status;                                   //@synthesize status=_status - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned long long)status;
-(PKSharedAppletSubcredentialMetadata *)metadata;
-(void)setMetadata:(PKSharedAppletSubcredentialMetadata *)arg1 ;
-(void)setStatus:(unsigned long long)arg1 ;
-(char)requiresAuthentication;
-(void)setRequiresAuthentication:(char)arg1 ;
-(NSUUID *)sharingSessionIdentifier;
-(void)setSharingSessionIdentifier:(NSUUID *)arg1 ;
-(NSString *)recipientIdentifier;
-(void)setForWatch:(char)arg1 ;
-(void)setRecipientIdentifier:(NSString *)arg1 ;
-(char)isForWatch;
-(char)isEqualToInvitationReceipt:(id)arg1 ;
-(id)initWithInvitationData:(id)arg1 recipientIdentifier:(id)arg2 ;
@end

