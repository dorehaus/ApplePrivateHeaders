/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/Sharing-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface SFCompanionService : NSObject <NSSecureCoding, NSCopying> {

	NSString* _deviceName;
	NSString* _deviceID;
	NSString* _serviceType;
	NSString* _managerID;
	NSString* _ipAddress;
	NSString* _identifier;
	NSNumber* _nsxpcVersion;

}

@property (copy) NSString * deviceID;                  //@synthesize deviceID=_deviceID - In the implementation block
@property (copy) NSString * deviceName;                //@synthesize deviceName=_deviceName - In the implementation block
@property (copy) NSString * serviceType;               //@synthesize serviceType=_serviceType - In the implementation block
@property (copy) NSString * managerID;                 //@synthesize managerID=_managerID - In the implementation block
@property (copy) NSString * ipAddress;                 //@synthesize ipAddress=_ipAddress - In the implementation block
@property (copy) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSNumber * nsxpcVersion;              //@synthesize nsxpcVersion=_nsxpcVersion - In the implementation block
+(id)serviceFromDictionary:(id)arg1 ;
+(char)supportsSecureCoding;
+(id)serviceFromAuthorData:(id)arg1 ;
-(void)setManagerID:(NSString *)arg1 ;
-(NSNumber *)nsxpcVersion;
-(void)setNsxpcVersion:(NSNumber *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithServiceName:(id)arg1 ;
-(NSString *)deviceID;
-(void)setDeviceID:(NSString *)arg1 ;
-(NSString *)deviceName;
-(NSString *)serviceType;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)setServiceType:(NSString *)arg1 ;
-(id)messageData;
-(NSString *)ipAddress;
-(void)setIpAddress:(NSString *)arg1 ;
-(NSString *)managerID;
-(char)isEqualToService:(id)arg1 ;
@end

