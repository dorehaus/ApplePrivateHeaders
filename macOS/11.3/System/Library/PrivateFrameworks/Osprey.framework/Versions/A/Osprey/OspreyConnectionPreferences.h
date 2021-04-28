/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Versions/A/Osprey
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OspreyKeychain, NSData, NSString, NSNumber, NSDate;

@interface OspreyConnectionPreferences : NSObject {

	OspreyKeychain* _keychain;
	char _certificateDataFetched;
	NSData* _certificateData;
	NSData* _deviceAttestationData;
	NSString* _connectionHost;
	NSNumber* _deviceAuthenticationVersion;
	NSNumber* _deviceAttestionVersion;
	NSDate* _deviceAttestionExpireOn;

}

@property (nonatomic,copy) NSString * connectionHost;                           //@synthesize connectionHost=_connectionHost - In the implementation block
@property (nonatomic,copy) NSNumber * deviceAuthenticationVersion;              //@synthesize deviceAuthenticationVersion=_deviceAuthenticationVersion - In the implementation block
@property (nonatomic,copy) NSNumber * deviceAttestionVersion;                   //@synthesize deviceAttestionVersion=_deviceAttestionVersion - In the implementation block
@property (nonatomic,retain) NSData * certificateData; 
@property (nonatomic,copy) NSDate * deviceAttestionExpireOn;                    //@synthesize deviceAttestionExpireOn=_deviceAttestionExpireOn - In the implementation block
@property (nonatomic,readonly) char isDeviceAttestionExpired; 
-(id)dictionaryRepresentation;
-(void)deleteAll;
-(void)setCertificateData:(NSData *)arg1 ;
-(NSData *)certificateData;
-(void)deleteCertificateData;
-(id)initWithDictionary:(id)arg1 keychain:(id)arg2 ;
-(id)initWithConnectionHost:(id)arg1 keychain:(id)arg2 ;
-(NSString *)connectionHost;
-(void)deleteDeviceAttestationData;
-(id)_certificateDataKey;
-(id)_deviceAttestationDataKey;
-(char)isDeviceAttestionExpired;
-(void)resetCachedDeviceAttestation;
-(char)setDeviceAttestationData:(id)arg1 withExpiration:(id)arg2 ;
-(id)deviceAttestationData;
-(void)setConnectionHost:(NSString *)arg1 ;
-(NSNumber *)deviceAuthenticationVersion;
-(void)setDeviceAuthenticationVersion:(NSNumber *)arg1 ;
-(NSNumber *)deviceAttestionVersion;
-(void)setDeviceAttestionVersion:(NSNumber *)arg1 ;
-(NSDate *)deviceAttestionExpireOn;
-(void)setDeviceAttestionExpireOn:(NSDate *)arg1 ;
@end

