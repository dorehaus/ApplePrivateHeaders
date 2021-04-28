/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/Versions/A/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WeatherFoundation/WeatherFoundation-Structs.h>
@interface WFWeatherStoreCallbackWrapper : NSObject {

	char _executedCompletionBlock;
	os_unfair_lock_s _lock;
	unsigned long long _requestType;
	/*^block*/id _forecastRetrievalCompletionBlock;
	/*^block*/id _aqiScaleRetrievalCompletionBlock;

}

@property (assign,nonatomic) unsigned long long requestType;                 //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,copy) id forecastRetrievalCompletionBlock;              //@synthesize forecastRetrievalCompletionBlock=_forecastRetrievalCompletionBlock - In the implementation block
@property (nonatomic,copy) id aqiScaleRetrievalCompletionBlock;              //@synthesize aqiScaleRetrievalCompletionBlock=_aqiScaleRetrievalCompletionBlock - In the implementation block
@property (nonatomic,readonly) char executedCompletionBlock;                 //@synthesize executedCompletionBlock=_executedCompletionBlock - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s lock;                          //@synthesize lock=_lock - In the implementation block
-(os_unfair_lock_s)lock;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(unsigned long long)requestType;
-(void)setRequestType:(unsigned long long)arg1 ;
-(id)forecastRetrievalCompletionBlock;
-(id)aqiScaleRetrievalCompletionBlock;
-(id)initWithForecastRetrievalBlock:(/*^block*/id)arg1 ;
-(id)initWithAQIScaleRetrievalBlock:(/*^block*/id)arg1 ;
-(void)executeCallbackwithResponse:(id)arg1 error:(id)arg2 ;
-(void)setForecastRetrievalCompletionBlock:(id)arg1 ;
-(void)setAqiScaleRetrievalCompletionBlock:(id)arg1 ;
-(char)executedCompletionBlock;
@end

