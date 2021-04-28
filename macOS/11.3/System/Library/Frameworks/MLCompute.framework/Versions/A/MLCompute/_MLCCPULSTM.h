/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MLCompute.framework/Versions/A/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MLCompute/_MLCCPULayer.h>

@interface _MLCCPULSTM : _MLCCPULayer
+(char)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensor:(id)arg4 ;
+(id)layerWithDevice:(id)arg1 lstmDescriptor:(id)arg2 inputWeights:(id)arg3 hiddenWeights:(id)arg4 peepholeWeights:(id)arg5 biasTerms:(id)arg6 gateActivations:(id)arg7 ouputResultActivation:(id)arg8 ;
+(char)setOptimizerDataForDevice:(id)arg1 deviceOps:(id)arg2 dataForInputWeights:(id)arg3 dataForHiddenWeights:(id)arg4 dataForPeepholeWeights:(id)arg5 dataForBias:(id)arg6 ;
-(id)initWithDevice:(id)arg1 lstmDescriptor:(id)arg2 inputWeights:(id)arg3 hiddenWeights:(id)arg4 peepholeWeights:(id)arg5 biasTerms:(id)arg6 gateActivations:(id)arg7 outputResultActivation:(id)arg8 ;
@end

