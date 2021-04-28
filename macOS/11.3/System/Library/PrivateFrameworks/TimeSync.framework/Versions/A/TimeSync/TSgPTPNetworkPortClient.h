/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/Versions/A/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSgPTPNetworkPortClient <NSObject>
@optional
-(void)didTimeoutOnMACLookupForPort:(id)arg1;
-(void)didSyncTimeoutForPort:(id)arg1;
-(void)didSyncTimeoutWithMean:(unsigned long long)arg1 median:(unsigned long long)arg2 standardDeviation:(unsigned long long)arg3 minimum:(unsigned long long)arg4 maximum:(unsigned long long)arg5 numberOfSamples:(unsigned)arg6 forPort:(id)arg7;
-(void)didChangeASCapable:(char)arg1 forPort:(id)arg2;
-(void)didChangeAdministrativeEnable:(char)arg1 forPort:(id)arg2;
-(void)didTerminateServiceForPort:(id)arg1;

@end

