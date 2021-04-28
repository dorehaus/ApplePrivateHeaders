/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, NSNumber, INImage;


@protocol INGetAvailableRestaurantReservationBookingDefaultsIntentResponseExport <NSObject,JSExport>
@property (readonly) unsigned long long defaultPartySize; 
@property (copy,readonly) NSDate * defaultBookingDate; 
@property (copy) NSNumber * maximumPartySize; 
@property (copy) NSNumber * minimumPartySize; 
@property (copy) INImage * providerImage; 
@required
-(id)init;
-(INImage *)providerImage;
-(void)setProviderImage:(id)arg1;
-(unsigned long long)defaultPartySize;
-(NSDate *)defaultBookingDate;
-(NSNumber *)maximumPartySize;
-(void)setMaximumPartySize:(id)arg1;
-(NSNumber *)minimumPartySize;
-(void)setMinimumPartySize:(id)arg1;

@end
