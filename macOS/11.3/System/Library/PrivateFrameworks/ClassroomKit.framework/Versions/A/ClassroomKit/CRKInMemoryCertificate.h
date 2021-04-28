/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/CRKCertificate.h>

@class NSArray, NSString, NSData, NSDateInterval, CRKIdentityConfiguration;

@interface CRKInMemoryCertificate : NSObject <NSSecureCoding, CRKCertificate> {

	NSDateInterval* _validityDateInterval;
	CRKIdentityConfiguration* _configuration;

}

@property (nonatomic,retain) NSDateInterval * validityDateInterval;                                  //@synthesize validityDateInterval=_validityDateInterval - In the implementation block
@property (nonatomic,copy,readonly) CRKIdentityConfiguration * configuration;                        //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy,readonly) NSArray * commonNames; 
@property (nonatomic,copy,readonly) NSString * fingerprint; 
@property (nonatomic,copy,readonly) NSData * dataRepresentation; 
@property (getter=isTemporallyValid,nonatomic,readonly) char temporallyValid; 
@property (getter=isCertificateAuthority,nonatomic,readonly) char certificateAuthority; 
@property (nonatomic,readonly) unsigned hashingAlgorithm; 
@property (nonatomic,readonly) long long keySizeInBits; 
@property (nonatomic,readonly) SecCertificateRef underlyingCertificate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)certificateWithData:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)dataRepresentation;
-(CRKIdentityConfiguration *)configuration;
-(NSString *)fingerprint;
-(unsigned)hashingAlgorithm;
-(NSDateInterval *)validityDateInterval;
-(char)isTemporallyValid;
-(NSArray *)commonNames;
-(SecCertificateRef)underlyingCertificate;
-(long long)keySizeInBits;
-(char)isCertificateAuthority;
-(id)initWithConfiguration:(id)arg1 validityDateInterval:(id)arg2 ;
-(void)setValidityDateInterval:(NSDateInterval *)arg1 ;
@end

