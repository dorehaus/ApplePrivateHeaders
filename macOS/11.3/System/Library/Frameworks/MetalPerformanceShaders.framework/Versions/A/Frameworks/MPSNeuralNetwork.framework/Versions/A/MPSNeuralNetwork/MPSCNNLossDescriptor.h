/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Versions/A/Frameworks/MPSNeuralNetwork.framework/Versions/A/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MPSCNNLossDescriptor : NSObject <NSCopying> {

	unsigned _lossType;
	int _reductionType;
	char _reduceAcrossBatch;
	float _weight;
	float _labelSmoothing;
	unsigned long long _numberOfClasses;
	float _epsilon;
	float _delta;

}

@property (assign,nonatomic) unsigned lossType;                               //@synthesize lossType=_lossType - In the implementation block
@property (assign,nonatomic) int reductionType;                               //@synthesize reductionType=_reductionType - In the implementation block
@property (assign,nonatomic) char reduceAcrossBatch;                          //@synthesize reduceAcrossBatch=_reduceAcrossBatch - In the implementation block
@property (assign,nonatomic) float weight;                                    //@synthesize weight=_weight - In the implementation block
@property (assign,nonatomic) float labelSmoothing;                            //@synthesize labelSmoothing=_labelSmoothing - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfClasses;              //@synthesize numberOfClasses=_numberOfClasses - In the implementation block
@property (assign,nonatomic) float epsilon;                                   //@synthesize epsilon=_epsilon - In the implementation block
@property (assign,nonatomic) float delta;                                     //@synthesize delta=_delta - In the implementation block
+(id)cnnLossDescriptorWithType:(unsigned)arg1 reductionType:(int)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(float)weight;
-(void)setWeight:(float)arg1 ;
-(float)delta;
-(float)epsilon;
-(void)setEpsilon:(float)arg1 ;
-(unsigned long long)numberOfClasses;
-(unsigned)lossType;
-(void)setLossType:(unsigned)arg1 ;
-(void)setDelta:(float)arg1 ;
-(int)reductionType;
-(float)labelSmoothing;
-(char)reduceAcrossBatch;
-(void)setLabelSmoothing:(float)arg1 ;
-(void)setNumberOfClasses:(unsigned long long)arg1 ;
-(void)setReductionType:(int)arg1 ;
-(void)setReduceAcrossBatch:(char)arg1 ;
@end

