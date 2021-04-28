/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Photos.framework/Versions/A/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHObject.h>
#import <libobjc.A.dylib/PVAssetProtocol.h>
#import <libobjc.A.dylib/PHThumbnailAsset.h>
#import <libobjc.A.dylib/_PLImageLoadingAsset.h>
#import <libobjc.A.dylib/PHResourceChooserAsset.h>

@class NSString, NSDate, NSData, NSManagedObjectID, NSManagedObjectContext, CLLocation, NSSet, NSNumber, NSArray, PHPhotoLibrary, NSURL;

@interface PHAsset : PHObject <PVAssetProtocol, PHThumbnailAsset, _PLImageLoadingAsset, PHResourceChooserAsset> {

	CLLocation* _cachedLocation;
	NSString* _cloudAssetGUID;
	NSSet* _sceneClassifications;
	char _hidden;
	char _favorite;
	char _syncFailureHidden;
	char _cloudIsDeletable;
	char _complete;
	char _hasAdjustments;
	char _hasKeywords;
	char _assetDescriptionWasSet;
	char _canUseLocationCoordinateForLocation;
	char _isPhotoIris;
	char _trashed;
	short _savedAssetType;
	unsigned short _videoCpVisibilityState;
	unsigned short _playbackVariation;
	unsigned short _deferredProcessingNeeded;
	int _avalanchePickType;
	int _exifOrientation;
	float _overallAestheticScore;
	NSDate* _localCreationDate;
	long long _playbackStyle;
	long long _mediaType;
	unsigned long long _mediaSubtypes;
	unsigned long long _pixelWidth;
	unsigned long long _pixelHeight;
	NSDate* _creationDate;
	NSDate* _modificationDate;
	double _duration;
	NSString* _burstIdentifier;
	unsigned long long _localResourcesState;
	unsigned long long _groupingState;
	NSString* _groupingUUID;
	NSData* _locationData;
	NSString* _uniformTypeIdentifier;
	unsigned long long _persistenceState;
	unsigned long long _thumbnailIndex;
	NSString* _directory;
	NSString* _filename;
	NSDate* _trashedDate;
	NSDate* _adjustmentTimestamp;
	NSString* _originalColorSpace;
	NSData* _imageRequestHints;
	double _curationScore;
	long long _cloudPlaceholderKind;
	long long _videoCpDurationValue;
	NSNumber* _hdrGain;
	unsigned long long _reframeVariation;
	NSArray* _faceRegions;
	double _faceAreaMinX;
	double _faceAreaMaxX;
	double _faceAreaMinY;
	double _faceAreaMaxY;
	long long _RAWBadgeAttributes;
	id _faceAdjustmentVersion;
	NSDate* _analysisStateModificationDate;
	double _highlightPromotionScore;
	double _highlightVisibilityScore;
	CLLocationCoordinate2D _locationCoordinate;
	CGRect _preferredCropRect;
	CGRect _acceptableCropRect;

}

@property (nonatomic,readonly) NSString * localIdentifier; 
@property (nonatomic,readonly) NSString * cloudIdentifier; 
@property (nonatomic,readonly) NSString * filename; 
@property (nonatomic,readonly) NSString * originalFilename; 
@property (nonatomic,readonly) unsigned long long pixelWidth; 
@property (nonatomic,readonly) unsigned long long pixelHeight; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) CLLocationCoordinate2D locationCoordinate; 
@property (nonatomic,readonly) NSData * distanceIdentity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary; 
@property (nonatomic,readonly) unsigned long long thumbnailIndex; 
@property (nonatomic,readonly) char complete; 
@property (nonatomic,readonly) long long cloudPlaceholderKind; 
@property (nonatomic,readonly) unsigned long long localResourcesState;                                         //@synthesize localResourcesState=_localResourcesState - In the implementation block
@property (nonatomic,readonly) int avalanchePickType;                                                          //@synthesize avalanchePickType=_avalanchePickType - In the implementation block
@property (nonatomic,readonly) unsigned long long groupingState;                                               //@synthesize groupingState=_groupingState - In the implementation block
@property (nonatomic,readonly) NSString * groupingUUID;                                                        //@synthesize groupingUUID=_groupingUUID - In the implementation block
@property (nonatomic,readonly) NSData * locationData;                                                          //@synthesize locationData=_locationData - In the implementation block
@property (nonatomic,readonly) short savedAssetType;                                                           //@synthesize savedAssetType=_savedAssetType - In the implementation block
@property (nonatomic,readonly) unsigned short videoCpVisibilityState;                                          //@synthesize videoCpVisibilityState=_videoCpVisibilityState - In the implementation block
@property (nonatomic,readonly) char cloudIsDeletable;                                                          //@synthesize cloudIsDeletable=_cloudIsDeletable - In the implementation block
@property (nonatomic,readonly) unsigned long long originalResourceChoice; 
@property (nonatomic,readonly) NSSet * sceneClassifications; 
@property (nonatomic,readonly) long long imageOrientation; 
@property (nonatomic,readonly) double aspectRatio; 
@property (nonatomic,readonly) NSString * uniformTypeIdentifier;                                               //@synthesize uniformTypeIdentifier=_uniformTypeIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long persistenceState;                                            //@synthesize persistenceState=_persistenceState - In the implementation block
@property (nonatomic,readonly) unsigned long long thumbnailIndex;                                              //@synthesize thumbnailIndex=_thumbnailIndex - In the implementation block
@property (nonatomic,readonly) NSString * directory;                                                           //@synthesize directory=_directory - In the implementation block
@property (nonatomic,readonly) NSString * filename;                                                            //@synthesize filename=_filename - In the implementation block
@property (nonatomic,readonly) NSDate * trashedDate;                                                           //@synthesize trashedDate=_trashedDate - In the implementation block
@property (nonatomic,readonly) NSDate * adjustmentTimestamp;                                                   //@synthesize adjustmentTimestamp=_adjustmentTimestamp - In the implementation block
@property (nonatomic,readonly) NSString * thumbnailIdentifier; 
@property (nonatomic,readonly) char complete;                                                                  //@synthesize complete=_complete - In the implementation block
@property (nonatomic,readonly) NSURL * ALAssetURL; 
@property (nonatomic,readonly) int exifOrientation;                                                            //@synthesize exifOrientation=_exifOrientation - In the implementation block
@property (nonatomic,readonly) NSString * originalColorSpace;                                                  //@synthesize originalColorSpace=_originalColorSpace - In the implementation block
@property (nonatomic,readonly) NSData * imageRequestHints;                                                     //@synthesize imageRequestHints=_imageRequestHints - In the implementation block
@property (nonatomic,readonly) double curationScore;                                                           //@synthesize curationScore=_curationScore - In the implementation block
@property (nonatomic,readonly) float overallAestheticScore;                                                    //@synthesize overallAestheticScore=_overallAestheticScore - In the implementation block
@property (nonatomic,readonly) long long cloudPlaceholderKind;                                                 //@synthesize cloudPlaceholderKind=_cloudPlaceholderKind - In the implementation block
@property (nonatomic,readonly) char hasAdjustments;                                                            //@synthesize hasAdjustments=_hasAdjustments - In the implementation block
@property (nonatomic,readonly) long long videoCpDurationValue;                                                 //@synthesize videoCpDurationValue=_videoCpDurationValue - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D locationCoordinate;                                      //@synthesize locationCoordinate=_locationCoordinate - In the implementation block
@property (nonatomic,readonly) unsigned short playbackVariation;                                               //@synthesize playbackVariation=_playbackVariation - In the implementation block
@property (nonatomic,readonly) NSNumber * hdrGain;                                                             //@synthesize hdrGain=_hdrGain - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) unsigned long long reframeVariation;                                            //@synthesize reframeVariation=_reframeVariation - In the implementation block
@property (nonatomic,readonly) NSDate * localCreationDate;                                                     //@synthesize localCreationDate=_localCreationDate - In the implementation block
@property (nonatomic,readonly) CGRect preferredCropRect;                                                       //@synthesize preferredCropRect=_preferredCropRect - In the implementation block
@property (nonatomic,readonly) CGRect acceptableCropRect;                                                      //@synthesize acceptableCropRect=_acceptableCropRect - In the implementation block
@property (nonatomic,readonly) char hasPhotoColorAdjustments; 
@property (nonatomic,readonly) NSArray * faceRegions;                                                          //@synthesize faceRegions=_faceRegions - In the implementation block
@property (nonatomic,readonly) double faceAreaMinX;                                                            //@synthesize faceAreaMinX=_faceAreaMinX - In the implementation block
@property (nonatomic,readonly) double faceAreaMaxX;                                                            //@synthesize faceAreaMaxX=_faceAreaMaxX - In the implementation block
@property (nonatomic,readonly) double faceAreaMinY;                                                            //@synthesize faceAreaMinY=_faceAreaMinY - In the implementation block
@property (nonatomic,readonly) double faceAreaMaxY;                                                            //@synthesize faceAreaMaxY=_faceAreaMaxY - In the implementation block
@property (nonatomic,readonly) long long RAWBadgeAttributes;                                                   //@synthesize RAWBadgeAttributes=_RAWBadgeAttributes - In the implementation block
@property (nonatomic,readonly) char hasKeywords;                                                               //@synthesize hasKeywords=_hasKeywords - In the implementation block
@property (nonatomic,copy,readonly) NSString * cloudIdentifier; 
@property (nonatomic,readonly) id faceAdjustmentVersion;                                                       //@synthesize faceAdjustmentVersion=_faceAdjustmentVersion - In the implementation block
@property (assign,nonatomic) char assetDescriptionWasSet;                                                      //@synthesize assetDescriptionWasSet=_assetDescriptionWasSet - In the implementation block
@property (assign,nonatomic) char canUseLocationCoordinateForLocation;                                         //@synthesize canUseLocationCoordinateForLocation=_canUseLocationCoordinateForLocation - In the implementation block
@property (nonatomic,readonly) NSDate * analysisStateModificationDate;                                         //@synthesize analysisStateModificationDate=_analysisStateModificationDate - In the implementation block
@property (nonatomic,readonly) unsigned short deferredProcessingNeeded;                                        //@synthesize deferredProcessingNeeded=_deferredProcessingNeeded - In the implementation block
@property (nonatomic,readonly) char isVideo; 
@property (nonatomic,readonly) char isLoopingVideo; 
@property (nonatomic,readonly) char isPhoto; 
@property (nonatomic,readonly) char isAudio; 
@property (nonatomic,readonly) char isPhotoStreamPhoto; 
@property (nonatomic,readonly) char hasPhotoStreamTagID; 
@property (nonatomic,readonly) char isCloudSharedAsset; 
@property (nonatomic,readonly) char isMomentSharedAsset; 
@property (nonatomic,readonly) char isReferencedAsset; 
@property (nonatomic,readonly) char isOffline; 
@property (nonatomic,readonly) char isCloudPlaceholder; 
@property (nonatomic,readonly) char isCloudPhotoLibraryAsset; 
@property (nonatomic,readonly) char isStreamedVideo; 
@property (nonatomic,readonly) char isHighFrameRateVideo; 
@property (nonatomic,readonly) char isHDVideo; 
@property (nonatomic,readonly) char isJPEG; 
@property (nonatomic,readonly) char isJPEG2000; 
@property (nonatomic,readonly) char isRAW; 
@property (nonatomic,readonly) char isRAWPlusJPEG; 
@property (nonatomic,readonly) char isHEIF; 
@property (nonatomic,readonly) char isTIFF; 
@property (nonatomic,readonly) char isPNG; 
@property (nonatomic,readonly) char isPDF; 
@property (nonatomic,readonly) char isPSD; 
@property (nonatomic,readonly) char isAnimatedGIF; 
@property (nonatomic,readonly) char isPartOfBurst; 
@property (nonatomic,readonly) char isPartOfGroup; 
@property (nonatomic,readonly) char isPrimaryInGroup; 
@property (nonatomic,readonly) char isPhotoIris;                                                               //@synthesize isPhotoIris=_isPhotoIris - In the implementation block
@property (nonatomic,readonly) char isPhotoIrisPlaceholder; 
@property (nonatomic,readonly) char canPlayPhotoIris; 
@property (nonatomic,readonly) char canPlayAutoloop; 
@property (nonatomic,readonly) char canPlayMirror; 
@property (nonatomic,readonly) char canPlayLongExposure; 
@property (nonatomic,readonly) char canPlayLoopingVideo; 
@property (nonatomic,readonly) char isTimelapsePlaceholder; 
@property (nonatomic,readonly) char isIncludedInMoments; 
@property (nonatomic,readonly) char isIncludedInCloudFeeds; 
@property (getter=isTrashed,nonatomic,readonly) char trashed;                                                  //@synthesize trashed=_trashed - In the implementation block
@property (nonatomic,readonly) char canPerformSharingAction; 
@property (nonatomic,readonly) double highlightPromotionScore;                                                 //@synthesize highlightPromotionScore=_highlightPromotionScore - In the implementation block
@property (nonatomic,readonly) double highlightVisibilityScore;                                                //@synthesize highlightVisibilityScore=_highlightVisibilityScore - In the implementation block
@property (nonatomic,readonly) char canFlipFullSizeRender; 
@property (nonatomic,readonly) NSString * resourcesDebugDescription; 
@property (nonatomic,readonly) NSString * metadataDebugDescription; 
@property (nonatomic,readonly) NSString * croppingDebugDescription; 
@property (nonatomic,readonly) NSString * variationSuggestionStatesDetails; 
@property (nonatomic,readonly) long long playbackStyle;                                                        //@synthesize playbackStyle=_playbackStyle - In the implementation block
@property (nonatomic,readonly) long long mediaType;                                                            //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) unsigned long long mediaSubtypes;                                               //@synthesize mediaSubtypes=_mediaSubtypes - In the implementation block
@property (nonatomic,readonly) unsigned long long pixelWidth;                                                  //@synthesize pixelWidth=_pixelWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long pixelHeight;                                                 //@synthesize pixelHeight=_pixelHeight - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                                                          //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) NSDate * modificationDate;                                                      //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,readonly) CLLocation * location; 
@property (nonatomic,readonly) double duration;                                                                //@synthesize duration=_duration - In the implementation block
@property (getter=isHidden,nonatomic,readonly) char hidden;                                                    //@synthesize hidden=_hidden - In the implementation block
@property (getter=isFavorite,nonatomic,readonly) char favorite;                                                //@synthesize favorite=_favorite - In the implementation block
@property (getter=isSyncFailureHidden,nonatomic,readonly) char syncFailureHidden;                              //@synthesize syncFailureHidden=_syncFailureHidden - In the implementation block
@property (nonatomic,readonly) NSString * burstIdentifier;                                                     //@synthesize burstIdentifier=_burstIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long burstSelectionTypes; 
@property (nonatomic,readonly) char representsBurst; 
@property (nonatomic,readonly) unsigned long long sourceType; 
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContextForFetchingResources; 
@property (nonatomic,readonly) unsigned long long effectiveThumbnailIndex; 
+(unsigned long long)vcp_fullAnalysisTypesForAssetType:(unsigned long long)arg1 ;
+(id)vcp_fetchOptionsForLibrary:(id)arg1 forTaskID:(unsigned long long)arg2 ;
+(id)vcp_fetchAssetsMatchingFingerprint:(id)arg1 forPhotoLibrary:(id)arg2 ;
+(char)vcp_usePHFace;
+(char)vcp_usePHFaceExpression;
+(id)managedEntityName;
+(id)fetchAssetsMatchingMasterFingerPrint:(id)arg1 photoLibrary:(id)arg2 ;
+(id)fetchAssetsMatchingAdjustedFingerPrint:(id)arg1 photoLibrary:(id)arg2 ;
+(void)_computeFingerPrintsOfAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)_fetchAssetsMatchingMasterFingerPrint:(id)arg1 ;
+(id)_fetchAssetsMatchingAdjustedFingerPrint:(id)arg1 ;
+(id)fetchType;
+(id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2 ;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)identifierCode;
+(char)managedObjectSupportsTrashedState;
+(id)entityKeyMap;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(id)corePropertiesToFetch;
+(id)_composePropertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)pl_managedAssetsForAssets:(id)arg1 ;
+(id)fetchKeyCuratedAssetInAssetCollection:(id)arg1 referenceAsset:(id)arg2 options:(id)arg3 ;
+(id)_fetchCuratedAssetInAssetCollection:(id)arg1 referenceAsset:(id)arg2 referencePersons:(id)arg3 fetchOptions:(id)arg4 onlyKey:(char)arg5 ;
+(id)fetchKeyCuratedAssetInAssetCollection:(id)arg1 referenceAsset:(id)arg2 ;
+(id)fetchCuratedAssetsInAssetCollection:(id)arg1 ;
+(id)_fetchRepresentativeAssetInAssetCollection:(id)arg1 ;
+(id)fetchKeyAssetBySuggestionUUIDForSuggestions:(id)arg1 options:(id)arg2 ;
+(id)_assetFetchResultFromAssets:(id)arg1 options:(id)arg2 ;
+(id)fetchKeyCuratedAssetInAssetCollection:(id)arg1 referencePersons:(id)arg2 ;
+(id)fetchExtendedCuratedAssetsInAssetCollection:(id)arg1 ;
+(id)fetchCuratedAssetsInAssetCollection:(id)arg1 referencePersons:(id)arg2 ;
+(id)fetchMovieCuratedAssetsInMemory:(id)arg1 ;
+(id)fetchRepresentativeAssetsInAssetCollection:(id)arg1 ;
+(id)fetchReducedCuratedAssetsInMemory:(id)arg1 options:(id)arg2 ;
+(id)fetchCuratedAssetsInAssetCollection:(id)arg1 options:(id)arg2 ;
+(id)fetchKeyAssetForEachSuggestion:(id)arg1 options:(id)arg2 ;
+(id)fetchAssetsForBehavioralCurationWithOptions:(id)arg1 ;
+(id)fetchKeyAssetByHighlightUUIDForHighlights:(id)arg1 options:(id)arg2 ;
+(id)_descriptionForVariationSuggestionStates:(unsigned long long)arg1 ;
+(id)_descriptionForVariationSuggestionType:(unsigned long long)arg1 ;
+(char)isOriginalVideoComplementKnownUnsupportedFormatForAsset:(id)arg1 failureInfo:(id*)arg2 ;
+(char)isOriginalKnownUnsupportedFormatForAsset:(id)arg1 failureInfo:(id*)arg2 ;
+(id)propertySetsForPropertyFetchHints:(unsigned long long)arg1 ;
+(char)_isLivePhotoWithPhotoIris:(char)arg1 hasAdjustments:(char)arg2 videoCpDuration:(long long)arg3 videoCPVisibility:(unsigned short)arg4 sourceType:(unsigned long long)arg5 ;
+(unsigned long long)_extendedPropertyFetchHintsForPropertySets:(id)arg1 ;
+(unsigned long long)propertyFetchHintsForPropertySets:(id)arg1 ;
+(id)locationPropertiesToFetch;
+(id)faceWorkerPropertiesToFetch;
+(id)imageManagerPropertiesToFetch;
+(char)managedObjectSupportsHiddenState;
+(char)managedObjectSupportsVisibilityState;
+(char)managedObjectSupportsBursts;
+(char)managedObjectSupportsSavedAssetType;
+(char)managedObjectSupportsMontage;
+(char)managedObjectSupportsAllowedForAnalysis;
+(char)managedObjectSupportsContributor;
+(id)_transformMediaSubtypeReferences:(id)arg1 inComparisonPredicate:(id)arg2 options:(id)arg3 ;
+(Class)propertySetClassForPropertySet:(id)arg1 ;
+(id)propertySetAccessorsByPropertySet;
+(id)_unfetchedPropertySetsForAssets:(id)arg1 fromPropertySets:(id)arg2 ;
+(void)_batchFetchAdditionalPropertySetsIfNeeded:(id)arg1 forAssets:(id)arg2 ;
+(id)quickClassificationFaceAdjustmentVersion;
+(long long)countOfAssetsWithLocationFromUUIDs:(id)arg1 photoLibrary:(id)arg2 ;
+(id)fetchAssetsGroupedByFaceUUIDForFaces:(id)arg1 ;
+(id)fetchAssetsInBoundingBoxWithTopLeftLocation:(id)arg1 bottomRightLocation:(id)arg2 options:(id)arg3 ;
+(id)fetchAssetsInImportSessions:(id)arg1 options:(id)arg2 ;
+(id)fetchAssetsInAssetCollection:(id)arg1 options:(id)arg2 ;
+(id)fetchAssetsWithoutOriginalsInAssetCollection:(id)arg1 options:(id)arg2 ;
+(id)fetchAssetsWithMediaType:(long long)arg1 options:(id)arg2 ;
+(id)fetchAssetsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchAssetsWithUUIDs:(id)arg1 options:(id)arg2 ;
+(id)fetchAssetsWithCloudIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchAssetsWithALAssetURLs:(id)arg1 options:(id)arg2 ;
+(id)fetchAssetsWithBurstIdentifier:(id)arg1 options:(id)arg2 ;
+(id)fetchKeyAssetsInAssetCollection:(id)arg1 options:(id)arg2 ;
+(id)fetchAssetsWithOptions:(id)arg1 ;
+(id)fetchAssetsForPerson:(id)arg1 options:(id)arg2 ;
+(id)fetchAssetsForPersons:(id)arg1 options:(id)arg2 ;
+(id)fetchAssetsForFaces:(id)arg1 options:(id)arg2 ;
+(id)fetchAssetsForFaceGroups:(id)arg1 options:(id)arg2 ;
+(id)fetchQuarantinedAsssetsWithOptions:(id)arg1 ;
+(id)fetchKeyAssetForSceneIdentifier:(unsigned)arg1 withConfidenceThreshold:(double)arg2 options:(id)arg3 ;
+(id)fetchAssetsNeedingSceneProcessingWithOptions:(id)arg1 ;
+(id)fetchAssetsAllowedForSceneProcessingWithOptions:(id)arg1 ;
+(id)fetchAssetsWithObjectIDs:(id)arg1 options:(id)arg2 ;
+(id)fetchAssetsInAssetCollections:(id)arg1 options:(id)arg2 ;
+(id)fetchAssetsForKeywords:(id)arg1 options:(id)arg2 ;
+(id)fetchReferencedAssetsWithOptions:(id)arg1 ;
+(id)fetchFirstAssetInEachMonthHighlightWithOptions:(id)arg1 ;
+(id)fetchAllAssetsInYearRepresentedByYearHighlight:(id)arg1 options:(id)arg2 ;
+(id)fetchAssetsFromCameraSinceDate:(id)arg1 options:(id)arg2 ;
+(id)descriptionForPlaybackStyle:(long long)arg1 ;
+(id)descriptionForMediaType:(long long)arg1 ;
+(id)_descriptionForMediaSubtype:(unsigned long long)arg1 ;
+(id)descriptionForMediaSubtypes:(unsigned long long)arg1 ;
+(id)originalUniformTypeIdentifierForAsset:(id)arg1 ;
+(id)fetchAssetsForReferences:(id)arg1 photoLibrary:(id)arg2 ;
+(id)_currentTimestampString;
+(void)_inq_recordRequestID:(long long)arg1 ;
+(void)_inq_trimToMostRecentImageManagerMessages;
+(id)_inq_imageManagerRequestLogsByAssetUUID;
+(id)_inq_highestImageManagerRequestIDsObserved;
+(id)_imageManagerRequestLoggingQueue;
+(id)_inq_imageManagerRequestMessagesByRequestIDForAssetUUID:(id)arg1 requestID:(long long)arg2 ;
-(char)vcp_isShortMovie;
-(char)vcp_isLivePhoto;
-(unsigned long long)vcp_fullAnalysisTypes;
-(id)vcp_modificationDate;
-(char)vcp_needSceneProcessing;
-(char)vcp_isVideoSlowmo;
-(id)vcp_fingerprint:(id)arg1 ;
-(unsigned long long)vcp_fullAnalysisTypesForResources:(id)arg1 ;
-(char)vcp_eligibleForVideoDownload:(id)arg1 ;
-(CGRect)vcp_faceRectFrom:(id)arg1 ;
-(unsigned long long)vcp_flagsForPHFace:(id)arg1 withFaceRect:(CGRect)arg2 ;
-(id)vcp_typeDescription;
-(char)vcp_isSdofPhoto;
-(char)vcp_isVideoTimelapse;
-(CGSize)vcp_originalSize;
-(char)vcp_needFaceProcessing;
-(int)vcp_queryPHFaces:(unsigned long long*)arg1 results:(id*)arg2 ;
-(char)vcp_hasAdjustments:(id)arg1 ;
-(id)clsDistanceIdentity;
-(char)vcp_isPano;
-(NSString *)description;
-(char)isHidden;
-(NSString *)directory;
-(CLLocation *)location;
-(short)kind;
-(double)duration;
-(NSString *)title;
-(NSString *)filename;
-(NSDate *)modificationDate;
-(NSDate *)creationDate;
-(int)orientation;
-(CGSize)imageSize;
-(double)aspectRatio;
-(char)complete;
-(long long)mediaType;
-(NSDate *)localCreationDate;
-(NSString *)cloudIdentifier;
-(char)isDeleted;
-(char)isTrashed;
-(unsigned long long)pixelHeight;
-(unsigned long long)pixelWidth;
-(CLLocationCoordinate2D)locationCoordinate;
-(unsigned long long)sourceType;
-(char)isFavorite;
-(id)debugFilename;
-(int)exifOrientation;
-(char)isOffline;
-(char)isVideo;
-(long long)imageOrientation;
-(NSString *)uniformTypeIdentifier;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(char)canPerformEditOperation:(long long)arg1 ;
-(Class)changeRequestClass;
-(char)isAudio;
-(char)isJPEG;
-(char)isJPEG2000;
-(char)isRAW;
-(char)isTIFF;
-(char)isHEIF;
-(char)isPDF;
-(char)isPNG;
-(char)isPSD;
-(char)hasAdjustments;
-(NSString *)groupingUUID;
-(id)pl_managedAsset;
-(id)pl_managedAssetFromPhotoLibrary:(id)arg1 ;
-(NSString *)originalFilename;
-(NSString *)thumbnailIdentifier;
-(id)originalUTI;
-(unsigned long long)thumbnailIndex;
-(long long)cloudPlaceholderKind;
-(unsigned long long)effectiveThumbnailIndex;
-(id)pl_photoLibrary;
-(CGRect)suggestedCropForTargetSize:(CGSize)arg1 withFocusRegion:(CGRect)arg2 ;
-(CGRect)suggestedCropForTargetSize:(CGSize)arg1 withFocusRegion:(CGRect)arg2 andOutputCropScore:(double*)arg3 ;
-(CGRect)suggestedCropForTargetSize:(CGSize)arg1 ;
-(double)curationScore;
-(double)highlightVisibilityScore;
-(double)highlightPromotionScore;
-(float)overallAestheticScore;
-(id)faceAdjustmentVersion;
-(unsigned long long)originalResourceChoice;
-(unsigned long long)reframeVariation;
-(char)shouldUseRAWResourceAsUnadjustedEditBase;
-(void)_renderTemporaryVideoForObjectBuilder:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(char)_canHandleAdjustmentData:(id)arg1 withOptions:(id)arg2 ;
-(long long)_baseVersionForAdjustmentData:(id)arg1 canHandleAdjustmentData:(char)arg2 ;
-(id)_videoRequestOptionsForBaseVersion:(long long)arg1 options:(id)arg2 progressEstimateForVideoProgress:(/*^block*/id)arg3 ;
-(id)_imageRequestOptionsForBaseVersion:(long long)arg1 options:(id)arg2 progressEstimateForImageProgress:(/*^block*/id)arg3 ;
-(unsigned long long)requestContentEditingInputWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelContentEditingInputRequest:(unsigned long long)arg1 ;
-(void)_requestRenderedVideoForVideoURL:(id)arg1 adjustmentData:(id)arg2 canHandleAdjustmentData:(char)arg3 resultHandler:(/*^block*/id)arg4 ;
-(char)shouldUseRAWResourceWithOriginalResourceChoice:(unsigned long long)arg1 ;
-(char)isOriginalRaw;
-(unsigned long long)originalChoiceToFallbackForUnsupportRAW;
-(id)libraryID;
-(NSDate *)trashedDate;
-(char)isPrimaryImageFormat;
-(unsigned short)videoCpVisibilityState;
-(long long)videoCpDurationValue;
-(NSData *)distanceIdentity;
-(int)analysisStateForWorkerType:(short)arg1 outLastIgnoreDate:(id*)arg2 outIgnoreUntilDate:(id*)arg3 ;
-(NSData *)imageRequestHints;
-(NSManagedObjectContext *)managedObjectContextForFetchingResources;
-(char)isRAWPlusJPEG;
-(unsigned char)bundleScope;
-(id)assetsLibraryURL;
-(long long)originalImageOrientation;
-(short)savedAssetType;
-(short)kindSubtype;
-(CGSize)originalImageSize;
-(char)isLoopingVideo;
-(char)isPartOfBurst;
-(char)isStreamedVideo;
-(id)pathForOriginalFile;
-(id)pathForAdjustmentFile;
-(id)pathForAdjustmentDataFile;
-(char)isInFlight;
-(char)isCloudSharedAsset;
-(long long)cloudSharedAssetPlaceholderKind;
-(char)isCloudPhotoLibraryAsset;
-(char)isCloudPlaceholder;
-(id)managedAssetForPhotoLibrary:(id)arg1 ;
-(char)isTimelapsePlaceholder;
-(void)generateLargeThumbnailFileIfNecessary;
-(char)isOriginalSRGB;
-(unsigned long long)localResourcesState;
-(short)assetSource;
-(char)isMediaSubtype:(unsigned long long)arg1 ;
-(char)needsDeferredProcessing;
-(void)_createExtendedPropertySetsIfNeededWithPropertyHint:(unsigned long long)arg1 fetchDictionary:(id)arg2 ;
-(void)fetchPropertySetsIfNeeded;
-(void)_addPropertyHint:(unsigned long long)arg1 ;
-(id)_createPropertyObjectOfClass:(Class)arg1 preFetchedProperties:(id)arg2 ;
-(id)_createPropertyObjectOfClass:(Class)arg1 ;
-(id)_createCommentPropertyObject;
-(id)_createAnalysisStatePropertyObject;
-(id)_createKeywordPropertyObject;
-(id)originalMetadataProperties;
-(id)photosOneUpProperties;
-(id)localDateProperties;
-(id)photosInfoPanelExtendedProperties;
-(id)photosInfoPanelLocationProperties;
-(id)photoIrisProperties;
-(id)descriptionProperties;
-(id)commentProperties;
-(id)sceneAnalysisProperties;
-(id)assetAnalysisStateProperties;
-(id)assetUserActivityProperties;
-(id)adjustmentProperties;
-(id)curationProperties;
-(id)aestheticProperties;
-(id)mediaAnalysisProperties;
-(id)importProperties;
-(id)sceneprintProperties;
-(id)destinationAssetCopyProperties;
-(id)keywordProperties;
-(id)gridMetadataProperties;
-(id)coarseLocationProperties;
-(NSSet *)sceneClassifications;
-(unsigned long long)variationSuggestionStatesForVariationType:(unsigned long long)arg1 ;
-(char)isVariationSuggestionStatesUnknown;
-(id)_unfetchedPropertySetsFromPropertySets:(id)arg1 ;
-(char)isHDVideo;
-(char)isAnimatedGIF;
-(char)isScreenRecording;
-(char)isLocatedAtCoordinates:(CLLocationCoordinate2D)arg1 ;
-(id)originalImageProperties;
-(id)originalAVAssetOrProxy;
-(id)originalAVAssetCommonMetadata;
-(id)originalAVAssetCreationDateMetadataItem;
-(NSURL *)ALAssetURL;
-(char)hasLegacyAdjustments;
-(id)cloudAssetGUID;
-(unsigned long long)burstSelectionTypes;
-(char)representsBurst;
-(char)isPartOfGroup;
-(char)isPrimaryInGroup;
-(char)isPhotoIrisPlaceholder;
-(char)canPlayPhotoIris;
-(char)canPlayAutoloop;
-(char)canPlayLongExposure;
-(char)canPlayMirror;
-(char)canPlayLoopingVideo;
-(char)hasPhotoColorAdjustments;
-(char)isPhoto;
-(char)isPhotoStreamPhoto;
-(char)hasPhotoStreamTagID;
-(char)isMomentSharedAsset;
-(char)isReferencedAsset;
-(char)isHighFrameRateVideo;
-(char)isIncludedInMoments;
-(char)isIncludedInCloudFeeds;
-(void)getMasterFingerPrintWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getFingerPrintForAssetType:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)hasContentEqualTo:(id)arg1 ;
-(unsigned long long)contentChangeFromAsset:(id)arg1 ;
-(char)canFlipFullSizeRender;
-(char)canPerformSharingAction;
-(id)adjustmentVersion;
-(id)mainFileURL;
-(id)fileURLsForDiagnosticFiles;
-(id)fileURLForFullsizeRenderImage;
-(id)fileURLForVideoComplementFile;
-(id)__dictionaryWithContentsOfData:(id)arg1 ;
-(id)gatingDebugMetadata;
-(id)evaluationDebugMetadata;
-(id)adjustmentsDebugMetadata;
-(id)detailedDebugDescriptionInLibrary:(id)arg1 ;
-(id)descriptionForMediaAnalysisWithManagedAsset:(id)arg1 ;
-(id)descriptionForAestheticsWithManagedAsset:(id)arg1 ;
-(NSString *)resourcesDebugDescription;
-(NSString *)metadataDebugDescription;
-(NSString *)variationSuggestionStatesDetails;
-(NSString *)croppingDebugDescription;
-(void)_reportUsage;
-(long long)playbackStyle;
-(unsigned long long)mediaSubtypes;
-(char)isSyncFailureHidden;
-(NSString *)burstIdentifier;
-(int)avalanchePickType;
-(unsigned long long)groupingState;
-(NSData *)locationData;
-(char)cloudIsDeletable;
-(unsigned long long)persistenceState;
-(NSDate *)adjustmentTimestamp;
-(NSString *)originalColorSpace;
-(unsigned short)playbackVariation;
-(NSNumber *)hdrGain;
-(CGRect)preferredCropRect;
-(CGRect)acceptableCropRect;
-(NSArray *)faceRegions;
-(double)faceAreaMinX;
-(double)faceAreaMaxX;
-(double)faceAreaMinY;
-(double)faceAreaMaxY;
-(long long)RAWBadgeAttributes;
-(char)hasKeywords;
-(char)assetDescriptionWasSet;
-(void)setAssetDescriptionWasSet:(char)arg1 ;
-(char)canUseLocationCoordinateForLocation;
-(void)setCanUseLocationCoordinateForLocation:(char)arg1 ;
-(NSDate *)analysisStateModificationDate;
-(unsigned short)deferredProcessingNeeded;
-(char)isPhotoIris;
-(id)objectReference;
-(void)recordImageManagerMessageForRequestID:(int)arg1 message:(id)arg2 ;
-(id)messagesForRecentImageManagerRequests;
@end

