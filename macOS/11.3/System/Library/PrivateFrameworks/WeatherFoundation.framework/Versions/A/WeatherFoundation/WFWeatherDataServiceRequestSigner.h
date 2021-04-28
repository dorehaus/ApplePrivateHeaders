/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/Versions/A/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WFWeatherDataServiceRequestSigner : NSObject
+(void)signRequest:(id)arg1 withDate:(id)arg2 ;
+(void)signRequest:(id)arg1 withSecret:(id)arg2 andDate:(id)arg3 ;
+(id)buildAuthHeader:(id)arg1 withSecret:(id)arg2 andDate:(id)arg3 ;
+(id)roundDate:(id)arg1 toMinutes:(unsigned long long)arg2 ;
@end

