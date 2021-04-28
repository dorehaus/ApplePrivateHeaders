/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/Versions/A/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TIAnalyticsFieldSpec : NSObject {

	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
+(id)stringFieldSpecWithName:(id)arg1 ;
+(id)stringFieldSpecWithName:(id)arg1 allowedValues:(id)arg2 ;
+(id)integerFieldSpecWithName:(id)arg1 ;
+(id)integerFieldSpecWithName:(id)arg1 minValue:(long long)arg2 ;
+(id)integerFieldSpecWithName:(id)arg1 maxValue:(long long)arg2 ;
+(id)integerFieldSpecWithName:(id)arg1 minValue:(long long)arg2 maxValue:(long long)arg3 ;
+(id)integerFieldSpecWithName:(id)arg1 minValue:(id)arg2 maxValue:(id)arg3 significantDigits:(id)arg4 ;
+(id)floatFieldSpecWithName:(id)arg1 ;
+(id)floatFieldSpecWithName:(id)arg1 minValue:(double)arg2 ;
+(id)floatFieldSpecWithName:(id)arg1 maxValue:(double)arg2 ;
+(id)floatFieldSpecWithName:(id)arg1 minValue:(double)arg2 maxValue:(double)arg3 ;
+(id)floatFieldSpecWithName:(id)arg1 minValue:(id)arg2 maxValue:(id)arg3 significantDigits:(id)arg4 ;
+(id)booleanFieldSpecWithName:(id)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(char)validate:(id)arg1 error:(id*)arg2 ;
-(id)errorFromValue:(id)arg1 code:(long long)arg2 message:(id)arg3 ;
-(id)errorFromNil;
@end

