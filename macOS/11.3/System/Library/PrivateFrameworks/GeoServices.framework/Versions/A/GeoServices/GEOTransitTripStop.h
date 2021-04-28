/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSTimeZone, NSString, NSArray, GEOLatLng, GEOStyleAttributes;


@protocol GEOTransitTripStop <NSObject>
@property (nonatomic,readonly) NSTimeZone * timeZone; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSArray * labelItems; 
@property (nonatomic,readonly) id<GEOTransitDeparture> departure; 
@property (nonatomic,readonly) unsigned long long stationIdentifier; 
@property (nonatomic,readonly) GEOLatLng * location; 
@property (nonatomic,readonly) GEOStyleAttributes * styleAttributes; 
@required
-(NSTimeZone *)timeZone;
-(NSString *)displayName;
-(GEOLatLng *)location;
-(GEOStyleAttributes *)styleAttributes;
-(id<GEOTransitDeparture>)departure;
-(unsigned long long)stationIdentifier;
-(NSArray *)labelItems;

@end
