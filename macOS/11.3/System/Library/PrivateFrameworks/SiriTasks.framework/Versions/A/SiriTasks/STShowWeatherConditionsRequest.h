/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/Versions/A/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class STWeatherAttributes, STCity;

@interface STShowWeatherConditionsRequest : AFSiriRequest {

	STWeatherAttributes* _attributes;
	STCity* _city;

}
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)attributes;
-(id)city;
-(id)createResponse;
-(id)_initWithAttributes:(id)arg1 city:(id)arg2 ;
@end

