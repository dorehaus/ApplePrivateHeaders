/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/Versions/A/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_os_log;
@class NSXPCConnection, BrightnessSystemClientExportedObj, NSMutableArray, NSCondition, NSObject;

@interface BrightnessSystemClientInternal : NSObject {

	NSXPCConnection* _connection;
	id _remote;
	BrightnessSystemClientExportedObj* exportedObj;
	NSMutableArray* _clientProperties;
	NSCondition* copyPropertyForKeyWaitCondition;
	char copyPropertyForKeyCompleted;
	char _useSynchronousRemote;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_os_log> _logHandle;

}
-(void)dealloc;
-(id)init;
-(char)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)copyPropertyForKey:(id)arg1 ;
-(void)registerNotificationBlock:(/*^block*/id)arg1 ;
-(void)addKeyToClientProperties:(id)arg1 ;
-(void)removeKeyFromClientProperties:(id)arg1 ;
-(void)stopXpcService;
-(void)registerNotificationBlock:(/*^block*/id)arg1 forProperties:(id)arg2 ;
-(void)addPropertiesForNotification:(id)arg1 ;
-(void)removePropertiesFromNotification:(id)arg1 ;
-(void)addPropertyForNotification:(id)arg1 ;
-(void)removePropertyFromNotification:(id)arg1 ;
@end

