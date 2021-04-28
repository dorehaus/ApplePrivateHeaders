/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/Versions/A/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveML/PMLProtoBufTracker.h>

@class PMLTrackerMockAdapter, NSArray;

@interface PMLAWDEvaluationTrackerMock : PMLProtoBufTracker {

	PMLTrackerMockAdapter* _adapter;

}

@property (nonatomic,readonly) NSArray * trackedEvaluations; 
+(id)mockTracker;
+(id)mockTrackerForPlanId:(id)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(id)initWithAdapter:(id)arg1 modelInfo:(id)arg2 ;
-(void)clearTrackedMessages;
-(NSArray *)trackedEvaluations;
@end

