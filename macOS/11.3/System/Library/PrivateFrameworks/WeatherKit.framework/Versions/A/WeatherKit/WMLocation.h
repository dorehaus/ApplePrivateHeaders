/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WeatherKit.framework/Versions/A/WeatherKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherKit/WeatherKit-Structs.h>
#import <WeatherKit/WMObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/WMDataWithDate.h>

@class NSString, CLLocation, NSTimeZone, NSDate;

@interface WMLocation : WMObject <NSSecureCoding, NSCopying, WMDataWithDate> {

	NSString* _city;
	NSString* _county;
	NSString* _state;
	NSString* _stateAbbreviation;
	NSString* _country;
	NSString* _countryAbbreviation;
	CLLocation* _geoLocation;
	NSString* _locationID;
	NSTimeZone* _timeZone;
	long long _woeid;
	NSDate* _creationDate;

}

@property (copy) NSString * city;                                   //@synthesize city=_city - In the implementation block
@property (copy) NSString * county;                                 //@synthesize county=_county - In the implementation block
@property (copy) NSString * state;                                  //@synthesize state=_state - In the implementation block
@property (copy) NSString * stateAbbreviation;                      //@synthesize stateAbbreviation=_stateAbbreviation - In the implementation block
@property (copy) NSString * country;                                //@synthesize country=_country - In the implementation block
@property (copy) NSString * countryAbbreviation;                    //@synthesize countryAbbreviation=_countryAbbreviation - In the implementation block
@property (copy) CLLocation * geoLocation;                          //@synthesize geoLocation=_geoLocation - In the implementation block
@property (copy) NSString * locationID;                             //@synthesize locationID=_locationID - In the implementation block
@property (copy) NSTimeZone * timeZone;                             //@synthesize timeZone=_timeZone - In the implementation block
@property (assign) long long woeid;                                 //@synthesize woeid=_woeid - In the implementation block
@property (copy) NSDate * creationDate;                             //@synthesize creationDate=_creationDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)knownKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)state;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)timeZone;
-(void)setState:(NSString *)arg1 ;
-(NSDate *)creationDate;
-(NSString *)city;
-(NSString *)country;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setCity:(NSString *)arg1 ;
-(void)setCountry:(NSString *)arg1 ;
-(CLLocation *)geoLocation;
-(NSString *)locationID;
-(void)setLocationID:(NSString *)arg1 ;
-(void)setGeoLocation:(CLLocation *)arg1 ;
-(NSString *)county;
-(NSString *)stateAbbreviation;
-(NSString *)countryAbbreviation;
-(long long)woeid;
-(void)setCounty:(NSString *)arg1 ;
-(void)setStateAbbreviation:(NSString *)arg1 ;
-(void)setCountryAbbreviation:(NSString *)arg1 ;
-(void)setWoeid:(long long)arg1 ;
@end
