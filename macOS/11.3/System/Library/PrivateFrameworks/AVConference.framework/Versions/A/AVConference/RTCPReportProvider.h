/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RTCPReportProvider <NSObject>
@optional
-(unsigned)getRTCPReportNTPTimeMiddle32ForReportId:(unsigned char)arg1;
-(unsigned)getExtendedSequenceNumberForSequenceNumber:(unsigned short)arg1;

@required
-(char)generateReceptionReportList:(RTCP_RECEPTION_REPORT*)arg1 reportCount:(char*)arg2;

@end

