/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GLKit.framework/Versions/A/GLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GLKit/GLKEffectProperty.h>

@interface GLKEffectPropertyFog : GLKEffectProperty {

	unsigned char _enabled;
	int _mode;
	GLKVector4 _color;
	float _density;
	float _start;
	float _end;
	int _modeLoc;
	int _colorLoc;
	int _densityLoc;
	int _startLoc;
	int _endLoc;

}

@property (assign,nonatomic) int modeLoc;                        //@synthesize modeLoc=_modeLoc - In the implementation block
@property (assign,nonatomic) int colorLoc;                       //@synthesize colorLoc=_colorLoc - In the implementation block
@property (assign,nonatomic) int densityLoc;                     //@synthesize densityLoc=_densityLoc - In the implementation block
@property (assign,nonatomic) int startLoc;                       //@synthesize startLoc=_startLoc - In the implementation block
@property (assign,nonatomic) int endLoc;                         //@synthesize endLoc=_endLoc - In the implementation block
@property (assign,nonatomic) unsigned char enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) int mode;                           //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) _GLKVector4 color;                  //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) float density;                      //@synthesize density=_density - In the implementation block
@property (assign,nonatomic) float start;                        //@synthesize start=_start - In the implementation block
@property (assign,nonatomic) float end;                          //@synthesize end=_end - In the implementation block
+(void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(unsigned char)enabled;
-(void)setEnabled:(unsigned char)arg1 ;
-(void)setMode:(int)arg1 ;
-(float)start;
-(int)mode;
-(float)end;
-(_GLKVector4)color;
-(void)setColor:(_GLKVector4)arg1 ;
-(void)setEnd:(float)arg1 ;
-(void)setStart:(float)arg1 ;
-(void)setDensity:(float)arg1 ;
-(float)density;
-(void)bind;
-(void)dirtyAllUniforms;
-(BOOL)includeVshShaderTextForRootNode:(id)arg1 ;
-(BOOL)includeFshShaderTextForRootNode:(id)arg1 ;
-(void)initializeMasks;
-(void)setShaderBindings;
-(int)modeLoc;
-(void)setModeLoc:(int)arg1 ;
-(int)colorLoc;
-(void)setColorLoc:(int)arg1 ;
-(int)densityLoc;
-(void)setDensityLoc:(int)arg1 ;
-(int)startLoc;
-(void)setStartLoc:(int)arg1 ;
-(int)endLoc;
-(void)setEndLoc:(int)arg1 ;
@end

