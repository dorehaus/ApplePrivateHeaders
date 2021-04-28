/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/Versions/A/MessageProtection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageProtection/MessageProtection-Structs.h>
#import <libobjc.A.dylib/P256PrivateKeyProtocol.h>

@class NSData, SecKeyP256Public, NSString;

@interface SecKeyP256Private : NSObject <P256PrivateKeyProtocol> {

	id _privateKey;
	NSData* _privateKeyBlob;
	SecKeyP256Public* _publicKey;

}

@property (nonatomic,readonly) id privateKey;                           //@synthesize privateKey=_privateKey - In the implementation block
@property (nonatomic,readonly) NSData * privateKeyBlob;                 //@synthesize privateKeyBlob=_privateKeyBlob - In the implementation block
@property (nonatomic,retain) SecKeyP256Public * publicKey;              //@synthesize publicKey=_publicKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)generate;
+(id)generateWithAccessControl:(CFStringRef)arg1 ;
+(const CFStringRef)defaultProtectionClassForPlatform;
-(SecKeyP256Public *)publicKey;
-(id)signData:(id)arg1 error:(id*)arg2 ;
-(id)privateKey;
-(void)setPublicKey:(SecKeyP256Public *)arg1 ;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(id)keychainData;
-(id)keyAgreement:(id)arg1 error:(id*)arg2 ;
-(NSData *)privateKeyBlob;
-(id)keyAgreement:(id)arg1 error:(id*)arg2 isRetry:(char)arg3 ;
-(id)authenticateAndRetryKeyAgreement:(id)arg1 error:(id*)arg2 ;
-(id)getPrivateKeyRefWithError:(id*)arg1 ;
@end
