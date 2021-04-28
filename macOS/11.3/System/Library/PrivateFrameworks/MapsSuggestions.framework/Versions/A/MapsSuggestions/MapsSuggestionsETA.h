/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/Versions/A/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <MapsSuggestions/MapsSuggestionsJSONable.h>

@class NSString, NSDate, CLLocation;

@interface MapsSuggestionsETA : NSObject <NSSecureCoding, NSCopying, MapsSuggestionsJSONable> {

	int _transportType;
	double _seconds;
	NSString* _shortTrafficString;
	NSString* _longTrafficString;
	NSString* _writtenRouteName;
	NSString* _spokenRouteName;
	NSDate* _time;
	CLLocation* _location;
	NSString* _originator;

}

@property (nonatomic,readonly) double seconds;                             //@synthesize seconds=_seconds - In the implementation block
@property (nonatomic,readonly) NSString * shortTrafficString;              //@synthesize shortTrafficString=_shortTrafficString - In the implementation block
@property (nonatomic,readonly) NSString * longTrafficString;               //@synthesize longTrafficString=_longTrafficString - In the implementation block
@property (nonatomic,readonly) NSString * writtenRouteName;                //@synthesize writtenRouteName=_writtenRouteName - In the implementation block
@property (nonatomic,readonly) NSString * spokenRouteName;                 //@synthesize spokenRouteName=_spokenRouteName - In the implementation block
@property (nonatomic,readonly) int transportType;                          //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) NSDate * time;                              //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) CLLocation * location;                      //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) NSString * originator;                      //@synthesize originator=_originator - In the implementation block
@property (nonatomic,readonly) double age; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)ETAWithData:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)data;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CLLocation *)location;
-(double)seconds;
-(NSDate *)time;
-(int)transportType;
-(double)age;
-(NSString *)writtenRouteName;
-(NSString *)spokenRouteName;
-(NSString *)originator;
-(NSString *)shortTrafficString;
-(NSString *)longTrafficString;
-(id)initWithSeconds:(double)arg1 shortTrafficString:(id)arg2 longTrafficString:(id)arg3 writtenRouteName:(id)arg4 spokenRouteName:(id)arg5 transportType:(int)arg6 location:(id)arg7 time:(id)arg8 ;
-(id)trafficString;
-(id)objectForJSON;
-(id)initWithSeconds:(double)arg1 shortTrafficString:(id)arg2 longTrafficString:(id)arg3 writtenRouteName:(id)arg4 spokenRouteName:(id)arg5 transportType:(int)arg6 location:(id)arg7 time:(id)arg8 originator:(id)arg9 ;
-(char)isEqualToETA:(id)arg1 ;
-(char)isValidForLocation:(id)arg1 requirements:(id)arg2 ;
-(id)initWithSeconds:(double)arg1 trafficString:(id)arg2 transportType:(int)arg3 location:(id)arg4 ;
-(char)isBetterThanETA:(id)arg1 requirements:(id)arg2 ;
@end

