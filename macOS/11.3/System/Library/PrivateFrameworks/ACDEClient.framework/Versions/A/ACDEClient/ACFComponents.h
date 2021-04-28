/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ACDEClient.framework/Versions/A/ACDEClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACFCryptographProtocol, ACFKeychainManagerProtocol, ACFCertificateStoragePolicy;
@interface ACFComponents : NSObject {

	id<ACFCryptographProtocol> _cryptograph;
	id<ACFKeychainManagerProtocol> _keychainManager;
	id<ACFCertificateStoragePolicy> _certificateStoragePolicy;
	Class _transportClass;
	Class _localAuthenticationContextClass;

}

@property (nonatomic,retain) id<ACFCryptographProtocol> cryptograph;                                //@synthesize cryptograph=_cryptograph - In the implementation block
@property (nonatomic,retain) id<ACFKeychainManagerProtocol> keychainManager;                        //@synthesize keychainManager=_keychainManager - In the implementation block
@property (nonatomic,retain) id<ACFCertificateStoragePolicy> certificateStoragePolicy;              //@synthesize certificateStoragePolicy=_certificateStoragePolicy - In the implementation block
@property (nonatomic,retain) Class transportClass;                                                  //@synthesize transportClass=_transportClass - In the implementation block
@property (nonatomic,retain) Class localAuthenticationContextClass;                                 //@synthesize localAuthenticationContextClass=_localAuthenticationContextClass - In the implementation block
+(id)components;
+(void)setComponents:(id)arg1 ;
+(id)defaultComponents;
-(void)dealloc;
-(id<ACFKeychainManagerProtocol>)keychainManager;
-(void)setKeychainManager:(id<ACFKeychainManagerProtocol>)arg1 ;
-(void)setCryptograph:(id<ACFCryptographProtocol>)arg1 ;
-(void)setCertificateStoragePolicy:(id<ACFCertificateStoragePolicy>)arg1 ;
-(id)createTransport;
-(id<ACFCryptographProtocol>)cryptograph;
-(id<ACFCertificateStoragePolicy>)certificateStoragePolicy;
-(void)setTransportClass:(Class)arg1 ;
-(void)setLocalAuthenticationContextClass:(Class)arg1 ;
-(Class)transportClass;
-(Class)localAuthenticationContextClass;
-(id)createLocalAuthenticationContext;
@end

