/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreWLAN.framework/Versions/A/CoreWLAN
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreWLAN/CoreWLAN-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSArray, NSData, NSString, CWChannel;

@interface CWTrimmedNetwork : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _scanRecord;

}

@property (readonly) NSDictionary * scanRecord; 
@property (readonly) NSArray * includedProperties; 
@property (readonly) NSData * ssidData; 
@property (readonly) NSString * ssid; 
@property (readonly) NSString * bssid; 
@property (readonly) unsigned long long channelNumber; 
@property (readonly) CWChannel * wlanChannel; 
@property (readonly) unsigned long long securityType; 
@property (readonly) unsigned long long physicalLayerMode; 
@property (readonly) long long rssiValue; 
@property (readonly) long long noiseMeasurement; 
@property (readonly) char ibss; 
@property (readonly) NSString * countryCode; 
@property (readonly) char isPersonalHotspot; 
@property (readonly) char isPasspoint; 
@property (readonly) char isUnconfiguredBaseStation; 
@property (readonly) NSString * baseStationName; 
@property (readonly) char isUnconfiguredAccessory; 
@property (readonly) NSString * accessoryFriendlyName; 
@property (readonly) char isUnconfiguredAirPlayAccessory; 
@property (readonly) char isUnconfiguredAirPrintAccessory; 
@property (readonly) char isSecureWACDevice; 
@property (readonly) char isP2P; 
@property (readonly) char supportsWPS; 
+(char)supportsSecureCoding;
-(char)isUnconfiguredBaseStation;
-(NSString *)accessoryFriendlyName;
-(char)isSecureWACDevice;
-(id)__trimmedScanRecordForNetwork:(id)arg1 properties:(id)arg2 ;
-(char)isEqualToTrimmedNetwork:(id)arg1 ;
-(NSArray *)includedProperties;
-(char)isP2P;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(char)conformsToProtocol:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)countryCode;
-(char)isOpen;
-(NSString *)ssid;
-(CWChannel *)wlanChannel;
-(unsigned long long)securityType;
-(NSString *)bssid;
-(char)ibss;
-(NSDictionary *)scanRecord;
-(char)isPasspoint;
-(char)isPersonalHotspot;
-(long long)rssiValue;
-(NSData *)ssidData;
-(unsigned long long)channelNumber;
-(char)supportsSecurity:(long long)arg1 ;
-(long long)strongestSupportedSecurity;
-(long long)noiseMeasurement;
-(unsigned long long)physicalLayerMode;
-(char)isUnconfiguredAirPrintAccessory;
-(char)isUnconfiguredAirPlayAccessory;
-(char)isUnconfiguredAccessory;
-(id)initWithNetwork:(id)arg1 properties:(id)arg2 ;
-(char)supportsWPS;
-(long long)compareSecurity:(id)arg1 ;
-(id)initWithScanRecord:(id)arg1 ;
-(NSString *)baseStationName;
@end
