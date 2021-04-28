/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Versions/A/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MAFloatVector;

@interface PHAPrivateFederatedLearningLayerParameters : NSObject {

	MAFloatVector* _weights;
	MAFloatVector* _bias;

}

@property (nonatomic,retain) MAFloatVector * weights;              //@synthesize weights=_weights - In the implementation block
@property (nonatomic,retain) MAFloatVector * bias;                 //@synthesize bias=_bias - In the implementation block
-(MAFloatVector *)weights;
-(void)setWeights:(MAFloatVector *)arg1 ;
-(MAFloatVector *)bias;
-(void)setBias:(MAFloatVector *)arg1 ;
-(id)initWithWeights:(id)arg1 bias:(id)arg2 ;
@end

