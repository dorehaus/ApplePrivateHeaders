/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AVOutputDeviceGroup, NSArray, AVOutputDevice;


@protocol AVOutputDeviceGroupImpl <NSObject>
@property (__weak) AVOutputDeviceGroup * parentOutputDeviceGroup; 
@property (readonly) char receivesLongFormAudioFromLocalDevice; 
@property (readonly) NSArray * outputDevices; 
@property (readonly) AVOutputDevice * groupLeader; 
@property (readonly) float volume; 
@required
-(float)volume;
-(void)setVolume:(float)arg1;
-(void)setParentOutputDeviceGroup:(id)arg1;
-(char)receivesLongFormAudioFromLocalDevice;
-(AVOutputDevice *)groupLeader;
-(NSArray *)outputDevices;
-(void)addOutputDevice:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)removeOutputDevice:(id)arg1 withOptions:(id)arg2 completionhandler:(/*^block*/id)arg3;
-(long long)volumeControlType;
-(AVOutputDeviceGroup *)parentOutputDeviceGroup;

@end

