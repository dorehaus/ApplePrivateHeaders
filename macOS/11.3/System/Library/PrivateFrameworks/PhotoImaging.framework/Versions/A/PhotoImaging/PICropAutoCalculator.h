/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/Versions/A/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/NUAutoCalculator.h>
#import <libobjc.A.dylib/NUTimeBased.h>
#import <libobjc.A.dylib/PIFaceObservingAutoCalculator.h>

@class PIFaceObservationCache, NSNumber, NSString;

@interface PICropAutoCalculator : NUAutoCalculator <NUTimeBased, PIFaceObservingAutoCalculator> {

	char _shouldPerformAutoCrop;
	char _shouldPerformAutoStraighten;
	char _shouldUseAutoStraightenVerticalDetector;
	char _debugFilesEnabled;
	PIFaceObservationCache* _faceObservationCache;
	NSNumber* _autoStraightenVerticalAngleThreshold;
	NSNumber* _autoStraightenDominantAngleDiffThreshold;
	double _maxAutoStraighten;
	double _minAutoStraighten;
	NSString* _debugFilesPrefix;

}

@property (assign) char shouldPerformAutoCrop;                                           //@synthesize shouldPerformAutoCrop=_shouldPerformAutoCrop - In the implementation block
@property (assign) char shouldPerformAutoStraighten;                                     //@synthesize shouldPerformAutoStraighten=_shouldPerformAutoStraighten - In the implementation block
@property (assign) char shouldUseAutoStraightenVerticalDetector;                         //@synthesize shouldUseAutoStraightenVerticalDetector=_shouldUseAutoStraightenVerticalDetector - In the implementation block
@property (copy) NSNumber * autoStraightenVerticalAngleThreshold;                        //@synthesize autoStraightenVerticalAngleThreshold=_autoStraightenVerticalAngleThreshold - In the implementation block
@property (copy) NSNumber * autoStraightenDominantAngleDiffThreshold;                    //@synthesize autoStraightenDominantAngleDiffThreshold=_autoStraightenDominantAngleDiffThreshold - In the implementation block
@property (assign) double maxAutoStraighten;                                             //@synthesize maxAutoStraighten=_maxAutoStraighten - In the implementation block
@property (assign) double minAutoStraighten;                                             //@synthesize minAutoStraighten=_minAutoStraighten - In the implementation block
@property (assign) char debugFilesEnabled;                                               //@synthesize debugFilesEnabled=_debugFilesEnabled - In the implementation block
@property (copy) NSString * debugFilesPrefix;                                            //@synthesize debugFilesPrefix=_debugFilesPrefix - In the implementation block
@property (assign,nonatomic) SCD_Struct_PI7 time; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) PIFaceObservationCache * faceObservationCache;              //@synthesize faceObservationCache=_faceObservationCache - In the implementation block
+(CGRect)overcaptureRectForStitchedOvercaptureSize:(SCD_Struct_PI5)arg1 overcaptureVideoComplementSize:(SCD_Struct_PI5)arg2 primarySize:(SCD_Struct_PI5)arg3 autoLoopStabilizedCropRect:(CGRect)arg4 ;
+(char)stitchedOvercaptureRect:(CGRect*)arg1 primaryRect:(CGRect*)arg2 forComposition:(id)arg3 error:(out id*)arg4 ;
+(id)updateCropAdjustment:(id)arg1 after:(id)arg2 error:(out id*)arg3 ;
-(id)initWithComposition:(id)arg1 ;
-(void)submit:(/*^block*/id)arg1 ;
-(id)imageProperties:(out id*)arg1 ;
-(PIFaceObservationCache *)faceObservationCache;
-(void)setFaceObservationCache:(PIFaceObservationCache *)arg1 ;
-(char)debugFilesEnabled;
-(void)setDebugFilesEnabled:(char)arg1 ;
-(NSString *)debugFilesPrefix;
-(void)setDebugFilesPrefix:(NSString *)arg1 ;
-(char)undoExifOrientation:(SCD_Struct_PI6*)arg1 error:(out id*)arg2 ;
-(char)shouldPerformAutoCrop;
-(void)setShouldPerformAutoCrop:(char)arg1 ;
-(char)shouldPerformAutoStraighten;
-(void)setShouldPerformAutoStraighten:(char)arg1 ;
-(char)shouldUseAutoStraightenVerticalDetector;
-(void)setShouldUseAutoStraightenVerticalDetector:(char)arg1 ;
-(NSNumber *)autoStraightenVerticalAngleThreshold;
-(void)setAutoStraightenVerticalAngleThreshold:(NSNumber *)arg1 ;
-(NSNumber *)autoStraightenDominantAngleDiffThreshold;
-(void)setAutoStraightenDominantAngleDiffThreshold:(NSNumber *)arg1 ;
-(double)maxAutoStraighten;
-(void)setMaxAutoStraighten:(double)arg1 ;
-(double)minAutoStraighten;
-(void)setMinAutoStraighten:(double)arg1 ;
@end

