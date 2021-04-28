/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/Versions/A/DistributedEvaluation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DistributedEvaluation/DistributedEvaluation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface DESEncryptedData : PBCodable <NSCopying> {

	NSString* _algorithm;
	NSData* _data;
	NSData* _encryptedKey;
	int _version;
	SCD_Struct_DE3 _has;

}

@property (assign,nonatomic) char hasVersion; 
@property (assign,nonatomic) int version;                         //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSData * data;                       //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) char hasEncryptedKey; 
@property (nonatomic,retain) NSData * encryptedKey;               //@synthesize encryptedKey=_encryptedKey - In the implementation block
@property (nonatomic,readonly) char hasAlgorithm; 
@property (nonatomic,retain) NSString * algorithm;                //@synthesize algorithm=_algorithm - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(int)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)algorithm;
-(NSData *)encryptedKey;
-(void)setEncryptedKey:(NSData *)arg1 ;
-(char)hasVersion;
-(void)setHasVersion:(char)arg1 ;
-(void)setAlgorithm:(NSString *)arg1 ;
-(char)hasEncryptedKey;
-(char)hasAlgorithm;
@end

