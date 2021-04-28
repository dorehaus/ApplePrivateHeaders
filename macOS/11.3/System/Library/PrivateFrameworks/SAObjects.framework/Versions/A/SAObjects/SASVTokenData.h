/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SASVTokenData : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * endTimeMillis; 
@property (assign,nonatomic) float score; 
@property (nonatomic,copy) NSNumber * startTimeMillis; 
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tokenData;
+(id)tokenDataWithDictionary:(id)arg1 context:(id)arg2 ;
-(float)score;
-(id)groupIdentifier;
-(NSString *)text;
-(void)setScore:(float)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSNumber *)endTimeMillis;
-(void)setEndTimeMillis:(NSNumber *)arg1 ;
-(NSNumber *)startTimeMillis;
-(void)setStartTimeMillis:(NSNumber *)arg1 ;
@end

