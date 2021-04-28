/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Versions/A/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PHAServiceOperationHandling.h>

@class PHAMonitoring, PHAExecutive, PHAAssetResourceDataLoader, PHAGraphManager, NSURL, PHPhotoLibrary, PHAJobCoordinator, CPAnalytics, NSMutableDictionary;

@interface PHAManager : NSObject <PHAServiceOperationHandling> {

	PHAMonitoring* _monitoring;
	PHAExecutive* _executive;
	PHAAssetResourceDataLoader* _dataLoader;
	unsigned long long _processedAssetCount;
	PHAGraphManager* _graphManager;
	NSURL* _libraryURL;
	PHPhotoLibrary* _photoLibrary;
	PHAJobCoordinator* _jobCoordinator;
	CPAnalytics* _analytics;
	NSMutableDictionary* _photoAnalysisWorkersByType;

}

@property (retain) NSMutableDictionary * photoAnalysisWorkersByType;              //@synthesize photoAnalysisWorkersByType=_photoAnalysisWorkersByType - In the implementation block
@property (readonly) PHAExecutive * executive;                                    //@synthesize executive=_executive - In the implementation block
@property (readonly) NSURL * libraryURL;                                          //@synthesize libraryURL=_libraryURL - In the implementation block
@property (readonly) PHPhotoLibrary * photoLibrary;                               //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (readonly) PHAJobCoordinator * jobCoordinator;                          //@synthesize jobCoordinator=_jobCoordinator - In the implementation block
@property (getter=isQuiescent,readonly) char quiescent; 
@property (readonly) PHAGraphManager * graphManager;                              //@synthesize graphManager=_graphManager - In the implementation block
@property (readonly) CPAnalytics * analytics;                                     //@synthesize analytics=_analytics - In the implementation block
+(void)enumerateWorkerClassesUsingBlock:(/*^block*/id)arg1 ;
+(id)allWorkerClasses;
-(id)description;
-(id)init;
-(void)shutdown;
-(NSURL *)libraryURL;
-(PHPhotoLibrary *)photoLibrary;
-(id)monitoring;
-(CPAnalytics *)analytics;
-(char)isReadyForAnalysis;
-(void)dumpAnalysisStatusWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestLocalizedSceneAncestryInformationWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)reportTurboEnabledWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(char)turboIsEnabled;
-(void)handleOperation:(id)arg1 ;
-(PHAGraphManager *)graphManager;
-(PHAJobCoordinator *)jobCoordinator;
-(id)statusAsDictionary;
-(PHAExecutive *)executive;
-(void)enumerateWorkersUsingBlock:(/*^block*/id)arg1 ;
-(void)graphManagerWillLoadGraph:(id)arg1 ;
-(void)graphManagerDidUnloadGraph:(id)arg1 ;
-(char)isQuiescent;
-(void)enableTurboMode;
-(void)disableTurboMode;
-(void)stopBackgroundActivity;
-(void)stopAllBackgroundActivities;
-(void)triggerBackgroundActivity;
-(void)turboConstraintsWereRemoved;
-(id)presentationWorker;
-(id)faceClassificationServiceWorker;
-(id)graphServiceWorker;
-(id)faceProcessingServiceWorker;
-(void)checkForQuiescence;
-(char)photosIsConnected;
-(void)startTurboProcessing;
-(void)backgroundActivityDidBegin;
-(id)initWithPhotoLibraryURL:(id)arg1 executive:(id)arg2 ;
-(NSMutableDictionary *)photoAnalysisWorkersByType;
-(void)setPhotoAnalysisWorkersByType:(NSMutableDictionary *)arg1 ;
@end
