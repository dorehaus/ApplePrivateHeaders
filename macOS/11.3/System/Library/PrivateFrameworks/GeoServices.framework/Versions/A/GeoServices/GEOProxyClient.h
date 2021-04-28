/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, GEOApplicationAuditToken;

@interface GEOProxyClient : NSObject {

	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	GEOApplicationAuditToken* _auditToken;
	char _isApplication;

}

@property (nonatomic,retain) NSString * bundleIdentifier;                        //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * bundleVersion;                           //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,retain) GEOApplicationAuditToken * auditToken;              //@synthesize auditToken=_auditToken - In the implementation block
@property (assign,nonatomic) char isApplication;                                 //@synthesize isApplication=_isApplication - In the implementation block
+(id)currentClient;
+(id)compositeClientForClients:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)bundleIdentifier;
-(GEOApplicationAuditToken *)auditToken;
-(id)initWithXPCConnection:(id)arg1 ;
-(NSString *)bundleVersion;
-(char)isApplication;
-(void)setAuditToken:(GEOApplicationAuditToken *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)initWithAuditToken:(id)arg1 ;
-(void)setBundleVersion:(NSString *)arg1 ;
-(void)setIsApplication:(char)arg1 ;
-(id)URLConnectionProperties;
@end

