/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <libobjc.A.dylib/CLSInvestigationItem.h>

@protocol CLSCurationModel;
@class CLLocation, NSArray, NSString, NSSet, VNSceneprint, NSDateComponents, NSDate, NSNumber;

@interface PGCuratorInvestigationItem : NSObject <CLSInvestigationItem> {

	NSNumber* _clsViewCount;
	NSNumber* _clsPlayCount;
	NSNumber* _clsShareCount;
	NSNumber* _clsIsUtility;
	NSNumber* _clsIsBlurry;
	NSNumber* _clsIsScreenshotOrScreenRecording;
	NSNumber* _isFavorite;
	NSNumber* _isVideo;
	NSNumber* _clsContentScore;
	NSNumber* _clsIsInterestingVideo;
	NSNumber* _clsIsInterestingLivePhoto;
	NSNumber* _clsIsInterestingPanorama;
	NSNumber* _clsIsInterestingSDOF;
	NSNumber* _clsIsInterestingHDR;
	NSNumber* _clsIsInterestingReframe;
	NSNumber* _clsHasInterestingAudioClassification;
	NSNumber* _clsHasCustomPlaybackVariation;
	NSNumber* _clsSharpnessScore;
	NSNumber* _clsExposureScore;
	NSNumber* _clsAestheticScore;
	NSNumber* _clsIsAestheticallyPrettyGood;
	NSNumber* _clsFaceScore;
	NSNumber* _clsIsInhabited;
	NSNumber* _clsAvoidIfPossibleForKeyItem;
	NSNumber* _clsHasPoorResolution;
	NSNumber* _clsHasInterestingScenes;
	NSNumber* _clsLikabilityScore;
	NSNumber* _clsInteractionScore;
	NSNumber* _clsHighlightVisibilityScore;
	NSNumber* _clsAutoplaySuggestionScore;
	NSNumber* _isShinyGem;
	NSNumber* _isRegularGem;
	NSNumber* _clsDuration;
	NSNumber* _clsIsNonMemorable;
	NSNumber* _clsIsLoopOrBounce;
	NSNumber* _clsIsLongExposure;
	NSNumber* _clsGpsHorizontalAccuracy;
	NSNumber* _clsSquareCropScore;
	NSString* _clsIdentifier;
	NSDate* _cls_universalDate;
	NSDate* _cls_localDate;
	CLLocation* _clsLocation;
	NSArray* _clsPeopleNames;
	NSSet* _clsSceneClassifications;
	VNSceneprint* _clsSceneprint;
	NSArray* _clsUnprefetchedPeopleNames;
	NSArray* _faceInfos;
	id<CLSCurationModel> _curationModel;

}

@property (readonly) id<CLSCurationModel> curationModel;                                //@synthesize curationModel=_curationModel - In the implementation block
@property (readonly) NSArray * faceInfos;                                               //@synthesize faceInfos=_faceInfos - In the implementation block
@property (nonatomic,readonly) CLLocation * clsLocation;                                //@synthesize clsLocation=_clsLocation - In the implementation block
@property (nonatomic,readonly) NSArray * clsPeopleNames;                                //@synthesize clsPeopleNames=_clsPeopleNames - In the implementation block
@property (nonatomic,readonly) NSArray * clsUnprefetchedPeopleNames;                    //@synthesize clsUnprefetchedPeopleNames=_clsUnprefetchedPeopleNames - In the implementation block
@property (nonatomic,readonly) unsigned long long clsPeopleCount; 
@property (nonatomic,readonly) NSString * clsIdentifier;                                //@synthesize clsIdentifier=_clsIdentifier - In the implementation block
@property (nonatomic,readonly) CLLocation * location; 
@property (nonatomic,readonly) NSArray * peopleNames; 
@property (nonatomic,readonly) long long clsViewCount; 
@property (nonatomic,readonly) long long clsPlayCount; 
@property (nonatomic,readonly) long long clsShareCount; 
@property (nonatomic,readonly) double clsContentScore; 
@property (nonatomic,readonly) double clsExposureScore; 
@property (nonatomic,readonly) double clsSharpnessScore; 
@property (nonatomic,readonly) double clsAestheticScore; 
@property (nonatomic,readonly) double clsHighlightVisibilityScore; 
@property (nonatomic,readonly) double clsAutoplaySuggestionScore; 
@property (nonatomic,readonly) double clsFaceScore; 
@property (nonatomic,readonly) char clsIsUtility; 
@property (nonatomic,readonly) char clsIsScreenshotOrScreenRecording; 
@property (nonatomic,readonly) char isFavorite; 
@property (nonatomic,readonly) char isVideo; 
@property (nonatomic,readonly) char clsIsAestheticallyPrettyGood; 
@property (nonatomic,readonly) char clsIsBlurry; 
@property (nonatomic,readonly) char clsIsLoopOrBounce; 
@property (nonatomic,readonly) char clsIsLongExposure; 
@property (nonatomic,readonly) char clsIsInterestingVideo; 
@property (nonatomic,readonly) char clsIsInterestingLivePhoto; 
@property (nonatomic,readonly) char clsIsInterestingPanorama; 
@property (nonatomic,readonly) char clsIsInterestingSDOF; 
@property (nonatomic,readonly) char clsIsInterestingHDR; 
@property (nonatomic,readonly) char clsHasInterestingAudioClassification; 
@property (nonatomic,readonly) char clsHasCustomPlaybackVariation; 
@property (nonatomic,readonly) char clsIsNonMemorable; 
@property (nonatomic,readonly) double clsDuration; 
@property (nonatomic,readonly) char clsIsInterestingReframe; 
@property (nonatomic,copy,readonly) NSSet * clsSceneClassifications;                    //@synthesize clsSceneClassifications=_clsSceneClassifications - In the implementation block
@property (nonatomic,readonly) VNSceneprint * clsSceneprint;                            //@synthesize clsSceneprint=_clsSceneprint - In the implementation block
@property (nonatomic,readonly) NSDateComponents * cls_localDateComponents; 
@property (nonatomic,readonly) NSDate * cls_universalDate;                              //@synthesize cls_universalDate=_cls_universalDate - In the implementation block
@property (nonatomic,readonly) NSDate * cls_localDate;                                  //@synthesize cls_localDate=_cls_localDate - In the implementation block
@property (readonly) char clsIsInhabited; 
@property (readonly) char clsAvoidIfPossibleForKeyItem; 
@property (readonly) char clsHasPoorResolution; 
@property (readonly) char clsHasInterestingScenes; 
@property (nonatomic,readonly) double clsSquareCropScore; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLLocationCoordinate2D pl_coordinate; 
@property (nonatomic,readonly) double pl_gpsHorizontalAccuracy; 
@property (nonatomic,readonly) NSDate * pl_date; 
@property (nonatomic,readonly) NSString * pl_uuid; 
+(id)itemWithUUID:(id)arg1 itemInfo:(id)arg2 curationModel:(id)arg3 ;
-(NSString *)description;
-(id)init;
-(id)date;
-(CLLocation *)location;
-(char)isFavorite;
-(char)isVideo;
-(NSArray *)peopleNames;
-(NSDate *)pl_date;
-(NSString *)pl_uuid;
-(double)pl_gpsHorizontalAccuracy;
-(CLLocationCoordinate2D)pl_coordinate;
-(NSDate *)cls_universalDate;
-(CLLocation *)clsLocation;
-(NSString *)clsIdentifier;
-(double)clsSharpnessScore;
-(char)clsIsInterestingSDOF;
-(double)clsAestheticScore;
-(char)clsIsAestheticallyPrettyGood;
-(double)clsContentScore;
-(double)clsFaceScore;
-(char)clsIsInterestingLivePhoto;
-(char)clsIsInterestingHDR;
-(NSSet *)clsSceneClassifications;
-(char)clsHasPoorResolution;
-(char)clsIsBlurry;
-(NSArray *)clsPeopleNames;
-(char)clsIsScreenshotOrScreenRecording;
-(NSDateComponents *)cls_localDateComponents;
-(NSDate *)cls_localDate;
-(VNSceneprint *)clsSceneprint;
-(char)isRegularGem;
-(char)isShinyGem;
-(char)clsIsUtility;
-(unsigned long long)clsPeopleCount;
-(long long)clsViewCount;
-(long long)clsPlayCount;
-(long long)clsShareCount;
-(NSArray *)clsUnprefetchedPeopleNames;
-(double)clsExposureScore;
-(double)clsHighlightVisibilityScore;
-(double)clsAutoplaySuggestionScore;
-(char)clsIsLoopOrBounce;
-(char)clsIsLongExposure;
-(char)clsIsInterestingVideo;
-(char)clsIsInterestingPanorama;
-(char)clsHasInterestingAudioClassification;
-(char)clsHasCustomPlaybackVariation;
-(char)clsIsNonMemorable;
-(double)clsDuration;
-(char)clsIsInterestingReframe;
-(char)clsIsInhabited;
-(char)clsAvoidIfPossibleForKeyItem;
-(char)clsHasInterestingScenes;
-(double)clsSquareCropScore;
-(double)scoreInContext:(id)arg1 ;
-(double)clsInteractionScore;
-(id<CLSCurationModel>)curationModel;
-(id)initWithUUID:(id)arg1 itemInfo:(id)arg2 curationModel:(id)arg3 ;
-(double)clsLikabilityScore;
-(NSArray *)faceInfos;
@end

