/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/Versions/A/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TIUserModelValues.h>

@class NSMutableDictionary, TIKBAnalyticsMetricsContext;

@interface TIKBUserModelValues : TIUserModelValues {

	NSMutableDictionary* _stringValues;

}

@property (nonatomic,readonly) TIKBAnalyticsMetricsContext * kbContext; 
-(id)initWithInputMode:(id)arg1 context:(id)arg2 userModelDataStore:(id)arg3 durableCounters:(id)arg4 settingsDictionary:(id)arg5 ;
-(void)persistForDate:(id)arg1 ;
-(id)settingValueFromName:(id)arg1 ;
-(TIKBAnalyticsMetricsContext *)kbContext;
-(id)metricValue:(id)arg1 fromRegistry:(id)arg2 andUserModel:(id)arg3 forNumberOfDays:(int)arg4 ;
-(id)metricValuesByWordLength:(id)arg1 fromRegistry:(id)arg2 andUserModel:(id)arg3 forNumberOfDays:(int)arg4 ;
-(id)computeValueWithDescriptor:(id)arg1 fromRegistry:(id)arg2 andUserModel:(id)arg3 forNumberOfDays:(int)arg4 ;
-(id)computeValuesByWordLengthWithDescriptor:(id)arg1 fromRegistry:(id)arg2 andUserModel:(id)arg3 forNumberOfDays:(int)arg4 ;
-(id)bucketCountsByWordLength:(id)arg1 ;
-(id)computeValueFromCount:(id)arg1 bucketThresholds:(id)arg2 bucketValues:(id)arg3 ;
-(id)computeValueFromExpression:(id)arg1 precondition:(id)arg2 defaultValue:(id)arg3 bindings:(id)arg4 bucketThresholds:(id)arg5 bucketValues:(id)arg6 ;
-(id)calcFloatingKeyboardUsageFromUserModel:(id)arg1 andRegistry:(id)arg2 ;
-(id)calcTypingSpeedFromUserModel:(id)arg1 andRegistry:(id)arg2 ;
-(id)calcAutocorrectionEnabled;
@end

