/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID;

@interface PKAppletSubcredentialSharingInvitationRequest : NSObject <NSSecureCoding> {

	NSString* _credentialIdentifier;
	NSString* _sharedCredentialIdentifier;
	NSUUID* _sharingSessionIdentifier;
	long long _deviceType;

}

@property (nonatomic,copy) NSString * credentialIdentifier;                    //@synthesize credentialIdentifier=_credentialIdentifier - In the implementation block
@property (nonatomic,copy) NSString * sharedCredentialIdentifier;              //@synthesize sharedCredentialIdentifier=_sharedCredentialIdentifier - In the implementation block
@property (nonatomic,retain) NSUUID * sharingSessionIdentifier;                //@synthesize sharingSessionIdentifier=_sharingSessionIdentifier - In the implementation block
@property (assign,nonatomic) long long deviceType;                             //@synthesize deviceType=_deviceType - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)deviceType;
-(void)setDeviceType:(long long)arg1 ;
-(NSString *)credentialIdentifier;
-(void)setCredentialIdentifier:(NSString *)arg1 ;
-(NSString *)sharedCredentialIdentifier;
-(void)setSharedCredentialIdentifier:(NSString *)arg1 ;
-(NSUUID *)sharingSessionIdentifier;
-(void)setSharingSessionIdentifier:(NSUUID *)arg1 ;
@end

