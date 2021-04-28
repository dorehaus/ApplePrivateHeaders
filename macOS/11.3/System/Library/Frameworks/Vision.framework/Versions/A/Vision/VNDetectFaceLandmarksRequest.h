/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Vision.framework/Versions/A/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequest.h>
#import <libobjc.A.dylib/VNFaceObservationAccepting.h>

@class NSArray, NSNumber, NSString;

@interface VNDetectFaceLandmarksRequest : VNImageBasedRequest <VNFaceObservationAccepting>

@property (assign,nonatomic) char refineMouthRegion; 
@property (assign,nonatomic) char refineLeftEyeRegion; 
@property (assign,nonatomic) char refineRightEyeRegion; 
@property (assign,nonatomic) char performBlinkDetection; 
@property (nonatomic,retain) NSNumber * cascadeStepCount; 
@property (assign) unsigned long long constellation; 
@property (nonatomic,copy) NSArray * inputFaceObservations; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultProcessingDeviceForRevision:(unsigned long long)arg1 ;
+(Class)configurationClass;
+(const SCD_Struct_VN2*)revisionAvailability;
+(char)revision:(unsigned long long)arg1 supportsConstellation:(unsigned long long)arg2 ;
+(const SCD_Struct_VN35*)dependentRequestCompatability;
-(NSString *)description;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setRevision:(unsigned long long)arg1 ;
-(long long)dependencyProcessingOrdinality;
-(char)warmUpSession:(id)arg1 error:(id*)arg2 ;
-(char)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(char)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(unsigned long long)constellation;
-(void)setConstellation:(unsigned long long)arg1 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2 ;
-(char)refineMouthRegion;
-(void)setRefineMouthRegion:(char)arg1 ;
-(char)refineLeftEyeRegion;
-(void)setRefineLeftEyeRegion:(char)arg1 ;
-(char)refineRightEyeRegion;
-(void)setRefineRightEyeRegion:(char)arg1 ;
-(char)performBlinkDetection;
-(void)setPerformBlinkDetection:(char)arg1 ;
-(NSNumber *)cascadeStepCount;
-(void)setCascadeStepCount:(NSNumber *)arg1 ;
-(void)_determineFacesToProcessFrom:(id)arg1 outputFacesThatNeedNoProcessing:(id)arg2 outputFacesThatNeedAlignment:(id)arg3 outputFacesThatNeedLandmarks:(id)arg4 ;
@end

