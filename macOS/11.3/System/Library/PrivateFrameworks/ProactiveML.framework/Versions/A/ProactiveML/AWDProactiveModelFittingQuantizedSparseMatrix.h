/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/Versions/A/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDProactiveModelFittingQuantizedSparseMatrix : PBCodable <NSCopying> {

	SCD_Struct_AW5* _columnIndices;
	SCD_Struct_AW5* _rowIndices;
	SCD_Struct_AW5* _values;
	float _bucketSize;
	unsigned _columnLength;
	float _minValue;
	unsigned _rowLength;
	SCD_Struct_AW10 _has;

}

@property (nonatomic,readonly) unsigned long long columnIndicesCount; 
@property (nonatomic,readonly) unsigned* columnIndices; 
@property (assign,nonatomic) char hasColumnLength; 
@property (assign,nonatomic) unsigned columnLength;                                //@synthesize columnLength=_columnLength - In the implementation block
@property (nonatomic,readonly) unsigned long long rowIndicesCount; 
@property (nonatomic,readonly) unsigned* rowIndices; 
@property (assign,nonatomic) char hasRowLength; 
@property (assign,nonatomic) unsigned rowLength;                                   //@synthesize rowLength=_rowLength - In the implementation block
@property (nonatomic,readonly) unsigned long long valuesCount; 
@property (nonatomic,readonly) unsigned* values; 
@property (assign,nonatomic) char hasMinValue; 
@property (assign,nonatomic) float minValue;                                       //@synthesize minValue=_minValue - In the implementation block
@property (assign,nonatomic) char hasBucketSize; 
@property (assign,nonatomic) float bucketSize;                                     //@synthesize bucketSize=_bucketSize - In the implementation block
+(id)quantizedSparseMatrixFromSparseMatrix:(id)arg1 numberOfBuckets:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned*)values;
-(id)dictionaryRepresentation;
-(float)minValue;
-(void)setMinValue:(float)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)valuesCount;
-(void)clearValues;
-(void)addValues:(unsigned)arg1 ;
-(unsigned)valuesAtIndex:(unsigned long long)arg1 ;
-(char)hasMinValue;
-(void)setHasMinValue:(char)arg1 ;
-(void)setValues:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setBucketSize:(float)arg1 ;
-(void)setHasBucketSize:(char)arg1 ;
-(char)hasBucketSize;
-(float)bucketSize;
-(unsigned long long)columnIndicesCount;
-(unsigned*)columnIndices;
-(void)clearColumnIndices;
-(void)addColumnIndices:(unsigned)arg1 ;
-(unsigned)columnIndicesAtIndex:(unsigned long long)arg1 ;
-(void)setColumnIndices:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setColumnLength:(unsigned)arg1 ;
-(void)setHasColumnLength:(char)arg1 ;
-(char)hasColumnLength;
-(unsigned long long)rowIndicesCount;
-(unsigned*)rowIndices;
-(void)clearRowIndices;
-(void)addRowIndices:(unsigned)arg1 ;
-(unsigned)rowIndicesAtIndex:(unsigned long long)arg1 ;
-(void)setRowIndices:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setRowLength:(unsigned)arg1 ;
-(void)setHasRowLength:(char)arg1 ;
-(char)hasRowLength;
-(unsigned)columnLength;
-(unsigned)rowLength;
-(float)originalValueAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2 ;
@end

