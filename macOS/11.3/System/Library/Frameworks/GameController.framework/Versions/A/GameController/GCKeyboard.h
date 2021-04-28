/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GameController.framework/Versions/A/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/GCDeviceLegacy.h>
#import <libobjc.A.dylib/GCDevice.h>

@class NSArray, NSString, GCPhysicalInputProfile, GCController, GCKeyboardInput;

@interface GCKeyboard : NSObject <NSSecureCoding, GCDeviceLegacy, GCDevice> {

	GCController* _proxyController;

}

@property (nonatomic,readonly) GCController * proxyController; 
@property (nonatomic,retain) GCPhysicalInputProfile*<GCNamedProfile> profile; 
@property (nonatomic,retain) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) NSArray * hidServices; 
@property (nonatomic,readonly) IOUSBDeviceStruct942* device; 
@property (nonatomic,readonly) unsigned service; 
@property (nonatomic,retain) NSString * physicalDeviceUniqueID; 
@property (nonatomic,readonly) unsigned long long deviceHash; 
@property (nonatomic,copy) NSString * debugName; 
@property (assign,getter=isForwarded,nonatomic) char forwarded; 
@property (assign,getter=areAllHIDDevicesConnected,nonatomic) char allHIDDevicesConnected; 
@property (assign,getter=isPublished,nonatomic) char published; 
@property (nonatomic,readonly) NSString * productCategory; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) GCController * proxyController;                                            //@synthesize proxyController=_proxyController - In the implementation block
@property (nonatomic,readonly) GCKeyboardInput * keyboardInput; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> handlerQueue; 
@property (nonatomic,copy,readonly) NSString * vendorName; 
@property (nonatomic,readonly) GCPhysicalInputProfile * physicalInputProfile; 
+(char)supportsSecureCoding;
+(id)coalescedKeyboard;
+(void)__open__;
+(void)__openXPC_and_CBApplicationDidBecomeActive__;
+(void)__setLogger__:(/*^block*/id)arg1 ;
+(id)keyboardWithKeyboardInput;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(NSString *)vendorName;
-(IOUSBDeviceStruct942*)device;
-(unsigned)sampleRate;
-(void)handleEvent:(IOHIDEventRef)arg1 ;
-(unsigned)service;
-(NSString *)debugName;
-(void)setDebugName:(NSString *)arg1 ;
-(void)setProfile:(GCPhysicalInputProfile*<GCNamedProfile>)arg1 ;
-(GCPhysicalInputProfile*<GCNamedProfile>)profile;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(void)setVendorName:(NSString *)arg1 ;
-(NSString *)productCategory;
-(NSObject*<OS_dispatch_queue>)handlerQueue;
-(char)isATVRemote;
-(unsigned long long)deviceHash;
-(NSArray *)hidServices;
-(void)setHandlerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(GCPhysicalInputProfile *)physicalInputProfile;
-(GCKeyboardInput *)keyboardInput;
-(void)setProxyController:(GCController *)arg1 ;
-(id)initWithProxyController:(id)arg1 ;
-(GCController *)proxyController;
-(id)initWithUSBDevice:(IOUSBDeviceStruct942*)arg1 service:(unsigned)arg2 ;
-(NSString *)physicalDeviceUniqueID;
-(void)setPhysicalDeviceUniqueID:(NSString *)arg1 ;
-(char)isForwarded;
-(void)setForwarded:(char)arg1 ;
-(char)areAllHIDDevicesConnected;
-(void)setAllHIDDevicesConnected:(char)arg1 ;
-(char)isPublished;
-(void)setPublished:(char)arg1 ;
-(id)_legacy_vendorName;
-(id)_legacy_productCategory;
-(char)_legacy_isEqualToController:(id)arg1 ;
-(id)_legacy_description;
-(void*)createInputBufferForDevice:(IOHIDDeviceRef)arg1 withSize:(unsigned long long)arg2 ;
-(void)addServiceRefsWithDevice:(id)arg1 ;
-(void)addServiceRef:(id)arg1 ;
-(char)hasServiceRef:(IOHIDServiceClientRef)arg1 ;
-(void)removeServiceRef:(IOHIDServiceClientRef)arg1 ;
-(void)clearServiceRef;
-(long long)_legacy_playerIndex;
-(void)_legacy_setPlayerIndex:(long long)arg1 ;
-(id)_legacy_physicalInputProfileName;
-(id)_legacy_physicalInputProfile;
-(id)initWithServiceRef:(IOHIDServiceClientRef)arg1 ;
-(char)_legacy_isAttachedToDevice;
@end

