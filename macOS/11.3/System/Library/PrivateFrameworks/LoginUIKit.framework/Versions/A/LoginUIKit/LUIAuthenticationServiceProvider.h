/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/LoginUIKit.framework/Versions/A/LoginUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, AuthenticationHintsDelegate;
@class NSObject, NSString, NSXPCConnection, NSError;

@interface LUIAuthenticationServiceProvider : NSObject {

	NSObject*<OS_dispatch_queue> providerQueue;
	NSString* _serviceName;
	NSString* _userName;
	NSXPCConnection* _serviceConnection;
	NSError* _error;
	char _sessionUnlocked;
	char _serviceActive;
	id<AuthenticationHintsDelegate> _hintsDelegate;
	long long _mode;

}

@property (copy) NSString * userName;                                          //@synthesize userName=_userName - In the implementation block
@property (copy) NSError * error;                                              //@synthesize error=_error - In the implementation block
@property (assign) char serviceActive;                                         //@synthesize serviceActive=_serviceActive - In the implementation block
@property (assign) char sessionUnlocked;                                       //@synthesize sessionUnlocked=_sessionUnlocked - In the implementation block
@property (copy) NSString * serviceName;                                       //@synthesize serviceName=_serviceName - In the implementation block
@property (assign) long long mode;                                             //@synthesize mode=_mode - In the implementation block
@property (retain) NSXPCConnection * serviceConnection;                        //@synthesize serviceConnection=_serviceConnection - In the implementation block
@property (assign) id<AuthenticationHintsDelegate> hintsDelegate;              //@synthesize hintsDelegate=_hintsDelegate - In the implementation block
-(void)activateWithUserName:(id)arg1 mode:(long long)arg2 withOptions:(id)arg3 ;
-(void)activateWithUserName:(id)arg1 sessionUnlocked:(char)arg2 ;
-(void)setSessionUnlocked:(char)arg1 ;
-(void)setServiceActive:(char)arg1 ;
-(char)sessionUnlocked;
-(void)dealloc;
-(NSError *)error;
-(void)setMode:(long long)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSString *)userName;
-(long long)mode;
-(id)initWithServiceName:(id)arg1 ;
-(NSString *)serviceName;
-(void)setUserName:(NSString *)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(NSXPCConnection *)serviceConnection;
-(void)setServiceConnection:(NSXPCConnection *)arg1 ;
-(id)connectionWithErrorHandler:(/*^block*/id)arg1 ;
-(char)serviceActive;
-(void)setHintsDelegate:(id<AuthenticationHintsDelegate>)arg1 ;
-(id<AuthenticationHintsDelegate>)hintsDelegate;
-(void)deactivateWithContext:(id)arg1 ;
@end

