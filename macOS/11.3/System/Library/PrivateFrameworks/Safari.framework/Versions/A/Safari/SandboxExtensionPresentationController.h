/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SandboxFileExtensionController, SafariSandboxBrokerConnection;

@interface SandboxExtensionPresentationController : NSObject {

	long long _tag;
	SandboxFileExtensionController* _sandboxExtensionController;
	SafariSandboxBrokerConnection* _sandboxBrokerConnection;

}

@property (assign,nonatomic) long long tag;                                                              //@synthesize tag=_tag - In the implementation block
@property (nonatomic,readonly) SandboxFileExtensionController * sandboxExtensionController;              //@synthesize sandboxExtensionController=_sandboxExtensionController - In the implementation block
@property (nonatomic,readonly) SafariSandboxBrokerConnection * sandboxBrokerConnection;                  //@synthesize sandboxBrokerConnection=_sandboxBrokerConnection - In the implementation block
-(void)setTag:(long long)arg1 ;
-(long long)tag;
-(id)initWithSandboxExtensionController:(id)arg1 ;
-(void)openFileURL:(id)arg1 permissions:(unsigned long long)arg2 delegate:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)openFileURL:(id)arg1 permissions:(unsigned long long)arg2 identifier:(id)arg3 category:(long long)arg4 delegate:(id)arg5 error:(id*)arg6 ;
-(id)initWithSandboxExtensionController:(id)arg1 sandboxBrokerConnection:(id)arg2 ;
-(char)_canReadFileAtURL:(id)arg1 ;
-(char)_canWriteFileAtURL:(id)arg1 ;
-(void)_createTokenForAccessibleURL:(id)arg1 isSecurityScoped:(char)arg2 permissions:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_createOpenPanel;
-(id)_createTokenForAccessibleURL:(id)arg1 isSecurityScoped:(char)arg2 permissions:(unsigned long long)arg3 error:(id*)arg4 ;
-(void)_tryCreatingTokenForURLWithoutUI:(id)arg1 permissions:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_tryCreatingTokenForURLWithAsynchronousUI:(id)arg1 permissions:(unsigned long long)arg2 delegate:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_tryCreatingTokenForURLWithoutUI:(id)arg1 permissions:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)_tryCreatingTokenForURLWithSynchronousUI:(id)arg1 permissions:(unsigned long long)arg2 identifier:(id)arg3 category:(long long)arg4 delegate:(id)arg5 error:(id*)arg6 ;
-(SandboxFileExtensionController *)sandboxExtensionController;
-(SafariSandboxBrokerConnection *)sandboxBrokerConnection;
@end

