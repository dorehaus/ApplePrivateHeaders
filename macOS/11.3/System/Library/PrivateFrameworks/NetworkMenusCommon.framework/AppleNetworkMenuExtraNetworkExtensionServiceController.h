/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NetworkMenusCommon.framework/NetworkMenusCommon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkMenusCommon/AppleNetworkMenuExtraServiceController.h>

@class NEConfiguration, NSNumber;

@interface AppleNetworkMenuExtraNetworkExtensionServiceController : AppleNetworkMenuExtraServiceController {

	NEConfiguration* _configuration;
	void* _session;
	NSNumber* _startTime;

}

@property (assign) void* session;                                //@synthesize session=_session - In the implementation block
@property (retain) NSNumber * startTime;                         //@synthesize startTime=_startTime - In the implementation block
@property (retain) NEConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(void)dealloc;
-(int)connectionType;
-(NSNumber *)startTime;
-(void)setStartTime:(NSNumber *)arg1 ;
-(void)disconnect;
-(id)serviceName;
-(char)isConnected;
-(int)connectionState;
-(NEConfiguration *)configuration;
-(void*)session;
-(void)setConfiguration:(NEConfiguration *)arg1 ;
-(void)setSession:(void*)arg1 ;
-(void)connect;
-(id)serviceID;
-(id)connectionStartTime;
-(id)applicationDisplayName;
-(void)refreshConnectionState;
-(void)refreshStatus;
-(void)handleStateChanged:(int)arg1 ;
-(int)getStateForSessionStatus:(int)arg1 ;
-(void)refreshHeaderView;
-(void)refreshMenuItems;
-(void)prepareToUnload;
-(id)initWithConfiguration:(id)arg1 andBundle:(id)arg2 ;
-(void)setupEventCallbackWithBlock:(/*^block*/id)arg1 ;
-(void)a_connectOrDisconnect:(id)arg1 ;
@end

