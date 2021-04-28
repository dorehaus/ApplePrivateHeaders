/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/Versions/A/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, CLLocation;

@interface WFAirQualityProviderStation : NSObject {

	NSDate* _lastReadDate;
	CLLocation* _location;

}

@property (nonatomic,readonly) NSDate * lastReadDate;              //@synthesize lastReadDate=_lastReadDate - In the implementation block
@property (nonatomic,readonly) CLLocation * location;              //@synthesize location=_location - In the implementation block
-(id)description;
-(CLLocation *)location;
-(NSDate *)lastReadDate;
-(id)initWithLocation:(id)arg1 lastReadDate:(id)arg2 ;
@end

