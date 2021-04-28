/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/Versions/A/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WFTask.h>

@class WFLocation, WFRequestOptions, NSString, NSLocale;

@interface WFAggregateCommonRequest : WFTask {

	int _units;
	WFLocation* _location;
	unsigned long long _types;
	WFRequestOptions* _requestOptions;
	NSString* _trackingParameter;
	/*^block*/id _completionHandler;
	NSLocale* _locale;

}

@property (nonatomic,retain) NSLocale * locale;                                //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) WFLocation * location;                          //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) unsigned long long types;                       //@synthesize types=_types - In the implementation block
@property (nonatomic,readonly) int units;                                      //@synthesize units=_units - In the implementation block
@property (nonatomic,readonly) WFRequestOptions * requestOptions;              //@synthesize requestOptions=_requestOptions - In the implementation block
@property (nonatomic,readonly) NSString * trackingParameter;                   //@synthesize trackingParameter=_trackingParameter - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;                      //@synthesize completionHandler=_completionHandler - In the implementation block
-(id)description;
-(unsigned long long)types;
-(void)cleanup;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(WFLocation *)location;
-(id)completionHandler;
-(WFRequestOptions *)requestOptions;
-(int)units;
-(void)handleResponse:(id)arg1 ;
-(void)handleError:(id)arg1 forResponseIdentifier:(id)arg2 ;
-(void)startWithService:(id)arg1 ;
-(NSString *)trackingParameter;
-(void)handleCancellation;
-(id)initWithLocation:(id)arg1 types:(unsigned long long)arg2 units:(int)arg3 trackingParameter:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)initWithLocation:(id)arg1 types:(unsigned long long)arg2 units:(int)arg3 requestOptions:(id)arg4 trackingParameter:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(unsigned long long)_supportedForecastTypes:(unsigned long long)arg1 ;
-(id)initWithLocation:(id)arg1 types:(unsigned long long)arg2 trackingParameter:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end
