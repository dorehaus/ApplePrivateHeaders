/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Accounts.framework/Versions/A/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSMutableArray, NSDate;

@interface ACSimpleRateLimiter : NSObject {

	unsigned long long _maximum;
	double _timeInterval;
	NSLock* _instanceLock;
	NSMutableArray* _sortedActionDates;

}

@property (readonly) NSDate * rateLimitingStartDate; 
@property (retain) NSLock * instanceLock;                           //@synthesize instanceLock=_instanceLock - In the implementation block
@property (retain) NSMutableArray * sortedActionDates;              //@synthesize sortedActionDates=_sortedActionDates - In the implementation block
@property (readonly) unsigned long long maximum;                    //@synthesize maximum=_maximum - In the implementation block
@property (readonly) double timeInterval;                           //@synthesize timeInterval=_timeInterval - In the implementation block
-(NSLock *)instanceLock;
-(NSDate *)rateLimitingStartDate;
-(void)locked_removeDatesBefore:(id)arg1 ;
-(NSMutableArray *)sortedActionDates;
-(void)locked_addDate:(id)arg1 ;
-(unsigned long long)locked_indexOfFirstAfter:(id)arg1 ;
-(char)reservePerformActionNow;
-(char)isEmptyAfterFlushing;
-(void)setInstanceLock:(NSLock *)arg1 ;
-(void)setSortedActionDates:(NSMutableArray *)arg1 ;
-(double)timeInterval;
-(unsigned long long)maximum;
-(id)initWithMaximum:(unsigned long long)arg1 inTimeInterval:(double)arg2 ;
@end
