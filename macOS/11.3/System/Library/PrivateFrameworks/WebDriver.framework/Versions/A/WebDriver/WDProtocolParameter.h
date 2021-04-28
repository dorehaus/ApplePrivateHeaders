/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WebDriver.framework/Versions/A/WebDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebDriver/WebDriver-Structs.h>
@class NSString, WDProtocolType;

@interface WDProtocolParameter : NSObject {

	char _optional;
	char _array;
	NSString* _name;
	WDProtocolType* _type;

}

@property (nonatomic,copy,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) WDProtocolType * type;                        //@synthesize type=_type - In the implementation block
@property (getter=isOptional,nonatomic,readonly) char optional;              //@synthesize optional=_optional - In the implementation block
@property (getter=isArray,nonatomic,readonly) char array;                    //@synthesize array=_array - In the implementation block
+(id)parameterFromPayload:(id)arg1 usingTypeDictionary:(id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(WDProtocolType *)type;
-(char)isOptional;
-(char)isEqualToParameter:(id)arg1 ;
-(char)isArray;
-(char)instanceIsValid:(id)arg1 ;
-(Ref<WTF::JSONImpl::Value, WTF::RawPtrTraits<WTF::JSONImpl::Value>>*)encodedValueForInstance:(id)arg1 ;
-(id)decodedInstanceFromPayload:(id)arg1 ;
-(id)initWithName:(id)arg1 type:(id)arg2 isOptional:(char)arg3 isArray:(char)arg4 ;
@end

