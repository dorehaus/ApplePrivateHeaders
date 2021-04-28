/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/Versions/A/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _TVRXDeviceDelegate, _TVRCDeviceImpl;
@class NSString, NSDictionary, NSSet, _TVRXVoiceRecorder, _TVRXKeyboardController;

@interface _TVRXDevice : NSObject {

	id<_TVRXDeviceDelegate> _delegate;
	NSString* _identifier;
	NSDictionary* _alternateIdentifiers;
	NSString* _name;
	NSString* _model;
	long long _connectionState;
	NSSet* _supportedButtons;
	id<_TVRCDeviceImpl> _impl;

}

@property (nonatomic,copy) NSString * name;                                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDictionary * alternateIdentifiers;                                   //@synthesize alternateIdentifiers=_alternateIdentifiers - In the implementation block
@property (nonatomic,copy) NSString * model;                                                      //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSSet * supportedButtons;                                              //@synthesize supportedButtons=_supportedButtons - In the implementation block
@property (setter=_setImpl:,getter=_impl,nonatomic,retain) id<_TVRCDeviceImpl> impl;              //@synthesize impl=_impl - In the implementation block
@property (assign,nonatomic,__weak) id<_TVRXDeviceDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long connectionType; 
@property (nonatomic,readonly) char supportsTouchEvents; 
@property (nonatomic,readonly) char paired; 
@property (nonatomic,readonly) long long connectionState;                                         //@synthesize connectionState=_connectionState - In the implementation block
@property (nonatomic,readonly) _TVRXVoiceRecorder * voiceRecorder; 
@property (nonatomic,readonly) _TVRXKeyboardController * keyboardController; 
@property (nonatomic,readonly) unsigned long long pairingCapability; 
-(id)description;
-(NSString *)name;
-(id<_TVRXDeviceDelegate>)delegate;
-(void)setDelegate:(id<_TVRXDeviceDelegate>)arg1 ;
-(id)_init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(long long)connectionType;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)_impl;
-(void)disconnect;
-(long long)connectionState;
-(NSString *)model;
-(void)setModel:(NSString *)arg1 ;
-(void)connect;
-(char)paired;
-(id)allIdentifiers;
-(char)containsIdentifier:(id)arg1 ;
-(void)sendButtonEvent:(id)arg1 ;
-(void)sendGameControllerEvent:(id)arg1 ;
-(void)_setImpl:(id)arg1 ;
-(_TVRXKeyboardController *)keyboardController;
-(char)supportsTouchEvents;
-(NSDictionary *)alternateIdentifiers;
-(NSSet *)supportedButtons;
-(unsigned long long)pairingCapability;
-(void)setAlternateIdentifiers:(NSDictionary *)arg1 ;
-(void)setSupportedButtons:(NSSet *)arg1 ;
-(void)_connectionAttemptSucceeded;
-(void)_disconnected:(long long)arg1 error:(id)arg2 ;
-(void)_setDeviceName:(id)arg1 ;
-(_TVRXVoiceRecorder *)voiceRecorder;
-(void)sendTouchEvent:(id)arg1 ;
-(void)sendEvent:(id)arg1 options:(id)arg2 response:(/*^block*/id)arg3 ;
-(void)_encounteredAuthenticationChallenge:(id)arg1 ;
-(void)_setSupportedButtons:(id)arg1 ;
-(void)_applyButtonEventSideEffects:(id)arg1 ;
-(char)_authenticationIsSupported;
-(void)_setActiveEndpoint;
-(void)_setIdentifier:(id)arg1 alternateIdentifiers:(id)arg2 name:(id)arg3 model:(id)arg4 supportedButtons:(id)arg5 ;
@end

