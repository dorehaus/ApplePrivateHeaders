/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Photos.framework/Versions/A/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHObject.h>
#import <libobjc.A.dylib/PFPhotosFaceRepresentation.h>
#import <libobjc.A.dylib/PVFaceProtocol.h>

@class NSString, NSData;

@interface PHFace : PHObject <PFPhotosFaceRepresentation, PVFaceProtocol> {

	char _isInVIPModel;
	char _hidden;
	char _inTrash;
	char _manual;
	char _hasSmile;
	char _leftEyeClosed;
	char _rightEyeClosed;
	short _confirmedFaceCropGenerationState;
	unsigned short _ageType;
	unsigned short _genderType;
	unsigned short _sexType;
	unsigned short _eyesState;
	unsigned short _smileType;
	unsigned short _facialHairType;
	unsigned short _hairColorType;
	unsigned short _baldType;
	unsigned short _glassesType;
	unsigned short _eyeMakeupType;
	unsigned short _lipMakeupType;
	int _trainingType;
	double _size;
	double _centerX;
	double _centerY;
	long long _clusterSequenceNumber;
	long long _qualityMeasure;
	double _quality;
	NSString* _personUUID;
	long long _sourceWidth;
	long long _sourceHeight;
	double _leftEyeX;
	double _leftEyeY;
	double _rightEyeX;
	double _rightEyeY;
	double _mouthX;
	double _mouthY;
	double _roll;
	double _yaw;
	double _blurScore;
	id _adjustmentVersion;
	long long _nameSource;
	double _poseYaw;
	long long _faceAlgorithmVersion;

}

@property (nonatomic,readonly) NSString * localIdentifier; 
@property (nonatomic,readonly) NSString * personLocalIdentifier; 
@property (nonatomic,readonly) double size; 
@property (nonatomic,readonly) double centerX; 
@property (nonatomic,readonly) double centerY; 
@property (nonatomic,readonly) long long clusterSequenceNumber; 
@property (nonatomic,readonly) NSData * faceprintData; 
@property (assign,nonatomic) long long qualityMeasure; 
@property (nonatomic,readonly) unsigned short ageType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * personUUID;                                                                            //@synthesize personUUID=_personUUID - In the implementation block
@property (nonatomic,readonly) short confirmedFaceCropGenerationState;                                                           //@synthesize confirmedFaceCropGenerationState=_confirmedFaceCropGenerationState - In the implementation block
@property (nonatomic,readonly) long long sourceWidth;                                                                            //@synthesize sourceWidth=_sourceWidth - In the implementation block
@property (nonatomic,readonly) long long sourceHeight;                                                                           //@synthesize sourceHeight=_sourceHeight - In the implementation block
@property (nonatomic,readonly) double leftEyeX;                                                                                  //@synthesize leftEyeX=_leftEyeX - In the implementation block
@property (nonatomic,readonly) double leftEyeY;                                                                                  //@synthesize leftEyeY=_leftEyeY - In the implementation block
@property (nonatomic,readonly) double rightEyeX;                                                                                 //@synthesize rightEyeX=_rightEyeX - In the implementation block
@property (nonatomic,readonly) double rightEyeY;                                                                                 //@synthesize rightEyeY=_rightEyeY - In the implementation block
@property (nonatomic,readonly) double mouthX;                                                                                    //@synthesize mouthX=_mouthX - In the implementation block
@property (nonatomic,readonly) double mouthY;                                                                                    //@synthesize mouthY=_mouthY - In the implementation block
@property (nonatomic,readonly) double roll;                                                                                      //@synthesize roll=_roll - In the implementation block
@property (nonatomic,readonly) double yaw;                                                                                       //@synthesize yaw=_yaw - In the implementation block
@property (nonatomic,readonly) char isInVIPModel;                                                                                //@synthesize isInVIPModel=_isInVIPModel - In the implementation block
@property (getter=isHidden,nonatomic,readonly) char hidden;                                                                      //@synthesize hidden=_hidden - In the implementation block
@property (getter=isInTrash,nonatomic,readonly) char inTrash;                                                                    //@synthesize inTrash=_inTrash - In the implementation block
@property (nonatomic,readonly) char manual;                                                                                      //@synthesize manual=_manual - In the implementation block
@property (nonatomic,readonly) char hasSmile;                                                                                    //@synthesize hasSmile=_hasSmile - In the implementation block
@property (nonatomic,readonly) double blurScore;                                                                                 //@synthesize blurScore=_blurScore - In the implementation block
@property (getter=isLeftEyeClosed,nonatomic,readonly) char leftEyeClosed;                                                        //@synthesize leftEyeClosed=_leftEyeClosed - In the implementation block
@property (getter=isRightEyeClosed,nonatomic,readonly) char rightEyeClosed;                                                      //@synthesize rightEyeClosed=_rightEyeClosed - In the implementation block
@property (nonatomic,copy,readonly) id adjustmentVersion;                                                                        //@synthesize adjustmentVersion=_adjustmentVersion - In the implementation block
@property (nonatomic,readonly) long long nameSource;                                                                             //@synthesize nameSource=_nameSource - In the implementation block
@property (nonatomic,readonly) int trainingType;                                                                                 //@synthesize trainingType=_trainingType - In the implementation block
@property (getter=isConfirmedFaceCropGenerationPending,nonatomic,readonly) char confirmedFaceCropGenerationPending; 
@property (assign,nonatomic) double poseYaw;                                                                                     //@synthesize poseYaw=_poseYaw - In the implementation block
@property (assign,nonatomic) long long faceAlgorithmVersion;                                                                     //@synthesize faceAlgorithmVersion=_faceAlgorithmVersion - In the implementation block
@property (nonatomic,readonly) unsigned short ageType;                                                                           //@synthesize ageType=_ageType - In the implementation block
@property (nonatomic,readonly) unsigned short genderType;                                                                        //@synthesize genderType=_genderType - In the implementation block
@property (nonatomic,readonly) unsigned short sexType;                                                                           //@synthesize sexType=_sexType - In the implementation block
@property (nonatomic,readonly) unsigned short eyesState;                                                                         //@synthesize eyesState=_eyesState - In the implementation block
@property (nonatomic,readonly) unsigned short smileType;                                                                         //@synthesize smileType=_smileType - In the implementation block
@property (nonatomic,readonly) unsigned short facialHairType;                                                                    //@synthesize facialHairType=_facialHairType - In the implementation block
@property (nonatomic,readonly) unsigned short hairColorType;                                                                     //@synthesize hairColorType=_hairColorType - In the implementation block
@property (nonatomic,readonly) unsigned short baldType;                                                                          //@synthesize baldType=_baldType - In the implementation block
@property (nonatomic,readonly) unsigned short glassesType;                                                                       //@synthesize glassesType=_glassesType - In the implementation block
@property (nonatomic,readonly) unsigned short eyeMakeupType;                                                                     //@synthesize eyeMakeupType=_eyeMakeupType - In the implementation block
@property (nonatomic,readonly) unsigned short lipMakeupType;                                                                     //@synthesize lipMakeupType=_lipMakeupType - In the implementation block
@property (nonatomic,readonly) double size;                                                                                      //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) double centerX;                                                                                   //@synthesize centerX=_centerX - In the implementation block
@property (nonatomic,readonly) double centerY;                                                                                   //@synthesize centerY=_centerY - In the implementation block
@property (nonatomic,readonly) long long clusterSequenceNumber;                                                                  //@synthesize clusterSequenceNumber=_clusterSequenceNumber - In the implementation block
@property (nonatomic,readonly) long long qualityMeasure;                                                                         //@synthesize qualityMeasure=_qualityMeasure - In the implementation block
@property (nonatomic,readonly) double quality;                                                                                   //@synthesize quality=_quality - In the implementation block
+(id)managedEntityName;
+(id)fetchType;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)identifierCode;
+(id)entityKeyMap;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(id)corePropertiesToFetch;
+(id)_composePropertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)propertySetsForPropertyFetchHints:(unsigned long long)arg1 ;
+(unsigned long long)propertyFetchHintsForPropertySets:(id)arg1 ;
+(Class)propertySetClassForPropertySet:(id)arg1 ;
+(id)propertySetAccessorsByPropertySet;
+(char)managedObjectSupportsFaceState;
+(id)croppingPropertiesToFetch;
+(id)personBuilderPropertiesToFetch;
+(id)genderAgePropertiesToFetch;
+(id)analyticsPropertiesToFetch;
+(id)fetchFacesWithOptions:(id)arg1 ;
+(id)fetchFacesWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchFacesInAsset:(id)arg1 options:(id)arg2 ;
+(id)fetchFacesInAssets:(id)arg1 options:(id)arg2 ;
+(id)fetchFacesForPerson:(id)arg1 options:(id)arg2 ;
+(id)fetchKeyFaceForPerson:(id)arg1 options:(id)arg2 ;
+(id)fetchFacesOnAssetWithFace:(id)arg1 options:(id)arg2 ;
+(id)fetchFacesInFaceGroup:(id)arg1 options:(id)arg2 ;
+(id)fetchKeyFaceForFaceGroup:(id)arg1 options:(id)arg2 ;
+(id)fetchSingletonFacesWithOptions:(id)arg1 ;
+(id)fetchRejectedFacesForPerson:(id)arg1 options:(id)arg2 ;
+(id)fetchFacesForFaceCrop:(id)arg1 options:(id)arg2 ;
+(id)fetchFacesForPersonsAssociatedWithFaceGroupsContainingFacesWithClusterSequenceNumbers:(id)arg1 options:(id)arg2 ;
+(id)fetchKeyFaceByPersonLocalIdentifierForPersons:(id)arg1 options:(id)arg2 ;
+(id)fetchFacesGroupedByAssetLocalIdentifierForAssets:(id)arg1 options:(id)arg2 ;
+(id)fetchSuggestedFacesForPerson:(id)arg1 options:(id)arg2 ;
-(NSData *)faceprintData;
-(void)setQualityMeasure:(long long)arg1 ;
-(long long)photosFaceRepresentationSourceWidth;
-(long long)photosFaceRepresentationSourceHeight;
-(double)photosFaceRepresentationCenterX;
-(double)photosFaceRepresentationCenterY;
-(double)photosFaceRepresentationSize;
-(double)photosFaceRepresentationBlurScore;
-(char)photosFaceRepresentationHasSmile;
-(char)photosFaceRepresentationIsLeftEyeClosed;
-(char)photosFaceRepresentationIsRightEyeClosed;
-(long long)photosFaceRepresentationQualityMeasure;
-(long long)photosFaceRepresentationClusterSequenceNumber;
-(id)photosFaceRepresentationLocalIdentifier;
-(double)photosFaceRepresentationRoll;
-(double)photosFaceRepresentationQuality;
-(double)size;
-(char)isHidden;
-(char)isInTrash;
-(double)centerX;
-(double)centerY;
-(long long)sourceWidth;
-(long long)sourceHeight;
-(double)quality;
-(double)roll;
-(double)yaw;
-(double)blurScore;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(Class)changeRequestClass;
-(NSString *)personLocalIdentifier;
-(void)fetchPropertySetsIfNeeded;
-(id)_createPropertyObjectOfClass:(Class)arg1 preFetchedProperties:(id)arg2 ;
-(id)_createPropertyObjectOfClass:(Class)arg1 ;
-(id)adjustmentVersion;
-(double)leftEyeX;
-(double)leftEyeY;
-(double)rightEyeX;
-(double)rightEyeY;
-(double)mouthX;
-(double)mouthY;
-(char)isInVIPModel;
-(char)manual;
-(char)hasSmile;
-(char)isLeftEyeClosed;
-(char)isRightEyeClosed;
-(long long)nameSource;
-(double)poseYaw;
-(void)setPoseYaw:(double)arg1 ;
-(long long)faceAlgorithmVersion;
-(void)setFaceAlgorithmVersion:(long long)arg1 ;
-(long long)clusterSequenceNumber;
-(long long)qualityMeasure;
-(unsigned short)ageType;
-(unsigned short)genderType;
-(unsigned short)eyesState;
-(unsigned short)smileType;
-(unsigned short)facialHairType;
-(unsigned short)hairColorType;
-(unsigned short)baldType;
-(unsigned short)glassesType;
-(unsigned short)eyeMakeupType;
-(unsigned short)lipMakeupType;
-(unsigned short)sexType;
-(NSString *)personUUID;
-(id)faceClusteringProperties;
-(char)isConfirmedFaceCropGenerationPending;
-(short)confirmedFaceCropGenerationState;
-(int)trainingType;
@end

