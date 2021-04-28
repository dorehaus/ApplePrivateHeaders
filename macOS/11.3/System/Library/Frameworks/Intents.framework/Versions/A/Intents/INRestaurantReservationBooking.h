/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INRestaurantReservationBookingExport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class INRestaurant, NSString, NSDate, NSArray;

@interface INRestaurantReservationBooking : NSObject <INRestaurantReservationBookingExport, NSSecureCoding, NSCopying> {

	char _bookingAvailable;
	char _requiresManualRequest;
	char _requiresEmailAddress;
	char _requiresName;
	char _requiresPhoneNumber;
	INRestaurant* _restaurant;
	NSString* _bookingDescription;
	NSDate* _bookingDate;
	unsigned long long _partySize;
	NSString* _bookingIdentifier;
	NSArray* _offers;

}

@property (copy) INRestaurant * restaurant;                               //@synthesize restaurant=_restaurant - In the implementation block
@property (copy) NSString * bookingDescription;                           //@synthesize bookingDescription=_bookingDescription - In the implementation block
@property (copy) NSDate * bookingDate;                                    //@synthesize bookingDate=_bookingDate - In the implementation block
@property (assign) unsigned long long partySize;                          //@synthesize partySize=_partySize - In the implementation block
@property (copy) NSString * bookingIdentifier;                            //@synthesize bookingIdentifier=_bookingIdentifier - In the implementation block
@property (getter=isBookingAvailable) char bookingAvailable;              //@synthesize bookingAvailable=_bookingAvailable - In the implementation block
@property (copy) NSArray * offers;                                        //@synthesize offers=_offers - In the implementation block
@property (assign) char requiresManualRequest;                            //@synthesize requiresManualRequest=_requiresManualRequest - In the implementation block
@property (assign) char requiresEmailAddress;                             //@synthesize requiresEmailAddress=_requiresEmailAddress - In the implementation block
@property (assign) char requiresName;                                     //@synthesize requiresName=_requiresName - In the implementation block
@property (assign) char requiresPhoneNumber;                              //@synthesize requiresPhoneNumber=_requiresPhoneNumber - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(unsigned long long)partySize;
-(void)setPartySize:(unsigned long long)arg1 ;
-(INRestaurant *)restaurant;
-(NSArray *)offers;
-(void)setOffers:(NSArray *)arg1 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(void)setRestaurant:(INRestaurant *)arg1 ;
-(NSString *)bookingDescription;
-(void)setBookingDescription:(NSString *)arg1 ;
-(NSDate *)bookingDate;
-(void)setBookingDate:(NSDate *)arg1 ;
-(NSString *)bookingIdentifier;
-(void)setBookingIdentifier:(NSString *)arg1 ;
-(char)isBookingAvailable;
-(void)setBookingAvailable:(char)arg1 ;
-(char)requiresManualRequest;
-(void)setRequiresManualRequest:(char)arg1 ;
-(char)requiresEmailAddress;
-(void)setRequiresEmailAddress:(char)arg1 ;
-(char)requiresName;
-(void)setRequiresName:(char)arg1 ;
-(char)requiresPhoneNumber;
-(void)setRequiresPhoneNumber:(char)arg1 ;
-(id)initWithRestaurant:(id)arg1 bookingDate:(id)arg2 partySize:(unsigned long long)arg3 bookingIdentifier:(id)arg4 ;
@end

