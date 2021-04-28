/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreWLAN.framework/Versions/A/CoreWLAN
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreWLAN/CoreWLAN-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSOrderedSet;

@interface CWConfiguration : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSDictionary* _info;
	NSOrderedSet* _networkProfiles;
	char _rememberJoinedNetworks;
	char _requireAdministratorForAssociation;
	char _requireAdministratorForPower;
	char _requireAdministratorForIBSSMode;

}

@property (copy) NSDictionary * info;                                              //@synthesize info=_info - In the implementation block
@property (nonatomic,copy) NSOrderedSet * networkProfiles;                         //@synthesize networkProfiles=_networkProfiles - In the implementation block
@property (assign,nonatomic) char requireAdministratorForAssociation;              //@synthesize requireAdministratorForAssociation=_requireAdministratorForAssociation - In the implementation block
@property (assign,nonatomic) char requireAdministratorForPower;                    //@synthesize requireAdministratorForPower=_requireAdministratorForPower - In the implementation block
@property (assign,nonatomic) char requireAdministratorForIBSSMode;                 //@synthesize requireAdministratorForIBSSMode=_requireAdministratorForIBSSMode - In the implementation block
@property (assign,nonatomic) char rememberJoinedNetworks;                          //@synthesize rememberJoinedNetworks=_rememberJoinedNetworks - In the implementation block
+(id)configurationWithConfiguration:(id)arg1 ;
+(char)supportsSecureCoding;
+(id)configuration;
+(id)configurationForInterfaceWithName:(id)arg1 ;
-(void)setNetworkProfiles:(NSOrderedSet *)arg1 ;
-(void)setRequireAdministratorForAssociation:(char)arg1 ;
-(void)setRequireAdministratorForPower:(char)arg1 ;
-(void)setRequireAdministratorForIBSSMode:(char)arg1 ;
-(void)setRememberJoinedNetworks:(char)arg1 ;
-(char)commitForInterfaceWithName:(id)arg1 authorization:(id)arg2 error:(out id*)arg3 ;
-(id)preferredNetworks;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(char)conformsToProtocol:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithInfo:(id)arg1 ;
-(NSDictionary *)info;
-(void)setInfo:(NSDictionary *)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(char)isEqualToConfiguration:(id)arg1 ;
-(NSOrderedSet *)networkProfiles;
-(char)requireAdministratorForAssociation;
-(id)initForInterfaceWithName:(id)arg1 ;
-(char)rememberJoinedNetworks;
-(char)requireAdministratorForIBSSMode;
-(id)networkProfileWithSSID:(id)arg1 securityType:(unsigned long long)arg2 ;
-(char)requireAdministratorForPower;
@end
