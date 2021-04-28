/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/Versions/A/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class PHPhotoLibrary, VCPFaceAnalyzer;

@interface VCPFaceCropManager : NSObject {

	PHPhotoLibrary* _photoLibrary;
	VCPFaceAnalyzer* _faceAnalyzer;

}
+(char)_allowANE;
-(void)_configureRequest:(id)arg1 withRevision:(unsigned long long)arg2 ;
-(id)_bestFaceForFaceDetectionRequest:(id)arg1 withRect:(CGRect)arg2 ;
-(id)_faceFromFaceCrop:(id)arg1 error:(id*)arg2 ;
-(char)_clearDirtyStateOnFaceCrops:(id)arg1 error:(id*)arg2 ;
-(id)_associateFace:(id)arg1 withFaceCrop:(id)arg2 error:(id*)arg3 ;
-(char)_updateFaceprint:(id)arg1 ofPersistedFace:(id)arg2 error:(id*)arg3 ;
-(id)_faceAssociatedWithFaceCrop:(id)arg1 ;
-(char)_generateAndAssociateFaceprintedFaceForFaceCrop:(id)arg1 error:(id*)arg2 ;
-(char)_updateFace:(id)arg1 withFaceCrop:(id)arg2 error:(id*)arg3 ;
-(char)_recordNeedToPersonBuildOnFaceGroupContainingFace:(id)arg1 error:(id*)arg2 ;
-(char)_persistGeneratedFaceCrops:(id)arg1 forAsset:(id)arg2 error:(id*)arg3 ;
-(id)_pvFaceCropFromPHFaceCrop:(id)arg1 ;
-(char)_processDirtyFaceCrop:(id)arg1 error:(id*)arg2 ;
-(id)initWithPhotoLibrary:(id)arg1 andContext:(id)arg2 ;
-(void)_persistFaceAnalysis:(id)arg1 forPHAsset:(id)arg2 ;
-(char)generateAndPersistFaceCropsForFaces:(id)arg1 withAsset:(id)arg2 andImage:(id)arg3 error:(id*)arg4 ;
-(int)processDirtyFaceCropsWithCancelBlock:(/*^block*/id)arg1 andExtendTimeoutBlock:(/*^block*/id)arg2 ;
@end
