/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface GEOComposedRouteEVChargingStationInfo : NSObject <NSSecureCoding> {

	unsigned long long _muid;
	NSString* _name;
	double _chargingTime;
	double _batteryChargeAfterCharging;
	double _batteryPercentageAfterCharging;
	double _gainedBatteryCharge;
	double _gainedBatteryPercentage;
	double _gainedTravelRange;

}

@property (nonatomic,readonly) unsigned long long muid;                            //@synthesize muid=_muid - In the implementation block
@property (nonatomic,readonly) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) double chargingTime;                                //@synthesize chargingTime=_chargingTime - In the implementation block
@property (nonatomic,readonly) double batteryChargeAfterCharging;                  //@synthesize batteryChargeAfterCharging=_batteryChargeAfterCharging - In the implementation block
@property (nonatomic,readonly) double batteryPercentageAfterCharging;              //@synthesize batteryPercentageAfterCharging=_batteryPercentageAfterCharging - In the implementation block
@property (nonatomic,readonly) double gainedBatteryCharge;                         //@synthesize gainedBatteryCharge=_gainedBatteryCharge - In the implementation block
@property (nonatomic,readonly) double gainedBatteryPercentage;                     //@synthesize gainedBatteryPercentage=_gainedBatteryPercentage - In the implementation block
@property (nonatomic,readonly) double gainedTravelRange;                           //@synthesize gainedTravelRange=_gainedTravelRange - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(id)init;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)muid;
-(id)initWithGeoStep:(id)arg1 ;
-(double)chargingTime;
-(double)gainedBatteryPercentage;
-(double)gainedTravelRange;
-(double)gainedBatteryCharge;
-(double)batteryPercentageAfterCharging;
-(double)batteryChargeAfterCharging;
-(id)initWithGeoEVChargingInfo:(id)arg1 muid:(unsigned long long)arg2 name:(id)arg3 ;
-(id)initWithGeoETAStep:(id)arg1 withMuid:(unsigned long long)arg2 name:(id)arg3 ;
@end

