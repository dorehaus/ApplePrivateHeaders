/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GameController.framework/Versions/A/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_GCDeviceControllerProviding.h>
#import <libobjc.A.dylib/_GCDeviceGamepadComponent.h>
#import <libobjc.A.dylib/_GCDevicePlayerIndexIndicatorComponent.h>
#import <libobjc.A.dylib/_GCDeviceBatteryComponent.h>
#import <libobjc.A.dylib/GCPlayerIndicatorXPCProxyServerEndpointDelegate.h>
#import <libobjc.A.dylib/GCBatteryXPCProxyServerEndpointDelegate.h>
#import <libobjc.A.dylib/_GCLogicalDevice.h>

@protocol _GCDeviceManager, NSObjectNSCopyingNSSecureCoding;
@class NSMapTable, GCDeviceBattery, _GCDeviceConfiguration, _GCNintendoJoyConDevice, NSString, NSSet;

@interface _GCNintendoFusedJoyConDevice : NSObject <_GCDeviceControllerProviding, _GCDeviceGamepadComponent, _GCDevicePlayerIndexIndicatorComponent, _GCDeviceBatteryComponent, GCPlayerIndicatorXPCProxyServerEndpointDelegate, GCBatteryXPCProxyServerEndpointDelegate, _GCLogicalDevice> {

	NSMapTable* _clients;
	long long _indicatedPlayerIndex;
	NSMapTable* _clientPlayerIndicatorEndpoints;
	GCDeviceBattery* _battery;
	NSMapTable* _clientBatteryEndpoints;
	id<_GCDeviceManager> _manager;
	id<NSObject><NSCopying><NSSecureCoding> _identifier;
	_GCDeviceConfiguration* _configuration;
	_GCNintendoJoyConDevice* _leftDevice;
	_GCNintendoJoyConDevice* _rightDevice;

}

@property (readonly) id<_GCGamepadEventSourceDescription> gamepadEventSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) long long indicatedPlayerIndex; 
@property (nonatomic,copy) id deviceBatteryServiceConnectedHandler; 
@property (nonatomic,copy) id deviceBatteryComponentBatteryUpdatedHandler; 
@property (nonatomic,readonly) GCDeviceBattery * battery; 
@property (nonatomic,retain) _GCDeviceConfiguration * configuration;                       //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) _GCNintendoJoyConDevice * leftDevice;                       //@synthesize leftDevice=_leftDevice - In the implementation block
@property (nonatomic,readonly) _GCNintendoJoyConDevice * rightDevice;                      //@synthesize rightDevice=_rightDevice - In the implementation block
@property (readonly) NSSet * underlyingDevices; 
@property (copy,readonly) id<NSObject><NSCopying><NSSecureCoding> identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (__weak,readonly) id<_GCDeviceManager> manager;                                  //@synthesize manager=_manager - In the implementation block
@property (readonly) NSSet * components; 
+(id)identifierForFusedJoyConDeviceWithLeftDevice:(id)arg1 rightDevice:(id)arg2 ;
-(id)init;
-(id)propertyForKey:(id)arg1 ;
-(id<NSObject><NSCopying><NSSecureCoding>)identifier;
-(id<_GCDeviceManager>)manager;
-(NSSet *)components;
-(void)deactivate;
-(_GCDeviceConfiguration *)configuration;
-(void)setConfiguration:(_GCDeviceConfiguration *)arg1 ;
-(id)makeControllerForClient:(id)arg1 ;
-(void)activateLogical;
-(NSSet *)underlyingDevices;
-(GCDeviceBattery *)battery;
-(_GCNintendoJoyConDevice *)leftDevice;
-(_GCNintendoJoyConDevice *)rightDevice;
-(id)initWithLeft:(id)arg1 right:(id)arg2 manager:(id)arg3 ;
-(void)setIndicatedPlayerIndex:(long long)arg1 ;
-(void)playerIndicatorXPCProxyServerEndpoint:(id)arg1 didReceivePlayerIndexChange:(long long)arg2 ;
-(void)_removeClient:(id)arg1 ;
-(void)_addClient:(id)arg1 ;
-(id<_GCGamepadEventSourceDescription>)gamepadEventSource;
-(long long)indicatedPlayerIndex;
-(id)deviceBatteryComponentBatteryUpdatedHandler;
-(void)setDeviceBatteryComponentBatteryUpdatedHandler:(id)arg1 ;
-(id)deviceBatteryServiceConnectedHandler;
-(void)setDeviceBatteryServiceConnectedHandler:(id)arg1 ;
-(void)_refreshBattery;
-(void)_propagateBattery;
@end

