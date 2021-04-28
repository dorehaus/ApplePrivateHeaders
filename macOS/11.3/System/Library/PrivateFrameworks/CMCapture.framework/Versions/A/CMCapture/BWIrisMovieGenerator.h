/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CMCapture/CMCapture-Structs.h>
@class NSMutableArray, NSObject, BWIrisStillImageMovieMetadataCache, BWVideoOrientationTimeMachine, BWLimitedGMErrorLogger;

@interface BWIrisMovieGenerator : NSObject {

	char _sourceIsFrontFacingCamera;
	char _sampleReferenceMoviesEnabled;
	SCD_Struct_Fi8 _masterMovieDuration;
	OpaqueCMByteStreamRef _byteStream;
	OpaqueFigFormatReaderRef _masterMovieReader;
	char _masterMovieParsingComplete;
	char _vitalInputStreamHasBeenForcedOff;
	int _streamForcedOffErrorCode;
	long long _masterMovieAudioExtractionID;
	SCD_Struct_Fi8 _actualMovieStartTime;
	OpaqueFigSimpleMutexRef _movieInfoAndCallbacksMutex;
	NSMutableArray* _movieInfoAndCallbacks;
	int _numberOfPendingReferenceMovies;
	NSObject*<OS_dispatch_queue> _movieGenerationQueue;
	char _suspended;
	BWIrisStillImageMovieMetadataCache* _irisStillImageMovieMetadataCache;
	BWVideoOrientationTimeMachine* _videoOrientationTimeMachine;
	BWLimitedGMErrorLogger* _limitedGMErrorLogger;

}

@property (assign) char suspended; 
@property (readonly) int numberOfPendingReferenceMovies; 
@property (assign,nonatomic) SCD_Struct_Fi8 actualMovieStartTime;              //@synthesize actualMovieStartTime=_actualMovieStartTime - In the implementation block
@property (assign) char vitalInputStreamHasBeenForcedOff;                      //@synthesize vitalInputStreamHasBeenForcedOff=_vitalInputStreamHasBeenForcedOff - In the implementation block
@property (assign) int streamForcedOffErrorCode;                               //@synthesize streamForcedOffErrorCode=_streamForcedOffErrorCode - In the implementation block
+(void)initialize;
+(char)_addNewMetadataTrackToAssetWriter:(OpaqueFigAssetWriterRef)arg1 forTrackTimeScale:(int)arg2 yieldingTrackID:(int*)arg3 ;
-(void)dealloc;
-(void)setSuspended:(char)arg1 ;
-(char)suspended;
-(char)flush;
-(char)flushAsync;
-(void)parseAdditionalFragments;
-(void)updateOverCaptureQualityScoresForMoviesEndingBefore:(SCD_Struct_Fi8)arg1 fromMetadataRingBuffer:(id)arg2 ;
-(void)setActualMovieStartTime:(SCD_Struct_Fi8)arg1 ;
-(void)setStreamForcedOffErrorCode:(int)arg1 ;
-(void)setVitalInputStreamHasBeenForcedOff:(char)arg1 ;
-(int)numberOfPendingReferenceMovies;
-(id)initWithReadableByteStream:(OpaqueCMByteStreamRef)arg1 forFrontFacingCamera:(char)arg2 sampleReferenceMoviesEnabled:(char)arg3 movieGenerationQueue:(id)arg4 irisStillImageMovieMetadataCache:(id)arg5 videoOrientationTimeMachine:(id)arg6 ;
-(void)writeMovieWithInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithReadableByteStream:(OpaqueCMByteStreamRef)arg1 metadataByteStream:(OpaqueCMByteStreamRef)arg2 forFrontFacingCamera:(char)arg3 sampleReferenceMoviesEnabled:(char)arg4 movieGenerationQueue:(id)arg5 irisStillImageMovieMetadataCache:(id)arg6 videoOrientationTimeMachine:(id)arg7 ;
-(char)_generateIrisMovies:(char)arg1 ;
-(void)_cancelAllPendingIrisMoviesWithError:(int)arg1 ;
-(int)_doIrisMovieParsing:(char)arg1 ;
-(void)_findIrisShortestTrackDuration:(SCD_Struct_Fi8*)arg1 audioTrackDuration:(SCD_Struct_Fi8*)arg2 flush:(char)arg3 ;
-(id)_completedMovieInfoAndCallbacksForShortestTrackDuration:(SCD_Struct_Fi8)arg1 audioTrackDuration:(SCD_Struct_Fi8)arg2 flush:(char)arg3 ;
-(char)_generateCompletedIrisMovies:(id)arg1 ;
-(SCD_Struct_Fi8)_determineMasterMovieStartTimeForInfo:(id)arg1 ;
-(int)_generateRefMovieForInfo:(id)arg1 movieLevelMetadata:(id)arg2 generateMetadataMovie:(char)arg3 ;
-(int)_getAdjustedRefMovieStartTime:(SCD_Struct_Fi8)arg1 adjustedRefMovieStartTimeOut:(SCD_Struct_Fi8*)arg2 ;
-(int)_getAdjustedRefMovieEndTime:(SCD_Struct_Fi8)arg1 adjustedRefMovieEndTimeOut:(SCD_Struct_Fi8*)arg2 ;
-(SCD_Struct_Fi8)actualMovieStartTime;
-(char)vitalInputStreamHasBeenForcedOff;
-(int)streamForcedOffErrorCode;
@end

