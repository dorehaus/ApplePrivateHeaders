/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetInspectorLoader.h>

@protocol OS_dispatch_queue;
@class AVWeakReference, AVAssetInspector, AVDispatchOnce, NSObject, NSMutableArray, NSURL;

@interface AVFigAssetInspectorLoader : AVAssetInspectorLoader {

	OpaqueFigAssetRef _figAsset;
	int _figAssetCreationStatus;
	AVWeakReference* _weakReferenceToAsset;
	AVAssetInspector* _assetInspector;
	AVDispatchOnce* _assetInspectorOnce;
	NSObject*<OS_dispatch_queue> _completionHandlerQueue;
	OpaqueFigSimpleMutexRef _loadingMutex;
	NSMutableArray* _loadingBatches;
	char _loadingCanceled;
	char _registeredForFigAssetNotifications;
	long long _fragmentMinderAssociationCount;
	NSURL* _URL;

}
+(void)_mapAssetKeys:(id)arg1 toFigAssetPropertySet:(id)arg2 figAssetTrackPropertySet:(id)arg3 callerName:(id)arg4 ;
+(id)_figAssetTrackMediaSelectionPropertiesArray;
+(id)_figAssetMediaSelectionPropertiesArray;
+(id)_figAssetPropertiesForKeys;
+(id)_figAssetTrackPropertiesForKeys;
-(void)dealloc;
-(id)URL;
-(SCD_Struct_CM3)duration;
-(id)resolvedURL;
-(unsigned long long)downloadToken;
-(id)asset;
-(char)_isStreaming;
-(char)isReadable;
-(char)isAssociatedWithFragmentMinder;
-(void)_setIsAssociatedWithFragmentMinder:(char)arg1 ;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelLoading;
-(OpaqueFigAssetRef)_figAsset;
-(void)_addFigAssetNotifications;
-(void)_removeFigAssetNotifications;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(double)_fragmentMindingInterval;
-(void)_setFragmentMindingInterval:(double)arg1 ;
-(void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg1 ;
-(id)lyrics;
-(char)hasProtectedContent;
-(char)isPlayable;
-(char)isExportable;
-(char)isComposable;
-(OpaqueFigFormatReaderRef)_formatReader;
-(Class)_classForTrackInspectors;
-(id)figChapterGroupInfo;
-(id)figChapters;
-(long long)firstFragmentSequenceNumber;
-(long long)fragmentCount;
-(id)initWithFigAsset:(OpaqueFigAssetRef)arg1 forAsset:(id)arg2 ;
-(id)initWithURL:(id)arg1 figAssetCreationFlags:(unsigned long long)arg2 figAssetCreationOptions:(id)arg3 avAssetInitializationOptions:(id)arg4 forAsset:(id)arg5 ;
-(id)assetInspector;
-(id)originalNetworkContentURL;
-(OpaqueFigSimpleMutexRef)_loadingMutex;
-(long long)_statusOfValueForKey:(id)arg1 error:(id*)arg2 firstNonLoadedDependencyKey:(id*)arg3 ;
-(long long)_loadStatusForProperty:(id)arg1 figAsset:(OpaqueFigAssetRef)arg2 error:(id*)arg3 ;
-(id)_completionHandlerQueue;
-(id)_loadingBatches;
-(void)_invokeCompletionHandlerForLoadingBatches:(id)arg1 ;
@end

