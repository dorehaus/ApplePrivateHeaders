/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/Versions/A/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFInstallAppRequest.h>

@class NSString, NSArray, NSNumber, NSDictionary;

@interface DMFMDMv1InstallAppRequest : DMFInstallAppRequest {

	char _manage;
	NSString* _redemptionCode;
	NSString* _originator;
	unsigned long long _managementOptions;
	NSString* _VPNUUIDString;
	NSArray* _associatedDomains;
	NSNumber* _associatedDomainsEnableDirectDownloads;
	NSNumber* _removable;
	NSDictionary* _configuration;
	NSString* _personaID;

}

@property (nonatomic,copy) NSString * redemptionCode;                                      //@synthesize redemptionCode=_redemptionCode - In the implementation block
@property (nonatomic,copy) NSString * originator;                                          //@synthesize originator=_originator - In the implementation block
@property (assign,nonatomic) char manage;                                                  //@synthesize manage=_manage - In the implementation block
@property (assign,nonatomic) unsigned long long managementOptions;                         //@synthesize managementOptions=_managementOptions - In the implementation block
@property (nonatomic,copy) NSString * VPNUUIDString;                                       //@synthesize VPNUUIDString=_VPNUUIDString - In the implementation block
@property (nonatomic,copy) NSArray * associatedDomains;                                    //@synthesize associatedDomains=_associatedDomains - In the implementation block
@property (nonatomic,copy) NSNumber * associatedDomainsEnableDirectDownloads;              //@synthesize associatedDomainsEnableDirectDownloads=_associatedDomainsEnableDirectDownloads - In the implementation block
@property (nonatomic,copy) NSNumber * removable;                                           //@synthesize removable=_removable - In the implementation block
@property (nonatomic,copy) NSDictionary * configuration;                                   //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy) NSString * personaID;                                           //@synthesize personaID=_personaID - In the implementation block
+(char)supportsSecureCoding;
+(id)permittedPlatforms;
+(char)isPermittedOnSystemConnection;
+(char)isPermittedOnUserConnection;
+(Class)whitelistedClassForResultObject;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)removable;
-(NSDictionary *)configuration;
-(void)setRemovable:(NSNumber *)arg1 ;
-(void)setConfiguration:(NSDictionary *)arg1 ;
-(void)setOriginator:(NSString *)arg1 ;
-(NSString *)originator;
-(NSArray *)associatedDomains;
-(void)setAssociatedDomains:(NSArray *)arg1 ;
-(NSString *)VPNUUIDString;
-(void)setVPNUUIDString:(NSString *)arg1 ;
-(NSNumber *)associatedDomainsEnableDirectDownloads;
-(void)setAssociatedDomainsEnableDirectDownloads:(NSNumber *)arg1 ;
-(NSString *)redemptionCode;
-(void)setRedemptionCode:(NSString *)arg1 ;
-(NSString *)personaID;
-(void)setPersonaID:(NSString *)arg1 ;
-(char)manage;
-(unsigned long long)managementOptions;
-(void)setManage:(char)arg1 ;
-(void)setManagementOptions:(unsigned long long)arg1 ;
@end

