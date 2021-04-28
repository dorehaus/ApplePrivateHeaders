/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface RTLearnedPlaceTypeInferenceStats : NSObject {

	NSArray* _weeklyStats;
	double _weeklyAggregateDwellTimeBetweenDateRangeAverage;
	double _weeklyAggregateDwellTimeBetweenDateRangeStandardDeviation;
	double _weeklyTotalDailyVisitCountAverage;
	double _weeklyDaysWithNonZeroDwellTimeAverage;
	long long _totalDailyVisitCount;
	long long _weeksWithNonZeroDwellTime;
	double _topMedianDwellTime;

}

@property (nonatomic,readonly) NSArray * weeklyStats;                                                         //@synthesize weeklyStats=_weeklyStats - In the implementation block
@property (nonatomic,readonly) double weeklyAggregateDwellTimeBetweenDateRangeAverage;                        //@synthesize weeklyAggregateDwellTimeBetweenDateRangeAverage=_weeklyAggregateDwellTimeBetweenDateRangeAverage - In the implementation block
@property (nonatomic,readonly) double weeklyAggregateDwellTimeBetweenDateRangeStandardDeviation;              //@synthesize weeklyAggregateDwellTimeBetweenDateRangeStandardDeviation=_weeklyAggregateDwellTimeBetweenDateRangeStandardDeviation - In the implementation block
@property (nonatomic,readonly) double weeklyTotalDailyVisitCountAverage;                                      //@synthesize weeklyTotalDailyVisitCountAverage=_weeklyTotalDailyVisitCountAverage - In the implementation block
@property (nonatomic,readonly) double weeklyDaysWithNonZeroDwellTimeAverage;                                  //@synthesize weeklyDaysWithNonZeroDwellTimeAverage=_weeklyDaysWithNonZeroDwellTimeAverage - In the implementation block
@property (nonatomic,readonly) long long totalDailyVisitCount;                                                //@synthesize totalDailyVisitCount=_totalDailyVisitCount - In the implementation block
@property (nonatomic,readonly) long long weeksWithNonZeroDwellTime;                                           //@synthesize weeksWithNonZeroDwellTime=_weeksWithNonZeroDwellTime - In the implementation block
@property (nonatomic,readonly) double topMedianDwellTime;                                                     //@synthesize topMedianDwellTime=_topMedianDwellTime - In the implementation block
-(id)description;
-(double)weeklyAggregateDwellTimeBetweenDateRangeAverage;
-(double)weeklyTotalDailyVisitCountAverage;
-(double)weeklyDaysWithNonZeroDwellTimeAverage;
-(double)topMedianDwellTime;
-(long long)weeksWithNonZeroDwellTime;
-(long long)totalDailyVisitCount;
-(NSArray *)weeklyStats;
-(double)weeklyAggregateDwellTimeBetweenDateRangeStandardDeviation;
-(id)initWithWeeklyStats:(id)arg1 topMedianDwellTime:(double)arg2 ;
@end

