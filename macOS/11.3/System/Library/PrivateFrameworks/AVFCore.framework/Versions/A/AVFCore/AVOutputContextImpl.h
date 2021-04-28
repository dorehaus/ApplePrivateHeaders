/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AVOutputContext, NSString, AVOutputDevice, NSArray, AVOutputContextCommunicationChannel;


@protocol AVOutputContextImpl <NSObject>
@property (__weak) AVOutputContext * parentOutputContext; 
@property (nonatomic,readonly) NSString * ID; 
@property (nonatomic,readonly) NSString * outputContextType; 
@property (nonatomic,readonly) AVOutputDevice * outputDevice; 
@property (nonatomic,copy,readonly) NSString * associatedAudioDeviceID; 
@property (readonly) char supportsMultipleOutputDevices; 
@property (readonly) char supportsMultipleBluetoothOutputDevices; 
@property (readonly) NSArray * outputDevices; 
@property (readonly) AVOutputDevice * predictedOutputDevice; 
@property (readonly) char providesControlForAllVolumeFeatures; 
@property (readonly) float volume; 
@property (readonly) char canSetVolume; 
@property (nonatomic,readonly) AVOutputContextCommunicationChannel * outgoingCommunicationChannel; 
@required
+(id)platformDependentScreenOrVideoContext;
+(id)sharedAudioPresentationOutputContext;
+(id)auxiliaryOutputContext;
+(id)sharedSystemAudioContext;
+(id)sharedSystemScreenContext;
+(id)iTunesAudioContext;
+(id)defaultSharedOutputContextImpl;
+(id)outputContextImplForControllingOutputDeviceGroupWithID:(id)arg1 options:(id)arg2;
+(id)outputContextImplForID:(id)arg1 type:(id)arg2;
+(void)resetOutputDeviceForAllOutputContexts;
+(char)outputContextExistsWithRemoteOutputDevice;
-(float)volume;
-(void)setVolume:(float)arg1;
-(NSString *)ID;
-(NSArray *)outputDevices;
-(char)canSetVolume;
-(AVOutputDevice *)outputDevice;
-(void)setParentOutputContext:(id)arg1;
-(NSString *)outputContextType;
-(void)outputContextDidChangeApplicationProcessID:(id)arg1;
-(NSString *)associatedAudioDeviceID;
-(char)supportsMultipleOutputDevices;
-(void)setOutputDevice:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(char)supportsMultipleBluetoothOutputDevices;
-(void)setOutputDevices:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)addOutputDevice:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)removeOutputDevice:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(char)providesControlForAllVolumeFeatures;
-(void)pausePlaybackOnAllOutputDevicesWithCompletionHandler:(/*^block*/id)arg1;
-(void)muteAllOutputDevicesWithCompletionHandler:(/*^block*/id)arg1;
-(AVOutputContextCommunicationChannel *)outgoingCommunicationChannel;
-(id)openCommunicationChannelWithOptions:(id)arg1 error:(id*)arg2;
-(AVOutputContext *)parentOutputContext;
-(void)resetPredictedOutputDevice;
-(AVOutputDevice *)predictedOutputDevice;

@end

