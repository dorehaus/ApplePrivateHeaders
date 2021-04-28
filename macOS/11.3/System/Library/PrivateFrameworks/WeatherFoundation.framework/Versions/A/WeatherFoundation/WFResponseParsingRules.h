/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/Versions/A/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFSettings;
@interface WFResponseParsingRules : NSObject {

	id<WFSettings> _settings;

}

@property (nonatomic,readonly) id<WFSettings> settings;              //@synthesize settings=_settings - In the implementation block
+(char)aqiEnabledByRules:(id)arg1 forLocation:(id)arg2 ;
-(id)initWithSettings:(id)arg1 ;
-(id<WFSettings>)settings;
-(char)aqiEnabledForCountryCode:(id)arg1 ;
@end

