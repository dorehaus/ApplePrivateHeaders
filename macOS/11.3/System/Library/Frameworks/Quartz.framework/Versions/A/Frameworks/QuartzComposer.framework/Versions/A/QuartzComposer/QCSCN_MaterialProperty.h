/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <libobjc.A.dylib/QCSCN_Animatable.h>

@interface QCSCN_MaterialProperty : NSObject <QCSCN_Animatable> {

	id _reserved;

}

@property (nonatomic,retain) id contents; 
@property (assign,nonatomic) int minificationFilter; 
@property (assign,nonatomic) int magnificationFilter; 
@property (assign,nonatomic) int mipFilter; 
@property (assign,nonatomic) CATransform3D contentsTransform; 
@property (assign,nonatomic) int wrapS; 
@property (assign,nonatomic) int wrapT; 
@property (nonatomic,retain) id borderColor; 
@property (assign,nonatomic) long long mappingChannel; 
+(char)isSelectorExcludedFromWebScript:(SEL)arg1 ;
+(char)isKeyExcludedFromWebScript:(const char*)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)propertyKeys;
+(id)argumentsForSelector:(SEL)arg1 ;
+(Class)typeForProperty:(id)arg1 ;
+(int)_baseTypeForProperty:(id)arg1 ;
+(_C3DImage*)createC3DImageFromImage:(id)arg1 ;
+(id)copyImageFromC3DImage:(_C3DImage*)arg1 ;
+(_C3DImage*)_createC3DImageFromImageData:(id)arg1 typeID:(unsigned long long)arg2 ;
+(id)_copyImageFromC3DImage:(_C3DImage*)arg1 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(void)setImage:(id)arg1 ;
-(int)mipFilter;
-(id)contents;
-(id)parent;
-(id)borderColor;
-(id)_contents;
-(void)setContent:(id)arg1 ;
-(id)content;
-(id)slotName;
-(id)layer;
-(id)image;
-(void)setLayer:(id)arg1 ;
-(void)setContents:(id)arg1 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)setBorderColor:(id)arg1 ;
-(id)color;
-(void)setColor:(id)arg1 ;
-(id)animationForKey:(id)arg1 ;
-(void)setMinificationFilter:(int)arg1 ;
-(void)removeAnimationForKey:(id)arg1 ;
-(void)setContentsTransform:(CATransform3D)arg1 ;
-(id)attachment;
-(void)setAttachment:(id)arg1 ;
-(void)setMagnificationFilter:(int)arg1 ;
-(id)animationKeys;
-(void)removeAllAnimations;
-(int)minificationFilter;
-(int)magnificationFilter;
-(void)setMipFilter:(int)arg1 ;
-(int)propertyType;
-(_C3DAnimationTarget*)targetForKey:(id)arg1 ;
-(id)propertyKeys;
-(void)_setColor:(id)arg1 ;
-(CATransform3D)contentsTransform;
-(_C3DScene*)sceneRef;
-(void)_syncObjCModel;
-(void)removeAllAnimationsBeforeDying:(void*)arg1 ;
-(void)_syncObjCAnimations;
-(_C3DAnimationManager*)animationManager;
-(void)_pauseAnimation:(char)arg1 forKey:(id)arg2 ;
-(void)addAnimation:(id)arg1 ;
-(void)pauseAnimationForKey:(id)arg1 ;
-(void)resumeAnimationForKey:(id)arg1 ;
-(void)__removeAnimationForKey:(id)arg1 ;
-(void)parentWillDie:(id)arg1 ;
-(_C3DEffect*)effectRef;
-(_C3DEffectCommonProfile*)commonProfile;
-(id)initWithParent:(id)arg1 propertyType:(int)arg2 ;
-(void)_setC3DImageRef:(_C3DImage*)arg1 ;
-(id)presentationMaterialProperty;
-(int)wrapS;
-(void)setWrapS:(int)arg1 ;
-(int)wrapT;
-(void)setWrapT:(int)arg1 ;
-(id)proceduralContents;
-(void)setProceduralContents:(id)arg1 ;
-(void*)__CFObject;
-(id)_animationPathForKey:(id)arg1 ;
-(_C3DTextureSampler*)textureSampler;
-(long long)_presentationMappingChannel;
-(id)initPresentationMaterialPropertyWithModelProperty:(id)arg1 ;
-(C3DColor4)borderColor4;
-(void)_layerDidChange:(id)arg1 ;
-(_C3DImage*)getC3DImageRef;
-(C3DColor4)color4;
-(long long)mappingChannel;
-(void)setMappingChannel:(long long)arg1 ;
-(id)pvrtcData;
-(void)_updateMaterialBorderColor:(void*)arg1 ;
-(void)_updateMaterialFilters:(void*)arg1 ;
-(void)_updateMaterialPropertyTransform:(void*)arg1 ;
-(void)_updateMaterialAttachment:(void*)arg1 ;
-(void)_updateMaterialLayer:(void*)arg1 ;
-(void)_updateMaterialProceduralContents:(void*)arg1 ;
-(void)_updateMaterialImage:(void*)arg1 ;
-(void)_updateMaterialColor:(void*)arg1 ;
@end

