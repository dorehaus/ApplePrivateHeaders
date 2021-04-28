/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/Versions/A/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSString, NSSet, NSData, NSDictionary, NSDate, NSArray;

@interface CWFNetworkProfile : NSObject <NSCopying, NSSecureCoding> {

	char _useCachedIdentifier;
	char _useCachedNetworkName;
	NSMutableDictionary* _internal;
	NSString* _cachedIdentifier;
	NSString* _cachedNetworkName;

}

@property (nonatomic,retain) NSMutableDictionary * internal;                                                         //@synthesize internal=_internal - In the implementation block
@property (assign,nonatomic) char useCachedIdentifier;                                                               //@synthesize useCachedIdentifier=_useCachedIdentifier - In the implementation block
@property (nonatomic,retain) NSString * cachedIdentifier;                                                            //@synthesize cachedIdentifier=_cachedIdentifier - In the implementation block
@property (assign,nonatomic) char useCachedNetworkName;                                                              //@synthesize useCachedNetworkName=_useCachedNetworkName - In the implementation block
@property (nonatomic,retain) NSString * cachedNetworkName;                                                           //@synthesize cachedNetworkName=_cachedNetworkName - In the implementation block
@property (nonatomic,copy,readonly) NSSet * properties; 
@property (nonatomic,copy) NSData * SSID; 
@property (nonatomic,copy,readonly) NSString * networkName; 
@property (assign,nonatomic) unsigned long long supportedSecurityTypes; 
@property (nonatomic,readonly) unsigned long long strongestSupportedSecurityType; 
@property (nonatomic,readonly) unsigned long long weakestSupportedSecurityType; 
@property (assign,nonatomic) long long WEPSubtype; 
@property (assign,nonatomic) long long WAPISubtype; 
@property (nonatomic,readonly) char isOpen; 
@property (nonatomic,readonly) char isWEP; 
@property (nonatomic,readonly) char isWAPI; 
@property (nonatomic,readonly) char isWPA; 
@property (nonatomic,readonly) char isWPA2; 
@property (nonatomic,readonly) char isWPA3; 
@property (nonatomic,readonly) char isEAP; 
@property (nonatomic,readonly) char isPSK; 
@property (assign,getter=isAutoJoinDisabled,nonatomic) char autoJoinDisabled; 
@property (assign,nonatomic) long long hiddenState; 
@property (nonatomic,copy) NSDictionary * captiveProfile; 
@property (nonatomic,readonly) char isCaptiveStateDetermined; 
@property (nonatomic,readonly) char isCaptive; 
@property (nonatomic,readonly) char wasCaptive; 
@property (nonatomic,readonly) char bypassCaptive; 
@property (nonatomic,readonly) char isPasswordSharingSupported; 
@property (assign,getter=isPasswordSharingDisabled,nonatomic) char passwordSharingDisabled; 
@property (nonatomic,copy) NSString * payloadUUID; 
@property (nonatomic,readonly) char isProfileBased; 
@property (assign,nonatomic) long long addReason; 
@property (nonatomic,copy) NSDate * addedAt; 
@property (nonatomic,copy) NSDate * updatedAt; 
@property (nonatomic,copy) NSDate * lastJoinedBySystemAt; 
@property (nonatomic,copy) NSDate * lastJoinedByUserAt; 
@property (nonatomic,copy,readonly) NSDate * lastJoinedAt; 
@property (nonatomic,copy) NSString * bundleID; 
@property (nonatomic,readonly) char isAppBased; 
@property (assign,getter=isPersonalHotspot,nonatomic) char personalHotspot; 
@property (assign,getter=isSystemMode,nonatomic) char systemMode; 
@property (assign,getter=isSessionBased,nonatomic) char sessionBased; 
@property (assign,nonatomic) long long lowDataMode; 
@property (nonatomic,copy) NSDictionary * OSSpecificAttributes; 
@property (nonatomic,copy) NSDictionary * EAPProfile; 
@property (nonatomic,copy,readonly) NSArray * acceptedEAPTypes; 
@property (nonatomic,copy,readonly) NSArray * innerAcceptedEAPTypes; 
@property (nonatomic,readonly) char isTLSCertificateRequired; 
@property (nonatomic,copy,readonly) NSArray * TLSTrustedServerNames; 
@property (nonatomic,readonly) char isPasspoint; 
@property (nonatomic,copy) NSString * domainName; 
@property (nonatomic,copy) NSString * displayedOperatorName; 
@property (nonatomic,copy) NSArray * roamingConsortiumList; 
@property (nonatomic,copy) NSArray * NAIRealmNameList; 
@property (nonatomic,copy) NSArray * cellularNetworkInfo; 
@property (assign,getter=isServiceProviderRoamingEnabled,nonatomic) char serviceProviderRoamingEnabled; 
+(char)supportsSecureCoding;
-(void)setRoamingConsortiumList:(NSArray *)arg1 ;
-(NSDictionary *)OSSpecificAttributes;
-(char)isWPA;
-(char)isWPA2;
-(char)isWPA3;
-(char)isCaptiveStateDetermined;
-(char)wasCaptive;
-(char)bypassCaptive;
-(NSDictionary *)captiveProfile;
-(char)isPasswordSharingDisabled;
-(NSDate *)lastJoinedBySystemAt;
-(NSDate *)lastJoinedByUserAt;
-(long long)addReason;
-(NSString *)displayedOperatorName;
-(NSArray *)NAIRealmNameList;
-(void)setWEPSubtype:(long long)arg1 ;
-(void)setCaptiveProfile:(NSDictionary *)arg1 ;
-(void)setHiddenState:(long long)arg1 ;
-(void)setPasswordSharingDisabled:(char)arg1 ;
-(void)setLastJoinedBySystemAt:(NSDate *)arg1 ;
-(void)setLastJoinedByUserAt:(NSDate *)arg1 ;
-(void)setAddReason:(long long)arg1 ;
-(void)setPersonalHotspot:(char)arg1 ;
-(void)setDisplayedOperatorName:(NSString *)arg1 ;
-(void)setServiceProviderRoamingEnabled:(char)arg1 ;
-(void)setNAIRealmNameList:(NSArray *)arg1 ;
-(void)setOSSpecificAttributes:(NSDictionary *)arg1 ;
-(char)isEqualToNetworkProfile:(id)arg1 ;
-(NSArray *)cellularNetworkInfo;
-(id)__requiredProperties;
-(id)__defaultProperties;
-(unsigned long long)strongestSupportedSecurityType;
-(unsigned long long)weakestSupportedSecurityType;
-(long long)__propertyForKey:(id)arg1 ;
-(id)__keyForProperty:(long long)arg1 ;
-(char)useCachedNetworkName;
-(void)setCachedNetworkName:(NSString *)arg1 ;
-(void)setUseCachedNetworkName:(char)arg1 ;
-(NSString *)cachedNetworkName;
-(NSDictionary *)EAPProfile;
-(char)useCachedIdentifier;
-(void)setCachedIdentifier:(NSString *)arg1 ;
-(void)setUseCachedIdentifier:(char)arg1 ;
-(NSString *)cachedIdentifier;
-(id)__descriptionForSecurityTypes;
-(id)__descriptionForHiddenState;
-(id)__descriptionForCaptiveFlags;
-(void)setWAPISubtype:(long long)arg1 ;
-(char)isPasswordSharingSupported;
-(char)isSessionBased;
-(void)setSessionBased:(char)arg1 ;
-(long long)lowDataMode;
-(void)setLowDataMode:(long long)arg1 ;
-(NSArray *)acceptedEAPTypes;
-(NSArray *)innerAcceptedEAPTypes;
-(char)isTLSCertificateRequired;
-(NSArray *)TLSTrustedServerNames;
-(void)setCellularNetworkInfo:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)identifier;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(char)isOpen;
-(long long)hiddenState;
-(NSSet *)properties;
-(NSMutableDictionary *)internal;
-(void)setInternal:(NSMutableDictionary *)arg1 ;
-(char)isPasspoint;
-(char)isPersonalHotspot;
-(NSString *)domainName;
-(void)setDomainName:(NSString *)arg1 ;
-(NSString *)networkName;
-(char)isWAPI;
-(NSData *)SSID;
-(void)setPayloadUUID:(NSString *)arg1 ;
-(NSString *)payloadUUID;
-(void)setSSID:(NSData *)arg1 ;
-(char)isCaptive;
-(unsigned long long)supportedSecurityTypes;
-(void)setSupportedSecurityTypes:(unsigned long long)arg1 ;
-(void)setAutoJoinDisabled:(char)arg1 ;
-(char)isAppBased;
-(char)isProfileBased;
-(char)isEAP;
-(NSDate *)updatedAt;
-(void)setUpdatedAt:(NSDate *)arg1 ;
-(void)setSystemMode:(char)arg1 ;
-(void)setAddedAt:(NSDate *)arg1 ;
-(NSDate *)addedAt;
-(NSArray *)roamingConsortiumList;
-(long long)WEPSubtype;
-(long long)WAPISubtype;
-(char)isAutoJoinDisabled;
-(NSDate *)lastJoinedAt;
-(char)isWEP;
-(id)initWithExternalForm:(id)arg1 ;
-(id)externalForm;
-(char)isServiceProviderRoamingEnabled;
-(void)setEAPProfile:(NSDictionary *)arg1 ;
-(id)filteredNetworkProfileWithProperties:(id)arg1 ;
-(char)isSystemMode;
-(char)isPSK;
@end

