/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CUIPSDLayerEffectComponent.h>

@class CUIColor;

@interface CUIPSDLayerEffectInnerShadow : CUIPSDLayerEffectComponent {

	int _blendMode;
	double _opacity;
	CUIColor* _color;
	short _angle;
	unsigned long long _distance;
	unsigned long long _blurSize;

}

@property (assign) int blendMode;                            //@synthesize blendMode=_blendMode - In the implementation block
@property (assign) double opacity;                           //@synthesize opacity=_opacity - In the implementation block
@property (retain) CUIColor * color;                         //@synthesize color=_color - In the implementation block
@property (assign) short angle;                              //@synthesize angle=_angle - In the implementation block
@property (assign) unsigned long long distance;              //@synthesize distance=_distance - In the implementation block
@property (assign) unsigned long long blurSize;              //@synthesize blurSize=_blurSize - In the implementation block
-(char)updateLayerEffectPreset:(id)arg1 error:(id*)arg2 ;
-(id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)dealloc;
-(id)init;
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
-(void)setOpacity:(double)arg1 ;
-(CUIColor *)color;
-(void)setColor:(CUIColor *)arg1 ;
-(double)opacity;
-(unsigned long long)distance;
-(void)setDistance:(unsigned long long)arg1 ;
-(short)angle;
-(void)setAngle:(short)arg1 ;
-(unsigned)effectType;
-(unsigned long long)blurSize;
-(void)setBlurSize:(unsigned long long)arg1 ;
@end

