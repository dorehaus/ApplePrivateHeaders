/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/Versions/A/TrustedPeers
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TPPublicKey;
@class NSString, NSData;

@interface TPPeerPermanentInfo : NSObject {

	NSString* _machineID;
	NSString* _modelID;
	unsigned long long _epoch;
	id<TPPublicKey> _signingPubKey;
	id<TPPublicKey> _encryptionPubKey;
	NSData* _data;
	NSData* _sig;
	NSString* _peerID;

}

@property (nonatomic,retain) NSString * machineID;                          //@synthesize machineID=_machineID - In the implementation block
@property (nonatomic,retain) NSString * modelID;                            //@synthesize modelID=_modelID - In the implementation block
@property (assign,nonatomic) unsigned long long epoch;                      //@synthesize epoch=_epoch - In the implementation block
@property (nonatomic,retain) id<TPPublicKey> signingPubKey;                 //@synthesize signingPubKey=_signingPubKey - In the implementation block
@property (nonatomic,retain) id<TPPublicKey> encryptionPubKey;              //@synthesize encryptionPubKey=_encryptionPubKey - In the implementation block
@property (nonatomic,retain) NSData * data;                                 //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSData * sig;                                  //@synthesize sig=_sig - In the implementation block
@property (nonatomic,retain) NSString * peerID;                             //@synthesize peerID=_peerID - In the implementation block
+(id)peerIDForData:(id)arg1 sig:(id)arg2 peerIDHashAlgo:(long long)arg3 ;
+(id)permanentInfoWithPeerID:(id)arg1 data:(id)arg2 sig:(id)arg3 keyFactory:(id)arg4 ;
+(id)permanentInfoWithMachineID:(id)arg1 modelID:(id)arg2 epoch:(unsigned long long)arg3 signingKeyPair:(id)arg4 encryptionKeyPair:(id)arg5 peerIDHashAlgo:(long long)arg6 error:(id*)arg7 ;
-(void)setSig:(NSData *)arg1 ;
-(id)initWithMachineID:(id)arg1 modelID:(id)arg2 epoch:(unsigned long long)arg3 signingPubKey:(id)arg4 encryptionPubKey:(id)arg5 data:(id)arg6 sig:(id)arg7 peerID:(id)arg8 ;
-(void)setSigningPubKey:(id<TPPublicKey>)arg1 ;
-(void)setEncryptionPubKey:(id<TPPublicKey>)arg1 ;
-(id)description;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)epoch;
-(void)setEpoch:(unsigned long long)arg1 ;
-(NSString *)peerID;
-(NSString *)modelID;
-(void)setPeerID:(NSString *)arg1 ;
-(void)setModelID:(NSString *)arg1 ;
-(NSString *)machineID;
-(void)setMachineID:(NSString *)arg1 ;
-(NSData *)sig;
-(id<TPPublicKey>)encryptionPubKey;
-(id<TPPublicKey>)signingPubKey;
@end

