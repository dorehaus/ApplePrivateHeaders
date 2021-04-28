/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MLCompute.framework/Versions/A/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MLCompute/MLCGPUDeviceOps.h>

@interface MLCPaddingGPUDeviceOps : MLCGPUDeviceOps {

	int _paddingType;
	float _paddingValue;
	id _paddingGradientAccumulateKernel;

}

@property (assign,nonatomic) int paddingType;                                 //@synthesize paddingType=_paddingType - In the implementation block
@property (assign,nonatomic) float paddingValue;                              //@synthesize paddingValue=_paddingValue - In the implementation block
@property (nonatomic,retain) id paddingGradientAccumulateKernel;              //@synthesize paddingGradientAccumulateKernel=_paddingGradientAccumulateKernel - In the implementation block
+(id)deviceOpsWithForwardKernel:(id)arg1 gradientKernel:(id)arg2 ;
-(void)setPaddingType:(int)arg1 ;
-(void)setPaddingValue:(float)arg1 ;
-(int)paddingType;
-(id)initWithForwardKernel:(id)arg1 gradientKernel:(id)arg2 ;
-(float)paddingValue;
-(id)paddingGradientAccumulateKernel;
-(void)setPaddingGradientAccumulateKernel:(id)arg1 ;
@end

