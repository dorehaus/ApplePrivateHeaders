/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AXCoreUtilities.framework/Versions/A/AXCoreUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXMetricContainer <NSObject>
@property (nonatomic,readonly) char measurementsEnabled; 
@required
-(char)measurementsEnabled;
-(void)measure:(id)arg1 execute:(/*^block*/id)arg2;
-(id)measure:(id)arg1 tryExecute:(/*^block*/id)arg2;
-(id)startMeasure:(id)arg1;

@end
