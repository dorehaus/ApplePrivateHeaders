/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Vision.framework/Versions/A/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequest.h>
#import <libobjc.A.dylib/VNImageIdealImageSizeProviding.h>

@class NSArray, NSString;

@interface VNCreateSceneprintRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding>

@property (assign,nonatomic) char useCenterTileOnly; 
@property (assign,nonatomic) char returnAllResults; 
@property (assign,nonatomic) unsigned long long imageCropAndScaleOption; 
@property (readonly) NSArray * supportedImageSizeSet; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultProcessingDeviceForRevision:(unsigned long long)arg1 ;
+(Class)configurationClass;
+(const SCD_Struct_VN2*)revisionAvailability;
+(id)descriptionForPrivateRevision:(unsigned long long)arg1 ;
+(char)supportsPrivateRevision:(unsigned long long)arg1 ;
+(void)recordDefaultOptionsInDictionary:(id)arg1 ;
-(NSString *)description;
-(char)warmUpSession:(id)arg1 error:(id*)arg2 ;
-(char)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(char)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(unsigned long long)imageCropAndScaleOption;
-(void)setImageCropAndScaleOption:(unsigned long long)arg1 ;
-(NSArray *)supportedImageSizeSet;
-(id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2 ;
-(char)hasCancellationHook;
-(char)returnAllResults;
-(void)setReturnAllResults:(char)arg1 ;
-(char)useCenterTileOnly;
-(void)setUseCenterTileOnly:(char)arg1 ;
-(id)_detectorTypeForRequestRevision:(unsigned long long)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)_applicableDetectorForRequestRevision:(unsigned long long)arg1 applicableDetectorOptions:(id*)arg2 loadedInSession:(id)arg3 error:(id*)arg4 ;
-(id)_applicableDetectorLoadedInSession:(id)arg1 error:(id*)arg2 ;
@end
