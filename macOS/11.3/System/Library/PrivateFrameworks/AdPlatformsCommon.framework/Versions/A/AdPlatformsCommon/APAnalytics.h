/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/Versions/A/AdPlatformsCommon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface APAnalytics : NSObject
+(void)sendEvent:(id)arg1 ;
+(void)_analyticsSendEvent:(id)arg1 eventPayload:(id)arg2 ;
+(void)_sendEvent:(id)arg1 payload:(id)arg2 ;
+(void)sendEventTimed:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 message:(id)arg4 ;
+(void)sendEventError:(long long)arg1 message:(id)arg2 ;
+(void)sendEvent:(id)arg1 valueInt:(long long)arg2 ;
+(void)sendEvent:(id)arg1 valueFloat:(float)arg2 ;
+(void)sendEvent:(id)arg1 customPayload:(id)arg2 ;
@end

