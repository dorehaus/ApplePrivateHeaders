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

@class CWFScanResult, CWFNetworkProfile, NSString, CWFEAPCredentials;

@interface CWFAssocParameters : NSObject <NSCopying, NSSecureCoding> {

	char _rememberUponSuccessfulAssociation;
	CWFScanResult* _scanResult;
	CWFNetworkProfile* _knownNetworkProfile;
	NSString* _password;
	CWFEAPCredentials* _EAPCredentials;

}

@property (nonatomic,copy) CWFScanResult * scanResult;                            //@synthesize scanResult=_scanResult - In the implementation block
@property (nonatomic,copy) CWFNetworkProfile * knownNetworkProfile;               //@synthesize knownNetworkProfile=_knownNetworkProfile - In the implementation block
@property (nonatomic,copy) NSString * password;                                   //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) CWFEAPCredentials * EAPCredentials;                    //@synthesize EAPCredentials=_EAPCredentials - In the implementation block
@property (assign,nonatomic) char rememberUponSuccessfulAssociation;              //@synthesize rememberUponSuccessfulAssociation=_rememberUponSuccessfulAssociation - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqualToAssocParameters:(id)arg1 ;
-(void)setKnownNetworkProfile:(CWFNetworkProfile *)arg1 ;
-(void)setEAPCredentials:(CWFEAPCredentials *)arg1 ;
-(void)setRememberUponSuccessfulAssociation:(char)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(CWFScanResult *)scanResult;
-(void)setScanResult:(CWFScanResult *)arg1 ;
-(CWFNetworkProfile *)knownNetworkProfile;
-(CWFEAPCredentials *)EAPCredentials;
-(char)rememberUponSuccessfulAssociation;
@end

