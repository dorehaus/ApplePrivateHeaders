/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ImageKit/ImageKit-Structs.h>
@interface IKBookletPlasticCover : NSObject {

	long long _meshResolution;
	SCD_Struct_IK31* _points;
	SCD_Struct_IK31* _faceNormals;
	SCD_Struct_IK31* _vertexNormals;
	SCD_Struct_IK31* _invertedVertexNormals;
	double _materialSpecular;
	double _materialShininess;
	double _materialOpacity;
	float _plasticRed;
	float _plasticGreen;
	float _plasticBlue;
	double _curveFactor;
	double _currentCurveFactor;

}

@property (assign) double curveFactor;              //@synthesize curveFactor=_curveFactor - In the implementation block
-(void)setCurveFactor:(double)arg1 ;
-(void)drawInRect:(CGRect)arg1 delegate:(id)arg2 offset:(CGPoint)arg3 ;
-(void)updateWithCurveFactor:(double)arg1 ;
-(double)curveFactor;
-(void)finalize;
-(void)dealloc;
-(id)init;
@end

