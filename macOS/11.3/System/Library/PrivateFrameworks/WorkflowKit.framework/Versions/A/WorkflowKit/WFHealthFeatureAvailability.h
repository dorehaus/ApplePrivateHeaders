/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFHealthFeatureObserver;
@interface WFHealthFeatureAvailability : NSObject {

	id<WFHealthFeatureObserver> _observer;

}

@property (assign,nonatomic,__weak) id<WFHealthFeatureObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) unsigned long long sleepOnboardingStatus; 
-(void)setObserver:(id<WFHealthFeatureObserver>)arg1 ;
-(id<WFHealthFeatureObserver>)observer;
-(unsigned long long)sleepOnboardingStatus;
-(id)initWithSleepFeature:(unsigned long long)arg1 ;
@end

