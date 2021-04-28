/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCMomentsCollectorDelegate <NSObject>
@required
-(void)cleanupActiveRequests;
-(void)stream:(id)arg1 addAudioSampleBuffer:(opaqueVCAudioBufferListRef)arg2 timestamp:(unsigned)arg3;
-(void)stream:(id)arg1 addVideoSampleBuffer:(opaqueCMSampleBufferRef)arg2 cameraStatusBits:(unsigned char)arg3 timestamp:(unsigned)arg4;

@end

