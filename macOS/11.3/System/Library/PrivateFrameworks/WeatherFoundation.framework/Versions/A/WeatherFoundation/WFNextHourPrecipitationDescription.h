/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/Versions/A/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString, NSDictionary;

@interface WFNextHourPrecipitationDescription : NSObject <NSCopying, NSSecureCoding> {

	NSDate* _validUntil;
	NSString* _shortTemplate;
	NSString* _longTemplate;
	NSDictionary* _parameters;

}

@property (nonatomic,copy) NSString * shortTemplate;                     //@synthesize shortTemplate=_shortTemplate - In the implementation block
@property (nonatomic,copy) NSString * longTemplate;                      //@synthesize longTemplate=_longTemplate - In the implementation block
@property (nonatomic,copy) NSDictionary * parameters;                    //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) NSString * shortDescription; 
@property (nonatomic,readonly) NSString * longDescription; 
@property (nonatomic,copy,readonly) NSDate * validUntil;                 //@synthesize validUntil=_validUntil - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(NSString *)shortDescription;
-(char)isValidAtDate:(id)arg1 ;
-(NSString *)longDescription;
-(NSDate *)validUntil;
-(id)initWithShortTemplate:(id)arg1 longTemplate:(id)arg2 parameters:(id)arg3 validUntil:(id)arg4 ;
-(id)fillTemplate:(id)arg1 withDate:(id)arg2 ;
-(NSString *)shortTemplate;
-(NSString *)longTemplate;
-(void)setShortTemplate:(NSString *)arg1 ;
-(void)setLongTemplate:(NSString *)arg1 ;
@end

