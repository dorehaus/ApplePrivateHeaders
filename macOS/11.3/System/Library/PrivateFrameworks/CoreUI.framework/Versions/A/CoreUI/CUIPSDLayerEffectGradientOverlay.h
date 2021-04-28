/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CUIPSDLayerEffectComponent.h>

@class CUIPSDGradient;

@interface CUIPSDLayerEffectGradientOverlay : CUIPSDLayerEffectComponent {

	CUIPSDGradient* _gradient;

}

@property (retain) CUIPSDGradient * gradient;              //@synthesize gradient=_gradient - In the implementation block
-(char)updateLayerEffectPreset:(id)arg1 error:(id*)arg2 ;
-(id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)dealloc;
-(id)init;
-(void)setGradient:(CUIPSDGradient *)arg1 ;
-(CUIPSDGradient *)gradient;
-(unsigned)effectType;
@end

