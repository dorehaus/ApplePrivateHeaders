/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/Versions/A/SPOwner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSData, SPDiscoveredAccessoryMetadata, SPDiscoveredAccessoryProductInformation;

@interface SPDiscoveredAccessory : NSObject <NSCopying, NSSecureCoding> {

	char _isBatteryTooLow;
	NSUUID* _identifier;
	NSData* _macAddress;
	SPDiscoveredAccessoryMetadata* _discoveredMetadata;
	SPDiscoveredAccessoryProductInformation* _productInformation;

}

@property (nonatomic,copy) NSUUID * identifier;                                                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSData * macAddress;                                                       //@synthesize macAddress=_macAddress - In the implementation block
@property (nonatomic,copy) SPDiscoveredAccessoryMetadata * discoveredMetadata;                        //@synthesize discoveredMetadata=_discoveredMetadata - In the implementation block
@property (nonatomic,copy) SPDiscoveredAccessoryProductInformation * productInformation;              //@synthesize productInformation=_productInformation - In the implementation block
@property (assign,nonatomic) char isBatteryTooLow;                                                    //@synthesize isBatteryTooLow=_isBatteryTooLow - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(void)setMacAddress:(NSData *)arg1 ;
-(NSData *)macAddress;
-(SPDiscoveredAccessoryMetadata *)discoveredMetadata;
-(void)setDiscoveredMetadata:(SPDiscoveredAccessoryMetadata *)arg1 ;
-(SPDiscoveredAccessoryProductInformation *)productInformation;
-(void)setProductInformation:(SPDiscoveredAccessoryProductInformation *)arg1 ;
-(char)isBatteryTooLow;
-(void)setIsBatteryTooLow:(char)arg1 ;
@end

