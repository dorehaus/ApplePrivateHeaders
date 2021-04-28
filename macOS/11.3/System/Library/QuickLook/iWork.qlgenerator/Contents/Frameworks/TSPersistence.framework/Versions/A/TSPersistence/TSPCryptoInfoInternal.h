/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPCryptoInfo.h>

@class SFUCryptoKey, NSArray, NSString;

@interface TSPCryptoInfoInternal : NSObject <TSPCryptoInfo> {

	SFUCryptoKey* _cryptoKey;
	unsigned long long _preferredBlockSize;
	NSArray* _blockInfos;
	unsigned long long _decodedLength;

}

@property (nonatomic,retain) NSArray * blockInfos;                                 //@synthesize blockInfos=_blockInfos - In the implementation block
@property (assign,nonatomic) unsigned long long decodedLength;                     //@synthesize decodedLength=_decodedLength - In the implementation block
@property (nonatomic,readonly) SFUCryptoKey * cryptoKey;                           //@synthesize cryptoKey=_cryptoKey - In the implementation block
@property (nonatomic,readonly) unsigned long long preferredBlockSize;              //@synthesize preferredBlockSize=_preferredBlockSize - In the implementation block
@property (nonatomic,readonly) char hasDecodedLength; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SFUCryptoKey *)cryptoKey;
-(unsigned long long)decodedLength;
-(unsigned long long)preferredBlockSize;
-(NSArray *)blockInfos;
-(void)setBlockInfos:(NSArray *)arg1 ;
-(id)mutableCryptoInfoCopy;
-(char)hasDecodedLength;
-(id)initWithCryptoKey:(id)arg1 preferredBlockSize:(unsigned long long)arg2 blockInfos:(id)arg3 decodedLength:(unsigned long long)arg4 ;
-(id)initWithCryptoInfo:(id)arg1 ;
-(void)setDecodedLength:(unsigned long long)arg1 ;
@end

