/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/Versions/A/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVCaptureInputPortInternal_Tundra, AVCaptureInput_Tundra, NSString;

@interface AVCaptureInputPort_Tundra : NSObject {

	AVCaptureInputPortInternal_Tundra* _internal;

}

@property (nonatomic,readonly) AVCaptureInput_Tundra * input; 
@property (nonatomic,readonly) NSString * mediaType; 
@property (nonatomic,readonly) const opaqueCMFormatDescriptionRef formatDescription; 
@property (assign,getter=isEnabled,nonatomic) char enabled; 
@property (nonatomic,readonly) OpaqueCMClockRef clock; 
@property (nonatomic,readonly) NSString * sourceDeviceType; 
@property (nonatomic,readonly) long long sourceDevicePosition; 
+(b)resolveClassMethod:;
+(b)resolveInstanceMethod:;
+(void)initialize;
+(id)portWithInput:(id)arg1 mediaType:(id)arg2 formatDescription:(opaqueCMFormatDescriptionRef)arg3 enabled:(char)arg4 sourceDeviceType:(id)arg5 sourceDevicePosition:(long long)arg6 ;
-(b)conformsToProtocol:(id)arg1 ;
-(b)isMemberOfClass:(Class)arg1 ;
-(b)isKindOfClass:(Class)arg1 ;
-(Class)class;
-(void)dealloc;
-(id)description;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(id)valueForUndefinedKey:(id)arg1 ;
-(AVCaptureInput_Tundra *)input;
-(NSString *)mediaType;
-(OpaqueCMClockRef)clock;
-(const opaqueCMFormatDescriptionRef)formatDescription;
-(NSString *)sourceDeviceType;
-(void)setGraph:(OpaqueCMIOGraphRef)arg1 node:(int)arg2 element:(unsigned)arg3 scope:(unsigned)arg4 ;
-(void)attachToAudioMixerNode:(int)arg1 element:(unsigned)arg2 scope:(unsigned)arg3 isReadOnly:(char)arg4 ;
-(unsigned)audioMixerNodeElement;
-(void)_setClock:(OpaqueCMClockRef)arg1 ;
-(long long)sourceDevicePosition;
-(void)_setFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(id)initWithInput:(id)arg1 mediaType:(id)arg2 formatDescription:(opaqueCMFormatDescriptionRef)arg3 enabled:(char)arg4 sourceDeviceType:(id)arg5 sourceDevicePosition:(long long)arg6 ;
-(void)_removeFormatDescriptionPropertyListenerForGraph:(OpaqueCMIOGraphRef)arg1 node:(int)arg2 element:(unsigned)arg3 scope:(unsigned)arg4 callbackContextToken:(void*)arg5 ;
-(void)detachFromAudioMixerNode;
@end

