/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InstantMessage.framework/Versions/A/InstantMessage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InstantMessage/InstantMessage-Structs.h>
#import <InstantMessage/IMAVManager.h>

@interface IMAVManagerImpl : IMAVManager
+(id)sharedAVManager;
-(unsigned long long)state;
-(void)start;
-(void)setNilValueForKey:(id)arg1 ;
-(void)stop;
-(unsigned)_pixelFormat;
-(long long)numberOfAudioChannels;
-(void)setVideoDataSource:(id)arg1 ;
-(id)videoDataSource;
-(void)_suspendVideo:(char)arg1 ;
-(char)_fillBuffer:(CVBufferRef)arg1 ;
-(void)_IMVideoDataSourceNeedsUpdate;
-(void)setNumberOfAudioChannels:(long long)arg1 ;
-(id)audioDeviceUID;
-(id)audioDeviceChannels;
-(id)controlBar;
-(void)_setAudioDeviceUID:(id)arg1 channels:(id)arg2 ;
-(void)setVideoOptimizationOptions:(unsigned long long)arg1 ;
-(unsigned long long)videoOptimizationOptions;
-(unsigned long long)_filteredOptimizationOptions;
-(void)_updateControlBarFromDictionaryRepresentation:(id)arg1 ;
-(void)_startListeningForIMDaemonListenerNotifications;
-(void)_daemonDidConnect:(id)arg1 ;
-(unsigned long long)_effectiveState;
-(void)_changeStateIfAppropriate;
-(void)_setAVManagerRequested:(char)arg1 URLToShare:(id)arg2 ;
-(id)_iPhotoAlbumIDToShare;
-(void)_videoProviderChangedState:(id)arg1 ;
-(void)_provideAudioOnDeviceUID:(id)arg1 channels:(id)arg2 ;
-(id)URLToShare;
-(id)_buildProviderForReceiver:(id)arg1 ;
@end
