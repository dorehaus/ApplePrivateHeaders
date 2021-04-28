/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Versions/A/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagement/RMAuthenticationCredential.h>

@class NSString, NSDictionary;

@interface RMGenericAuthenticationCredential : RMAuthenticationCredential {

	NSString* _authenticationScheme;
	NSDictionary* _properties;

}

@property (nonatomic,copy,readonly) NSString * authenticationScheme;              //@synthesize authenticationScheme=_authenticationScheme - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * properties;                    //@synthesize properties=_properties - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)properties;
-(NSString *)authenticationScheme;
-(id)initWithAuthenticationScheme:(id)arg1 properties:(id)arg2 ;
-(char)isEqualToAuthenticationCredential:(id)arg1 ;
@end

