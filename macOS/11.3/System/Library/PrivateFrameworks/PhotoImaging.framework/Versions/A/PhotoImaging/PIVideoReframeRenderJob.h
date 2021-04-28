/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/Versions/A/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/NURenderJob.h>

@class NSArray;

@interface PIVideoReframeRenderJob : NURenderJob {

	NSArray* _keyframes;
	double _confidence;
	SCD_Struct_PI6 _stabCropRect;

}

@property (nonatomic,copy,readonly) NSArray * keyframes;                 //@synthesize keyframes=_keyframes - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PI6 stabCropRect;              //@synthesize stabCropRect=_stabCropRect - In the implementation block
@property (nonatomic,readonly) double confidence;                        //@synthesize confidence=_confidence - In the implementation block
-(id)result;
-(double)confidence;
-(char)wantsRenderStage;
-(char)wantsCompleteStage;
-(char)prepare:(out id*)arg1 ;
-(id)scalePolicy;
-(char)wantsOutputVideo;
-(NSArray *)keyframes;
-(SCD_Struct_PI6)stabCropRect;
-(void)_writeDiagnosticFilesForReframer:(id)arg1 metadata:(id)arg2 ;
-(char)_createStabilizedKeyframesFromReframer:(id)arg1 videoTrack:(id)arg2 viewRect:(SCD_Struct_PI6)arg3 timedMetadata:(id)arg4 error:(out id*)arg5 ;
-(char)_createKeyframesFromReframer:(id)arg1 videoTrack:(id)arg2 viewRect:(SCD_Struct_PI6)arg3 timedMetadata:(id)arg4 error:(out id*)arg5 ;
@end

