/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/Versions/A/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BSMonotonicReferenceTime : NSObject {

	double _startTimeStamp;

}

@property (nonatomic,readonly) double timeIntervalSinceNow; 
@property (nonatomic,readonly) double timeIntervalToNow; 
+(id)distantFuture;
+(id)distantPast;
+(id)now;
+(id)referenceTimeWithTimeIntervalSinceNow:(double)arg1 ;
+(id)referenceTimeForDate:(id)arg1 ;
-(id)date;
-(double)timeIntervalSinceNow;
-(double)timeIntervalToNow;
-(double)timeIntervalSinceReferenceTime:(id)arg1 ;
@end

