/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Versions/A/Montreal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPSCNNConvolutionDataSource <NSCopying,NSObject>
@optional
-(id*)rangesForUInt8Kernel;
-(float*)lookupTableForUInt8Kernel;
-(unsigned)weightsQuantizationType;
-(id)updateWithCommandBuffer:(id)arg1 gradientState:(id)arg2 sourceState:(id)arg3;
-(char)updateWithGradientState:(id)arg1 sourceState:(id)arg2;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2;
-(unsigned)weightsLayout;
-(unsigned)kernelWeightsDataType;

@required
-(char)load;
-(id)label;
-(id)descriptor;
-(unsigned)dataType;
-(void*)weights;
-(float*)biasTerms;
-(void)purge;

@end
