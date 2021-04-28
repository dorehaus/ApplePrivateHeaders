/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VNFaceObservation, VNFaceLandmarks2D, CIImage, NSArray, CIVector;

@interface RedEyeFace : NSObject {

	int _imageOrientation;
	float _faceOrientation;
	float _junkiness;
	float _areaMax;
	VNFaceObservation* _observation;
	VNFaceLandmarks2D* _landmarks;
	CIImage* _segmentationSkin;
	CIImage* _segmentationSclera;
	CIImage* _segmentationIris;
	NSArray* _uvLeft;
	NSArray* _uvRight;
	CIVector* _faceRect;
	CIVector* _roiRenderOriginLeft;
	CIVector* _roiRenderOriginRight;
	CIVector* _roiRenderSize;
	CIVector* _pupilLeft;
	CIVector* _pupilRight;

}

@property (assign,nonatomic) int imageOrientation;                         //@synthesize imageOrientation=_imageOrientation - In the implementation block
@property (assign,nonatomic) float faceOrientation;                        //@synthesize faceOrientation=_faceOrientation - In the implementation block
@property (assign,nonatomic) float junkiness;                              //@synthesize junkiness=_junkiness - In the implementation block
@property (assign,nonatomic) float areaMax;                                //@synthesize areaMax=_areaMax - In the implementation block
@property (nonatomic,retain) VNFaceObservation * observation;              //@synthesize observation=_observation - In the implementation block
@property (nonatomic,retain) VNFaceLandmarks2D * landmarks;                //@synthesize landmarks=_landmarks - In the implementation block
@property (nonatomic,retain) CIImage * segmentationSkin;                   //@synthesize segmentationSkin=_segmentationSkin - In the implementation block
@property (nonatomic,retain) CIImage * segmentationSclera;                 //@synthesize segmentationSclera=_segmentationSclera - In the implementation block
@property (nonatomic,retain) CIImage * segmentationIris;                   //@synthesize segmentationIris=_segmentationIris - In the implementation block
@property (nonatomic,retain) NSArray * uvLeft;                             //@synthesize uvLeft=_uvLeft - In the implementation block
@property (nonatomic,retain) NSArray * uvRight;                            //@synthesize uvRight=_uvRight - In the implementation block
@property (nonatomic,retain) CIVector * faceRect;                          //@synthesize faceRect=_faceRect - In the implementation block
@property (nonatomic,retain) CIVector * roiRenderOriginLeft;               //@synthesize roiRenderOriginLeft=_roiRenderOriginLeft - In the implementation block
@property (nonatomic,retain) CIVector * roiRenderOriginRight;              //@synthesize roiRenderOriginRight=_roiRenderOriginRight - In the implementation block
@property (nonatomic,retain) CIVector * roiRenderSize;                     //@synthesize roiRenderSize=_roiRenderSize - In the implementation block
@property (nonatomic,retain) CIVector * pupilLeft;                         //@synthesize pupilLeft=_pupilLeft - In the implementation block
@property (nonatomic,retain) CIVector * pupilRight;                        //@synthesize pupilRight=_pupilRight - In the implementation block
-(void)setSegmentationSkin:(CIImage *)arg1 ;
-(void)setSegmentationSclera:(CIImage *)arg1 ;
-(void)setSegmentationIris:(CIImage *)arg1 ;
-(void)setUvLeft:(NSArray *)arg1 ;
-(void)setUvRight:(NSArray *)arg1 ;
-(void)setRoiRenderOriginLeft:(CIVector *)arg1 ;
-(void)setRoiRenderOriginRight:(CIVector *)arg1 ;
-(void)setRoiRenderSize:(CIVector *)arg1 ;
-(void)setPupilLeft:(CIVector *)arg1 ;
-(void)setPupilRight:(CIVector *)arg1 ;
-(float)junkiness;
-(void)setJunkiness:(float)arg1 ;
-(float)areaMax;
-(void)setAreaMax:(float)arg1 ;
-(CIImage *)segmentationSkin;
-(CIImage *)segmentationSclera;
-(CIImage *)segmentationIris;
-(NSArray *)uvLeft;
-(NSArray *)uvRight;
-(CIVector *)roiRenderOriginLeft;
-(CIVector *)roiRenderOriginRight;
-(CIVector *)roiRenderSize;
-(CIVector *)pupilLeft;
-(CIVector *)pupilRight;
-(void)dealloc;
-(id)init;
-(void)setObservation:(VNFaceObservation *)arg1 ;
-(VNFaceObservation *)observation;
-(CIVector *)faceRect;
-(void)setFaceRect:(CIVector *)arg1 ;
-(VNFaceLandmarks2D *)landmarks;
-(void)setLandmarks:(VNFaceLandmarks2D *)arg1 ;
-(void)setImageOrientation:(int)arg1 ;
-(int)imageOrientation;
-(float)faceOrientation;
-(void)setFaceOrientation:(float)arg1 ;
@end

