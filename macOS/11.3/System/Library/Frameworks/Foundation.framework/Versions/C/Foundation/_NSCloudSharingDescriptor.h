/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _NSCloudSharingDescriptor : NSObject <NSSecureCoding> {

	long long _operation;
	NSString* _sharedContentType;
	long long _numberOfInvitations;
	char _invitationsSentViaThirdPartyService;
	char _publicShare;

}

@property (assign) long long operation;                                   //@synthesize operation=_operation - In the implementation block
@property (assign) char invitationsSentViaThirdPartyService;              //@synthesize invitationsSentViaThirdPartyService=_invitationsSentViaThirdPartyService - In the implementation block
@property (assign) char publicShare;                                      //@synthesize publicShare=_publicShare - In the implementation block
@property (assign) long long numberOfInvitations;                         //@synthesize numberOfInvitations=_numberOfInvitations - In the implementation block
@property (copy) NSString * sharedContentType;                            //@synthesize sharedContentType=_sharedContentType - In the implementation block
+(char)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)operation;
-(id)_variantSubstrings;
-(void)setOperation:(long long)arg1 ;
-(char)invitationsSentViaThirdPartyService;
-(void)setInvitationsSentViaThirdPartyService:(char)arg1 ;
-(char)publicShare;
-(void)setPublicShare:(char)arg1 ;
-(long long)numberOfInvitations;
-(void)setNumberOfInvitations:(long long)arg1 ;
-(NSString *)sharedContentType;
-(void)setSharedContentType:(NSString *)arg1 ;
@end

