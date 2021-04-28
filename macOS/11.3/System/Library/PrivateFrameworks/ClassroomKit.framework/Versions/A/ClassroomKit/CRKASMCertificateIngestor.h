/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CRKASMRosterProviderConfiguration;

@interface CRKASMCertificateIngestor : NSObject {

	CRKASMRosterProviderConfiguration* _configuration;

}

@property (nonatomic,readonly) CRKASMRosterProviderConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(id)initWithConfiguration:(id)arg1 ;
-(CRKASMRosterProviderConfiguration *)configuration;
-(char)areCertificatesValid:(id)arg1 forUserIdentifier:(id)arg2 error:(id*)arg3 ;
-(char)storeCertificates:(id)arg1 userIdentifier:(id)arg2 error:(id*)arg3 ;
-(char)isCertificateValid:(id)arg1 forUserIdentifier:(id)arg2 error:(id*)arg3 ;
-(char)ingestCertificates:(id)arg1 forTrustedUserIdentifier:(id)arg2 error:(id*)arg3 ;
@end

