/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/Versions/A/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/STSiriModelObject.h>

@class STTemperature, NSNumber;

@interface STWeatherAttributes : STSiriModelObject {

	long long _condition;
	STTemperature* _temperature;
	STTemperature* _highTemperature;
	STTemperature* _lowTemperature;
	NSNumber* _chanceOfPrecipitation;

}
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)condition;
-(id)temperature;
-(id)chanceOfPrecipitation;
-(id)highTemperature;
-(id)lowTemperature;
-(id)_initWithCondition:(long long)arg1 temperature:(id)arg2 highTemperature:(id)arg3 lowTemperature:(id)arg4 chanceOfPrecipitation:(id)arg5 ;
@end

