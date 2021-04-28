/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/Versions/A/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, RTLocation, NSString, NSUUID, NSData, RTMapItem, RTLocationOfInterest;

@interface RTVehicleEvent : NSObject <NSCopying, NSSecureCoding> {

	char _userSetLocation;
	char _usualLocation;
	char _confirmed;
	char _locationFinalized;
	NSDate* _date;
	RTLocation* _location;
	NSString* _vehicleIdentifier;
	NSString* _notes;
	NSUUID* _identifier;
	NSData* _photo;
	RTMapItem* _mapItem;
	unsigned long long _locationQuality;
	RTLocationOfInterest* _nearbyLocationOfInterest;

}

@property (nonatomic,copy) NSDate * date;                                                //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) RTLocation * location;                                        //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString * vehicleIdentifier;                                 //@synthesize vehicleIdentifier=_vehicleIdentifier - In the implementation block
@property (assign,nonatomic) char userSetLocation;                                       //@synthesize userSetLocation=_userSetLocation - In the implementation block
@property (nonatomic,copy) NSString * notes;                                             //@synthesize notes=_notes - In the implementation block
@property (nonatomic,copy) NSUUID * identifier;                                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSData * photo;                                             //@synthesize photo=_photo - In the implementation block
@property (nonatomic,retain) RTMapItem * mapItem;                                        //@synthesize mapItem=_mapItem - In the implementation block
@property (assign,nonatomic) unsigned long long locationQuality;                         //@synthesize locationQuality=_locationQuality - In the implementation block
@property (assign,nonatomic) char usualLocation;                                         //@synthesize usualLocation=_usualLocation - In the implementation block
@property (nonatomic,copy) RTLocationOfInterest * nearbyLocationOfInterest;              //@synthesize nearbyLocationOfInterest=_nearbyLocationOfInterest - In the implementation block
@property (assign,nonatomic) char confirmed;                                             //@synthesize confirmed=_confirmed - In the implementation block
@property (assign,nonatomic) char locationFinalized;                                     //@synthesize locationFinalized=_locationFinalized - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(id)initWithDate:(id)arg1 ;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(RTLocation *)location;
-(void)setDate:(NSDate *)arg1 ;
-(void)setLocation:(RTLocation *)arg1 ;
-(RTMapItem *)mapItem;
-(void)setNotes:(NSString *)arg1 ;
-(NSString *)notes;
-(void)setMapItem:(RTMapItem *)arg1 ;
-(NSString *)vehicleIdentifier;
-(char)userSetLocation;
-(unsigned long long)locationQuality;
-(char)usualLocation;
-(RTLocationOfInterest *)nearbyLocationOfInterest;
-(id)initWithDate:(id)arg1 location:(id)arg2 vehicleIdentifier:(id)arg3 userSetLocation:(char)arg4 notes:(id)arg5 identifier:(id)arg6 photo:(id)arg7 mapItem:(id)arg8 confirmed:(char)arg9 ;
-(void)setLocationQuality:(unsigned long long)arg1 ;
-(void)setLocationFinalized:(char)arg1 ;
-(char)locationFinalized;
-(char)confirmed;
-(void)setConfirmed:(char)arg1 ;
-(void)setUserSetLocation:(char)arg1 ;
-(void)setPhoto:(NSData *)arg1 ;
-(void)setUsualLocation:(char)arg1 ;
-(void)setNearbyLocationOfInterest:(RTLocationOfInterest *)arg1 ;
-(void)setVehicleIdentifier:(NSString *)arg1 ;
-(NSData *)photo;
@end

