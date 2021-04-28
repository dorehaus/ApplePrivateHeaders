/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCMediaStreamProtocol <NSObject>
@optional
-(void)setRtcpEnabled:(char)arg1;
-(void)setRtcpSendInterval:(double)arg1;
-(void)setRtpTimeOutInterval:(double)arg1;
-(void)setRtcpTimeOutInterval:(double)arg1;
-(void)setRtpTimeOutEnabled:(char)arg1;
-(void)setRtcpTimeOutEnabled:(char)arg1;
-(id)setLocalParticipantInfo:(id)arg1 networkSockets:(id)arg2 withError:(id*)arg3;
-(void)setStreamDirection:(long long)arg1;
-(id)setupRTPWithIDSDestination:(id)arg1 error:(id*)arg2;
-(id)setupRTPWithSocketDictionary:(id)arg1 error:(id*)arg2;
-(long long)streamDirection;
-(void)setDecryptionTimeOutEnabled:(char)arg1;
-(void)setDecryptionTimeOutInterval:(double)arg1;

@required
-(void)start;
-(void)stop;
-(void)setPause:(char)arg1;
-(char)setStreamConfig:(id)arg1 withError:(id*)arg2;

@end

