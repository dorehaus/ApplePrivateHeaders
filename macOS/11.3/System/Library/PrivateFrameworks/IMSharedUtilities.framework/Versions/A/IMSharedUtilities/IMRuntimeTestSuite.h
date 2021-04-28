/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Versions/A/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUtilities/IMRuntimeTest.h>

@class NSMutableArray, IMRuntimeTest, NSTimer, NSArray;

@interface IMRuntimeTestSuite : IMRuntimeTest {

	NSMutableArray* _tests;
	double _testSuiteStartDelay;
	double _testStartDelay;
	NSMutableArray* _runningTests;
	IMRuntimeTest* _currentTest;
	NSTimer* _timer;

}

@property (retain) NSArray * tests;                            //@synthesize tests=_tests - In the implementation block
@property (retain) NSMutableArray * runningTests;              //@synthesize runningTests=_runningTests - In the implementation block
@property (retain) IMRuntimeTest * currentTest;                //@synthesize currentTest=_currentTest - In the implementation block
@property (__weak) NSTimer * timer;                            //@synthesize timer=_timer - In the implementation block
@property (assign) double testSuiteStartDelay;                 //@synthesize testSuiteStartDelay=_testSuiteStartDelay - In the implementation block
@property (assign) double testStartDelay;                      //@synthesize testStartDelay=_testStartDelay - In the implementation block
+(void)runTestsIfNeededWithRepeatCount:(long long)arg1 withCount:(long long)arg2 ;
+(void)runTestsIfNeededWithRepeatCount:(long long)arg1 ;
-(id)init;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(void)_cancelTimer;
-(NSArray *)tests;
-(void)startTest;
-(void)currentTestDidFinish;
-(void)_startNextTest;
-(double)testStartDelay;
-(void)_timerExpired:(id)arg1 ;
-(double)testSuiteStartDelay;
-(void)addTest:(id)arg1 ;
-(void)removeTest:(id)arg1 ;
-(void)setTests:(NSArray *)arg1 ;
-(void)setTestSuiteStartDelay:(double)arg1 ;
-(void)setTestStartDelay:(double)arg1 ;
-(NSMutableArray *)runningTests;
-(void)setRunningTests:(NSMutableArray *)arg1 ;
-(IMRuntimeTest *)currentTest;
-(void)setCurrentTest:(IMRuntimeTest *)arg1 ;
@end

