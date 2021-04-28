/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/Versions/A/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarFoundation/CalendarFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface EKTimeZone : NSObject <NSCopying> {

	NSString* _name;
	void* _internal;
	long long _lastStart;
	long long _lastEnd;
	unsigned long long _lastIndex;
	double _offset;

}
+(id)timeZoneWithName:(id)arg1 ;
+(id)timeZoneWithNSTimeZone:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)name;
-(double)secondsFromGMTForDate:(id)arg1 ;
-(id)abbreviationForDate:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(id)abbreviation;
-(double)secondsFromGMT;
-(double)secondsFromGMTForAbsoluteTime:(double)arg1 ;
-(double)nextDaylightSavingTimeTransitionAfterAbsoluteTime:(double)arg1 ;
-(id)initWithOffset:(double)arg1 name:(id)arg2 ;
-(id)abbreviationForAbsoluteTime:(double)arg1 ;
-(unsigned long long)_indexForAbsoluteTime:(double)arg1 ;
-(id)_abbreviationForIndex:(unsigned long long)arg1 ;
-(id)NSTimeZone;
@end
