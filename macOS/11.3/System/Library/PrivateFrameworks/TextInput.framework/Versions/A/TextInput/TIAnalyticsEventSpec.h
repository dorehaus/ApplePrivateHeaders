/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/Versions/A/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSArray;

@interface TIAnalyticsEventSpec : NSObject {

	char _isInputModeRequired;
	NSDictionary* _fieldSpecsByName;
	NSString* _name;
	NSArray* _fieldSpecs;

}

@property (nonatomic,readonly) NSDictionary * fieldSpecsByName;              //@synthesize fieldSpecsByName=_fieldSpecsByName - In the implementation block
@property (nonatomic,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) char isInputModeRequired;                     //@synthesize isInputModeRequired=_isInputModeRequired - In the implementation block
@property (nonatomic,readonly) NSArray * fieldSpecs;                         //@synthesize fieldSpecs=_fieldSpecs - In the implementation block
+(id)eventSpecWithName:(id)arg1 inputModeRequired:(char)arg2 ;
+(id)eventSpecWithName:(id)arg1 inputModeRequired:(char)arg2 fieldSpecs:(id)arg3 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 inputModeRequired:(char)arg2 fieldSpecs:(id)arg3 ;
-(id)fieldSpecWithName:(id)arg1 ;
-(NSDictionary *)fieldSpecsByName;
-(char)isInputModeRequired;
-(NSArray *)fieldSpecs;
@end

