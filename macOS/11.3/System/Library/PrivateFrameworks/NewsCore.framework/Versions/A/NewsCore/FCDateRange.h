/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface FCDateRange : NSObject <NSCopying, NSSecureCoding> {

	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,readonly) NSDate * startDate;                                                   //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                                                     //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSDate * earlierDate; 
@property (nonatomic,readonly) NSDate * laterDate; 
@property (nonatomic,readonly) char isFinite; 
@property (nonatomic,readonly) char isFromInfinity; 
@property (nonatomic,readonly) char isToInfinity; 
@property (nonatomic,readonly) double timeInterval; 
@property (nonatomic,readonly) double absoluteTimeInterval; 
@property (nonatomic,readonly) unsigned long long minMillisecondsTimeIntervalSince1970; 
@property (nonatomic,readonly) unsigned long long maxMillisecondsTimeIntervalSince1970; 
+(char)supportsSecureCoding;
+(id)dateRangeWithStartDate:(id)arg1 endDate:(id)arg2 ;
+(id)dateRangeWithEarlierDate:(id)arg1 laterDate:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(long long)compare:(id)arg1 ;
-(double)timeInterval;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(char)containsDate:(id)arg1 ;
-(double)absoluteTimeInterval;
-(char)isFinite;
-(id)initWithEarlierDate:(id)arg1 laterDate:(id)arg2 ;
-(char)isFromInfinity;
-(char)isToInfinity;
-(NSDate *)earlierDate;
-(NSDate *)laterDate;
-(id)initWithStartDate:(id)arg1 timeInterval:(double)arg2 ;
-(unsigned long long)minMillisecondsTimeIntervalSince1970;
-(unsigned long long)maxMillisecondsTimeIntervalSince1970;
-(char)isWithinTimeInterval:(double)arg1 ofDateRange:(id)arg2 ;
-(char)startsLaterThanDateRange:(id)arg1 ;
-(id)slicesWithTimeInterval:(double)arg1 ;
-(id)sliceForDate:(id)arg1 withInterval:(double)arg2 ;
-(long long)sliceIndexForDate:(id)arg1 withInterval:(double)arg2 ;
-(id)intersectionWithDateRange:(id)arg1 ;
-(id)timestampDescription;
@end

