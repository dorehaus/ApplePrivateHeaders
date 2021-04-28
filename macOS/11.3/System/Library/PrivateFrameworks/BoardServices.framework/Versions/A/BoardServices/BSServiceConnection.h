/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/Versions/A/BoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BoardServices/BoardServices-Structs.h>
#import <libobjc.A.dylib/BSServiceConnectionContext.h>
#import <libobjc.A.dylib/BSXPCServiceConnectionMessaging.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol NSCopying;
@class BSProcessHandle, BSXPCServiceConnection, _BSServiceConnectionConfiguration, BSAtomicSignal, NSString;

@interface BSServiceConnection : NSObject <BSServiceConnectionContext, BSXPCServiceConnectionMessaging, BSInvalidatable> {

	BSXPCServiceConnection* _connection;
	id<NSCopying> _userInfo;
	os_unfair_lock_s _lock;
	_BSServiceConnectionConfiguration* _lock_config;
	BSAtomicSignal* _lock_activatedSignal;
	char _lock_invalidated;
	char _lock_noAssertInvalidatedOnDealloc;
	NSString* _service;
	NSString* _instance;

}

@property (nonatomic,readonly) BSProcessHandle * remoteProcess; 
@property (nonatomic,copy,readonly) NSString * service;                      //@synthesize service=_service - In the implementation block
@property (nonatomic,copy,readonly) NSString * instance;                     //@synthesize instance=_instance - In the implementation block
@property (nonatomic,readonly) id remoteTarget; 
@property (nonatomic,readonly) id<NSCopying> userInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentContext;
+(id)connectionWithEndpoint:(id)arg1 clientContextBuilder:(/*^block*/id)arg2 ;
+(id)connectionWithEndpoint:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id)init;
-(id<NSCopying>)userInfo;
-(void)invalidate;
-(void)activate;
-(NSString *)instance;
-(NSString *)service;
-(id)createMessage;
-(void)configureConnection:(/*^block*/id)arg1 ;
-(BSProcessHandle *)remoteProcess;
-(id)remoteTarget;
-(void)_configureConnection:(/*^block*/id)arg1 ;
-(id)createMessageWithCompletion:(/*^block*/id)arg1 ;
@end

