/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreFoundation/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class SSAuthenticationContext, SSLogConfig, UIViewController, NSString;

@interface SSAuthenticateRequest : SSRequest <SSXPCCoding> {

	SSAuthenticationContext* _authenticationContext;
	SSLogConfig* _logConfig;
	UIViewController* __parentViewController;

}

@property (nonatomic,retain) SSLogConfig * logConfig;                                      //@synthesize logConfig=_logConfig - In the implementation block
@property (nonatomic,readonly) NSString * logUUID; 
@property (assign,nonatomic,__weak) UIViewController * _parentViewController;              //@synthesize _parentViewController=__parentViewController - In the implementation block
@property (assign,nonatomic) id<SSAuthenticateRequestDelegate> delegate; 
@property (readonly) SSAuthenticationContext * authenticationContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_isAuthkitEntitled;
+(id)_accountToAuthenticateWithAuthenticationContext:(id)arg1 ;
+(char)localAuthenticationAvailable;
-(id)run;
-(id)init;
-(char)start;
-(UIViewController *)_parentViewController;
-(id)initWithAccount:(id)arg1 ;
-(void)_handleDialogFromError:(id)arg1 ;
-(NSString *)logUUID;
-(SSAuthenticationContext *)authenticationContext;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithAuthenticationContext:(id)arg1 ;
-(void)startWithAuthenticateResponseBlock:(/*^block*/id)arg1 ;
-(char)_shouldRunAuthenticationForAccount:(id)arg1 ;
-(id)_verifyCredentialsOptionsFromUpdateAccountResponse:(id)arg1 skipAuthKit:(char)arg2 ;
-(long long)_responseTypeForError:(id)arg1 ;
-(void)_performRemoteAuthenticationWithCompletion:(/*^block*/id)arg1 ;
-(SSLogConfig *)logConfig;
-(void)setLogConfig:(SSLogConfig *)arg1 ;
-(void)set_parentViewController:(UIViewController *)arg1 ;
@end

