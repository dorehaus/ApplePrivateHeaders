/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSArray, NSData;

@interface PKPaymentDeviceRegistrationData : NSObject <NSSecureCoding> {

	char _devSigned;
	NSString* _authorizationHeader;
	NSString* _signedAuthToken;
	NSDictionary* _secureElementStateInformation;
	NSString* _secureElementIdentifier;
	NSString* _deviceSerialNumber;
	NSArray* _additionalDeviceSerialNumbers;
	NSString* _companionSerialNumber;
	NSString* _productType;
	NSData* _platformData;
	NSData* _platformDataSignature;
	NSArray* _legacyStateInformation;

}

@property (nonatomic,copy) NSString * authorizationHeader;                            //@synthesize authorizationHeader=_authorizationHeader - In the implementation block
@property (nonatomic,copy) NSString * signedAuthToken;                                //@synthesize signedAuthToken=_signedAuthToken - In the implementation block
@property (nonatomic,copy) NSDictionary * secureElementStateInformation;              //@synthesize secureElementStateInformation=_secureElementStateInformation - In the implementation block
@property (nonatomic,copy) NSString * secureElementIdentifier;                        //@synthesize secureElementIdentifier=_secureElementIdentifier - In the implementation block
@property (nonatomic,copy) NSString * deviceSerialNumber;                             //@synthesize deviceSerialNumber=_deviceSerialNumber - In the implementation block
@property (nonatomic,copy) NSArray * additionalDeviceSerialNumbers;                   //@synthesize additionalDeviceSerialNumbers=_additionalDeviceSerialNumbers - In the implementation block
@property (nonatomic,copy) NSString * companionSerialNumber;                          //@synthesize companionSerialNumber=_companionSerialNumber - In the implementation block
@property (nonatomic,copy) NSString * productType;                                    //@synthesize productType=_productType - In the implementation block
@property (nonatomic,copy) NSData * platformData;                                     //@synthesize platformData=_platformData - In the implementation block
@property (nonatomic,copy) NSData * platformDataSignature;                            //@synthesize platformDataSignature=_platformDataSignature - In the implementation block
@property (assign,nonatomic) char devSigned;                                          //@synthesize devSigned=_devSigned - In the implementation block
@property (nonatomic,readonly) NSArray * legacyStateInformation;                      //@synthesize legacyStateInformation=_legacyStateInformation - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)productType;
-(void)setProductType:(NSString *)arg1 ;
-(NSString *)secureElementIdentifier;
-(char)devSigned;
-(void)setSecureElementIdentifier:(NSString *)arg1 ;
-(void)setDevSigned:(char)arg1 ;
-(NSString *)authorizationHeader;
-(void)setAuthorizationHeader:(NSString *)arg1 ;
-(NSString *)signedAuthToken;
-(void)setSignedAuthToken:(NSString *)arg1 ;
-(NSDictionary *)secureElementStateInformation;
-(void)setSecureElementStateInformation:(NSDictionary *)arg1 ;
-(NSString *)deviceSerialNumber;
-(void)setDeviceSerialNumber:(NSString *)arg1 ;
-(NSArray *)additionalDeviceSerialNumbers;
-(void)setAdditionalDeviceSerialNumbers:(NSArray *)arg1 ;
-(NSString *)companionSerialNumber;
-(void)setCompanionSerialNumber:(NSString *)arg1 ;
-(NSData *)platformData;
-(void)setPlatformData:(NSData *)arg1 ;
-(NSData *)platformDataSignature;
-(void)setPlatformDataSignature:(NSData *)arg1 ;
-(NSArray *)legacyStateInformation;
@end
