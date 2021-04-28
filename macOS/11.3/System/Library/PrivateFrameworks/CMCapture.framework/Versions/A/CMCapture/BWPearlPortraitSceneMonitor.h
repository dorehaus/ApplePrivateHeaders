/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWPortraitSceneMonitor.h>

@class NSString;

@interface BWPearlPortraitSceneMonitor : NSObject <BWPortraitSceneMonitor> {

	int _numberOfFramesToWaitForAEAndLTMToStabilize;
	float _sdofDepthQualitySmoothingFactor;
	float _luxLevelSmoothingFactor;
	int _numberOfDisabledFramesInARow;
	int _numberOfFramesToStayEnabledThreshold;
	unsigned short _sdofTooBrightLuxLevelThreshold;
	unsigned short _sdofTooBrightMaxLuxLevelThreshold;
	float _sdofTooBrightDepthQualityMinThreshold;
	float _sdofDepthQualityKCount;
	float _sdofTooCloseDepthDistanceThreshold;
	float _sdofTooFarDepthDistanceThreshold;
	float _sdofTooBrightTooFarDepthDistanceThreshold;
	int _sdofNumberOfFramesSinceLastFaceThreshold;
	float _stageTooBrightDepthQualityThreshold;
	float _stageTooCloseDepthDistanceThreshold;
	float _stageTooFarDepthDistanceThreshold;
	float _stageBackgroundTooFarDepthQualityThreshold;
	unsigned short _stageBackgroundTooFarLuxLevelThreshold;
	int _stageFaceNumberOfFramesSinceLastFaceThreshold;
	char _disablePreviewWhenTooBright;
	float _closeDepthDistanceAverage;
	float _sdofDepthQuality;
	float _sdofDepthQualityFiltered;
	float _stageDepthQuality;
	float _luxLevelFiltered;
	char _aeStableAfterStartStreaming;
	int _sdofNumFramesSinceAEBecameStable;
	char _portraitSceneMonitoringRequiresStageThresholds;
	char _depthSensorOccluded;
	char _stageFaceDetected;
	int _numberOfFramesSinceLastFace;
	char _stageFaceHasBeenSeen;
	int _stageMostRecentFacesCount;

}

@property (assign,nonatomic) char portraitSceneMonitoringRequiresStageThresholds;              //@synthesize portraitSceneMonitoringRequiresStageThresholds=_portraitSceneMonitoringRequiresStageThresholds - In the implementation block
@property (nonatomic,readonly) float focusDistanceToMaxAllowedFocusDistanceRatio; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)dealloc;
-(void)setAutoFocusInProgress:(char)arg1 focusLocked:(char)arg2 oneShotFocusScanInProgress:(char)arg3 ;
-(void)focusScanDidComplete;
-(void)setSDOFBackgroundShiftSum:(float)arg1 invalidShiftRatio:(float)arg2 closeCanonicalDisparityAverage:(float)arg3 faceCanonicalDisparityAverages:(id)arg4 erodedForegroundRatio:(float)arg5 foregroundRatio:(float)arg6 occluded:(char)arg7 faces:(id)arg8 ;
-(char)resolveSDOFStatusWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 frameStatisticsByPortType:(id)arg2 sceneFlags:(unsigned long long)arg3 flashWillFire:(char)arg4 digitalFlashWillFire:(char)arg5 effectStatus:(int*)arg6 stagePreviewStatus:(int*)arg7 ;
-(char)portraitSceneMonitoringRequiresStageThresholds;
-(void)setPortraitSceneMonitoringRequiresStageThresholds:(char)arg1 ;
-(float)focusDistanceToMaxAllowedFocusDistanceRatio;
-(id)initWithTuningParameters:(id)arg1 attachDebugFrameStatistics:(char)arg2 ;
@end

