/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/Versions/A/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@interface DMFFetchRestrictionsRequest : DMFTaskRequest {

	char _includeProfileRestrictions;
	unsigned long long _profileFilterFlags;

}

@property (assign,nonatomic) char includeProfileRestrictions;                    //@synthesize includeProfileRestrictions=_includeProfileRestrictions - In the implementation block
@property (assign,nonatomic) unsigned long long profileFilterFlags;              //@synthesize profileFilterFlags=_profileFilterFlags - In the implementation block
+(char)supportsSecureCoding;
+(id)permittedPlatforms;
+(char)isPermittedOnSystemConnection;
+(char)isPermittedOnUserConnection;
+(Class)whitelistedClassForResultObject;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)includeProfileRestrictions;
-(unsigned long long)profileFilterFlags;
-(void)setIncludeProfileRestrictions:(char)arg1 ;
-(void)setProfileFilterFlags:(unsigned long long)arg1 ;
@end

