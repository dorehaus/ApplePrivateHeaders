/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SFTrustPolicy, SFRevocationPolicy, NSArray;

@interface SFTrustEvaluator : NSObject <NSCopying, NSSecureCoding> {

	id _trustEvaluatorInternal;
	char _allowCertificateFetching;
	char _trustSystemAnchorCertificates;
	SFTrustPolicy* _trustPolicy;
	SFRevocationPolicy* _revocationPolicy;
	NSArray* _applicationAnchorCertificates;

}

@property (nonatomic,copy) SFTrustPolicy * trustPolicy;                          //@synthesize trustPolicy=_trustPolicy - In the implementation block
@property (nonatomic,copy) SFRevocationPolicy * revocationPolicy;                //@synthesize revocationPolicy=_revocationPolicy - In the implementation block
@property (nonatomic,copy) NSArray * applicationAnchorCertificates;              //@synthesize applicationAnchorCertificates=_applicationAnchorCertificates - In the implementation block
@property (assign,nonatomic) char allowCertificateFetching;                      //@synthesize allowCertificateFetching=_allowCertificateFetching - In the implementation block
@property (assign,nonatomic) char trustSystemAnchorCertificates;                 //@synthesize trustSystemAnchorCertificates=_trustSystemAnchorCertificates - In the implementation block
+(char)supportsSecureCoding;
-(SFTrustPolicy *)trustPolicy;
-(SFRevocationPolicy *)revocationPolicy;
-(NSArray *)applicationAnchorCertificates;
-(id)initWithTrustPolicy:(id)arg1 ;
-(id)initWithTrustPolicy:(id)arg1 revocationPolicy:(id)arg2 ;
-(id)initWithTrustPolicy:(id)arg1 revocationPolicy:(id)arg2 applicationAnchorCertificates:(id)arg3 allowCertificateFetching:(char)arg4 trustSystemAnchorCertificates:(char)arg5 ;
-(void)evaluateCertificateChain:(id)arg1 forDate:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)setTrustPolicy:(SFTrustPolicy *)arg1 ;
-(void)setRevocationPolicy:(SFRevocationPolicy *)arg1 ;
-(void)setApplicationAnchorCertificates:(NSArray *)arg1 ;
-(char)allowCertificateFetching;
-(void)setAllowCertificateFetching:(char)arg1 ;
-(char)trustSystemAnchorCertificates;
-(void)setTrustSystemAnchorCertificates:(char)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

