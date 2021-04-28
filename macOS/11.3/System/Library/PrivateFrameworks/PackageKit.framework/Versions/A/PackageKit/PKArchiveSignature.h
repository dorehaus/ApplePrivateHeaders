/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PackageKit/PackageKit-Structs.h>
@class NSDate, NSArray, NSString;

@interface PKArchiveSignature : NSObject {

	SecTrustRef _verifyTrustRef;
	NSDate* _trustedTimestampDate;

}

@property (readonly) NSArray * certificateRefs; 
@property (readonly) NSString * algorithmType; 
@property (readonly) NSDate * trustedTimestampDate;              //@synthesize trustedTimestampDate=_trustedTimestampDate - In the implementation block
-(id)signedDataReturningAlgorithm:(id*)arg1 ;
-(id)signatureDataReturningAlgorithm:(id*)arg1 ;
-(char)_hasSigningCertificate:(SecCertificateRef)arg1 ;
-(char)_verifyLegacyWithSignedData:(id)arg1 signatureData:(id)arg2 error:(id*)arg3 ;
-(char)_verifyCMSWithSignedData:(id)arg1 signatureData:(id)arg2 error:(id*)arg3 ;
-(char)verifySignedData;
-(void)dealloc;
-(id)description;
-(char)verifySignedDataReturningError:(id*)arg1 ;
-(SecTrustRef)verificationTrustRef;
-(NSArray *)certificateRefs;
-(NSDate *)trustedTimestampDate;
-(NSString *)algorithmType;
@end

