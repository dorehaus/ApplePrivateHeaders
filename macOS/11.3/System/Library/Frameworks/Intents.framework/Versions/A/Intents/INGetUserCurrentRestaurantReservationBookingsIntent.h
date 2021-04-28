/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INGetUserCurrentRestaurantReservationBookingsIntentExport.h>
#import <libobjc.A.dylib/NSCopying.h>

@class INRestaurant, NSString, NSNumber, NSDate;

@interface INGetUserCurrentRestaurantReservationBookingsIntent : INIntent <INGetUserCurrentRestaurantReservationBookingsIntentExport, NSCopying> {

	INRestaurant* _restaurant;
	NSString* _reservationIdentifier;
	NSNumber* _maximumNumberOfResults;
	NSDate* _earliestBookingDateForResults;

}

@property (copy) INRestaurant * restaurant;                           //@synthesize restaurant=_restaurant - In the implementation block
@property (copy) NSString * reservationIdentifier;                    //@synthesize reservationIdentifier=_reservationIdentifier - In the implementation block
@property (copy) NSNumber * maximumNumberOfResults;                   //@synthesize maximumNumberOfResults=_maximumNumberOfResults - In the implementation block
@property (copy) NSDate * earliestBookingDateForResults;              //@synthesize earliestBookingDateForResults=_earliestBookingDateForResults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)intentDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(INRestaurant *)restaurant;
-(void)setRestaurant:(INRestaurant *)arg1 ;
-(NSString *)reservationIdentifier;
-(void)setReservationIdentifier:(NSString *)arg1 ;
-(NSNumber *)maximumNumberOfResults;
-(void)setMaximumNumberOfResults:(NSNumber *)arg1 ;
-(NSDate *)earliestBookingDateForResults;
-(void)setEarliestBookingDateForResults:(NSDate *)arg1 ;
-(id)initWithRestaurant:(id)arg1 reservationIdentifier:(id)arg2 maximumNumberOfResults:(id)arg3 earliestBookingDateForResults:(id)arg4 ;
@end

