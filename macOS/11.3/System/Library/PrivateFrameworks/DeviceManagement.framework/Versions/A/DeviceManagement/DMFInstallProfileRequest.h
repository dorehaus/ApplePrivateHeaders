/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/Versions/A/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString, NSData;

@interface DMFInstallProfileRequest : DMFTaskRequest {

	unsigned long long _style;
	unsigned long long _type;
	NSString* _managingProfileIdentifier;
	NSData* _profileData;
	NSString* _personaID;

}

@property (assign,nonatomic) unsigned long long style;                        //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned long long type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * managingProfileIdentifier;              //@synthesize managingProfileIdentifier=_managingProfileIdentifier - In the implementation block
@property (nonatomic,copy) NSData * profileData;                              //@synthesize profileData=_profileData - In the implementation block
@property (nonatomic,copy) NSString * personaID;                              //@synthesize personaID=_personaID - In the implementation block
+(char)supportsSecureCoding;
+(id)permittedPlatforms;
+(char)isPermittedOnSystemConnection;
+(char)isPermittedOnUserConnection;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)type;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(NSString *)managingProfileIdentifier;
-(void)setManagingProfileIdentifier:(NSString *)arg1 ;
-(NSData *)profileData;
-(NSString *)personaID;
-(void)setProfileData:(NSData *)arg1 ;
-(void)setPersonaID:(NSString *)arg1 ;
@end
