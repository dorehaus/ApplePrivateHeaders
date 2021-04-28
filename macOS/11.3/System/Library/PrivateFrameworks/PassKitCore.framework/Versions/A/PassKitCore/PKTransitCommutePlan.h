/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, NSArray, PKPassField, NSDate;

@interface PKTransitCommutePlan : NSObject <NSSecureCoding, NSCopying> {

	NSMutableDictionary* _fieldsByKey;
	NSString* _identifier;
	NSArray* _deviceAccountIdentifiers;
	PKPassField* _title;
	NSArray* _details;
	unsigned long long _properties;
	NSDate* _startDate;
	NSDate* _expiryDate;
	NSString* _startDateString;
	NSString* _expiryDateString;
	PKPassField* _usage;

}

@property (nonatomic,copy) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSArray * deviceAccountIdentifiers;              //@synthesize deviceAccountIdentifiers=_deviceAccountIdentifiers - In the implementation block
@property (nonatomic,copy) PKPassField * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSArray * details;                               //@synthesize details=_details - In the implementation block
@property (assign,nonatomic) unsigned long long properties;                 //@synthesize properties=_properties - In the implementation block
@property (nonatomic,copy) NSDate * startDate;                              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) NSDate * expiryDate;                             //@synthesize expiryDate=_expiryDate - In the implementation block
@property (nonatomic,copy) NSString * startDateString;                      //@synthesize startDateString=_startDateString - In the implementation block
@property (nonatomic,copy) NSString * expiryDateString;                     //@synthesize expiryDateString=_expiryDateString - In the implementation block
@property (nonatomic,copy) PKPassField * usage;                             //@synthesize usage=_usage - In the implementation block
@property (nonatomic,readonly) char isPlanAvailable; 
@property (nonatomic,readonly) char isPlanDisplayable; 
@property (nonatomic,readonly) char hasDisplayableInformation; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setTitle:(PKPassField *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setUsage:(PKPassField *)arg1 ;
-(PKPassField *)usage;
-(NSDate *)startDate;
-(PKPassField *)title;
-(void)setStartDate:(NSDate *)arg1 ;
-(unsigned long long)properties;
-(void)setProperties:(unsigned long long)arg1 ;
-(NSArray *)details;
-(NSDate *)expiryDate;
-(void)setExpiryDate:(NSDate *)arg1 ;
-(void)setDetails:(NSArray *)arg1 ;
-(char)isPlanDisplayable;
-(void)_updateFieldsByKey;
-(void)_updateProperties;
-(void)setDeviceAccountIdentifiers:(NSArray *)arg1 ;
-(id)_expiryField;
-(id)_startField;
-(id)passFieldForKey:(id)arg1 ;
-(char)isPlanAvailable;
-(char)hasDisplayableInformation;
-(NSString *)expiryDateString;
-(NSString *)startDateString;
-(NSArray *)deviceAccountIdentifiers;
-(void)setStartDateString:(NSString *)arg1 ;
-(void)setExpiryDateString:(NSString *)arg1 ;
@end

