/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFQuantityFieldParameter.h>

@interface WFDurationQuantityFieldParameter : WFQuantityFieldParameter

@property (assign,nonatomic) unsigned long long possibleCalendarUnits; 
+(unsigned long long)calendarUnitFromUnitString:(id)arg1 ;
+(char)unitStringIsDurationUnit:(id)arg1 ;
-(id)initWithDefinition:(id)arg1 ;
-(void)createDialogRequestWithAttribution:(id)arg1 defaultState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)parameterStateIsValid:(id)arg1 ;
-(id)defaultSerializedRepresentation;
-(id)localizedLabelForPossibleUnit:(id)arg1 magnitude:(id)arg2 style:(unsigned long long)arg3 ;
-(unsigned long long)possibleCalendarUnits;
-(void)setPossibleCalendarUnits:(unsigned long long)arg1 ;
-(id)stateForDuration:(double)arg1 ;
@end

