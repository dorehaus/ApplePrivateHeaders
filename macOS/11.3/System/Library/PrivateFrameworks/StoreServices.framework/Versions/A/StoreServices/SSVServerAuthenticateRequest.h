/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreFoundation/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@protocol OS_xpc_object;
@class SSAuthenticationContext, NSObject, NSString;

@interface SSVServerAuthenticateRequest : SSRequest <SSXPCCoding> {

	SSAuthenticationContext* _authenticationContext;
	NSObject*<OS_xpc_object> _dialog;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> encodedDialog;                   //@synthesize dialog=_dialog - In the implementation block
@property (nonatomic,copy) SSAuthenticationContext * authenticationContext;              //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SSAuthenticationContext *)authenticationContext;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithEncodedDialog:(id)arg1 ;
-(void)startWithAuthenticateResponse:(/*^block*/id)arg1 ;
-(NSObject*<OS_xpc_object>)encodedDialog;
@end

