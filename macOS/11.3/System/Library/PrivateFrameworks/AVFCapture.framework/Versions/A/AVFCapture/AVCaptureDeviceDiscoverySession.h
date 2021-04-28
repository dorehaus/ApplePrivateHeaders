/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/Versions/A/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class NSArray, NSString;

@interface AVCaptureDeviceDiscoverySession : NSObject {

	NSArray* _deviceTypes;
	long long _position;
	NSString* _mediaType;
	NSArray* _devices;
	NSArray* _supportedMultiCamDeviceSets;

}

@property (nonatomic,readonly) NSArray * devices;                                  //@synthesize devices=_devices - In the implementation block
@property (nonatomic,readonly) NSArray * supportedMultiCamDeviceSets; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(id)allDevices;
+(id)discoverySessionWithDeviceTypes:(id)arg1 mediaType:(id)arg2 position:(long long)arg3 ;
+(id)allVideoDevices;
+(id)allVideoDeviceTypes;
+(id)allDeviceTypes;
+(id)allPointCloudDeviceTypes;
+(id)allAudioDeviceTypes;
+(id)allVirtualDeviceTypes;
+(id)discoverySessionWithDeviceTypes:(id)arg1 mediaType:(id)arg2 position:(long long)arg3 allowIOSMacEnvironment:(char)arg4 ;
+(id)allPointCloudDevices;
+(id)allAudioDevices;
+(id)allVirtualDevices;
+(id)allSupportedMultiCamDeviceSets;
-(void)dealloc;
-(id)description;
-(id)init;
-(NSArray *)devices;
-(id)_initWithDeviceTypes:(id)arg1 mediaType:(id)arg2 position:(long long)arg3 allowIOSMacEnvironment:(char)arg4 prefersUnsuspendedAndAllowsAnyPosition:(char)arg5 ;
-(void)_handleDeviceConnectedDisconnectedNotification:(id)arg1 ;
-(NSArray *)supportedMultiCamDeviceSets;
@end

