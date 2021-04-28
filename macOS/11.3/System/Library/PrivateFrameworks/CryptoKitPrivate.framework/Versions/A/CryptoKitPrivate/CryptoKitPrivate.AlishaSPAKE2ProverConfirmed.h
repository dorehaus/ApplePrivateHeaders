/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CryptoKitPrivate.framework/Versions/A/CryptoKitPrivate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface CryptoKitPrivate.AlishaSPAKE2ProverConfirmed : NSObject {

	 alishaKey;
	 KEnc;
	 KMac;
	 KRMac;
	 SymmetricLTS;
	 Kble_intro;
	 Kble_oob_master;
	 M2;

}

@property (readonly,nonatomic) NSData * alishaKey; 
@property (readonly,nonatomic) NSData * KEnc; 
@property (readonly,nonatomic) NSData * KMac; 
@property (readonly,nonatomic) NSData * KRMac; 
@property (readonly,nonatomic) NSData * SymmetricLTS; 
@property (readonly,nonatomic) NSData * Kble_intro; 
@property (readonly,nonatomic) NSData * Kble_oob_master; 
@property (readonly,nonatomic) NSData * M2; 
-(id)init;
-(NSData *)M2;
-(NSData *)alishaKey;
-(NSData *)KEnc;
-(NSData *)KMac;
-(NSData *)KRMac;
-(NSData *)SymmetricLTS;
-(NSData *)Kble_intro;
-(NSData *)Kble_oob_master;
@end

