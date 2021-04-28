/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CMCapture/CMCapture-Structs.h>
@class NSArray;

@interface BWIrisDiscontinuity : NSObject {

	SCD_Struct_Fi8 _discontinuityTime;
	SCD_Struct_Fi8 _duration;
	NSArray* _timeSkews;
	NSArray* _recipe;
	long long _recipeMinDisplacement;
	long long _recipeMaxDisplacement;
	int _recipeIdentifier;
	SCD_Struct_Fi8 _targetFrameDuration;
	char _onlyRetime;
	char _haveSeenNonPositiveDisplacement;
	char _generateIFrames;
	char _minDisplacementIFrameRequested;

}

@property (readonly) SCD_Struct_Fi8 time; 
@property (readonly) SCD_Struct_Fi8 targetFrameDuration; 
+(int)maximumNumberOfConsecutiveDroppedFrames;
-(void)dealloc;
-(SCD_Struct_Fi8)time;
-(long long)_offsetIndexFromDiscontinuityForTime:(SCD_Struct_Fi8)arg1 ;
-(id)initWithTime:(SCD_Struct_Fi8)arg1 duration:(SCD_Struct_Fi8)arg2 targetFrameDuration:(SCD_Struct_Fi8)arg3 onlyRetime:(char)arg4 generateIFrames:(char)arg5 timeSkews:(id)arg6 ;
-(void)resetWithNewTimeSkews:(id)arg1 ;
-(char)containsVideoBufferTime:(SCD_Struct_Fi8)arg1 ;
-(char)shouldKeepBufferWithTime:(SCD_Struct_Fi8)arg1 nextAdjustedTimeInOut:(SCD_Struct_Fi8*)arg2 discontinuityFrameAttributesOut:(SCD_Struct_BW47*)arg3 ;
-(SCD_Struct_Fi8)targetFrameDuration;
@end

