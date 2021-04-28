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

@class NSString, NSDecimalNumber, NSArray, PKOSVersionRequirementRange;

@interface PKAccountFeatureDescriptor : NSObject <NSSecureCoding, NSCopying> {

	NSString* _identifier;
	NSDecimalNumber* _minimumAmount;
	NSDecimalNumber* _maximumAmount;
	NSString* _merchantIdentifier;
	NSArray* _supportedNetworks;
	unsigned long long _merchantCapabilities;
	PKOSVersionRequirementRange* _osVersionRange;

}

@property (nonatomic,copy) NSString * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * minimumAmount;                             //@synthesize minimumAmount=_minimumAmount - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * maximumAmount;                             //@synthesize maximumAmount=_maximumAmount - In the implementation block
@property (nonatomic,copy) NSString * merchantIdentifier;                               //@synthesize merchantIdentifier=_merchantIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * supportedNetworks;                                 //@synthesize supportedNetworks=_supportedNetworks - In the implementation block
@property (assign,nonatomic) unsigned long long merchantCapabilities;                   //@synthesize merchantCapabilities=_merchantCapabilities - In the implementation block
@property (nonatomic,retain) PKOSVersionRequirementRange * osVersionRange;              //@synthesize osVersionRange=_osVersionRange - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)merchantIdentifier;
-(void)setMerchantIdentifier:(NSString *)arg1 ;
-(NSArray *)supportedNetworks;
-(unsigned long long)merchantCapabilities;
-(void)setMerchantCapabilities:(unsigned long long)arg1 ;
-(void)setSupportedNetworks:(NSArray *)arg1 ;
-(NSDecimalNumber *)maximumAmount;
-(NSDecimalNumber *)minimumAmount;
-(PKOSVersionRequirementRange *)osVersionRange;
-(void)setOsVersionRange:(PKOSVersionRequirementRange *)arg1 ;
-(void)setMinimumAmount:(NSDecimalNumber *)arg1 ;
-(void)setMaximumAmount:(NSDecimalNumber *)arg1 ;
-(char)isEqualToAccountFeatureDescriptor:(id)arg1 ;
@end

