/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/Versions/A/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSObject, NSNumber, NSXPCConnection, NSMutableDictionary;

@interface VCPMediaAnalyzer : NSObject {

	NSObject*<OS_dispatch_queue> _analysisQueue;
	NSObject*<OS_dispatch_queue> _storageQueue;
	NSObject*<OS_dispatch_group> _storageGroup;
	NSNumber* _standalone;
	NSNumber* _noResultStrip;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _sandboxQueue;
	NSMutableDictionary* _sandboxHandles;

}
+(id)sharedMediaAnalyzer;
+(Class)_getDistanceDescriptorClass;
-(void)dealloc;
-(id)init;
-(id)connection;
-(long long)_getDatabaseSandboxExtensionForPhotoLibraryURL:(id)arg1 ;
-(id)_addClassificationResults:(id)arg1 analysis:(id)arg2 ;
-(unsigned long long)_metaAnalysisTypesForAsset:(id)arg1 ;
-(id)_analyzeOndemand:(id)arg1 forAnalysisTypes:(unsigned long long)arg2 withExistingAnalysis:(id)arg3 andOptions:(id)arg4 storeAnalysis:(char)arg5 ;
-(id)_databaseForPhotoLibrary:(id)arg1 ;
-(id)requestAnalysis:(unsigned long long)arg1 forAsset:(id)arg2 withExistingAnalysis:(id)arg3 andDatabase:(id)arg4 andOptions:(id)arg5 ;
-(void)assetsFromPhotoLibrary:(id)arg1 analyzedSinceDate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_getSceneDescriptors:(id)arg1 asDescriptorClass:(Class)arg2 withSceneRange:(SCD_Struct_VC7)arg3 andAnalysisResults:(id)arg4 ;
-(void)_checkDuplicate:(id)arg1 withAsset:(id)arg2 duplicate:(long long*)arg3 ;
-(id)_queryDistanceDescriptor:(Class)arg1 ofAsset:(id)arg2 withExistingAnalysis:(id)arg3 andDatabase:(id)arg4 timeRange:(SCD_Struct_VC7)arg5 lastFeature:(char)arg6 isDegraded:(char*)arg7 ;
-(unsigned long long)_typesToRemove:(unsigned long long)arg1 requested:(unsigned long long)arg2 ;
-(int)requestAnalysis:(unsigned long long)arg1 forAssets:(id)arg2 withOptions:(id)arg3 andProgressHandler:(/*^block*/id)arg4 andCompletionHandler:(/*^block*/id)arg5 ;
-(int)requestAnalysisTypes:(unsigned long long)arg1 forAssets:(id)arg2 withOptions:(id)arg3 andProgressHandler:(/*^block*/id)arg4 analyses:(id)arg5 ;
-(id)requestAnalysis:(unsigned long long)arg1 forAssets:(id)arg2 withOptions:(id)arg3 andProgressHandler:(/*^block*/id)arg4 andError:(id*)arg5 ;
-(id)requestAnalysisTypes:(unsigned long long)arg1 forAssetWithResourceURLs:(id)arg2 withOptions:(id)arg3 error:(id*)arg4 ;
-(id)analyzeOndemand:(id)arg1 pairedURL:(id)arg2 forAnalysisTypes:(unsigned long long)arg3 error:(id*)arg4 ;
-(int)requestAnalysisForAsset:(id)arg1 analysisTypes:(unsigned long long)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(char)cancelAnalysisWithRequestID:(int)arg1 ;
-(void)assetsAnalyzedSinceDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)distanceFromAsset:(id)arg1 toAsset:(id)arg2 duplicate:(long long*)arg3 distance:(float*)arg4 ;
-(void)distanceFromAsset:(id)arg1 timeRange:(SCD_Struct_VC7)arg2 toAsset:(id)arg3 timeRange:(SCD_Struct_VC7)arg4 duplicate:(long long*)arg5 distance:(float*)arg6 ;
-(int)requestAnalysesForAssets:(id)arg1 analysisTypes:(unsigned long long)arg2 allowOndemand:(char)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)requestAnalysisTypes:(unsigned long long)arg1 forAssets:(id)arg2 allowOndemand:(char)arg3 progressHandler:(/*^block*/id)arg4 error:(id*)arg5 ;
-(id)curateMovieAssetsForCollection:(id)arg1 withAlreadyCuratedAssets:(id)arg2 andDesiredCount:(unsigned long long)arg3 allowOnDemand:(char)arg4 ;
-(id)requestCallerIdentificationForFaces:(id)arg1 ;
-(id)requestMovieHighlightsForAssets:(id)arg1 withOptions:(id)arg2 ;
-(id)requestLivePhotoEffectsForAssets:(id)arg1 allowOnDemand:(char)arg2 flags:(unsigned long long)arg3 ;
-(void)completeStorage;
@end

