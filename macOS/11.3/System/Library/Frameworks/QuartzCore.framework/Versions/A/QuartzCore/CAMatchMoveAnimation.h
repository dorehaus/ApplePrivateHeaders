/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAAnimation.h>

@class CALayer, NSString, NSArray;

@interface CAMatchMoveAnimation : CAAnimation

@property (__weak) CALayer * sourceLayer; 
@property (assign) unsigned long long sourceLayerRenderId; 
@property (assign) unsigned sourceContextId; 
@property (copy) NSString * keyPath; 
@property (assign) char targetsSuperlayer; 
@property (copy) NSArray * sourcePoints; 
@property (assign) char usesNormalizedCoordinates; 
@property (assign) char appliesX; 
@property (assign) char appliesY; 
@property (assign) char appliesScale; 
@property (assign) char appliesRotation; 
@property (getter=isAdditive) char additive; 
+(id)defaultValueForKey:(id)arg1 ;
+(id)CA_attributes;
-(char)CA_validateValue:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)sourceLayerRenderId;
-(unsigned)_propertyFlagsForLayer:(id)arg1 ;
-(Animation*)_copyRenderAnimationForLayer:(id)arg1 ;
-(char)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(char)targetsSuperlayer;
-(NSArray *)sourcePoints;
-(char)usesNormalizedCoordinates;
-(char)appliesX;
-(char)appliesY;
-(char)appliesScale;
-(char)appliesRotation;
-(void)setAppliesX:(char)arg1 ;
-(void)setAppliesY:(char)arg1 ;
-(NSString *)keyPath;
-(void)setKeyPath:(NSString *)arg1 ;
-(void)setAdditive:(char)arg1 ;
-(void)setSourceLayer:(CALayer *)arg1 ;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(char)isAdditive;
-(void)setSourceLayerRenderId:(unsigned long long)arg1 ;
-(void)setSourceContextId:(unsigned)arg1 ;
-(void)setSourcePoints:(NSArray *)arg1 ;
-(CALayer *)sourceLayer;
-(unsigned)sourceContextId;
-(void)setTargetsSuperlayer:(char)arg1 ;
-(void)setAppliesRotation:(char)arg1 ;
-(void)setAppliesScale:(char)arg1 ;
-(void)setUsesNormalizedCoordinates:(char)arg1 ;
@end

