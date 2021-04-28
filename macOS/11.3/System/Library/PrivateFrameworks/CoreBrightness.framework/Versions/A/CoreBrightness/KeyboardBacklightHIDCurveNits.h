/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/Versions/A/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreBrightness/KeyboardBacklightHIDCurve.h>

@interface KeyboardBacklightHIDCurveNits : KeyboardBacklightHIDCurve

@property (readonly) float level; 
-(void)dealloc;
-(float)level;
-(void)setBrightness:(float)arg1 ;
-(id)initWithQueue:(id)arg1 device:(id)arg2 ;
-(float)maxCapableNits;
-(float)maxLevelPercentage;
-(float)minCapableNits;
-(float)convertNitsToLevelPercentage:(float)arg1 ;
-(float)brightness;
-(void)setBrightness:(float)arg1 withFadeSpeed:(int)arg2 commit:(char)arg3 ;
@end

