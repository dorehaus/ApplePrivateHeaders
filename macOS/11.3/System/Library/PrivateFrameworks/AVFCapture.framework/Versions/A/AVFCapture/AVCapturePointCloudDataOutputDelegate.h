/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/Versions/A/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVCapturePointCloudDataOutputDelegate <NSObject>
@optional
-(void)pointCloudDataOutput:(id)arg1 didOutputPointCloudData:(id)arg2 timestamp:(SCD_Struct_AV0)arg3 connection:(id)arg4;
-(void)pointCloudDataOutput:(id)arg1 didDropPointCloudData:(id)arg2 timestamp:(SCD_Struct_AV0)arg3 connection:(id)arg4 reason:(long long)arg5;

@end
