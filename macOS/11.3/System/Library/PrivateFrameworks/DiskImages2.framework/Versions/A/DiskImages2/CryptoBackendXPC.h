/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DiskImages2.framework/Versions/A/DiskImages2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiskImages2/DiskImages2-Structs.h>
#import <DiskImages2/BackendXPC.h>

@class BackendXPC;

@interface CryptoBackendXPC : BackendXPC {

	BackendXPC* _baseBackendXPC;
	shared_ptr<crypto::format>* _cryptoFormat;

}

@property (nonatomic,retain) BackendXPC * baseBackendXPC;                           //@synthesize baseBackendXPC=_baseBackendXPC - In the implementation block
@property (assign,nonatomic) shared_ptr<crypto::format>* cryptoFormat;              //@synthesize cryptoFormat=_cryptoFormat - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setBaseBackendXPC:(BackendXPC *)arg1 ;
-(char)checkIfEncryptedWithErrno:(int*)arg1 ;
-(void)createBackendWithKeys:(keys*)arg1 ;
-(shared_ptr<crypto::format>*)cryptoFormat;
-(BackendXPC *)baseBackendXPC;
-(id)initWithKeys:(keys*)arg1 baseBackendXPC:(id)arg2 ;
-(void)setCryptoFormat:(shared_ptr<crypto::format>*)arg1 ;
@end

