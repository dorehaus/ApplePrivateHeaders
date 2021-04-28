/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDMediaProfile.h>

@interface HMDHAPMediaProfile : HMDMediaProfile
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)registerForNotifications;
-(unsigned long long)capability;
-(void)handleAccessoryConnected:(id)arg1 ;
-(char)_updatePlayback:(id)arg1 ;
-(char)_updateRefreshPlayback:(id)arg1 ;
-(void)handleCharacteristicsUpdated:(id)arg1 ;
-(void)_handleCharacteristicChanges:(id)arg1 ;
-(char)_updateAudioControl:(id)arg1 ;
-(void)handleHomeCharacteristicValuesChanged:(id)arg1 ;
-(id)_smartSpeakerService;
-(id)_smartSpeakerTargetMediaStateWriteRequestWithPlaybackState:(id)arg1 ;
-(id)_smartSpeakerTargetMediaStateCharacteristic;
-(id)_smartSpeakerCurrentMediaStateCharacteristic;
-(id)_smartSpeakerVolumeCharacteristic;
-(id)_smartSpeakerVolumeWriteRequestWithVolumePercentage:(id)arg1 ;
-(id)_smartSpeakerMutedCharacteristic;
-(id)_smartSpeakerCurrentMediaStateReadRequest;
-(id)_smartSpeakerVolumeReadRequest;
-(id)_smartSpeakerMutedReadRequest;
-(void)_updateCurrentMediaState:(id)arg1 volumePercentage:(id)arg2 muted:(id)arg3 enable:(id)arg4 message:(id)arg5 ;
-(void)_updateCharacteristicChanges;
-(id)_smartSpeakerMutedWriteRequestWithMuted:(id)arg1 ;
-(id)_mediaSessionStateFromProfile;
-(id)initWithMediaServices:(id)arg1 ;
-(id)playStateWriteRequestWithPlaybackState:(long long)arg1 ;
-(id)volumeWriteRequestWithVolumePercentage:(id)arg1 ;
@end
