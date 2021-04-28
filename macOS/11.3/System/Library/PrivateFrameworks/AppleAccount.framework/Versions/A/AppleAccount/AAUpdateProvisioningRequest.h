/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/Versions/A/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class ACAccount, NSString;

@interface AAUpdateProvisioningRequest : AARequest {

	ACAccount* _account;
	NSString* _authToken;

}

@property (nonatomic,retain) ACAccount * account;              //@synthesize account=_account - In the implementation block
@property (nonatomic,copy) NSString * authToken;               //@synthesize authToken=_authToken - In the implementation block
+(Class)responseClass;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(NSString *)authToken;
-(void)setAuthToken:(NSString *)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(id)urlRequest;
-(id)urlString;
-(id)urlCredential;
-(id)initWithURLString:(id)arg1 account:(id)arg2 ;
-(id)initWithAccount:(id)arg1 token:(id)arg2 ;
@end

