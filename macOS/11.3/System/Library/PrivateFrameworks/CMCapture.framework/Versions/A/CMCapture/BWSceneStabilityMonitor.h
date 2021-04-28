/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CMCapture/CMCapture-Structs.h>
@interface BWSceneStabilityMonitor : NSObject {

	char _isLastSceneStable;
	SCD_Struct_Fi8 _stableStartTime;
	SCD_Struct_Fi8 _unstableStartTime;
	char _isAFCompletedOnLastFrame;
	char _processedSceneMotion;
	float _sceneMotionOffsetX;
	float _sceneMotionOffsetY;
	SCD_Struct_BW73* _aeMatrixStorage;
	SCD_Struct_BW74* _pixelSumStorage;
	int _lastAFStatus;

}

@property (getter=isStable,nonatomic,readonly) char stable;                        //@synthesize isLastSceneStable=_isLastSceneStable - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Fi8 stableStartTime;                     //@synthesize stableStartTime=_stableStartTime - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Fi8 unstableStartTime;                   //@synthesize unstableStartTime=_unstableStartTime - In the implementation block
@property (getter=isAFCompleted,nonatomic,readonly) char afCompleted;              //@synthesize isAFCompletedOnLastFrame=_isAFCompletedOnLastFrame - In the implementation block
@property (nonatomic,readonly) char processedSceneMotion;                          //@synthesize processedSceneMotion=_processedSceneMotion - In the implementation block
@property (nonatomic,readonly) float sceneMotionOffsetX;                           //@synthesize sceneMotionOffsetX=_sceneMotionOffsetX - In the implementation block
@property (nonatomic,readonly) float sceneMotionOffsetY;                           //@synthesize sceneMotionOffsetY=_sceneMotionOffsetY - In the implementation block
+(void)initialize;
-(void)dealloc;
-(id)init;
-(void)reset;
-(char)_calculateStabilityWithAEMatrixFromMetadata:(id)arg1 ;
-(char)_calculateStabilityWithSceneMotionForPixelBuffer:(CVBufferRef)arg1 pts:(SCD_Struct_Fi8)arg2 ;
-(void)_updateAFStatusFromMetadata:(id)arg1 ;
-(void)_resetAEMatrixStorage;
-(void)_resetPixelSumStorage;
-(void)calculateStabilityWithPixelBuffer:(CVBufferRef)arg1 pts:(SCD_Struct_Fi8)arg2 metadataDictionary:(id)arg3 forceSceneMotion:(char)arg4 ;
-(char)isStable;
-(SCD_Struct_Fi8)stableStartTime;
-(SCD_Struct_Fi8)unstableStartTime;
-(char)isAFCompleted;
-(char)processedSceneMotion;
-(float)sceneMotionOffsetX;
-(float)sceneMotionOffsetY;
@end

