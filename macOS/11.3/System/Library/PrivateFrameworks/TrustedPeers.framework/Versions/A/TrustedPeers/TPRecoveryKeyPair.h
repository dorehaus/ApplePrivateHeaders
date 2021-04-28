/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/Versions/A/TrustedPeers
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface TPRecoveryKeyPair : NSObject {

	NSData* _signingKeyData;
	NSData* _encryptionKeyData;

}

@property (retain,readonly) NSData * signingKeyData;                 //@synthesize signingKeyData=_signingKeyData - In the implementation block
@property (retain,readonly) NSData * encryptionKeyData;              //@synthesize encryptionKeyData=_encryptionKeyData - In the implementation block
-(NSData *)signingKeyData;
-(NSData *)encryptionKeyData;
-(id)initWithSigningKeyData:(id)arg1 encryptionKeyData:(id)arg2 ;
-(id)initWithStableInfo:(id)arg1 ;
@end
