/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/CUMessageSessionXPCClientInterface.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCListenerEndpoint, NSMutableDictionary, NSXPCConnection, NSString;

@interface CUMessageSession : NSObject <CUMessageSessionXPCClientInterface, NSSecureCoding> {

	/*^block*/id _activateHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidateHandler;
	/*^block*/id _invalidationHandler;
	NSXPCListenerEndpoint* _listenerEndpoint;
	/*^block*/id _registerRequestHandler;
	/*^block*/id _sendRequestHandler;
	LogCategory* _ucat;
	char _activateCalled;
	char _invalidateCalled;
	char _invalidateDone;
	NSMutableDictionary* _requestMap;
	NSXPCConnection* _xpcCnx;
	NSString* _label;

}

@property (nonatomic,copy) id activateHandler;                                        //@synthesize activateHandler=_activateHandler - In the implementation block
@property (nonatomic,copy) id invalidateHandler;                                      //@synthesize invalidateHandler=_invalidateHandler - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * listenerEndpoint;                //@synthesize listenerEndpoint=_listenerEndpoint - In the implementation block
@property (nonatomic,copy) id registerRequestHandler;                                 //@synthesize registerRequestHandler=_registerRequestHandler - In the implementation block
@property (nonatomic,copy) id sendRequestHandler;                                     //@synthesize sendRequestHandler=_sendRequestHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
+(char)supportsSecureCoding;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)activate;
-(id)invalidationHandler;
-(void)_invalidated;
-(void)_cleanup;
-(void)_interrupted;
-(NSXPCListenerEndpoint *)listenerEndpoint;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)registerRequestID:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)activateHandler;
-(id)invalidateHandler;
-(id)registerRequestHandler;
-(id)sendRequestHandler;
-(void)remoteRequestID:(id)arg1 options:(id)arg2 request:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(id)initWithTemplate:(id)arg1 ;
-(void)_ensureXPCStarted;
-(void)_registerRequestID:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)sendRequestID:(id)arg1 options:(id)arg2 request:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)_sendRequestID:(id)arg1 options:(id)arg2 request:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)setActivateHandler:(id)arg1 ;
-(void)setInvalidateHandler:(id)arg1 ;
-(void)setListenerEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(void)setRegisterRequestHandler:(id)arg1 ;
-(void)setSendRequestHandler:(id)arg1 ;
@end

