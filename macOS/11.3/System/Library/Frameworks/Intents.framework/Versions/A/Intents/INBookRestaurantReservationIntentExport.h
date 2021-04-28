/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INRestaurant, NSDateComponents, NSString, INRestaurantGuest, INRestaurantOffer;


@protocol INBookRestaurantReservationIntentExport <NSObject,JSExport>
@property (copy) INRestaurant * restaurant; 
@property (copy) NSDateComponents * bookingDateComponents; 
@property (assign) unsigned long long partySize; 
@property (copy) NSString * bookingIdentifier; 
@property (copy) INRestaurantGuest * guest; 
@property (copy) INRestaurantOffer * selectedOffer; 
@property (copy) NSString * guestProvidedSpecialRequestText; 
@required
-(id)init;
-(INRestaurantGuest *)guest;
-(unsigned long long)partySize;
-(void)setPartySize:(unsigned long long)arg1;
-(INRestaurant *)restaurant;
-(void)setGuest:(id)arg1;
-(void)setRestaurant:(id)arg1;
-(INRestaurantOffer *)selectedOffer;
-(void)setSelectedOffer:(id)arg1;
-(NSString *)guestProvidedSpecialRequestText;
-(void)setGuestProvidedSpecialRequestText:(id)arg1;
-(NSString *)bookingIdentifier;
-(void)setBookingIdentifier:(id)arg1;
-(NSDateComponents *)bookingDateComponents;
-(void)setBookingDateComponents:(id)arg1;

@end

