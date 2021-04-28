/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Vision.framework/Versions/A/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Vision/Vision-Structs.h>
@interface BurstActionClassifier : NSObject {

	char hasBeenScaled;
	double testVector[7];
	float testAverageCameraTravelDistance;
	float testMaxRegistrationErrorIntegral;
	float testMaxPeakRegistrationError;
	float testMeanPeakRegistrationError;
	float testBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix;
	float testInOutRatio;
	float testMaxInnerDistance;
	float testAverageRegistrationErrorSkewness;
	float testMinRegionOfInterestSize;
	float testMaxRegistrationErrorSkewness;
	_SVMParameters* _svmParameters;

}

@property (assign) float testMaxInnerDistance; 
@property (assign) float testInOutRatio; 
@property (assign) float testMaxPeakRegistrationError; 
@property (assign) float testMeanPeakRegistrationError; 
@property (assign) float testMinRegionOfInterestSize; 
@property (assign) float testMaxRegistrationErrorSkewness; 
@property (assign) float testMaxRegistrationErrorIntegral; 
@property (assign) float testAverageCameraTravelDistance; 
@property (assign) float testAverageRegistrationErrorSkewness; 
@property (assign) float testBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix; 
@property (assign) _SVMParameters* svmParameters;                                          //@synthesize svmParameters=_svmParameters - In the implementation block
-(id)init;
-(id)initWithVersion:(int)arg1 ;
-(float)testAverageCameraTravelDistance;
-(float)testMaxRegistrationErrorIntegral;
-(float)testMaxPeakRegistrationError;
-(float)testMeanPeakRegistrationError;
-(float)testBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix;
-(float)testInOutRatio;
-(float)testMaxInnerDistance;
-(float)testAverageRegistrationErrorSkewness;
-(float)testMinRegionOfInterestSize;
-(float)testMaxRegistrationErrorSkewness;
-(void)scaleVector;
-(double)computeKernelValueWithSupportVector:(const BurstSupportVector*)arg1 ;
-(float)predictResult;
-(char)isBurstAction;
-(void)setTestAverageCameraTravelDistance:(float)arg1 ;
-(void)setTestMaxRegistrationErrorIntegral:(float)arg1 ;
-(void)setTestMaxPeakRegistrationError:(float)arg1 ;
-(void)setTestMeanPeakRegistrationError:(float)arg1 ;
-(void)setTestBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix:(float)arg1 ;
-(void)setTestInOutRatio:(float)arg1 ;
-(void)setTestMaxInnerDistance:(float)arg1 ;
-(void)setTestAverageRegistrationErrorSkewness:(float)arg1 ;
-(void)setTestMinRegionOfInterestSize:(float)arg1 ;
-(void)setTestMaxRegistrationErrorSkewness:(float)arg1 ;
-(_SVMParameters*)svmParameters;
-(void)setSvmParameters:(_SVMParameters*)arg1 ;
@end
