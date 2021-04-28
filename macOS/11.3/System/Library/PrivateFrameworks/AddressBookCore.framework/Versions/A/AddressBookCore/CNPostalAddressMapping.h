/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookCore.framework/Versions/A/AddressBookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CNPostalAddressMapping : NSObject
+(id)defaultCountryCode;
+(id)URLWithAddress:(id)arg1 isDirections:(char)arg2 defaultCountryCode:(id)arg3 ;
+(id)showLocationURLWithPostalAddress:(id)arg1 ;
+(void)sanitizeCountryCodeInAddress:(id)arg1 defaultCountryCode:(id)arg2 ;
+(void)sanitizeStreetInAddress:(id)arg1 ;
+(void)sanitizeCityInAddress:(id)arg1 ;
+(void)sanitizeStateInAddress:(id)arg1 ;
+(void)sanitizePostalCodeInAddress:(id)arg1 ;
+(void)sanitizeCountryInAddress:(id)arg1 ;
+(id)queryForSanitizedAddress:(id)arg1 ;
+(void)sanitizeStreet_cz:(id)arg1 ;
+(void)sanitizeStreet:(id)arg1 ;
+(void)sanitizeCity_jp:(id)arg1 ;
+(void)sanitizeCity_cz:(id)arg1 ;
+(void)sanitizeCity:(id)arg1 ;
+(id)makeQueryFromAddress:(id)arg1 ;
+(void)trimEmptyFieldsFromQuery:(id)arg1 ;
+(void)cleanseQuery:(id)arg1 ;
+(id)makeQueryFromAddress_jp:(id)arg1 ;
+(id)makeQueryFromAddress_mx:(id)arg1 ;
+(id)makeQueryFromAddress_nz:(id)arg1 ;
+(id)showLocationURLWithAddressDictionary:(id)arg1 ;
+(id)showLocationURLWithPostalAddress:(id)arg1 defaultCountryCode:(id)arg2 ;
+(id)getDirectionsURLWithPostalAddress:(id)arg1 ;
@end

