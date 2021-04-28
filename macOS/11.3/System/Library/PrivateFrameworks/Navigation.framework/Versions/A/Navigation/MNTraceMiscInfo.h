/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MNTraceMiscInfo : NSObject {

	NSString* _key;
	long long _intValue;
	double _doubleValue;
	NSString* _stringValue;

}

@property (nonatomic,copy) NSString * key;                      //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) long long intValue;                //@synthesize intValue=_intValue - In the implementation block
@property (assign,nonatomic) double doubleValue;                //@synthesize doubleValue=_doubleValue - In the implementation block
@property (nonatomic,copy) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
-(double)doubleValue;
-(long long)intValue;
-(NSString *)stringValue;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(void)setDoubleValue:(double)arg1 ;
-(void)setIntValue:(long long)arg1 ;
@end
