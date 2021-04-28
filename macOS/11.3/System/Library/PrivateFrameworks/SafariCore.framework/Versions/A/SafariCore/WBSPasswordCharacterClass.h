/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/Versions/A/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WBSPasswordCharacterClass : NSObject {

	long long _type;
	NSString* _value;

}

@property (nonatomic,readonly) long long type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * value;              //@synthesize value=_value - In the implementation block
+(id)namedCharacterClassWithType:(long long)arg1 ;
+(id)customCharacterClassWithValue:(id)arg1 ;
+(id)unicodeCharacterClass;
+(id)asciiPrintableCharacterClass;
+(id)uppercaseCharacterClass;
+(id)lowercaseCharacterClass;
+(id)digitCharacterClass;
+(id)specialCharacterClass;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)type;
-(NSString *)value;
-(id)initWithType:(long long)arg1 value:(id)arg2 ;
@end

