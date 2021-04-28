/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MLCompute.framework/Versions/A/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MLCompute/MLCompute-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MLCDevice, NSArray;

@interface MLCOptimizer : NSObject <NSCopying> {

	char _appliesGradientClipping;
	float _learningRate;
	float _gradientRescale;
	float _gradientClipMax;
	float _gradientClipMin;
	float _regularizationScale;
	int _regularizationType;
	MLCDevice* _device;
	NSArray* _deviceOps;
	unsigned long long _numOptimizerDataBuffers;

}

@property (nonatomic,retain) MLCDevice * device;                                      //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) NSArray * deviceOps;                                     //@synthesize deviceOps=_deviceOps - In the implementation block
@property (assign,nonatomic) unsigned long long numOptimizerDataBuffers;              //@synthesize numOptimizerDataBuffers=_numOptimizerDataBuffers - In the implementation block
@property (assign,nonatomic) float learningRate;                                      //@synthesize learningRate=_learningRate - In the implementation block
@property (nonatomic,readonly) float gradientRescale;                                 //@synthesize gradientRescale=_gradientRescale - In the implementation block
@property (assign,nonatomic) char appliesGradientClipping;                            //@synthesize appliesGradientClipping=_appliesGradientClipping - In the implementation block
@property (nonatomic,readonly) float gradientClipMax;                                 //@synthesize gradientClipMax=_gradientClipMax - In the implementation block
@property (nonatomic,readonly) float gradientClipMin;                                 //@synthesize gradientClipMin=_gradientClipMin - In the implementation block
@property (nonatomic,readonly) float regularizationScale;                             //@synthesize regularizationScale=_regularizationScale - In the implementation block
@property (nonatomic,readonly) int regularizationType;                                //@synthesize regularizationType=_regularizationType - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(MLCDevice *)device;
-(id)initWithDescriptor:(id)arg1 ;
-(float)learningRate;
-(float)gradientClipMin;
-(float)gradientClipMax;
-(void)setLearningRate:(float)arg1 ;
-(void)setDevice:(MLCDevice *)arg1 ;
-(float)gradientRescale;
-(int)regularizationType;
-(float)regularizationScale;
-(NSArray *)deviceOps;
-(void)setDeviceOps:(NSArray *)arg1 ;
-(void)bindDevice:(id)arg1 deviceOps:(id)arg2 ;
-(unsigned long long)numOptimizerDataBuffers;
-(void)setNumOptimizerDataBuffers:(unsigned long long)arg1 ;
-(char)appliesGradientClipping;
-(id)initWithLearningRate:(float)arg1 gradientRescale:(float)arg2 applyGradientClipping:(char)arg3 gradientClipMax:(float)arg4 gradientClipMin:(float)arg5 regularizationScale:(float)arg6 regularizationType:(int)arg7 ;
-(void)setAppliesGradientClipping:(char)arg1 ;
@end
