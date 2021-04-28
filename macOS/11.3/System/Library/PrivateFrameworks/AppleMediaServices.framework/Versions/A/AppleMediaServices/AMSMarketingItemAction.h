/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, AMSBuyParams, NSString, NSNumber, NSArray, NSURL;

@interface AMSMarketingItemAction : NSObject {

	NSDictionary* _rawValues;

}

@property (retain) NSDictionary * rawValues;                      //@synthesize rawValues=_rawValues - In the implementation block
@property (readonly) AMSBuyParams * buyParams; 
@property (readonly) NSString * callToActionLabel; 
@property (readonly) NSString * disclaimerText; 
@property (readonly) char isDefault; 
@property (readonly) char isFamily; 
@property (readonly) char isRecommended; 
@property (readonly) NSString * offerID; 
@property (readonly) NSNumber * price; 
@property (readonly) NSString * priceForDisplay; 
@property (readonly) NSNumber * priceDiff; 
@property (readonly) NSString * priceDiffForDisplay; 
@property (readonly) NSString * valuePropDetail; 
@property (readonly) NSString * valuePropInfo; 
@property (readonly) NSArray * serviceComponents; 
@property (readonly) NSString * type; 
@property (readonly) NSURL * url; 
-(id)description;
-(id)name;
-(NSString *)type;
-(id)initWithDictionary:(id)arg1 ;
-(NSURL *)url;
-(NSDictionary *)rawValues;
-(NSNumber *)price;
-(char)isRecommended;
-(char)isDefault;
-(AMSBuyParams *)buyParams;
-(id)_serviceNames;
-(id)_servicesData;
-(id)_serviceComponentsFromMap:(id)arg1 withNames:(id)arg2 ;
-(NSString *)callToActionLabel;
-(NSString *)disclaimerText;
-(char)isFamily;
-(NSString *)offerID;
-(NSNumber *)priceDiff;
-(NSString *)priceDiffForDisplay;
-(NSString *)priceForDisplay;
-(NSArray *)serviceComponents;
-(NSString *)valuePropDetail;
-(NSString *)valuePropInfo;
-(id)dismissLabel;
-(id)freeTrialPeriod;
-(id)inAppID;
-(id)introOfferPeriod;
-(id)introOfferPrice;
-(id)introOfferPriceForDisplay;
-(char)isYearly;
-(id)priceFormatted;
-(id)priceString;
-(id)recurringSubscriptionPeriod;
-(void)setRawValues:(NSDictionary *)arg1 ;
@end
