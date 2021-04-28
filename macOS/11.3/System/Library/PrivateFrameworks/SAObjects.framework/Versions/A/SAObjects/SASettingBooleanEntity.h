/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASettingEntity.h>

@class NSNumber;

@interface SASettingBooleanEntity : SASettingEntity

@property (nonatomic,copy) NSNumber * previousValue; 
@property (assign,nonatomic) char value; 
+(id)booleanEntity;
+(id)booleanEntityWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)booleanEntityWithValue:(char)arg1 ;
-(char)value;
-(void)setValue:(char)arg1 ;
-(id)groupIdentifier;
-(id)initWithValue:(char)arg1 ;
-(id)encodedClassName;
-(NSNumber *)previousValue;
-(void)setPreviousValue:(NSNumber *)arg1 ;
@end

