/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <AVFCore/AVAsynchronousKeyValueLoading.h>

@class AVAssetTrackInternal, AVAsset;

@interface AVAssetTrack : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {

	AVAssetTrackInternal* _track;

}

@property (nonatomic,__weak,readonly) AVAsset * asset; 
@property (nonatomic,readonly) int trackID; 
+(char)expectsPropertyRevisedNotifications;
+(id)mediaCharacteristicsForMediaTypes;
+(id)keyPathsForValuesAffectingTimeRange;
-(unsigned)vcp_imageOrientation;
-(long long)vcp_orientation;
-(SCD_Struct_CM3)vcp_endTime;
-(CGSize)vcp_fullFrameSize;
-(CGRect)vcp_cleanApertureRect;
-(SCD_Struct_CM3)vcp_startTime;
-(id)commonMetadataStringValueForKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)locale;
-(id)languageCode;
-(char)isEnabled;
-(long long)layer;
-(id)_weakReference;
-(id)segments;
-(CGSize)dimensions;
-(id)mediaType;
-(id)metadata;
-(AVAsset *)asset;
-(int)trackID;
-(SCD_Struct_CM5)timeRange;
-(id)extendedLanguageTag;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(float)preferredVolume;
-(CGAffineTransform)preferredTransform;
-(CGSize)naturalSize;
-(int)naturalTimeScale;
-(id)commonMetadata;
-(id)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 ;
-(id)_initWithAsset:(id)arg1 trackIndex:(long long)arg2 ;
-(char)hasProtectedContent;
-(char)isPlayable;
-(long long)statusOfValueForKey:(id)arg1 ;
-(id)formatDescriptions;
-(char)hasMediaCharacteristics:(id)arg1 ;
-(OpaqueFigAssetTrackRef)_figAssetTrack;
-(void)_startListeningToFigAssetTrackNotifications;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(void)_stopListeningToFigAssetTrackNotifications;
-(OpaqueFigTrackReaderRef)_figTrackReader;
-(char)isDecodable;
-(int)playabilityValidationResult;
-(char)isSelfContained;
-(long long)totalSampleDataLength;
-(id)mediaCharacteristics;
-(char)hasMediaCharacteristic:(id)arg1 ;
-(SCD_Struct_CM5)mediaPresentationTimeRange;
-(SCD_Struct_CM5)mediaDecodeTimeRange;
-(SCD_Struct_CM3)latentBaseDecodeTimeStampOfFirstTrackFragment;
-(char)requiresFrameReordering;
-(char)hasAudioSampleDependencies;
-(float)estimatedDataRate;
-(float)peakDataRate;
-(id)loudnessInfo;
-(float)nominalFrameRate;
-(id)segmentForTrackTime:(SCD_Struct_CM3)arg1 ;
-(char)segmentsExcludeAudioPrimingAndRemainderDurations;
-(SCD_Struct_CM5)gaplessSourceTimeRange;
-(id)segmentsAsPresented;
-(SCD_Struct_CM3)samplePresentationTimeForTrackTime:(SCD_Struct_CM3)arg1 ;
-(long long)alternateGroupID;
-(long long)defaultAlternateGroupID;
-(long long)provisionalAlternateGroupID;
-(char)isExcludedFromAutoselectionInTrackGroup;
-(id)associatedTracksOfType:(id)arg1 ;
-(id)_firstAssociatedTrackWithAssociationType:(id)arg1 ;
-(id)_trackReferences;
-(char)hasAudibleBooksContent;
-(char)isAudibleBooksContentAuthorized;
-(char)canProvideSampleCursors;
-(id)makeSampleCursorWithPresentationTimeStamp:(SCD_Struct_CM3)arg1 ;
-(id)makeSampleCursorAtFirstSampleInDecodeOrder;
-(id)makeSampleCursorAtLastSampleInDecodeOrder;
-(id)makeSearchCursorWithPredicate:(id)arg1 atPresentationTimeStamp:(SCD_Struct_CM3)arg2 ;
-(id)_assetTrackInspector;
-(char)_subtitleFormatDescriptionMatchesTextDisplayFlags:(unsigned)arg1 flagsMask:(unsigned)arg2 ;
-(SCD_Struct_CM3)minFrameDuration;
-(id)_fallbackTrack;
-(id)_followingTrackAmongTracks:(id)arg1 ;
-(id)_pairedForcedOnlySubtitlesTrack;
-(id)availableTrackAssociationTypes;
-(char)_hasMultipleEdits;
-(char)_hasScaledEdits;
-(char)_hasEmptyEdits;
-(char)_hasMultipleDistinctFormatDescriptions;
-(char)_firstFormatDescriptionIsLPCM;
@end

