/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/Versions/A/AppSSOKerberos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_nw_path;
@class NSString, NSObject, NSData;

@interface SONetworkIdentity : NSObject {

	NSString* _networkFingerprint;
	NSString* _realm;
	NSString* _bundleIdentifier;
	NSObject*<OS_nw_path> _lastpath;
	NSData* _auditToken;

}

@property (nonatomic,retain) NSString * realm;                            //@synthesize realm=_realm - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * networkFingerprint;               //@synthesize networkFingerprint=_networkFingerprint - In the implementation block
@property (nonatomic,retain) NSObject*<OS_nw_path> lastpath;              //@synthesize lastpath=_lastpath - In the implementation block
@property (nonatomic,retain) NSData * auditToken;                         //@synthesize auditToken=_auditToken - In the implementation block
-(NSString *)bundleIdentifier;
-(NSData *)auditToken;
-(void)setAuditToken:(NSData *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)realm;
-(void)setRealm:(NSString *)arg1 ;
-(NSString *)networkFingerprint;
-(void)determineNetworkFingerprint;
-(NSObject*<OS_nw_path>)lastpath;
-(void)setLastpath:(NSObject*<OS_nw_path>)arg1 ;
-(void)setNetworkFingerprint:(NSString *)arg1 ;
-(id)getVPNServerSignature:(id)arg1 ;
-(id)getInterfaceSignature:(id)arg1 ;
-(id)getInterfaceFingerprintForDynamicInterface:(const char*)arg1 ;
-(id)initForRealm:(id)arg1 bundleIdentifier:(id)arg2 auditToken:(id)arg3 ;
@end

