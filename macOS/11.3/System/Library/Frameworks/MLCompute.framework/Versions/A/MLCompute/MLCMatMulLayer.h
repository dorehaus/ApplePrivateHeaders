/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MLCompute.framework/Versions/A/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MLCompute/MLCLayer.h>

@class MLCMatMulDescriptor;

@interface MLCMatMulLayer : MLCLayer {

	MLCMatMulDescriptor* _descriptor;

}

@property (nonatomic,copy,readonly) MLCMatMulDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
+(id)layerWithDescriptor:(id)arg1 ;
-(id)description;
-(MLCMatMulDescriptor *)descriptor;
-(id)initWithDescriptor:(id)arg1 ;
-(char)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(id)summarizedDOTDescription;
-(char)isSupportedShapeForTensorSources:(id)arg1 ;
-(id)resultTensorFromSources:(id)arg1 ;
@end

