/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookCore.framework/Versions/A/AddressBookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookCore/AddressBookCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ABCNPostalAddress : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _street;
	NSString* _subLocality;
	NSString* _city;
	NSString* _subAdministrativeArea;
	NSString* _state;
	NSString* _postalCode;
	NSString* _country;
	NSString* _countryCode;

}

@property (nonatomic,copy,readonly) NSString * street;                             //@synthesize street=_street - In the implementation block
@property (nonatomic,copy,readonly) NSString * subLocality;                        //@synthesize subLocality=_subLocality - In the implementation block
@property (nonatomic,copy,readonly) NSString * city;                               //@synthesize city=_city - In the implementation block
@property (nonatomic,copy,readonly) NSString * subAdministrativeArea;              //@synthesize subAdministrativeArea=_subAdministrativeArea - In the implementation block
@property (nonatomic,copy,readonly) NSString * state;                              //@synthesize state=_state - In the implementation block
@property (nonatomic,copy,readonly) NSString * postalCode;                         //@synthesize postalCode=_postalCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * country;                            //@synthesize country=_country - In the implementation block
@property (nonatomic,copy,readonly) NSString * countryCode;                        //@synthesize countryCode=_countryCode - In the implementation block
+(char)supportsSecureCoding;
+(id)postalAddressWithDictionaryRepresentation:(id)arg1 ;
+(id)postalAddress;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)state;
-(NSString *)countryCode;
-(NSString *)city;
-(NSString *)country;
-(NSString *)postalCode;
-(NSString *)subLocality;
-(NSString *)subAdministrativeArea;
-(NSString *)street;
-(id)initWithPostalAddress:(id)arg1 ;
@end

