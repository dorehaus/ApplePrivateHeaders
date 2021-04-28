/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOAnalyticsPipelineReportOperation.h>

@class NSString, NSNumber;

@interface GEOAnalyticsPipelineDailyUsageCountsOperation : GEOAnalyticsPipelineReportOperation {

	int _countType;
	NSString* _usageString;
	NSNumber* _usageBool;
	NSString* _appId;

}
-(void)main;
-(id)initWithDailyUsageCountType:(int)arg1 usageString:(id)arg2 usageBool:(id)arg3 appId:(id)arg4 remoteProxy:(id)arg5 runQueue:(id)arg6 completionQueue:(id)arg7 completionBlock:(/*^block*/id)arg8 ;
@end

