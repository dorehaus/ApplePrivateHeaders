/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _SFCertificate, _SFPublicKey, _SFKeyPair, SFIdentityAttributes;

@interface _SFIdentity : NSObject {

	id _identityInternal;

}

@property (nonatomic,retain) _SFCertificate * certificate; 
@property (nonatomic,readonly) _SFPublicKey * publicKey; 
@property (nonatomic,retain) _SFKeyPair * keyPair; 
@property (nonatomic,readonly) SFIdentityAttributes * attributes; 
+(char)supportsSecureCoding;
-(id)initWithPublicKey:(id)arg1 certificate:(id)arg2 ;
-(id)initWithKeyPair:(id)arg1 certificate:(id)arg2 ;
-(id)initWithPublicKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SFIdentityAttributes *)attributes;
-(_SFPublicKey *)publicKey;
-(_SFCertificate *)certificate;
-(void)setCertificate:(_SFCertificate *)arg1 ;
-(_SFKeyPair *)keyPair;
-(void)setKeyPair:(_SFKeyPair *)arg1 ;
-(id)initWithKeyPair:(id)arg1 ;
@end

