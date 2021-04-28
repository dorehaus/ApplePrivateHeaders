/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/Versions/A/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface WFNextHourPrecipitationMinute : NSObject <NSCopying, NSSecureCoding> {

	double _intensity;
	double _chance;
	double _perceivedIntensity;
	NSDate* _date;

}

@property (nonatomic,readonly) double intensity;                       //@synthesize intensity=_intensity - In the implementation block
@property (nonatomic,readonly) double chance;                          //@synthesize chance=_chance - In the implementation block
@property (nonatomic,readonly) double perceivedIntensity;              //@synthesize perceivedIntensity=_perceivedIntensity - In the implementation block
@property (nonatomic,readonly) NSDate * date;                          //@synthesize date=_date - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(double)intensity;
-(double)chance;
-(double)perceivedIntensity;
-(id)initWithIntensity:(double)arg1 chance:(double)arg2 perceivedIntensity:(double)arg3 date:(id)arg4 ;
@end

