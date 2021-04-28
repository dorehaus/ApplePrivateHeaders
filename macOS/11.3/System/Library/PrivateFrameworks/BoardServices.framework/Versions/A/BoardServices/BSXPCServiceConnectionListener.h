/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/Versions/A/BoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BoardServices/BoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCServiceConnectionListenerConfiguring.h>
#import <libobjc.A.dylib/BSXPCServiceConnectionParent.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol OS_xpc_object;
@class NSString, BSServiceQuality, NSObject, NSHashTable;

@interface BSXPCServiceConnectionListener : NSObject <BSXPCServiceConnectionListenerConfiguring, BSXPCServiceConnectionParent, BSInvalidatable> {

	NSString* _serviceName;
	unsigned long long _unique;
	NSString* _proem;
	os_unfair_lock_s _lock;
	NSString* _lock_debugDesc;
	NSString* _config_eDesc;
	BSServiceQuality* _config_qos;
	/*^block*/id _lock_connectionHandler;
	/*^block*/id _lock_errorHandler;
	NSObject*<OS_xpc_object> _lock_listener;
	NSHashTable* _lock_childConnections;
	NSObject*<OS_xpc_object> _lock_endpoint;
	char _lock_nonLaunching;
	char _lock_activated;
	char _lock_invalidated;
	char _lock_clientInvalidated;

}

@property (getter=_isInvalidated,nonatomic,readonly) char _invalidated; 
@property (getter=_isClientInvalidated,nonatomic,readonly) char _clientInvalidated; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(void)setErrorHandler:(/*^block*/id)arg1 ;
-(char)_isInvalidated;
-(void)setConnectionHandler:(/*^block*/id)arg1 ;
-(void)setServiceQuality:(id)arg1 ;
-(char)_isClientInvalidated;
-(void)setEndpointDescription:(id)arg1 ;
-(void)_invalidateChildConnection:(id)arg1 ;
@end
