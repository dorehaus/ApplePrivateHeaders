/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/PKForegroundActiveArbiterObserver.h>

@protocol PKForegroundActiveArbiter, NSObject, PKInvalidatable, PKXPCServiceDelegate;
@class NSXPCInterface, NSString, NSXPCConnection, PKXPCForwarder;

@interface PKXPCService : NSObject <PKForegroundActiveArbiterObserver> {

	NSXPCInterface* _remoteObjectInterface;
	NSXPCInterface* _exportedObjectInterface;
	NSString* _className;
	NSString* _serviceResumedNotificationName;
	os_unfair_lock_s _lock;
	NSXPCConnection* _connection;
	PKXPCForwarder* _templateExportedProxy;
	PKXPCForwarder* _currentExportedProxy;
	char _suspendCallbacks;
	char _forceConnectionOnResume;
	id<PKForegroundActiveArbiter> _foregroundActiveArbiter;
	id<NSObject> _foregroundListener;
	id<NSObject> _backgroundListener;
	id<PKInvalidatable> _serviceResumedListenerInvalidater;
	id<PKXPCServiceDelegate> _delegate;
	NSString* _machServiceName;
	unsigned long long _options;

}

@property (nonatomic,readonly) NSString * machServiceName;                          //@synthesize machServiceName=_machServiceName - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                          //@synthesize options=_options - In the implementation block
@property (assign,nonatomic,__weak) id<PKXPCServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isSuspended,nonatomic,readonly) char suspended; 
@property (nonatomic,readonly) char connectionEstablished; 
@property (assign,nonatomic) char forceConnectionOnResume; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setForegroundActiveArbiter:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id<PKXPCServiceDelegate>)delegate;
-(void)setDelegate:(id<PKXPCServiceDelegate>)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(unsigned long long)options;
-(id)_connection;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxy;
-(char)isSuspended;
-(NSString *)machServiceName;
-(id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObjectInterface:(id)arg3 exportedObject:(id)arg4 serviceResumedNotificationName:(id)arg5 options:(unsigned long long)arg6 ;
-(id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObjectInterface:(id)arg3 exportedObject:(id)arg4 serviceResumedNotificationName:(id)arg5 ;
-(id)remoteObjectProxyWithFailureHandler:(/*^block*/id)arg1 ;
-(id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObjectInterface:(id)arg3 exportedObject:(id)arg4 ;
-(void)_registerForApplicationLifeCycleNotifications;
-(void)_registerForServiceListenerResumedNotifications;
-(void)_establishServiceConnection;
-(void)_unregisterForServiceListenerResumedNotifications;
-(void)_unregisterForApplicationLifeCycleNotifications;
-(void)_invalidateConnectionIfPossible;
-(/*^block*/id)_newWrappedErrorHandlerForHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)_newErrorHandlerWithSemaphore:(id)arg1 ;
-(id)existingRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_createConnectionIfPossible:(char)arg1 ;
-(void)_sendResumed;
-(void)_sendSuspended;
-(void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(SCD_Struct_PK12)arg2 ;
-(id)remoteObjectProxyWithSemaphore:(id)arg1 ;
-(id)existingRemoteObjectProxy;
-(id)existingSynchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(char)connectionEstablished;
-(void)setForceConnectionOnResume:(char)arg1 ;
-(char)forceConnectionOnResume;
@end

