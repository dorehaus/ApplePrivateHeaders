/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INIntentResponse.h>
#import <libobjc.A.dylib/INImageProxyInjecting.h>
#import <libobjc.A.dylib/INGetAvailableRestaurantReservationBookingDefaultsIntentResponseExport.h>

@class NSDate, NSNumber, INImage, NSString;

@interface INGetAvailableRestaurantReservationBookingDefaultsIntentResponse : INIntentResponse <INImageProxyInjecting, INGetAvailableRestaurantReservationBookingDefaultsIntentResponseExport> {

	unsigned long long _defaultPartySize;
	NSDate* _defaultBookingDate;
	NSNumber* _maximumPartySize;
	NSNumber* _minimumPartySize;
	INImage* _providerImage;

}

@property (readonly) unsigned long long defaultPartySize;              //@synthesize defaultPartySize=_defaultPartySize - In the implementation block
@property (copy,readonly) NSDate * defaultBookingDate;                 //@synthesize defaultBookingDate=_defaultBookingDate - In the implementation block
@property (copy) NSNumber * maximumPartySize;                          //@synthesize maximumPartySize=_maximumPartySize - In the implementation block
@property (copy) NSNumber * minimumPartySize;                          //@synthesize minimumPartySize=_minimumPartySize - In the implementation block
@property (copy) INImage * providerImage;                              //@synthesize providerImage=_providerImage - In the implementation block
@property (readonly) long long code; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(long long)code;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_injectProxiesForImages:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_dictionaryRepresentation;
-(INImage *)providerImage;
-(void)setProviderImage:(INImage *)arg1 ;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)_initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 ;
-(unsigned long long)defaultPartySize;
-(NSDate *)defaultBookingDate;
-(NSNumber *)maximumPartySize;
-(void)setMaximumPartySize:(NSNumber *)arg1 ;
-(NSNumber *)minimumPartySize;
-(void)setMinimumPartySize:(NSNumber *)arg1 ;
-(id)initWithDefaultPartySize:(unsigned long long)arg1 defaultBookingDate:(id)arg2 code:(long long)arg3 userActivity:(id)arg4 ;
@end

