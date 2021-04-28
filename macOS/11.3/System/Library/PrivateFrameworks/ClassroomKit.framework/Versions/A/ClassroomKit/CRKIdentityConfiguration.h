/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface CRKIdentityConfiguration : NSObject <NSCopying, NSSecureCoding> {

	char _createsCertificateAuthority;
	char _addsClientAuthAndServerAuthEKUs;
	unsigned _hashingAlgorithm;
	NSString* _commonName;
	long long _keySizeInBits;
	NSString* _emailAddress;

}

@property (nonatomic,copy,readonly) NSString * commonName;                      //@synthesize commonName=_commonName - In the implementation block
@property (nonatomic,copy,readonly) NSData * dataRepresentation; 
@property (assign,nonatomic) long long keySizeInBits;                           //@synthesize keySizeInBits=_keySizeInBits - In the implementation block
@property (assign,nonatomic) char createsCertificateAuthority;                  //@synthesize createsCertificateAuthority=_createsCertificateAuthority - In the implementation block
@property (assign,nonatomic) unsigned hashingAlgorithm;                         //@synthesize hashingAlgorithm=_hashingAlgorithm - In the implementation block
@property (assign,nonatomic) char addsClientAuthAndServerAuthEKUs;              //@synthesize addsClientAuthAndServerAuthEKUs=_addsClientAuthAndServerAuthEKUs - In the implementation block
@property (nonatomic,copy) NSString * emailAddress;                             //@synthesize emailAddress=_emailAddress - In the implementation block
+(char)supportsSecureCoding;
+(long long)defaultKeySizeInBits;
+(char)defaultCreatesCertificateAuthority;
+(unsigned)defaultHashingAlgorithm;
+(id)configurationWithData:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)dataRepresentation;
-(void)setEmailAddress:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(NSString *)commonName;
-(unsigned)hashingAlgorithm;
-(id)initWithCommonName:(id)arg1 ;
-(long long)keySizeInBits;
-(char)createsCertificateAuthority;
-(char)addsClientAuthAndServerAuthEKUs;
-(void)setKeySizeInBits:(long long)arg1 ;
-(void)setCreatesCertificateAuthority:(char)arg1 ;
-(void)setHashingAlgorithm:(unsigned)arg1 ;
-(void)setAddsClientAuthAndServerAuthEKUs:(char)arg1 ;
@end

