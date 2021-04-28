/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/CABrightnessControl.h>

@class NSUUID, NSDictionary, NSString, NSSet;

@interface CAWindowServerDisplay : NSObject <CABrightnessControl> {

	CAWindowServerDisplayImpl* _impl;
	char _mirroringEnabled;

}

@property (readonly) CGRect bounds; 
@property (readonly) CGSize nativeSize; 
@property (assign) double scale; 
@property (assign) CGSize scales; 
@property (assign) char scalePreservesAspect; 
@property (readonly) double minimumScale; 
@property (readonly) double maximumScale; 
@property (readonly) CGSize panelPhysicalSize; 
@property (readonly) unsigned long long panelPointsPerInch; 
@property (readonly) NSString * name; 
@property (readonly) NSString * deviceName; 
@property (readonly) unsigned displayId; 
@property (readonly) long long displayType; 
@property (readonly) NSString * uniqueId; 
@property (readonly) unsigned rendererFlags; 
@property (readonly) NSSet * clones; 
@property (readonly) CAWindowServerDisplay * cloneMaster; 
@property (getter=isBlanked) char blanked; 
@property (getter=isFlipBookEnabled) char flipBookEnabled; 
@property (copy) NSString * orientation; 
@property (copy) NSString * overscanAdjustment; 
@property (assign) double overscanAmount; 
@property (assign) CGSize overscanAmounts; 
@property (assign) char invertsColors; 
@property (assign) char allowsExtendedDynamicRange; 
@property (getter=isGrayscale) char grayscale; 
@property (assign) float contrast; 
@property (assign) float maximumBrightness; 
@property (readonly) float maximumLuminance; 
@property (assign) float nits; 
@property (assign) float idealRefreshRate; 
@property (assign) char usesPreferredModeRefreshRate; 
@property (nonatomic,copy) NSString * colorMode; 
@property (assign) char allowsVirtualModes; 
@property (getter=isMirroringEnabled) char mirroringEnabled;                       //@synthesize mirroringEnabled=_mirroringEnabled - In the implementation block
@property (readonly) char supportsExtendedColors; 
@property (assign) long long tag; 
@property (assign) int processId; 
@property (copy) NSString * TVMode; 
@property (copy) NSString * TVSignalType; 
@property (copy) id hotPlugCallback; 
@property (copy) id brightnessCallback; 
@property (getter=isSecure) char secure; 
@property (assign) char allowsDisplayCompositing; 
@property (readonly) double nextWakeupTime; 
@property (copy) id frameInfoCallback; 
@property (readonly) void* detachingDisplay; 
@property (getter=isDetaching,readonly) char detaching; 
@property (readonly) CGRect detachingRect; 
@property (readonly) unsigned long long vblDelta; 
@property (readonly) unsigned long long previousVBL; 
@property (assign) char disablesUpdates; 
@property (assign) char disabled; 
@property (readonly) SCD_Struct_CA32 whitepoint; 
@property (readonly) SCD_Struct_CA33 chromaticities; 
@property (readonly) float gamma; 
@property (readonly) long long transportType; 
@property (assign) char enabled; 
@property (readonly) unsigned framebufferFormat; 
@property (readonly) char needsUpdate; 
@property (readonly) char supportsCursor; 
@property (readonly) CGSize maximumCursorSize; 
@property (assign) CGPoint cursorPosition; 
@property (copy) NSDictionary * cursorDictionary; 
@property (assign) char cursorHidden; 
@property (assign) char cursorEnabled; 
@property (readonly) char tripleBuffered; 
@property (retain) IOSurfaceRef cursorSurface; 
@property (readonly) CGSize minimumVisibleCursorSize; 
@property (readonly) char wantedToDetach; 
@property (readonly) unsigned long long minimumSourceRectSize; 
@property (readonly) unsigned long long maximumSourceRectWidth; 
@property (readonly) unsigned long long maximumSourceRectPixels; 
@property (nonatomic,readonly) NSDictionary * brightnessCapabilities; 
@property (readonly) char supportsColorSpaces; 
@property (retain) CGColorSpaceRef blendColorSpace; 
@property (retain) CGColorSpaceRef displayColorSpace; 
@property (assign) CGColorTRC* systemGamma; 
@property (assign) CGColorTRC* blackpointAdaptation; 
@property (nonatomic,readonly) unsigned long long productId; 
@property (nonatomic,readonly) unsigned long long vendorId; 
@property (nonatomic,readonly) NSUUID * uuid; 
@property (nonatomic,readonly) char brightnessAvailable; 
@property (nonatomic,readonly) char whitePointAvailable; 
@property (nonatomic,readonly) char whitePointD50XYZ; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)allowsVirtualModes;
-(double)overscanAmount;
-(void)setAllowsVirtualModes:(char)arg1 ;
-(unsigned)rendererFlags;
-(unsigned)clientPortOfContextId:(unsigned)arg1 ;
-(unsigned)taskNamePortOfContextId:(unsigned)arg1 ;
-(char)isMirroringEnabled;
-(char)scalePreservesAspect;
-(unsigned long long)panelPointsPerInch;
-(char)invertsColors;
-(char)allowsExtendedDynamicRange;
-(float)nits;
-(float)idealRefreshRate;
-(char)usesPreferredModeRefreshRate;
-(NSString *)TVMode;
-(NSString *)TVSignalType;
-(id)hotPlugCallback;
-(id)brightnessCallback;
-(id)frameInfoCallback;
-(char)disablesUpdates;
-(NSDictionary *)cursorDictionary;
-(char)cursorEnabled;
-(IOSurfaceRef)cursorSurface;
-(CGSize)minimumVisibleCursorSize;
-(char)wantedToDetach;
-(CGColorSpaceRef)blendColorSpace;
-(CGColorSpaceRef)displayColorSpace;
-(CGColorTRC*)systemGamma;
-(CGColorTRC*)blackpointAdaptation;
-(id)_initWithCADisplayServer:(Server*)arg1 ;
-(void)setScales:(CGSize)arg1 ;
-(void)setScalePreservesAspect:(char)arg1 ;
-(unsigned)contextIdAtPosition:(CGPoint)arg1 ;
-(unsigned)contextIdAtPosition:(CGPoint)arg1 excludingContextIds:(id)arg2 ;
-(id)hitTestAtPosition:(CGPoint)arg1 options:(id)arg2 ;
-(unsigned)clientPortAtPosition:(CGPoint)arg1 ;
-(CATransform3D)transformFromLayerId:(unsigned long long)arg1 inContextId:(unsigned)arg2 ;
-(void)addClone:(id)arg1 options:(id)arg2 ;
-(void)setBlanked:(char)arg1 ;
-(char)isBlanked;
-(void)willUnblank;
-(void)setCalibrationPhase:(unsigned)arg1 forIdentifier:(unsigned)arg2 ;
-(void)setFlipBookEnabled:(char)arg1 ;
-(char)isFlipBookEnabled;
-(void)setOverscanAmount:(double)arg1 ;
-(void)setAllowsExtendedDynamicRange:(char)arg1 ;
-(char)isGrayscale;
-(void)abortColorMatrixRamp:(float*)arg1 scale:(float*)arg2 ;
-(void)setContrastEnhancer:(float)arg1 rampDuration:(double)arg2 ;
-(void)abortContrastEnhancerRamp:(float*)arg1 ;
-(void)setNits:(float)arg1 ;
-(void)setMaximumBrightness:(float)arg1 ;
-(void)setMinimumRefreshRate:(float)arg1 ;
-(float)minimumRefreshRate;
-(void)setMaximumRefreshRate:(float)arg1 ;
-(void)setIdealRefreshRate:(float)arg1 ;
-(void)setUsesPreferredModeRefreshRate:(char)arg1 ;
-(void)setTVMode:(NSString *)arg1 ;
-(void)setTVSignalType:(NSString *)arg1 ;
-(void)emitBrightnessError:(id*)arg1 ;
-(void)emitWhitePointError:(id*)arg1 ;
-(char)canUpdate:(char)arg1 ;
-(IOSurfaceRef)currentSurface:(char)arg1 ;
-(IOSurfaceRef)currentSurface:(char)arg1 protection:(unsigned long long)arg2 ;
-(IOSurfaceRef)currentSurface:(char)arg1 protection:(unsigned long long)arg2 needsClear:(char*)arg3 ;
-(IOSurfaceRef)currentSurface:(char)arg1 protection:(unsigned long long)arg2 needsClear:(char*)arg3 readOnly:(char*)arg4 ;
-(void)cancelAllSwaps;
-(unsigned)finishedUpdateSeed;
-(void)activateReplay;
-(void)setFrameInfoCallback:(id)arg1 ;
-(char)isDetaching;
-(void)setCursorSurface:(IOSurfaceRef)arg1 ;
-(void)copyDisplayTimingsFromDisplay:(id)arg1 ;
-(void)setSystemGamma:(CGColorTRC*)arg1 ;
-(void)setBlackpointAdaptation:(CGColorTRC*)arg1 ;
-(void)setGammaAdjustment:(CGColorTRC*)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(void)invalidate;
-(NSUUID *)uuid;
-(char)enabled;
-(void)setEnabled:(char)arg1 ;
-(char)needsUpdate;
-(void)update;
-(void)setTag:(long long)arg1 ;
-(void)setOrientation:(NSString *)arg1 ;
-(double)scale;
-(long long)tag;
-(CGRect)bounds;
-(NSString *)orientation;
-(void)setScale:(double)arg1 ;
-(char)disabled;
-(void)setDisabled:(char)arg1 ;
-(NSString *)deviceName;
-(long long)transportType;
-(long long)displayType;
-(NSString *)uniqueId;
-(NSString *)colorMode;
-(double)minimumScale;
-(double)maximumScale;
-(unsigned long long)minimumSourceRectSize;
-(unsigned long long)maximumSourceRectWidth;
-(unsigned long long)maximumSourceRectPixels;
-(CGSize)nativeSize;
-(unsigned)displayId;
-(unsigned long long)productId;
-(unsigned long long)vendorId;
-(char)brightnessAvailable;
-(char)whitePointAvailable;
-(char)whitePointD50XYZ;
-(float)maximumLuminance;
-(NSDictionary *)brightnessCapabilities;
-(void)registerForNotifications:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)unregisterNotificationBlocks;
-(void)setNotificationQueue:(id)arg1 ;
-(char)setWhitePoint:(SCD_Struct_CA31*)arg1 rampDuration:(double)arg2 error:(id*)arg3 ;
-(char)abortWhitePointRamp:(SCD_Struct_CA31*)arg1 error:(id*)arg2 ;
-(void)setSDRBrightness:(float)arg1 ;
-(void)setBrightnessLimit:(float)arg1 ;
-(void)setHeadroom:(float)arg1 ;
-(void)setPotentialHeadroom:(float)arg1 ;
-(void)setAmbient:(float)arg1 ;
-(char)commitBrightness:(id*)arg1 ;
-(id)notificationQueue;
-(void)postNotification:(id)arg1 payload:(id)arg2 ;
-(CGSize)panelPhysicalSize;
-(char)supportsColorSpaces;
-(SCD_Struct_CA33)chromaticities;
-(char)setDigitalModes:(id)arg1 withTimings:(id)arg2 ;
-(char)supportsExtendedColors;
-(SCD_Struct_CA32)whitepoint;
-(CGPoint)cursorPosition;
-(void)setCursorEnabled:(char)arg1 ;
-(void)setCursorHidden:(char)arg1 ;
-(void)setCursorPosition:(CGPoint)arg1 ;
-(void)setCursorDictionary:(NSDictionary *)arg1 ;
-(CGSize)maximumCursorSize;
-(char)supportsCursor;
-(char)finishExternalUpdate:(void*)arg1 withFlags:(unsigned)arg2 ;
-(IOSurfaceRef)currentSurfaceWithProtection:(unsigned long long)arg1 needsClear:(char*)arg2 ;
-(void)beginExternalUpdate:(void*)arg1 usingSoftwareRenderer:(char)arg2 ;
-(char)canUpdateWithFlags:(unsigned)arg1 ;
-(void)presentSurface:(IOSurfaceRef)arg1 withOptions:(id)arg2 ;
-(void*)detachingDisplay;
-(IOSurfaceRef)displayedSurface;
-(CGRect)detachingRect;
-(IOSurfaceRef)currentSurfaceWithProtection:(unsigned long long)arg1 needsClear:(char*)arg2 readOnly:(char*)arg3 ;
-(unsigned long long)vblDelta;
-(unsigned long long)previousVBL;
-(double)nextWakeupTime;
-(NSSet *)clones;
-(void)setAccessibilityColorMatrix:(float*)arg1 scale:(float)arg2 ;
-(void)setColorMatrix:(float*)arg1 scale:(float)arg2 rampDuration:(double)arg3 ;
-(unsigned long long)protectionLevel;
-(char)tripleBuffered;
-(CGSize)overscanAmounts;
-(void)setOverscanAmounts:(CGSize)arg1 ;
-(void)setOverscanAdjustment:(NSString *)arg1 ;
-(void)removeClone:(id)arg1 ;
-(CAWindowServerDisplay *)cloneMaster;
-(void)removeAllClones;
-(void)setContrast:(float)arg1 ;
-(void)setDisplayColorSpace:(CGColorSpaceRef)arg1 ;
-(void)setBlendColorSpace:(CGColorSpaceRef)arg1 ;
-(void)setInvertsColors:(char)arg1 ;
-(void)freeze;
-(void)setBrightnessCallback:(id)arg1 ;
-(void)setHotPlugCallback:(id)arg1 ;
-(void)setDisablesUpdates:(char)arg1 ;
-(unsigned)framebufferFormat;
-(void)addClone:(id)arg1 ;
-(IOSurfaceRef)acquireFrozenSurface;
-(float)gamma;
-(CGSize)scales;
-(char)isSecure;
-(int)processId;
-(NSString *)overscanAdjustment;
-(void)setSecure:(char)arg1 ;
-(void)setMirroringEnabled:(char)arg1 ;
-(void)setAllowsDisplayCompositing:(char)arg1 ;
-(char)allowsDisplayCompositing;
-(void)setColorMode:(NSString *)arg1 ;
-(float)contrast;
-(void)setGrayscale:(char)arg1 ;
-(float)maximumRefreshRate;
-(void)setProcessId:(int)arg1 ;
-(float)maximumBrightness;
-(CGPoint)convertPoint:(CGPoint)arg1 fromContextId:(unsigned)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toContextId:(unsigned)arg2 ;
-(char)cursorHidden;
@end

