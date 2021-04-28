/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/Versions/A/TrustedPeers
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrustedPeers/TrustedPeers-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TPPolicyVersion : NSObject <NSSecureCoding> {

	unsigned long long _versionNumber;
	NSString* _policyHash;

}

@property (readonly) unsigned long long versionNumber;              //@synthesize versionNumber=_versionNumber - In the implementation block
@property (retain,readonly) NSString * policyHash;                  //@synthesize policyHash=_policyHash - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)versionNumber;
-(id)initWithVersion:(unsigned long long)arg1 hash:(id)arg2 ;
-(NSString *)policyHash;
@end
