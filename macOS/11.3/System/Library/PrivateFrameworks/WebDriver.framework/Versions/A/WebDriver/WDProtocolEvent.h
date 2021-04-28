/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WebDriver.framework/Versions/A/WebDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface WDProtocolEvent : NSObject {

	NSString* _name;
	NSMutableDictionary* _parameters;

}

@property (nonatomic,copy,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
+(id)eventFromPayload:(id)arg1 usingTypeDictionary:(id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(NSMutableDictionary *)parameters;
-(char)isEqualToEvent:(id)arg1 ;
@end
