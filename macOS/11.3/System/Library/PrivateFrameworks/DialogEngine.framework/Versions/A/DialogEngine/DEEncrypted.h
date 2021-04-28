/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/Versions/A/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DialogEngine/DialogEngine-Structs.h>
@interface DEEncrypted : NSObject
+(id)getKey:(unsigned long long)arg1 ;
+(id)decrypt:(id)arg1 ;
+(id)encrypt:(id)arg1 keyId:(unsigned long long)arg2 privateKey:(id)arg3 multipart:(char)arg4 ;
+(id)versionFile:(id)arg1 ;
+(id)getKeyWithVersion:(id)arg1 ;
+(id)encryptFrom:(id)arg1 name:(id)arg2 base:(id)arg3 keyId:(unsigned long long)arg4 privateKey:(id)arg5 multipart:(char)arg6 ;
+(id)decrypt:(id)arg1 allowAllKeys:(char)arg2 keyVersion:(id*)arg3 ;
+(id)decryptFrom:(id)arg1 name:(id)arg2 base:(id)arg3 ;
+(char)decryptFrom:(id)arg1 to:(id)arg2 version:(id)arg3 ;
+(char)isSymmetric:(unsigned long long)arg1 ;
+(id)getKeyWithVersion:(id)arg1 symmetric:(char*)arg2 ;
+(id)getSymmetricSrc:(id)arg1 publicKey:(id)arg2 ;
+(id)getSymmetricKey:(id)arg1 symmetricKeyIV:(id)arg2 signature:(id)arg3 ;
+(char)decryptFrom:(id)arg1 to:(id)arg2 allowAllKeys:(char)arg3 keyVersion:(id*)arg4 ;
+(char)isPrivateKey:(id)arg1 publicKey:(id)arg2 ;
+(id)getSymmetricKey:(id)arg1 publicKey:(id)arg2 symmetricKeyIV:(id*)arg3 signature:(id*)arg4 ;
+(char)encryptFrom:(id)arg1 to:(id)arg2 keyId:(unsigned long long)arg3 privateKey:(id)arg4 encryptedPb:(Encrypted*)arg5 ;
+(char)wrapFrom:(id)arg1 to:(id)arg2 encryptedPb:(Encrypted*)arg3 multipart:(char)arg4 ;
+(char)decryptFrom:(id)arg1 to:(id)arg2 version:(id)arg3 allowAllKeys:(char)arg4 ;
+(id)decrypt:(id)arg1 keyVersion:(id*)arg2 ;
+(char)encryptFrom:(id)arg1 to:(id)arg2 keyId:(unsigned long long)arg3 privateKey:(id)arg4 multipart:(char)arg5 ;
+(id)toEnvelope:(char)arg1 iv:(id)arg2 hmac:(id)arg3 keyVersion:(id)arg4 payload:(id)arg5 ;
+(id)decryptAll:(id)arg1 ;
+(char)decryptAllFrom:(id)arg1 to:(id)arg2 ;
@end

