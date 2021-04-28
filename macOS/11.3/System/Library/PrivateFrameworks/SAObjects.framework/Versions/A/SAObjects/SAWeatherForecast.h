/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, SAWeatherCondition, NSString;

@interface SAWeatherForecast : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * chanceOfPrecipitation; 
@property (nonatomic,retain) SAWeatherCondition * condition; 
@property (nonatomic,copy) NSNumber * isUserRequested; 
@property (nonatomic,copy) NSNumber * timeIndex; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)forecast;
+(id)forecastWithDictionary:(id)arg1 context:(id)arg2 ;
-(SAWeatherCondition *)condition;
-(id)groupIdentifier;
-(void)setCondition:(SAWeatherCondition *)arg1 ;
-(void)setChanceOfPrecipitation:(NSNumber *)arg1 ;
-(NSNumber *)chanceOfPrecipitation;
-(id)encodedClassName;
-(NSNumber *)isUserRequested;
-(void)setIsUserRequested:(NSNumber *)arg1 ;
-(NSNumber *)timeIndex;
-(void)setTimeIndex:(NSNumber *)arg1 ;
@end
