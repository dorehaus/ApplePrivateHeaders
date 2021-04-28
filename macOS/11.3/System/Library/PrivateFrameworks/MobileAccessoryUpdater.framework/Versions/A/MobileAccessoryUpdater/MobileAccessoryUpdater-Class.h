/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/Versions/A/MobileAccessoryUpdater
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MobileAccessoryUpdaterDelegate, FudConnection, OS_dispatch_queue, OS_dispatch_queue_attr;
@class NSString, NSObject;

@interface MobileAccessoryUpdater : NSObject {

	id<MobileAccessoryUpdaterDelegate> _delegate;
	id<FudConnection> _connection;
	NSString* _bundleIdentifier;
	NSString* _clientIdentifier;
	char* _cClientIdentifier;
	NSObject*<OS_dispatch_queue> _sessionQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue_attr> _attr;
	NSString* _activeFilter;
	char _isInternalClient;
	char _didUnregister;

}
-(void)dealloc;
-(id)bundleIdentifier;
-(void)unregister;
-(void)createConnection;
-(id)clientIdentifier;
-(char)registerForIdentifier:(id)arg1 isGroupIdentifier:(char)arg2 ;
-(id)initWithPluginIdentifier:(id)arg1 isGroupIdentifier:(char)arg2 delegate:(id)arg3 isInternalClient:(char)arg4 options:(id)arg5 error:(id*)arg6 ;
-(void)handleInboundEvent:(id)arg1 ;
-(void)handleAUNotificationEvent:(id)arg1 ;
-(char)sendMessageForCommand:(int)arg1 withOptions:(id)arg2 requiresFilter:(char)arg3 replyHandler:(/*^block*/id)arg4 ;
-(const char*)getActiveDeviceClassCString;
-(char)sendMessageForCommand:(int)arg1 withOptions:(id)arg2 requiresFilter:(char)arg3 ;
-(id)getActiveDeviceClass;
-(int)getOperationCodeFromName:(id)arg1 ;
-(char)doesOperationCodeRequireFilter:(int)arg1 ;
-(void)performStep:(id)arg1 withOptions:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 isInternalClient:(char)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)initWithGroupIdentifer:(id)arg1 delegate:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)initWithPluginIdentifier:(id)arg1 delegate:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)getPluginsList;
-(char)loadPluginWithAccessoryInfo:(id)arg1 options:(id)arg2 ;
-(id)queryNextStep:(id*)arg1 ;
-(char)setActiveDeviceClass:(id)arg1 ;
-(void)doneWithOptions:(id)arg1 ;
-(void)performNextStepWithOptions:(id)arg1 ;
-(char)setLastRemoteFindDate:(id)arg1 ;
-(id)activeFilter;
@end

