/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class SAWeatherAirQualityObject, SAWeatherCurrentConditions, NSArray, NSString, SAWeatherUnits, SAWeatherLocation;

@interface SAWeatherAbstractObject : SADomainObject

@property (nonatomic,retain) SAWeatherAirQualityObject * airQuality; 
@property (nonatomic,retain) SAWeatherCurrentConditions * currentConditions; 
@property (nonatomic,copy) NSArray * dailyForecasts; 
@property (nonatomic,copy) NSString * extendedForecastUrl; 
@property (nonatomic,copy) NSArray * hourlyForecasts; 
@property (nonatomic,retain) SAWeatherUnits * units; 
@property (nonatomic,retain) SAWeatherLocation * weatherLocation; 
@property (nonatomic,copy) NSString * weatherRequest; 
+(id)abstractObject;
+(id)abstractObjectWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAWeatherUnits *)units;
-(void)setUnits:(SAWeatherUnits *)arg1 ;
-(id)encodedClassName;
-(SAWeatherCurrentConditions *)currentConditions;
-(SAWeatherLocation *)weatherLocation;
-(void)setWeatherLocation:(SAWeatherLocation *)arg1 ;
-(SAWeatherAirQualityObject *)airQuality;
-(void)setAirQuality:(SAWeatherAirQualityObject *)arg1 ;
-(void)setCurrentConditions:(SAWeatherCurrentConditions *)arg1 ;
-(NSArray *)dailyForecasts;
-(void)setDailyForecasts:(NSArray *)arg1 ;
-(NSString *)extendedForecastUrl;
-(void)setExtendedForecastUrl:(NSString *)arg1 ;
-(NSArray *)hourlyForecasts;
-(void)setHourlyForecasts:(NSArray *)arg1 ;
-(NSString *)weatherRequest;
-(void)setWeatherRequest:(NSString *)arg1 ;
@end

