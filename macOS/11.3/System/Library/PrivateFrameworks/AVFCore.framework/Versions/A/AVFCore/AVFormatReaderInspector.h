/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetInspector.h>

@interface AVFormatReaderInspector : AVAssetInspector {

	OpaqueFigFormatReaderRef _formatReader;
	char didCheckForSaveRestriction;
	char hasSaveRestriction;

}

@property (setter=_setFormatReader:,getter=_formatReader,nonatomic,retain) OpaqueFigFormatReaderRef formatReader; 
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(SCD_Struct_CM3)duration;
-(char)isReadable;
-(float)preferredRate;
-(float)preferredVolume;
-(float)preferredSoundCheckVolumeNormalization;
-(CGAffineTransform)preferredTransform;
-(SCD_Struct_CM3)minimumTimeOffsetFromLive;
-(CGSize)naturalSize;
-(int)naturalTimeScale;
-(char)providesPreciseDurationAndTiming;
-(id)alternateTrackGroups;
-(id)trackReferences;
-(id)lyrics;
-(id)commonMetadata;
-(id)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(long long)trackCount;
-(char)isExportable;
-(char)isComposable;
-(char)canContainFragments;
-(char)containsFragments;
-(SCD_Struct_CM3)overallDurationHint;
-(OpaqueFigFormatReaderRef)_formatReader;
-(long long)firstFragmentSequenceNumber;
-(long long)fragmentCount;
-(id)initWithFormatReader:(OpaqueFigFormatReaderRef)arg1 ;
-(void)_setFormatReader:(OpaqueFigFormatReaderRef)arg1 ;
-(char)_hasQTSaveRestriction;
-(void*)_valueAsCFTypeForProperty:(CFStringRef)arg1 ;
@end

