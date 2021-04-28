/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/Versions/A/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WFResponse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface WFTemperatureUnitResponse : WFResponse <NSSecureCoding> {

	int _temperatureUnit;

}

@property (assign,nonatomic) int temperatureUnit;              //@synthesize temperatureUnit=_temperatureUnit - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)temperatureUnit;
-(void)setTemperatureUnit:(int)arg1 ;
@end

