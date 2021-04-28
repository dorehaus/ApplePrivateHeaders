/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Vision.framework/Versions/A/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequest.h>

@class NSNumber;

@interface VNDetectFaceRectanglesRequest : VNImageBasedRequest {

	char _faceCoreEnhanceEyesAndMouthLocalization;
	char _faceCoreExtractBlink;
	char _faceCoreExtractSmile;
	NSNumber* _faceCoreMinFaceSize;
	NSNumber* _faceCoreNumberOfDetectionAngles;

}

@property (assign,nonatomic) unsigned long long faceCoreType; 
@property (nonatomic,retain) NSNumber * faceCoreMinFaceSize;                            //@synthesize faceCoreMinFaceSize=_faceCoreMinFaceSize - In the implementation block
@property (nonatomic,retain) NSNumber * faceCoreNumberOfDetectionAngles;                //@synthesize faceCoreNumberOfDetectionAngles=_faceCoreNumberOfDetectionAngles - In the implementation block
@property (assign,nonatomic) char faceCoreEnhanceEyesAndMouthLocalization;              //@synthesize faceCoreEnhanceEyesAndMouthLocalization=_faceCoreEnhanceEyesAndMouthLocalization - In the implementation block
@property (assign,nonatomic) char faceCoreExtractBlink;                                 //@synthesize faceCoreExtractBlink=_faceCoreExtractBlink - In the implementation block
@property (assign,nonatomic) char faceCoreExtractSmile;                                 //@synthesize faceCoreExtractSmile=_faceCoreExtractSmile - In the implementation block
+(id)defaultProcessingDeviceForRevision:(unsigned long long)arg1 ;
+(Class)configurationClass;
+(const SCD_Struct_VN2*)revisionAvailability;
+(id)descriptionForPrivateRevision:(unsigned long long)arg1 ;
+(char)supportsPrivateRevision:(unsigned long long)arg1 ;
+(void)recordDefaultOptionsInDictionary:(id)arg1 ;
-(long long)dependencyProcessingOrdinality;
-(char)warmUpSession:(id)arg1 error:(id*)arg2 ;
-(char)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(char)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(unsigned long long)faceCoreType;
-(void)setFaceCoreType:(unsigned long long)arg1 ;
-(NSNumber *)faceCoreMinFaceSize;
-(void)setFaceCoreMinFaceSize:(NSNumber *)arg1 ;
-(NSNumber *)faceCoreNumberOfDetectionAngles;
-(void)setFaceCoreNumberOfDetectionAngles:(NSNumber *)arg1 ;
-(char)faceCoreEnhanceEyesAndMouthLocalization;
-(void)setFaceCoreEnhanceEyesAndMouthLocalization:(char)arg1 ;
-(char)faceCoreExtractBlink;
-(void)setFaceCoreExtractBlink:(char)arg1 ;
-(char)faceCoreExtractSmile;
-(void)setFaceCoreExtractSmile:(char)arg1 ;
@end

