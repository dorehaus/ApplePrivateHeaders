/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/Versions/A/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVRemoteCore/_TVRCHMServiceWrapperDelegate.h>
#import <TVRemoteCore/_TVRCDeviceImpl.h>

@class _TVRXDevice, _TVRCHMServiceWrapper, NSString;

@interface _TVRCMatchPointDeviceImpl : NSObject <_TVRCHMServiceWrapperDelegate, _TVRCDeviceImpl> {

	_TVRXDevice* _device;
	_TVRCHMServiceWrapper* _service;

}

@property (nonatomic,retain) _TVRCHMServiceWrapper * service;              //@synthesize service=_service - In the implementation block
@property (assign,nonatomic,__weak) _TVRXDevice * device;                  //@synthesize device=_device - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)implWithService:(id)arg1 ;
-(id)name;
-(id)identifier;
-(long long)connectionType;
-(_TVRXDevice *)device;
-(void)disconnect;
-(_TVRCHMServiceWrapper *)service;
-(id)model;
-(void)setService:(_TVRCHMServiceWrapper *)arg1 ;
-(id)initWithService:(id)arg1 ;
-(void)connect;
-(void)setDevice:(_TVRXDevice *)arg1 ;
-(void)sendButtonEvent:(id)arg1 ;
-(void)sendGameControllerEvent:(id)arg1 ;
-(id)keyboardController;
-(void)setAuthenticationSupported:(char)arg1 ;
-(char)supportsTouchEvents;
-(id)alternateIdentifiers;
-(id)supportedButtons;
-(unsigned long long)pairingCapability;
-(void)connectedToService:(id)arg1 ;
-(void)disconnectedFromService:(id)arg1 error:(id)arg2 ;
-(void)service:(id)arg1 updatedName:(id)arg2 ;
-(id)voiceRecorder;
-(void)sendTouchEvent:(id)arg1 ;
@end

