/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <libobjc.A.dylib/QCSCN_Animatable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface QCSCN_Light : NSObject <QCSCN_Animatable, NSCopying> {

	id _reserved;

}

@property (nonatomic,copy) NSString * type; 
@property (nonatomic,retain) id color; 
@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) char castsShadow; 
@property (nonatomic,retain) id shadowColor; 
@property (assign,nonatomic) double shadowRadius; 
+(id)light;
+(char)isSelectorExcludedFromWebScript:(SEL)arg1 ;
+(char)isKeyExcludedFromWebScript:(const char*)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)propertyKeys;
+(id)argumentsForSelector:(SEL)arg1 ;
+(Class)typeForProperty:(id)arg1 ;
+(int)_baseTypeForProperty:(id)arg1 ;
+(id)lightWithLightRef:(_C3DLight*)arg1 ;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(id)init;
-(NSString *)name;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)setName:(NSString *)arg1 ;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)shadowColor;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(id)color;
-(void)setColor:(id)arg1 ;
-(id)animationForKey:(id)arg1 ;
-(void)setShadowRadius:(double)arg1 ;
-(void)setShadowColor:(id)arg1 ;
-(double)shadowRadius;
-(void)removeAnimationForKey:(id)arg1 ;
-(id)animationKeys;
-(void)removeAllAnimations;
-(id)attributeForKey:(id)arg1 ;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(_C3DAnimationTarget*)targetForKey:(id)arg1 ;
-(id)propertyKeys;
-(_C3DScene*)sceneRef;
-(void)_syncObjCModel;
-(void)removeAllAnimationsBeforeDying:(void*)arg1 ;
-(void)_syncObjCAnimations;
-(void)_sceneRefDidChange;
-(_C3DAnimationManager*)animationManager;
-(void)_pauseAnimation:(char)arg1 forKey:(id)arg2 ;
-(void)_syncEntityObjCModel;
-(double)zNear;
-(void)setZNear:(double)arg1 ;
-(double)zFar;
-(void)setZFar:(double)arg1 ;
-(void)addAnimation:(id)arg1 ;
-(void)pauseAnimationForKey:(id)arg1 ;
-(void)resumeAnimationForKey:(id)arg1 ;
-(void)__removeAnimationForKey:(id)arg1 ;
-(id)initWithLightRef:(_C3DLight*)arg1 ;
-(id)initPresentationLightWithLightRef:(_C3DLight*)arg1 ;
-(_C3DLight*)lightRef;
-(char)castsShadow;
-(void)setCastsShadow:(char)arg1 ;
-(id)presentationLight;
-(void)setAttenuationStart:(double)arg1 ;
-(double)attenuationStart;
-(void)setAttenuationEnd:(double)arg1 ;
-(double)attenuationEnd;
-(void)setAttenuationFalloffExponent:(double)arg1 ;
-(double)attenuationFalloffExponent;
-(void)setSpotInnerAngle:(double)arg1 ;
-(double)spotInnerAngle;
-(void)setSpotOuterAngle:(double)arg1 ;
-(double)spotOuterAngle;
-(void)setSpotFalloffExponent:(double)arg1 ;
-(double)spotFalloffExponent;
-(void*)__CFObject;
-(void)setSceneRef:(_C3DScene*)arg1 ;
@end

