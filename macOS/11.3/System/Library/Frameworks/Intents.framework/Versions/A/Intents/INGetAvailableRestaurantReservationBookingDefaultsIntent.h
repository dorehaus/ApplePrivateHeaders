/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INGetAvailableRestaurantReservationBookingDefaultsIntentExport.h>

@class INRestaurant, NSString;

@interface INGetAvailableRestaurantReservationBookingDefaultsIntent : INIntent <INGetAvailableRestaurantReservationBookingDefaultsIntentExport> {

	INRestaurant* _restaurant;

}

@property (copy) INRestaurant * restaurant;                         //@synthesize restaurant=_restaurant - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)intentDescription;
-(char)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(INRestaurant *)restaurant;
-(void)setRestaurant:(INRestaurant *)arg1 ;
-(id)initWithRestaurant:(id)arg1 ;
@end
