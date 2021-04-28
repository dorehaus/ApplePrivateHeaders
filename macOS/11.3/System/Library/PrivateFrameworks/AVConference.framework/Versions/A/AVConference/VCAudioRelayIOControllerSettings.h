/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface VCAudioRelayIOControllerSettings : NSObject {

	AudioStreamBasicDescription _audioFormat;
	VCRemoteCodecInfo _remoteCodecInfo;

}

@property (nonatomic,readonly) const AudioStreamBasicDescription* audioFormat; 
@property (nonatomic,readonly) const VCRemoteCodecInfo* remoteCodecInfo; 
@property (nonatomic,readonly) unsigned samplesPerFrame; 
-(const AudioStreamBasicDescription*)audioFormat;
-(unsigned)samplesPerFrame;
-(const VCRemoteCodecInfo*)remoteCodecInfo;
-(id)initWithAudioFormat:(const AudioStreamBasicDescription*)arg1 remoteCodecInfo:(const VCRemoteCodecInfo*)arg2 ;
@end

