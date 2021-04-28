/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ACDEClient.framework/Versions/A/ACDEClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ACDEClient/ACDEClient-Structs.h>
#import <ACDEClient/ACFCryptographProtocol.h>

@class NSString;

@interface ACFCryptograph : NSObject <ACFCryptographProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)randomDataOfLength:(unsigned long long)arg1 ;
-(id)compressData:(id)arg1 ;
-(id)encryptData:(id)arg1 withKey:(_SecKey*)arg2 ;
-(id)signatureForData:(id)arg1 withKey:(_SecKey*)arg2 ;
-(id)decodeBase64:(id)arg1 ;
-(id)encodeBase64:(id)arg1 ;
-(id)decodeBase16:(id)arg1 ;
-(id)encodeBase16:(id)arg1 ;
-(id)decodeStringWithObscuredData:(id)arg1 ;
-(id)encodeObscuredDataWithString:(id)arg1 length:(unsigned long long)arg2 ;
-(id)hashDataSHA256WithData:(id)arg1 ;
-(id)hashStringSHA256WithString:(id)arg1 ;
-(id)hashDataSHA1WithString:(id)arg1 ;
-(id)hashStringSHA1WithString:(id)arg1 ;
-(id)sha1Context;
-(void)sha1Context:(id)arg1 updateWithData:(id)arg2 ;
-(id)sha1ContextFinalize:(id)arg1 ;
-(id)randomStringOfLength:(unsigned long long)arg1 ;
-(id)encryptAES128CBCData:(id)arg1 withKey:(id)arg2 initializationVector:(id)arg3 pading:(char)arg4 ;
-(id)decryptAES128CBCData:(id)arg1 withKey:(id)arg2 initializationVector:(id)arg3 pading:(char)arg4 ;
-(id)encrypt3DESCBCData:(id)arg1 withKey:(id)arg2 pading:(char)arg3 ;
-(id)decrypt3DESCBCData:(id)arg1 withKey:(id)arg2 ;
-(id)hmac256DataWithData:(id)arg1 key:(id)arg2 ;
-(void)fillEncryptionSuffix:(id)arg1 ;
-(void)fillHMACSuffix:(id)arg1 ;
-(void)clearKey:(id)arg1 ;
-(id)compactDataFromPropertyList:(id)arg1 ;
-(void)setLength:(unsigned long long)arg1 toData:(id)arg2 ;
@end

