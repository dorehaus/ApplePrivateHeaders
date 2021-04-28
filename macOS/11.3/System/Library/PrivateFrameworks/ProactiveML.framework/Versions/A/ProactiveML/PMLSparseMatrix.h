/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/Versions/A/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProactiveML/ProactiveML-Structs.h>
@interface PMLSparseMatrix : NSObject {

	char _isSymmetric;
	sparse_m_floatRef _matrix;

}

@property (nonatomic,readonly) unsigned long long numberOfRows; 
@property (nonatomic,readonly) unsigned long long numberOfColumns; 
@property (assign,nonatomic) char isSymmetric;                                  //@synthesize isSymmetric=_isSymmetric - In the implementation block
@property (assign,nonatomic) sparse_m_floatRef matrix;                          //@synthesize matrix=_matrix - In the implementation block
+(id)sparseMatrixWithNumberOfRows:(unsigned long long)arg1 numberOfColumns:(unsigned long long)arg2 ;
+(id)sparseMatrixFromNumbers:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(float)minValue;
-(float)maxValue;
-(unsigned long long)numberOfColumns;
-(unsigned long long)numberOfRows;
-(sparse_m_floatRef)matrix;
-(void)setMatrix:(sparse_m_floatRef)arg1 ;
-(void)enumerateNonZeroValuesWithBlock:(/*^block*/id)arg1 ;
-(id)initWithSparseMatrix:(sparse_m_floatRef)arg1 ;
-(void)setIsSymmetric:(char)arg1 ;
-(float)valueAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2 ;
-(void)_enumerateSparseRowsWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateNonZeroValuesForRow:(unsigned long long)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)matrixWithConstantColumn;
-(char)isSymmetric;
@end

