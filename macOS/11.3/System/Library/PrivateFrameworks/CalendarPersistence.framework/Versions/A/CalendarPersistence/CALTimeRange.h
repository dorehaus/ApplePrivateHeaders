/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarPersistence/CalendarPersistence-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CALDate, CALDuration;

@interface CALTimeRange : NSObject <NSSecureCoding> {

	CALDate* _startDate;
	CALDate* _endDate;
	CALDuration* _duration;

}
+(char)supportsSecureCoding;
+(id)timeRangeWithStartDate:(id)arg1 withEndDate:(id)arg2 ;
+(id)timeRangeForDayEnglobing:(id)arg1 ;
+(id)timeRangeWithStartDate:(id)arg1 withDuration:(id)arg2 ;
+(id)timeRangeFromTimeRangeRoundedToFullDays:(id)arg1 ;
+(id)timeRangeUnboundedWithStartDate:(id)arg1 ;
+(id)timeRangeUnboundedWithEndDate:(id)arg1 ;
+(id)timeRangeFromTimeRange:(id)arg1 withShift:(id)arg2 ;
+(id)timeRangeUnbounded;
+(id)simplifyOverlappingTimeRanges:(id)arg1 ;
+(id)timeRangeForRecurrencesFromDate:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)isEqualTo:(id)arg1 ;
-(id)endDate;
-(id)startDate;
-(id)duration;
-(char)isInfinite;
-(long long)compareStartDate:(id)arg1 ;
-(id)intersection:(id)arg1 ;
-(id)initForDayEnglobing:(id)arg1 ;
-(id)initWithStartDate:(id)arg1 withDuration:(id)arg2 ;
-(id)initWithStartDate:(id)arg1 withEndDate:(id)arg2 ;
-(id)initUnboundedWithStartDate:(id)arg1 ;
-(id)initUnboundedWithEndDate:(id)arg1 ;
-(id)initFromTimeRange:(id)arg1 withShift:(id)arg2 ;
-(char)includesDate:(id)arg1 ;
-(char)intersectsTimeRangeExcludingBounds:(id)arg1 ;
-(char)includesDateExcludingBounds:(id)arg1 ;
-(char)intersectsTimeRange:(id)arg1 ;
-(char)includesOrEqualsTimeRange:(id)arg1 ;
-(id)initAsUnbounded;
-(char)isZeroDuration;
-(char)includesDateExcludingEndDate:(id)arg1 ;
-(char)intersectsTimeRangeExcludingUpperBound:(id)arg1 ;
-(char)strictlyIncludesTimeRange:(id)arg1 ;
-(id)union:(id)arg1 ;
-(id)minus:(id)arg1 ;
@end
