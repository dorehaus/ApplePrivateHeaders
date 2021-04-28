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

@class NSDate, NSString;

@interface WFChangeForecast : NSObject <NSCopying, NSSecureCoding> {

	NSDate* _date;
	NSString* _descriptionSameTimeZone;
	NSString* _descriptionDifferentTimeZone;

}

@property (nonatomic,copy,readonly) NSDate * date;                                   //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSString * descriptionSameTimeZone;                   //@synthesize descriptionSameTimeZone=_descriptionSameTimeZone - In the implementation block
@property (nonatomic,readonly) NSString * descriptionDifferentTimeZone;              //@synthesize descriptionDifferentTimeZone=_descriptionDifferentTimeZone - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(id)initWithDate:(id)arg1 descriptionSameTimeZone:(id)arg2 descriptionDifferentTimeZone:(id)arg3 ;
-(NSString *)descriptionSameTimeZone;
-(NSString *)descriptionDifferentTimeZone;
@end

