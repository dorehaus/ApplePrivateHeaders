/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VirtualGarage.framework/Versions/A/VirtualGarage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VGExternalAccessory.h>
@class NSString, VGExternalAccessoryState;


@protocol VGExternalAccessory <NSObject,VGVehicleStateProviding>
@property (nonatomic,readonly) char isConnected; 
@property (nonatomic,readonly) char isConnectedToElectricVehicle; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * bluetoothIdentifier; 
@property (nonatomic,readonly) VGExternalAccessoryState * currentState; 
@required
-(NSString *)identifier;
-(char)isConnected;
-(VGExternalAccessoryState *)currentState;
-(NSString *)bluetoothIdentifier;
-(char)isConnectedToElectricVehicle;

@end


@protocol VGExternalAccessoryUpdating;
@class NSString, VGExternalAccessoryState, EAAccessory, VGVehicleState, VGVehicle;

@interface VGExternalAccessory : NSObject <VGExternalAccessory> {

	EAAccessory* _accessory;
	VGExternalAccessoryState* _accessoryState;
	VGVehicleState* _currentVehicleState;
	VGVehicle* _currentVehicle;
	id<VGExternalAccessoryUpdating> _accessoryUpdateDelegate;

}

@property (assign,nonatomic,__weak) id<VGExternalAccessoryUpdating> accessoryUpdateDelegate;              //@synthesize accessoryUpdateDelegate=_accessoryUpdateDelegate - In the implementation block
@property (nonatomic,readonly) char isConnected; 
@property (nonatomic,readonly) char isConnectedToElectricVehicle; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * bluetoothIdentifier; 
@property (nonatomic,readonly) VGExternalAccessoryState * currentState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(NSString *)identifier;
-(char)isConnected;
-(VGExternalAccessoryState *)currentState;
-(NSString *)bluetoothIdentifier;
-(void)setAccessoryUpdateDelegate:(id<VGExternalAccessoryUpdating>)arg1 ;
-(void)getStateOfChargeForVehicle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)isConnectedToElectricVehicle;
-(void)listCarsWithCompletion:(/*^block*/id)arg1 ;
-(void)_accessoryDidConnect:(id)arg1 ;
-(void)_accessoryDidUpdateVehicle:(id)arg1 ;
-(void)_accessoryDidUpdate:(id)arg1 ;
-(void)_accessoryDidDisconnect:(id)arg1 ;
-(void)_loadInitialAccessoryState;
-(void)_updateFromVehicleInfo:(id)arg1 ;
-(id<VGExternalAccessoryUpdating>)accessoryUpdateDelegate;
@end

