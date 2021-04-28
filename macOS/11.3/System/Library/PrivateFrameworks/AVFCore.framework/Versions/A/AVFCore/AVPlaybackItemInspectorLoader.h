/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetMakeReadyForInspectionLoader.h>

@class NSArray;

@interface AVPlaybackItemInspectorLoader : AVAssetMakeReadyForInspectionLoader {

	OpaqueFigPlaybackItemRef _playbackItem;
	NSArray* _trackIDs;
	char _shouldCacheDuration;
	SCD_Struct_CM3 _cachedDuration;

}

@property (getter=_playbackItem,nonatomic,readonly) OpaqueFigPlaybackItemRef playbackItem; 
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(SCD_Struct_CM3)duration;
-(void)cancelLoading;
-(id)initWithURL:(id)arg1 playbackItem:(OpaqueFigPlaybackItemRef)arg2 trackIDs:(id)arg3 dynamicBehavior:(char)arg4 ;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(Class)_classForTrackInspectors;
-(id)assetInspector;
-(OpaqueFigFormatReaderRef)_copyFormatReaderFromFigObjectWithFigErrorCode:(int*)arg1 ;
-(id)_dictionaryOfSpecialGettersForKeyValueStatus;
-(char)_inspectionRequiresAFormatReader;
-(id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)arg1 ;
-(void)_addFigObjectNotifications;
-(void)_removeFigObjectNotifications;
-(id)_playbackItemPropertiesForKeys:(id)arg1 ;
@end

