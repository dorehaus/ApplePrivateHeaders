/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/Versions/A/ProactiveEventTracker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveEventTracker/PETEventTracker.h>

@class NSString;

@interface PETGoalConversionEventTracker : PETEventTracker {

	NSString* _opportunityEvent;
	NSString* _conversionEvent;

}

@property (nonatomic,readonly) NSString * opportunityEvent;              //@synthesize opportunityEvent=_opportunityEvent - In the implementation block
@property (nonatomic,readonly) NSString * conversionEvent;               //@synthesize conversionEvent=_conversionEvent - In the implementation block
-(id)initWithFeatureId:(id)arg1 opportunityEvent:(id)arg2 conversionEvent:(id)arg3 registerProperties:(id)arg4 ;
-(id)initWithFeatureId:(id)arg1 opportunityEvent:(id)arg2 conversionEvent:(id)arg3 registerProperties:(id)arg4 propertySubsets:(id)arg5 ;
-(void)trackGoalOpportunityEventWithPropertyValues:(id)arg1 ;
-(void)trackGoalConversionEventWithPropertyValues:(id)arg1 ;
-(void)trackGoalOpportunityEventWithConversion:(char)arg1 propertyValues:(id)arg2 ;
-(void)_logValue:(id)arg1 forEvent:(id)arg2 stringifiedProperties:(id)arg3 metaData:(id)arg4 ;
-(id)_keyMetadataForEvent:(id)arg1 ;
-(NSString *)opportunityEvent;
-(NSString *)conversionEvent;
@end
