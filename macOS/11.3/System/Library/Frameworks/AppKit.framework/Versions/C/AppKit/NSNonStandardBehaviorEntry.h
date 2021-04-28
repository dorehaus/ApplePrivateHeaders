/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSValue;

@interface NSNonStandardBehaviorEntry : NSObject {

	NSString* _name;
	long long _reason;
	NSValue* _standardValue;
	NSValue* _actualValue;

}

@property (copy) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (assign) long long reason;                   //@synthesize reason=_reason - In the implementation block
@property (copy) NSValue * standardValue;              //@synthesize standardValue=_standardValue - In the implementation block
@property (copy) NSValue * actualValue;                //@synthesize actualValue=_actualValue - In the implementation block
-(void)dealloc;
-(NSString *)name;
-(long long)reason;
-(void)setName:(NSString *)arg1 ;
-(NSValue *)standardValue;
-(NSValue *)actualValue;
-(void)setReason:(long long)arg1 ;
-(void)setStandardValue:(NSValue *)arg1 ;
-(void)setActualValue:(NSValue *)arg1 ;
@end

