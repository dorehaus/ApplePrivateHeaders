/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/Versions/A/DistributedEvaluation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData, NSError;

@interface DESPFLEncryptableBuffer : NSObject {

	NSMutableData* _serializedData;
	unsigned long long _dataLengthVarintOffset;
	unsigned long long _mutableFloatsOffset;
	unsigned long long _ivOffset;
	unsigned long long _sizeOfDataTransport;
	unsigned long long _sizeOfDataTransportOffset;
	NSError* _encryptionError;
	char _encryptionWasAttempted;
	char _transportIsBfloat16;
	unsigned long long _count;

}

@property (nonatomic,readonly) float* mutableDataNumbers; 
@property (nonatomic,readonly) unsigned long long count;               //@synthesize count=_count - In the implementation block
-(unsigned long long)count;
-(id)initWithEncryptor:(id)arg1 count:(unsigned long long)arg2 ;
-(float*)mutableDataNumbers;
-(id)encryptedDataWithPublicKey:(id)arg1 error:(id*)arg2 ;
@end
