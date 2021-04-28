/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/Versions/A/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFNaming.h>
#import <libobjc.A.dylib/WFSerializableContent.h>

@class NSString, CNPostalAddress, CLPlacemark;

@interface WFStreetAddress : NSObject <WFNaming, WFSerializableContent> {

	NSString* _addressString;
	NSString* _street;
	CNPostalAddress* _postalAddress;
	CLPlacemark* _placemark;
	NSString* _subLocality;
	NSString* _city;
	NSString* _subAdministrativeArea;
	NSString* _state;
	NSString* _postalCode;
	NSString* _country;
	NSString* _isoCountryCode;
	NSString* _label;

}

@property (nonatomic,readonly) CNPostalAddress * postalAddress;               //@synthesize postalAddress=_postalAddress - In the implementation block
@property (nonatomic,readonly) NSString * addressString;                      //@synthesize addressString=_addressString - In the implementation block
@property (nonatomic,readonly) NSString * shortAddressString; 
@property (nonatomic,readonly) CLPlacemark * placemark;                       //@synthesize placemark=_placemark - In the implementation block
@property (nonatomic,readonly) NSString * street;                             //@synthesize street=_street - In the implementation block
@property (nonatomic,readonly) NSString * subLocality;                        //@synthesize subLocality=_subLocality - In the implementation block
@property (nonatomic,readonly) NSString * city;                               //@synthesize city=_city - In the implementation block
@property (nonatomic,readonly) NSString * subAdministrativeArea;              //@synthesize subAdministrativeArea=_subAdministrativeArea - In the implementation block
@property (nonatomic,readonly) NSString * state;                              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSString * postalCode;                         //@synthesize postalCode=_postalCode - In the implementation block
@property (nonatomic,readonly) NSString * country;                            //@synthesize country=_country - In the implementation block
@property (nonatomic,readonly) NSString * isoCountryCode;                     //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
@property (nonatomic,readonly) NSString * label;                              //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSString * localizedLabel; 
@property (nonatomic,copy,readonly) NSString * wfName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)objectWithWFSerializedRepresentation:(id)arg1 ;
+(id)streetAddressesInString:(id)arg1 error:(id*)arg2 ;
+(char)stringContainsStreetAddresses:(id)arg1 ;
+(id)streetAddressWithTextCheckingResult:(id)arg1 ;
+(id)streetAddressWithStreet:(id)arg1 subLocality:(id)arg2 city:(id)arg3 subAdministrativeArea:(id)arg4 state:(id)arg5 postalCode:(id)arg6 country:(id)arg7 isoCountryCode:(id)arg8 label:(id)arg9 ;
+(id)streetAddressWithPlacemark:(id)arg1 label:(id)arg2 ;
+(id)streetAddressWithPostalAddress:(id)arg1 label:(id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)state;
-(NSString *)label;
-(NSString *)city;
-(NSString *)country;
-(NSString *)postalCode;
-(NSString *)addressString;
-(NSString *)subLocality;
-(NSString *)subAdministrativeArea;
-(NSString *)street;
-(CNPostalAddress *)postalAddress;
-(NSString *)isoCountryCode;
-(CLPlacemark *)placemark;
-(NSString *)localizedLabel;
-(NSString *)shortAddressString;
-(id)wfSerializedRepresentation;
-(NSString *)wfName;
-(id)initWithPostalAddress:(id)arg1 placemark:(id)arg2 formattedAddress:(id)arg3 label:(id)arg4 ;
-(id)initWithStreet:(id)arg1 subLocality:(id)arg2 city:(id)arg3 subAdministrativeArea:(id)arg4 state:(id)arg5 postalCode:(id)arg6 country:(id)arg7 isoCountryCode:(id)arg8 placemark:(id)arg9 formattedAddress:(id)arg10 label:(id)arg11 ;
@end

