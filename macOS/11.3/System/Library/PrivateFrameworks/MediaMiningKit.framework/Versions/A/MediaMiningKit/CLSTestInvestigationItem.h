/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/Versions/A/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/MediaMiningKit-Structs.h>
#import <libobjc.A.dylib/CLSInvestigationItem.h>

@class CLLocation, NSArray, NSString, NSSet, VNSceneprint, NSDateComponents, NSDate;

@interface CLSTestInvestigationItem : NSObject <CLSInvestigationItem> {

	char _clsIsUtility;
	char _clsIsBlurry;
	char _isVideo;
	char _clsIsScreenshotOrScreenRecording;
	char _isFavorite;
	char _clsIsAnInterestingVideo;
	char _clsIsAnInterestingPhoto;
	char _clsIsAnInterestingPanorama;
	char _clsIsAnInterestingSDOF;
	char _clsIsAnInterestingHDR;
	char _clsHasInterestingAudioClassification;
	char _clsHasCustomPlaybackVariation;
	char _clsIsAestheticallyPrettyGood;
	char _clsIsInhabited;
	char _clsAvoidIfPossibleForKeyItem;
	char _clsHasPoorResolution;
	char _clsHasInterestingScenes;
	char _clsIsNonMemorable;
	char _clsIsLoopOrBounce;
	char _clsIsLongExposure;
	char _clsIsInterestingReframe;
	NSString* _clsIdentifier;
	CLLocation* _clsLocation;
	NSArray* _clsPeopleNames;
	long long _clsViewCount;
	long long _clsPlayCount;
	long long _clsShareCount;
	double _clsContentScore;
	NSSet* _clsSceneClassifications;
	VNSceneprint* _clsSceneprint;
	NSArray* _clsUnprefetchedPeopleNames;
	double _clsSharpnessScore;
	double _clsExposureScore;
	double _clsAestheticScore;
	double _clsFaceScore;
	NSDate* _cls_universalDate;
	double _clsHighlightVisibilityScore;
	double _clsAutoplaySuggestionScore;
	double _clsDuration;
	double _clsSquareCropScore;

}

@property (nonatomic,retain) CLLocation * clsLocation;                                  //@synthesize clsLocation=_clsLocation - In the implementation block
@property (nonatomic,retain) NSArray * clsPeopleNames;                                  //@synthesize clsPeopleNames=_clsPeopleNames - In the implementation block
@property (nonatomic,copy) NSSet * clsSceneClassifications;                             //@synthesize clsSceneClassifications=_clsSceneClassifications - In the implementation block
@property (nonatomic,readonly) long long clsViewCount;                                  //@synthesize clsViewCount=_clsViewCount - In the implementation block
@property (nonatomic,readonly) long long clsPlayCount;                                  //@synthesize clsPlayCount=_clsPlayCount - In the implementation block
@property (nonatomic,readonly) long long clsShareCount;                                 //@synthesize clsShareCount=_clsShareCount - In the implementation block
@property (nonatomic,readonly) char clsIsUtility;                                       //@synthesize clsIsUtility=_clsIsUtility - In the implementation block
@property (nonatomic,readonly) NSDateComponents * cls_localDateComponents; 
@property (nonatomic,retain) NSDate * cls_universalDate;                                //@synthesize cls_universalDate=_cls_universalDate - In the implementation block
@property (nonatomic,readonly) NSDate * cls_localDate; 
@property (assign,nonatomic) double clsContentScore;                                    //@synthesize clsContentScore=_clsContentScore - In the implementation block
@property (nonatomic,readonly) NSArray * clsUnprefetchedPeopleNames;                    //@synthesize clsUnprefetchedPeopleNames=_clsUnprefetchedPeopleNames - In the implementation block
@property (nonatomic,readonly) unsigned long long clsPeopleCount; 
@property (nonatomic,readonly) NSString * clsIdentifier;                                //@synthesize clsIdentifier=_clsIdentifier - In the implementation block
@property (nonatomic,readonly) CLLocation * location; 
@property (nonatomic,readonly) NSArray * peopleNames; 
@property (nonatomic,readonly) double clsExposureScore;                                 //@synthesize clsExposureScore=_clsExposureScore - In the implementation block
@property (nonatomic,readonly) double clsSharpnessScore;                                //@synthesize clsSharpnessScore=_clsSharpnessScore - In the implementation block
@property (nonatomic,readonly) double clsAestheticScore;                                //@synthesize clsAestheticScore=_clsAestheticScore - In the implementation block
@property (nonatomic,readonly) double clsHighlightVisibilityScore;                      //@synthesize clsHighlightVisibilityScore=_clsHighlightVisibilityScore - In the implementation block
@property (nonatomic,readonly) double clsAutoplaySuggestionScore;                       //@synthesize clsAutoplaySuggestionScore=_clsAutoplaySuggestionScore - In the implementation block
@property (nonatomic,readonly) double clsFaceScore;                                     //@synthesize clsFaceScore=_clsFaceScore - In the implementation block
@property (nonatomic,readonly) char clsIsScreenshotOrScreenRecording;                   //@synthesize clsIsScreenshotOrScreenRecording=_clsIsScreenshotOrScreenRecording - In the implementation block
@property (nonatomic,readonly) char isFavorite;                                         //@synthesize isFavorite=_isFavorite - In the implementation block
@property (nonatomic,readonly) char isVideo;                                            //@synthesize isVideo=_isVideo - In the implementation block
@property (nonatomic,readonly) char clsIsAestheticallyPrettyGood;                       //@synthesize clsIsAestheticallyPrettyGood=_clsIsAestheticallyPrettyGood - In the implementation block
@property (nonatomic,readonly) char clsIsBlurry;                                        //@synthesize clsIsBlurry=_clsIsBlurry - In the implementation block
@property (nonatomic,readonly) char clsIsLoopOrBounce;                                  //@synthesize clsIsLoopOrBounce=_clsIsLoopOrBounce - In the implementation block
@property (nonatomic,readonly) char clsIsLongExposure;                                  //@synthesize clsIsLongExposure=_clsIsLongExposure - In the implementation block
@property (nonatomic,readonly) char clsIsInterestingVideo;                              //@synthesize clsIsAnInterestingVideo=_clsIsAnInterestingVideo - In the implementation block
@property (nonatomic,readonly) char clsIsInterestingLivePhoto;                          //@synthesize clsIsAnInterestingPhoto=_clsIsAnInterestingPhoto - In the implementation block
@property (nonatomic,readonly) char clsIsInterestingPanorama;                           //@synthesize clsIsAnInterestingPanorama=_clsIsAnInterestingPanorama - In the implementation block
@property (nonatomic,readonly) char clsIsInterestingSDOF;                               //@synthesize clsIsAnInterestingSDOF=_clsIsAnInterestingSDOF - In the implementation block
@property (nonatomic,readonly) char clsIsInterestingHDR;                                //@synthesize clsIsAnInterestingHDR=_clsIsAnInterestingHDR - In the implementation block
@property (nonatomic,readonly) char clsHasInterestingAudioClassification;               //@synthesize clsHasInterestingAudioClassification=_clsHasInterestingAudioClassification - In the implementation block
@property (nonatomic,readonly) char clsHasCustomPlaybackVariation;                      //@synthesize clsHasCustomPlaybackVariation=_clsHasCustomPlaybackVariation - In the implementation block
@property (nonatomic,readonly) char clsIsNonMemorable;                                  //@synthesize clsIsNonMemorable=_clsIsNonMemorable - In the implementation block
@property (nonatomic,readonly) double clsDuration;                                      //@synthesize clsDuration=_clsDuration - In the implementation block
@property (nonatomic,readonly) char clsIsInterestingReframe;                            //@synthesize clsIsInterestingReframe=_clsIsInterestingReframe - In the implementation block
@property (nonatomic,readonly) VNSceneprint * clsSceneprint;                            //@synthesize clsSceneprint=_clsSceneprint - In the implementation block
@property (readonly) char clsIsInhabited;                                               //@synthesize clsIsInhabited=_clsIsInhabited - In the implementation block
@property (readonly) char clsAvoidIfPossibleForKeyItem;                                 //@synthesize clsAvoidIfPossibleForKeyItem=_clsAvoidIfPossibleForKeyItem - In the implementation block
@property (readonly) char clsHasPoorResolution;                                         //@synthesize clsHasPoorResolution=_clsHasPoorResolution - In the implementation block
@property (readonly) char clsHasInterestingScenes;                                      //@synthesize clsHasInterestingScenes=_clsHasInterestingScenes - In the implementation block
@property (nonatomic,readonly) double clsSquareCropScore;                               //@synthesize clsSquareCropScore=_clsSquareCropScore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLLocationCoordinate2D pl_coordinate; 
@property (nonatomic,readonly) double pl_gpsHorizontalAccuracy; 
@property (nonatomic,readonly) NSDate * pl_date; 
@property (nonatomic,readonly) NSString * pl_uuid; 
+(id)itemWithPeopleNames:(id)arg1 universalDate:(id)arg2 coordinate:(CLLocationCoordinate2D)arg3 ;
+(id)itemWithUniversalDate:(id)arg1 sceneClassifications:(id)arg2 ;
-(id)init;
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
-(void)setClsLocation:(CLLocation *)arg1 ;
-(void)setClsPeopleNames:(NSArray *)arg1 ;
-(void)setClsContentScore:(double)arg1 ;
-(void)setClsSceneClassifications:(NSSet *)arg1 ;
-(void)setCls_universalDate:(NSDate *)arg1 ;
@end

