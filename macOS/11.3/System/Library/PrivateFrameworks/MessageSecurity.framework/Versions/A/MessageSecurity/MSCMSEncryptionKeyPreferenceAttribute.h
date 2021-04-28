/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MessageSecurity.framework/Versions/A/MessageSecurity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageSecurity/MessageSecurity-Structs.h>
#import <libobjc.A.dylib/MSCMSAttributeCoder.h>

@interface MSCMSEncryptionKeyPreferenceAttribute : NSObject <MSCMSAttributeCoder> {

	SecCertificateRef _encryptionCertificate;

}

@property (readonly) SecCertificateRef encryptionCertificate;              //@synthesize encryptionCertificate=_encryptionCertificate - In the implementation block
-(void)dealloc;
-(id)initWithIdentity:(SecIdentityRef)arg1 ;
-(id)initWithCertificate:(SecCertificateRef)arg1 ;
-(id)initWithEmailAddress:(id)arg1 ;
-(id)encodeAttributeWithError:(id*)arg1 ;
-(id)initWithAttribute:(id)arg1 error:(id*)arg2 ;
-(SecCertificateRef)encryptionCertificate;
@end

