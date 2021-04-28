/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSUtility.framework/Versions/A/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSUtility/TSUtility-Structs.h>
@class NSString;

@interface TSUPerformanceTest : NSObject {

	NSString* mName;
	SEL mSelector;
	id mTarget;
	double mGoalTime;
	double mPrecision;
	char mQuiet;
	TSUOpstat_s mTiming;
	char mPassed;

}

@property (nonatomic,readonly) NSString * name; 
@property (assign,nonatomic) TSUOpstat_s timing; 
@property (assign,nonatomic) double goalTime; 
@property (assign,nonatomic) double precision; 
@property (assign,nonatomic) char quiet; 
@property (nonatomic,readonly) char passed; 
+(id)csvHeader;
-(void)run;
-(void)dealloc;
-(NSString *)name;
-(double)precision;
-(void)setPrecision:(double)arg1 ;
-(TSUOpstat_s)timing;
-(void)setTiming:(TSUOpstat_s)arg1 ;
-(void)report;
-(id)initWithName:(id)arg1 selector:(SEL)arg2 target:(id)arg3 goalTime:(double)arg4 ;
-(id)csvString;
-(double)goalTime;
-(void)setGoalTime:(double)arg1 ;
-(char)quiet;
-(void)setQuiet:(char)arg1 ;
-(char)passed;
@end
