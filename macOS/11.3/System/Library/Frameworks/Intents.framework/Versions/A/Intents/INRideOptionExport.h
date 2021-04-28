/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate, INPriceRange, NSNumber, NSArray, INImage, NSUserActivity;


@protocol INRideOptionExport <NSObject,JSExport>
@property (copy) NSString * name; 
@property (copy) NSDate * estimatedPickupDate; 
@property (copy) INPriceRange * priceRange; 
@property (copy) NSNumber * usesMeteredFare; 
@property (copy) NSString * disclaimerMessage; 
@property (copy) NSArray * availablePartySizeOptions; 
@property (copy) NSString * availablePartySizeOptionsSelectionPrompt; 
@property (copy) NSString * specialPricing; 
@property (copy) INImage * specialPricingBadgeImage; 
@property (copy) NSArray * fareLineItems; 
@property (retain) NSUserActivity * userActivityForBookingInApplication; 
@required
-(id)init;
-(NSString *)name;
-(void)setName:(id)arg1;
-(INPriceRange *)priceRange;
-(void)setPriceRange:(id)arg1;
-(NSDate *)estimatedPickupDate;
-(void)setEstimatedPickupDate:(id)arg1;
-(NSNumber *)usesMeteredFare;
-(void)setUsesMeteredFare:(id)arg1;
-(NSString *)disclaimerMessage;
-(void)setDisclaimerMessage:(id)arg1;
-(NSArray *)availablePartySizeOptions;
-(void)setAvailablePartySizeOptions:(id)arg1;
-(NSString *)availablePartySizeOptionsSelectionPrompt;
-(void)setAvailablePartySizeOptionsSelectionPrompt:(id)arg1;
-(NSString *)specialPricing;
-(void)setSpecialPricing:(id)arg1;
-(INImage *)specialPricingBadgeImage;
-(void)setSpecialPricingBadgeImage:(id)arg1;
-(NSArray *)fareLineItems;
-(void)setFareLineItems:(id)arg1;
-(NSUserActivity *)userActivityForBookingInApplication;
-(void)setUserActivityForBookingInApplication:(id)arg1;

@end
