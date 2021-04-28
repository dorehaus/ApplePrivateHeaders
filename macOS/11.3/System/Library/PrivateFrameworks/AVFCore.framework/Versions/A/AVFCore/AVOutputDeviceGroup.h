/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVOutputDeviceGroupImpl;
#import <AVFCore/AVFCore-Structs.h>
@class NSArray, AVOutputDevice;

@interface AVOutputDeviceGroup : NSObject {

	id<AVOutputDeviceGroupImpl> _impl;

}

@property (readonly) char receivesLongFormAudioFromLocalDevice; 
@property (readonly) NSArray * outputDevices; 
@property (readonly) AVOutputDevice * groupLeader; 
@property (readonly) float volume; 
@property (readonly) long long volumeControlType; 
+(void)initialize;
+(id)outputDeviceGroupWithRemoteGroupID:(CFStringRef)arg1 syncController:(OpaqueAPSyncControllerRef)arg2 ;
+(id)sharedAudioPresentationOutputGroup;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(float)volume;
-(id)impl;
-(void)setVolume:(float)arg1 ;
-(char)receivesLongFormAudioFromLocalDevice;
-(AVOutputDevice *)groupLeader;
-(NSArray *)outputDevices;
-(void)addOutputDevice:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(long long)volumeControlType;
-(id)initWithOutputDeviceGroupImpl:(id)arg1 ;
-(void)outputDeviceGroupImpl:(id)arg1 didChangeOutputDevicesWithInitiator:(id)arg2 ;
-(void)removeOutputDevice:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)outputDeviceGroupImplDidChangeVolume:(id)arg1 ;
-(void)outputDeviceGroupImplDidChangeVolumeControlType:(id)arg1 ;
@end

