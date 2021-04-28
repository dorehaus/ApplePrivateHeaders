/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderJob.h>

@class VNObservation, NUClassifyPipelineImageCorrectionRequest;

@interface NUClassifyPipelineImageCorrectionJob : NURenderJob {

	VNObservation* _observation;
	SCD_Struct_NU8 _imageSize;

}

@property (readonly) NUClassifyPipelineImageCorrectionRequest * classifyPipelineImageCorrectionRequest; 
-(id)result;
-(id)cacheKey;
-(id)initWithRequest:(id)arg1 ;
-(void)cleanUp;
-(char)render:(out id*)arg1 ;
-(char)wantsCompleteStage;
-(char)wantsOutputGeometry;
-(char)wantsOutputImage;
-(id)scalePolicy;
-(id)initWithClassifyPipelineImageCorrectionRequest:(id)arg1 ;
-(NUClassifyPipelineImageCorrectionRequest *)classifyPipelineImageCorrectionRequest;
-(id)detectClassifyPipelineImageCorrectionInBuffer:(CVBufferRef)arg1 error:(out id*)arg2 ;
@end
