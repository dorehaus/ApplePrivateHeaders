/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface SMProgressEntry : NSObject {

	NSDate* _date;
	double _timeRemaining;
	double _transferRate;
	double _percentComplete;

}

@property (retain) NSDate * date;                       //@synthesize date=_date - In the implementation block
@property (assign) double timeRemaining;                //@synthesize timeRemaining=_timeRemaining - In the implementation block
@property (assign) double transferRate;                 //@synthesize transferRate=_transferRate - In the implementation block
@property (assign) double percentComplete;              //@synthesize percentComplete=_percentComplete - In the implementation block
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(double)percentComplete;
-(double)timeRemaining;
-(void)setTimeRemaining:(double)arg1 ;
-(void)setPercentComplete:(double)arg1 ;
-(void)setTransferRate:(double)arg1 ;
-(double)transferRate;
@end

