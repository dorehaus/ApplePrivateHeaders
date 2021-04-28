/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreML.framework/Versions/A/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreML/CoreML-Structs.h>
@interface _MLVNFrameworkHandle : NSObject {

	char _validForSceneprint;
	char _validForObjectprint;
	/*function pointer*/void* _scenePrintsFromPixelBuffersImpl;
	/*function pointer*/void* _scenePrintsFromPixelBuffersUsesCPUOnlyImpl;
	/*function pointer*/void* _scenePrintElementCountImpl;
	/*function pointer*/void* _scenePrintLengthImpl;
	Class _VNImageBufferClass;
	/*function pointer*/void* _detectionPrintsFromPixelBuffersImpl;
	/*function pointer*/void* _detectionPrintsFromPixelBuffersUsesCPUOnlyImpl;
	/*function pointer*/void* _detectionPrintShapesImpl;
	/*function pointer*/void* _detectionPrintSupportedRevisionsImpl;

}

@property (nonatomic,readonly) /*function pointer*/void* scenePrintsFromPixelBuffersImpl;                             //@synthesize scenePrintsFromPixelBuffersImpl=_scenePrintsFromPixelBuffersImpl - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* scenePrintsFromPixelBuffersUsesCPUOnlyImpl;                  //@synthesize scenePrintsFromPixelBuffersUsesCPUOnlyImpl=_scenePrintsFromPixelBuffersUsesCPUOnlyImpl - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* scenePrintElementCountImpl;                                  //@synthesize scenePrintElementCountImpl=_scenePrintElementCountImpl - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* scenePrintLengthImpl;                                        //@synthesize scenePrintLengthImpl=_scenePrintLengthImpl - In the implementation block
@property (nonatomic,readonly) Class VNImageBufferClass;                                                              //@synthesize VNImageBufferClass=_VNImageBufferClass - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* detectionPrintsFromPixelBuffersImpl;                         //@synthesize detectionPrintsFromPixelBuffersImpl=_detectionPrintsFromPixelBuffersImpl - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* detectionPrintsFromPixelBuffersUsesCPUOnlyImpl;              //@synthesize detectionPrintsFromPixelBuffersUsesCPUOnlyImpl=_detectionPrintsFromPixelBuffersUsesCPUOnlyImpl - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* detectionPrintShapesImpl;                                    //@synthesize detectionPrintShapesImpl=_detectionPrintShapesImpl - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* detectionPrintSupportedRevisionsImpl;                        //@synthesize detectionPrintSupportedRevisionsImpl=_detectionPrintSupportedRevisionsImpl - In the implementation block
@property (getter=isValid,nonatomic,readonly) char validForSceneprint;                                                //@synthesize validForSceneprint=_validForSceneprint - In the implementation block
@property (getter=isValid,nonatomic,readonly) char validForObjectprint;                                               //@synthesize validForObjectprint=_validForObjectprint - In the implementation block
+(id)sharedHandle;
+(id)addOrientation:(unsigned)arg1 toOptions:(id)arg2 ;
-(id)init;
-(char)isValid;
-(char)isValid;
-(id)scenePrintsFromPixelBuffers:(CVBufferRef)arg1 version:(unsigned long long)arg2 augmentationOptions:(id)arg3 useCPUOnly:(char)arg4 error:(id*)arg5 ;
-(unsigned long long)elementCountForScenePrintRequestRevision:(unsigned long long)arg1 ;
-(unsigned long long)lengthInBytesForScenePrintRequestRevision:(unsigned long long)arg1 ;
-(CVBufferRef)createPixelBufferFromVNImageBuffer:(id)arg1 constraint:(id)arg2 cropRect:(CGRect)arg3 cropAndScaleOption:(unsigned long long)arg4 options:(id)arg5 error:(id*)arg6 ;
-(CVBufferRef)createPixelBufferFromImageAtURL:(id)arg1 constraint:(id)arg2 cropRect:(CGRect)arg3 cropAndScaleOption:(unsigned long long)arg4 options:(id)arg5 error:(id*)arg6 ;
-(CVBufferRef)createPixelBufferFromCGImage:(CGImageRef)arg1 constraint:(id)arg2 cropRect:(CGRect)arg3 cropAndScaleOption:(unsigned long long)arg4 options:(id)arg5 error:(id*)arg6 ;
-(id)detectionPrintsFromPixelBuffers:(CVBufferRef)arg1 version:(unsigned long long)arg2 augmentationOptions:(id)arg3 useCPUOnly:(char)arg4 error:(id*)arg5 ;
-(id)detectionPrintShapes:(unsigned long long)arg1 ;
-(id)detectionPrintSupportedRevisions;
-(/*function pointer*/void*)scenePrintsFromPixelBuffersImpl;
-(/*function pointer*/void*)scenePrintsFromPixelBuffersUsesCPUOnlyImpl;
-(/*function pointer*/void*)scenePrintElementCountImpl;
-(/*function pointer*/void*)scenePrintLengthImpl;
-(Class)VNImageBufferClass;
-(/*function pointer*/void*)detectionPrintsFromPixelBuffersImpl;
-(/*function pointer*/void*)detectionPrintsFromPixelBuffersUsesCPUOnlyImpl;
-(/*function pointer*/void*)detectionPrintShapesImpl;
-(/*function pointer*/void*)detectionPrintSupportedRevisionsImpl;
@end

