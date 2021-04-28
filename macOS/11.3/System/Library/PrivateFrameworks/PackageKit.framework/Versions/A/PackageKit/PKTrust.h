/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PackageKit/PackageKit-Structs.h>
@class NSDate;

@interface PKTrust : NSObject {

	SecTrustRef _trustRef;
	SecPolicyRef _policyRef;
	unsigned _trustResult;
	int _trustLevel;
	NSDate* _signingDate;
	char _signingDateIsTrusted;
	char _appleRootMode;
	char _allowExpiredCertificates;
	char _allowExpiredRoots;

}
+(id)stringForTrustLevel:(int)arg1 ;
-(void)_enterAppleRootMode;
-(char)_evaluateTrustAtLevel:(int)arg1 isDevelopmentSigned:(char*)arg2 ;
-(char)_restoreSystemTrustMode;
-(SecCertificateRef)_anchorCertificateFromEvaluation;
-(char)_isTrustedAsRootCertificate:(SecCertificateRef)arg1 inDomain:(unsigned)arg2 ;
-(char)_enterDateSignedMode;
-(char)_restoreCurrentDateMode;
-(char)_setCurrentPolicyWithOID:(cssm_data)arg1 ;
-(void)dealloc;
-(id)certificateChain;
-(unsigned)trustResult;
-(int)trustLevel;
-(char)evaluateTrustReturningError:(id*)arg1 ;
-(SecTrustRef)trustRef;
-(void)setAllowExpiredCertificates:(char)arg1 ;
-(void)setAllowExpiredRoots:(char)arg1 ;
-(id)initWithSecTrust:(SecTrustRef)arg1 usingAppleRoot:(char)arg2 signatureDate:(id)arg3 ;
-(id)initWithCertificates:(id)arg1 usingAppleRoot:(char)arg2 signatureDate:(id)arg3 ;
@end
