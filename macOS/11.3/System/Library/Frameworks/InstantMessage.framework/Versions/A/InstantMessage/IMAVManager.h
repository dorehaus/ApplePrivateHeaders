/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InstantMessage.framework/Versions/A/InstantMessage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <InstantMessage/InstantMessage-Structs.h>
@interface IMAVManager : NSObject
+(id)sharedAVManager;
+(void)_setAVManagerRequested:(char)arg1 URLToShare:(id)arg2 ;
+(id)sharedAVManagerReference;
-(unsigned long long)state;
-(void)start;
-(void)stop;
-(long long)numberOfAudioChannels;
-(void)setVideoDataSource:(id)arg1 ;
-(id)videoDataSource;
-(char)_fillBuffer:(CVBufferRef)arg1 ;
-(void)_IMVideoDataSourceNeedsUpdate;
-(void)setNumberOfAudioChannels:(long long)arg1 ;
-(id)audioDeviceUID;
-(id)audioDeviceChannels;
-(id)controlBar;
-(void)setVideoOptimizationOptions:(unsigned long long)arg1 ;
-(unsigned long long)videoOptimizationOptions;
-(void)_updateControlBarFromDictionaryRepresentation:(id)arg1 ;
-(void)_startListeningForIMDaemonListenerNotifications;
-(void)_setAVManagerRequested:(char)arg1 URLToShare:(id)arg2 ;
-(id)_iPhotoAlbumIDToShare;
-(void)_provideAudioOnDeviceUID:(id)arg1 channels:(id)arg2 ;
-(id)URLToShare;
@end

