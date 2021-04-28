/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreMLTestFramework.framework/Versions/A/CoreMLTestFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol _MLTInputProvider
@property (readonly) char dataAvailable; 
@property (nonatomic,copy) NSString * inputDataKey; 
@property (nonatomic,copy) NSString * vecDataKey; 
@property (nonatomic,copy) NSString * otherFrameWorkPredictionKey; 
@property (nonatomic,copy) NSString * testCaseNameKey; 
@property (nonatomic,copy) NSArray * outputTestData; 
@required
-(char)dataAvailable;
-(id)nextDataSet:(id*)arg1;
-(NSString *)inputDataKey;
-(NSString *)otherFrameWorkPredictionKey;
-(NSString *)testCaseNameKey;
-(void)setInputDataKey:(id)arg1;
-(NSString *)vecDataKey;
-(void)setVecDataKey:(id)arg1;
-(void)setOtherFrameWorkPredictionKey:(id)arg1;
-(void)setTestCaseNameKey:(id)arg1;
-(NSArray *)outputTestData;
-(void)setOutputTestData:(id)arg1;

@end

