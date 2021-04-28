/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCVideoReceiverDelegate <NSObject>
@optional
-(void)vcVideoReceiver:(id)arg1 downlinkQualityDidChange:(id)arg2;
-(unsigned)vcVideoReceiver:(id)arg1 receivedTMMBR:(unsigned)arg2;
-(void)vcVideoReceiverRequestKeyFrame:(id)arg1 rtcpPSFBType:(unsigned)arg2;
-(void)vcVideoReceiver:(id)arg1 didSwitchFromStreamID:(unsigned short)arg2 toStreamID:(unsigned short)arg3;

@required
-(char)vcVideoReceiver:(id)arg1 didReceiveRemoteFrame:(CVBufferRef)arg2 atTime:(SCD_Struct_VC87)arg3 newVideoAttributes:(id)arg4 isFirstFrame:(char)arg5;
-(void)vcVideoReceiver:(id)arg1 requestKeyFrameGenerationWithStreamID:(unsigned short)arg2;

@end

