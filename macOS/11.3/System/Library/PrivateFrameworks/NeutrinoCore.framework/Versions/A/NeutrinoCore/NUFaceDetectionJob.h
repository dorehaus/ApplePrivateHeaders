/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderJob.h>

@class NSArray, NUFaceDetectionRequest;

@interface NUFaceDetectionJob : NURenderJob {

	NSArray* _faces;
	SCD_Struct_NU8 _imageSize;

}

@property (readonly) NUFaceDetectionRequest * faceDetectionRequest; 
-(id)result;
-(id)cacheKey;
-(id)initWithRequest:(id)arg1 ;
-(void)cleanUp;
-(char)render:(out id*)arg1 ;
-(char)wantsCompleteStage;
-(char)wantsOutputGeometry;
-(char)wantsOutputImage;
-(id)scalePolicy;
-(id)initWithFaceDetectionRequest:(id)arg1 ;
-(NUFaceDetectionRequest *)faceDetectionRequest;
-(id)detectFaceRectsInBuffer:(CVBufferRef)arg1 maxResultCount:(unsigned long long)arg2 error:(out id*)arg3 ;
-(id)detectFaceLandmarksInBuffer:(CVBufferRef)arg1 withFaceRects:(id)arg2 error:(out id*)arg3 ;
@end

