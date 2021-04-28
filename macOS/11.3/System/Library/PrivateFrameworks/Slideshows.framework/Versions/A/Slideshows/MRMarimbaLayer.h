/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slideshows/Slideshows-Structs.h>
#import <QuartzCore/CAOpenGLLayer.h>
#import <libobjc.A.dylib/MRMarimbaPlayback.h>
#import <libobjc.A.dylib/MRMarimbaHitBlobSupport.h>
#import <libobjc.A.dylib/MRMarimbaBasicPlayback.h>

@class MPDocument, MRRenderer, MPFaceDetector, NSDictionary, NSTimer, NSString;

@interface MRMarimbaLayer : CAOpenGLLayer <MRMarimbaPlayback, MRMarimbaHitBlobSupport, MRMarimbaBasicPlayback> {

	MRRenderer* _renderer;
	MPDocument* _document;
	char _masterClockIsSet;
	char _bailTimeWatcher;
	char _stopWithVideo;
	char _wasSuspended;
	MPFaceDetector* _faceDetector;
	double _morphingToAspectRatio;
	CGSize _frameBufferSize;
	NSDictionary* _nextMorphInfo;
	NSTimer* _faceTimer;
	double _timestampOfLastRenderPass;
	char _enableSlideDidChangeNotification;
	char _sizeChangedWhileRendererSizeWasLocked;
	NSString* _lastSlideChange;
	CGLPixelFormatObjectRef _pixelFormat;
	CGLContextObject* _context;
	char _isAboutToPlay;
	char _isReadonly;
	char _slidesAreReadonly;
	char _rendererSizeIsLocked;
	char _correctsForAutorotation;
	char _interactivityIsEnabled;

}

@property (assign,nonatomic) char isAboutToPlay; 
@property (readonly) CGSize size; 
@property (assign,nonatomic) double framesPerSecond; 
@property (assign,nonatomic) char interactivityIsEnabled;                        //@synthesize interactivityIsEnabled=_interactivityIsEnabled - In the implementation block
@property (assign,nonatomic) char isReadonly;                                    //@synthesize isReadonly=_isReadonly - In the implementation block
@property (assign,nonatomic) char slidesAreReadonly;                             //@synthesize slidesAreReadonly=_slidesAreReadonly - In the implementation block
@property (assign,nonatomic) char rendererSizeIsLocked;                          //@synthesize rendererSizeIsLocked=_rendererSizeIsLocked - In the implementation block
@property (assign,nonatomic) char correctsForAutorotation;                       //@synthesize correctsForAutorotation=_correctsForAutorotation - In the implementation block
@property (nonatomic,retain) MPDocument * document; 
@property (assign,nonatomic) double time; 
@property (nonatomic,readonly) double timeRemaining; 
@property (nonatomic,readonly) char isPlaying; 
@property (assign,nonatomic) double volume; 
@property (assign,nonatomic) char stopWithVideo; 
@property (assign,nonatomic) char displaysFPS; 
@property (nonatomic,readonly) MRRenderer * renderer; 
@property (assign,nonatomic) char enableSlideDidChangeNotification;              //@synthesize enableSlideDidChangeNotification=_enableSlideDidChangeNotification - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)releaseResources;
+(char)shouldRenderOnBackgroundThread;
+(id)layerWithDocument:(id)arg1 size:(CGSize)arg2 ;
+(id)layerWithDocument:(id)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(id)init;
-(void)cleanup;
-(double)volume;
-(void)pause;
-(char)isReadonly;
-(double)framesPerSecond;
-(void)setSuspended:(char)arg1 ;
-(char)isAsynchronous;
-(MPDocument *)document;
-(double)time;
-(void)setBounds:(CGRect)arg1 ;
-(void)setContentsScale:(double)arg1 ;
-(void)play;
-(void)setDocument:(MPDocument *)arg1 ;
-(char)isPlaying;
-(void)setVolume:(double)arg1 ;
-(MRRenderer *)renderer;
-(CGLPixelFormatObjectRef)copyCGLPixelFormatForDisplayMask:(unsigned)arg1 ;
-(CGLContextObject*)copyCGLContextForPixelFormat:(CGLPixelFormatObjectRef)arg1 ;
-(char)canDrawInCGLContext:(CGLContextObject*)arg1 pixelFormat:(CGLPixelFormatObjectRef)arg2 forLayerTime:(double)arg3 displayTime:(const SCD_Struct_MR31*)arg4 ;
-(void)drawInCGLContext:(CGLContextObject*)arg1 pixelFormat:(CGLPixelFormatObjectRef)arg2 forLayerTime:(double)arg3 displayTime:(const SCD_Struct_MR31*)arg4 ;
-(void)releaseCGLContext:(CGLContextObject*)arg1 ;
-(void)setTime:(double)arg1 ;
-(double)relativeTime;
-(double)timeRemaining;
-(void)goBack;
-(void)togglePlayback;
-(void)beginGesture:(id)arg1 ;
-(void)setInteractivityIsEnabled:(char)arg1 ;
-(void)setEnableSlideDidChangeNotification:(char)arg1 ;
-(void)warmupRenderer;
-(void)gotoSlide:(id)arg1 ;
-(void)gotoText:(id)arg1 ;
-(void)gotoPreviousSlide:(char)arg1 ;
-(void)gotoNextSlide:(char)arg1 ;
-(void)endMorphing;
-(void)goForth;
-(char)effect:(id)arg1 requestedNumberOfSlides:(unsigned long long)arg2 firstSlideIndexStillNeeded:(unsigned long long)arg3 ;
-(void)requestRendering:(char)arg1 ;
-(char)nearingEndForSerializer:(id)arg1 ;
-(void)setBailTimeWatcher:(char)arg1 ;
-(void)watcherThread:(id)arg1 ;
-(id)_currentEffectContainer;
-(void)moveToEffectContainer:(id)arg1 withStartOffset:(double)arg2 toStopOffset:(double)arg3 blocking:(char)arg4 ;
-(long long)_mainLayerIndex;
-(id)displayedEffectContainers;
-(id)_firstEffectContainer;
-(id)_effectContainerForTime:(double)arg1 ;
-(void)callbackThread:(id)arg1 ;
-(char)bailTimeWatcher;
-(id)_currentEffectLayer;
-(void)gotoNextSlideLegacy;
-(void)gotoPreviousSlideLegacy;
-(char)isAboutToPlay;
-(double)startTimeForSlide:(id)arg1 ;
-(double)timeForSlide:(id)arg1 ;
-(id)currentSlide;
-(void)gotoSlideLegacy:(id)arg1 ;
-(void)moveToNextEffectContainer;
-(id)currentSlides;
-(void)moveToPreviousEffectContainer;
-(id)lastSlideChange;
-(void)setLastSlideChange:(id)arg1 ;
-(void)_postNotificationForSlideChange:(id)arg1 ;
-(double)relativeTimeForBackgroundAudio;
-(double)relativeTimeForLayer:(id)arg1 ;
-(void)moveToTitleSlide;
-(void)moveToSubtitleForSlide:(id)arg1 ;
-(char)isInTransition;
-(void)whenTransitionIsFinishedSendAction:(SEL)arg1 toTarget:(id)arg2 ;
-(void)removeEffectContainersBeforeTime:(double)arg1 ;
-(void)gotoNextSlide;
-(void)gotoPreviousSlide;
-(void)_slideDidAppear:(id)arg1 ;
-(void)setIsAboutToPlay:(char)arg1 ;
-(char)beginLiveUpdateForHitBlob:(id)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toHitBlob:(id)arg2 ;
-(char)endLiveUpdateForHitBlob:(id)arg1 ;
-(void)endGesture:(id)arg1 ;
-(id)blobHitAtPoint:(CGPoint)arg1 fromObjectsForObjectIDs:(id)arg2 localPoint:(CGPoint*)arg3 ;
-(char)getOnScreenVertices:(CGPoint)arg1 forHitBlob:(id)arg2 ;
-(void)doGesture:(id)arg1 ;
-(void)cancelGesture:(id)arg1 ;
-(char)updateFramebuffer;
-(void)updateSizeOfRenderer:(id)arg1 ;
-(void)didLiveChanged:(id)arg1 ;
-(void)didAddEffects:(id)arg1 ;
-(void)didApplyStyle:(id)arg1 ;
-(void)setupFaceDetection;
-(void)pauseWhenStill;
-(char)displaysFPS;
-(void)setDisplaysFPS:(char)arg1 ;
-(void)beginMorphingToAspectRatio:(double)arg1 andOrientation:(int)arg2 withDuration:(double)arg3 switchToDocument:(id)arg4 ;
-(char)_nearingEndForSerializer:(id)arg1 ;
-(char)_effectRequestedSlides:(id)arg1 ;
-(void)touchesBegan:(id)arg1 ;
-(void)touchesMoved:(id)arg1 ;
-(void)touchesEnded:(id)arg1 ;
-(void)touchesCancelled:(id)arg1 ;
-(void)gotoBeginning;
-(void)gotoEnd;
-(void)nextFrame;
-(void)prevFrame;
-(CGImageRef)snapshotAsCGImageForTime:(double)arg1 withSize:(CGSize)arg2 ;
-(CGImageRef)snapshotAsCGImage;
-(char)stopWithVideo;
-(void)setStopWithVideo:(char)arg1 ;
-(char)enableSlideDidChangeNotification;
-(void)setRendererSizeIsLocked:(char)arg1 ;
-(void)setFramesPerSecond:(double)arg1 ;
-(void)_reauthorForAspectRatioChange;
-(void)aspectRatioChangedTo:(id)arg1 ;
-(void)beginEditingOfText:(id)arg1 ;
-(void)setIsReadonly:(char)arg1 ;
-(char)slidesAreReadonly;
-(void)setSlidesAreReadonly:(char)arg1 ;
-(char)rendererSizeIsLocked;
-(char)correctsForAutorotation;
-(void)setCorrectsForAutorotation:(char)arg1 ;
-(char)interactivityIsEnabled;
-(void)destroyFramebuffer;
@end

