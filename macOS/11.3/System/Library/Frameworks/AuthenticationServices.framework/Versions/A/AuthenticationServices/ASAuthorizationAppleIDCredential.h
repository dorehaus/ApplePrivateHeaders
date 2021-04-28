/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/Versions/A/AuthenticationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthenticationServices/AuthenticationServices-Structs.h>
#import <libobjc.A.dylib/ASAuthorizationCredential.h>

@class NSString, NSArray, NSData, NSPersonNameComponents;

@interface ASAuthorizationAppleIDCredential : NSObject <ASAuthorizationCredential> {

	NSString* _user;
	NSArray* _authorizedScopes;
	NSString* _state;
	NSData* _authorizationCode;
	NSData* _identityToken;
	NSString* _email;
	NSPersonNameComponents* _fullName;
	long long _realUserStatus;
	NSData* _accessToken;
	NSData* _refreshToken;

}

@property (nonatomic,copy) NSData * accessToken;                             //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,copy) NSData * refreshToken;                            //@synthesize refreshToken=_refreshToken - In the implementation block
@property (nonatomic,copy) NSData * identityToken;                           //@synthesize identityToken=_identityToken - In the implementation block
@property (nonatomic,copy) NSData * authorizationCode;                       //@synthesize authorizationCode=_authorizationCode - In the implementation block
@property (nonatomic,copy) NSString * state;                                 //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * email;                                 //@synthesize email=_email - In the implementation block
@property (nonatomic,copy) NSPersonNameComponents * fullName;                //@synthesize fullName=_fullName - In the implementation block
@property (assign,nonatomic) long long realUserStatus;                       //@synthesize realUserStatus=_realUserStatus - In the implementation block
@property (nonatomic,copy,readonly) NSString * user;                         //@synthesize user=_user - In the implementation block
@property (nonatomic,copy,readonly) NSArray * authorizedScopes;              //@synthesize authorizedScopes=_authorizedScopes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)state;
-(NSString *)user;
-(void)setState:(NSString *)arg1 ;
-(NSPersonNameComponents *)fullName;
-(NSString *)email;
-(void)setAccessToken:(NSData *)arg1 ;
-(NSData *)accessToken;
-(NSData *)refreshToken;
-(void)setFullName:(NSPersonNameComponents *)arg1 ;
-(void)setEmail:(NSString *)arg1 ;
-(NSData *)identityToken;
-(id)initWithUser:(id)arg1 authorizedScopes:(id)arg2 ;
-(void)setIdentityToken:(NSData *)arg1 ;
-(NSData *)authorizationCode;
-(void)setAuthorizationCode:(NSData *)arg1 ;
-(NSArray *)authorizedScopes;
-(void)setRealUserStatus:(long long)arg1 ;
-(long long)realUserStatus;
-(void)setRefreshToken:(NSData *)arg1 ;
@end

