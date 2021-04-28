/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/Versions/A/AuthenticationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_ASWebAuthenticationSessionRequestHandling.h>
#import <libobjc.A.dylib/ASWebAuthenticationSessionRequestDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, ASWebAuthenticationSessionLaunchAgentProxy, ASWebAuthenticationSessionRequestClient, NSMutableSet, NSString;

@interface ASWebAuthenticationSessionController : NSObject <_ASWebAuthenticationSessionRequestHandling, ASWebAuthenticationSessionRequestDelegate> {

	NSObject*<OS_dispatch_queue> _internalQueue;
	ASWebAuthenticationSessionLaunchAgentProxy* _launchAgentProxy;
	ASWebAuthenticationSessionRequestClient* _client;
	NSMutableSet* _requests;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)cancelAuthenticationSessionRequest:(id)arg1 ;
-(void)beginAuthenticationSessionRequest:(id)arg1 ;
-(void)disconnectFromAuthenticationSessionRequestServer;
-(void)authenticationSessionRequest:(id)arg1 didCancelWithError:(id)arg2 ;
-(void)authenticationSessionRequest:(id)arg1 didCompleteWithCallbackURL:(id)arg2 ;
-(void)_fulfillRequest:(id)arg1 withCallbackURL:(id)arg2 error:(id)arg3 ;
-(void)noteNewRequestsAreAvailable;
@end

