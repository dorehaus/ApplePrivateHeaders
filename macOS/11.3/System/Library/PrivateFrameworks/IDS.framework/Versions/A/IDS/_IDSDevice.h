/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/Versions/A/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, CUTWeakReference, NSString, NSData, NSArray, NSUUID, IDSEndpointCapabilities, NSDate;

@interface _IDSDevice : NSObject {

	NSDictionary* _info;
	CUTWeakReference* _account;
	CUTWeakReference* _serviceReference;
	int _nearbyToken;
	char _nearby;
	char _connected;
	char _immutableCloudConnected;
	char _cloudConnected;

}

@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,readonly) NSString * modelIdentifier; 
@property (nonatomic,readonly) NSString * productName; 
@property (nonatomic,readonly) NSString * productVersion; 
@property (nonatomic,readonly) NSString * productBuildVersion; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * service; 
@property (getter=isNearby,nonatomic,readonly) char nearby; 
@property (getter=isConnected,nonatomic,readonly) char connected; 
@property (getter=isCloudConnected,nonatomic,readonly) char cloudConnected; 
@property (nonatomic,readonly) char locallyPresent; 
@property (nonatomic,readonly) char isDefaultPairedDevice; 
@property (nonatomic,readonly) char isLocallyPaired; 
@property (nonatomic,readonly) unsigned long long pairingProtocolVersion; 
@property (nonatomic,readonly) unsigned long long minCompatibilityVersion; 
@property (nonatomic,readonly) unsigned long long maxCompatibilityVersion; 
@property (nonatomic,readonly) unsigned long long serviceMinCompatibilityVersion; 
@property (nonatomic,readonly) char supportsiCloudPairing; 
@property (nonatomic,readonly) char supportsTethering; 
@property (nonatomic,readonly) char supportsHandoff; 
@property (nonatomic,readonly) char supportsApplePay; 
@property (nonatomic,readonly) NSData * pushToken; 
@property (nonatomic,readonly) NSArray * identities; 
@property (setter=setNSUUID:,nonatomic,retain) NSUUID * nsuuid; 
@property (nonatomic,readonly) NSUUID * stableBluetoothIdentifier; 
@property (nonatomic,readonly) char supportsSMSRelay; 
@property (nonatomic,readonly) char supportsMMSRelay; 
@property (nonatomic,readonly) char supportsPhoneCalls; 
@property (nonatomic,readonly) NSString * deviceColor; 
@property (nonatomic,readonly) NSString * enclosureColor; 
@property (nonatomic,readonly) NSArray * linkedUserURIs; 
@property (nonatomic,readonly) char isHSATrusted; 
@property (nonatomic,readonly) char isActive; 
@property (nonatomic,readonly) long long relationship; 
@property (nonatomic,readonly) IDSEndpointCapabilities * capabilities; 
@property (nonatomic,readonly) NSDate * lastActivityDate; 
@property (nonatomic,readonly) NSString * uniqueIDOverride; 
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(id)initWithDictionary:(id)arg1 ;
-(char)isActive;
-(NSString *)productName;
-(NSString *)uniqueID;
-(NSArray *)identities;
-(char)isConnected;
-(NSString *)service;
-(IDSEndpointCapabilities *)capabilities;
-(NSString *)modelIdentifier;
-(NSString *)productVersion;
-(NSString *)productBuildVersion;
-(NSData *)pushToken;
-(char)isDefaultPairedDevice;
-(unsigned long long)pairingProtocolVersion;
-(char)isCloudConnected;
-(long long)relationship;
-(NSUUID *)nsuuid;
-(char)isLocallyPaired;
-(NSString *)uniqueIDOverride;
-(void)_setAccount:(id)arg1 ;
-(char)supportsiCloudPairing;
-(char)isNearby;
-(void)_addIdentity:(id)arg1 ;
-(void)_setService:(id)arg1 ;
-(id)compactDescription;
-(void)_nearbyStateChanged;
-(void)_connectedStateChanged;
-(void)_cloudConnectedStateChanged;
-(void)_stateChanged;
-(NSArray *)linkedUserURIs;
-(char)supportsSMSRelay;
-(char)supportsMMSRelay;
-(char)supportsPhoneCalls;
-(NSString *)deviceColor;
-(NSString *)enclosureColor;
-(char)locallyPresent;
-(unsigned long long)minCompatibilityVersion;
-(unsigned long long)maxCompatibilityVersion;
-(char)isHSATrusted;
-(char)supportsHandoff;
-(char)supportsTethering;
-(char)isTinker;
-(id)fullDescription;
-(NSDate *)lastActivityDate;
-(unsigned long long)serviceMinCompatibilityVersion;
-(void)setNSUUID:(id)arg1 ;
-(NSUUID *)stableBluetoothIdentifier;
-(char)supportsApplePay;
@end

