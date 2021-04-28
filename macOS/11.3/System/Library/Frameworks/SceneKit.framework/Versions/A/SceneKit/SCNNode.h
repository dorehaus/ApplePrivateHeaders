/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SCNAnimatable.h>
#import <libobjc.A.dylib/SCNActionable.h>
#import <libobjc.A.dylib/SCNBoundingVolume.h>

@class NSArray, NSMutableArray, SCNNodeComponent, SCNOrderedDictionary, NSMutableDictionary, NSString, SCNLight, SCNCamera, SCNGeometry, SCNSkinner, SCNMorpher, SCNPhysicsBody, SCNPhysicsField;

@interface SCNNode : NSObject <NSCopying, NSSecureCoding, SCNAnimatable, SCNActionable, SCNBoundingVolume> {

	_C3DNode* _node;
	SCNNode* _parent;
	NSMutableArray* _childNodes;
	SCNNode* _presentationInstance;
	unsigned _isPresentationInstance : 1;
	unsigned _lightLoaded : 1;
	unsigned _geometryLoaded : 1;
	unsigned _cameraLoaded : 1;
	unsigned _skinnerLoaded : 1;
	unsigned _morpherLoaded : 1;
	unsigned _paused : 1;
	unsigned _pausedByInheritance : 1;
	unsigned _affineUpToDate : 1;
	unsigned _transformUpToDate : 1;
	unsigned _hasPivot : 1;
	unsigned _isJoint : 1;
	unsigned _rotationRepresentation : 2;
	unsigned _movability : 1;
	unsigned _hidden : 1;
	unsigned _castsShadow : 1;
	unsigned _ignoreAnimationWhenCopying_tmp : 1;
	unsigned _focusBehavior : 2;
	unsigned _isFocusableOrHasFocusableChild : 1;
	unsigned _authoringEnvironmentNode : 1;
	unsigned _hasComponentBitmask : 11;
	SCD_Struct_SC60 _transform;
	 _position;
	SCD_Union_SC111 _rotation;
	 _scale;
	float _opacity;
	unsigned long long _categoryBitMask;
	long long _renderingOrder;
	SCNNodeComponent* _components;
	SCNOrderedDictionary* _actions;
	SCNOrderedDictionary* _animations;
	NSMutableDictionary* _bindings;
	SCNVector3* _fixedBoundingBoxExtrema;
	NSString* _name;
	NSMutableDictionary* _valueForKey;
	id _rendererDelegate;

}

@property (assign,nonatomic) long long authoringCameraType; 
@property (nonatomic,readonly) SCNVector3 worldUp; 
@property (nonatomic,readonly) SCNVector3 worldRight; 
@property (nonatomic,readonly) SCNVector3 worldFront; 
@property (assign,nonatomic) SCD_Struct_SC60 simdTransform; 
@property (assign,nonatomic)  simdPosition; 
@property (assign,nonatomic)  simdRotation; 
@property (assign,nonatomic) SCD_Struct_SC61 simdOrientation; 
@property (assign,nonatomic)  simdEulerAngles; 
@property (assign,nonatomic)  simdScale; 
@property (assign,nonatomic) SCD_Struct_SC60 simdPivot; 
@property (assign,nonatomic)  simdWorldPosition; 
@property (assign,nonatomic) SCD_Struct_SC61 simdWorldOrientation; 
@property (assign,nonatomic) SCD_Struct_SC60 simdWorldTransform; 
@property (nonatomic,readonly)  simdWorldUp; 
@property (nonatomic,readonly)  simdWorldRight; 
@property (nonatomic,readonly)  simdWorldFront; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) SCNLight * light; 
@property (nonatomic,retain) SCNCamera * camera; 
@property (nonatomic,retain) SCNGeometry * geometry; 
@property (nonatomic,retain) SCNSkinner * skinner; 
@property (nonatomic,retain) SCNMorpher * morpher; 
@property (assign,nonatomic) CATransform3D transform; 
@property (nonatomic,readonly) CATransform3D worldTransform; 
@property (assign,nonatomic) SCNVector3 position; 
@property (assign,nonatomic) SCNVector3 worldPosition; 
@property (assign,nonatomic) SCNVector4 rotation; 
@property (assign,nonatomic) SCNVector4 orientation; 
@property (assign,nonatomic) SCNVector4 worldOrientation; 
@property (assign,nonatomic) SCNVector3 eulerAngles; 
@property (assign,nonatomic) SCNVector3 scale; 
@property (assign,nonatomic) CATransform3D pivot; 
@property (assign,getter=isHidden,nonatomic) char hidden; 
@property (assign,nonatomic) double opacity; 
@property (assign,nonatomic) long long renderingOrder; 
@property (assign,nonatomic) char castsShadow; 
@property (assign,nonatomic) long long movabilityHint; 
@property (nonatomic,readonly) SCNNode * parentNode; 
@property (nonatomic,readonly) NSArray * childNodes; 
@property (nonatomic,retain) SCNPhysicsBody * physicsBody; 
@property (nonatomic,retain) SCNPhysicsField * physicsField; 
@property (copy) NSArray * constraints; 
@property (nonatomic,copy) NSArray * filters; 
@property (nonatomic,readonly) SCNNode * presentationNode; 
@property (assign,getter=isPaused,nonatomic) char paused; 
@property (assign,nonatomic) id<SCNNodeRendererDelegate> rendererDelegate; 
@property (assign,nonatomic) unsigned long long categoryBitMask; 
@property (assign,nonatomic) long long focusBehavior; 
@property (readonly) NSArray * animationKeys; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char hasActions; 
@property (nonatomic,readonly) NSArray * actionKeys; 
+(char)resolveInstanceMethod:(SEL)arg1 ;
+(char)supportsSecureCoding;
+(id)node;
+(id)nodeWithGeometry:(id)arg1 ;
+(id)keyPathsForValuesAffectingTransform;
+(id)nodeWithNodeRef:(_C3DNode*)arg1 ;
+(char)SCNUID_rangeForFloatProperty:(id)arg1 min:(double*)arg2 max:(double*)arg3 ;
+(Class)SCNUID_classForElementOfArray:(id)arg1 ;
+(id)SCNUID_creationOptions;
+(id)SCNUID_propertyOrdering;
+(id)SCNUID_instanciateWithOption:(id)arg1 ;
+(id)SCNUID_additionalProperties;
+(1)simdLocalUp;
+(1)simdLocalRight;
+(1)simdLocalFront;
+(id)nodeWithMDLObject:(id)arg1 masterObjects:(id)arg2 sceneNodes:(id)arg3 skinnedMeshes:(id)arg4 skelNodesMap:(SkelNodesMap*)arg5 asset:(id)arg6 options:(id)arg7 ;
+(id)nodeWithMDLObject:(id)arg1 ;
+(id)nodeWithMDLAsset:(id)arg1 ;
+(id)_dumpNodeTree:(id)arg1 tab:(id)arg2 ;
+(id)keyPathsForValuesAffectingPosition;
+(id)keyPathsForValuesAffectingRotation;
+(id)keyPathsForValuesAffectingEulerAngles;
+(id)keyPathsForValuesAffectingOrientation;
+(id)keyPathsForValuesAffectingScale;
+(SCNVector3)localUp;
+(SCNVector3)localRight;
+(SCNVector3)localFront;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id)init;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)isHidden;
-(void)setHidden:(char)arg1 ;
-(char)hidden;
-(void)setName:(NSString *)arg1 ;
-(id)identifier;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(void)setOrientation:(SCNVector4)arg1 ;
-(void)setIdentifier:(id)arg1 ;
-(SCNVector4)rotation;
-(CATransform3D)transform;
-(SCNVector3)scale;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)dump;
-(SCNVector3)position;
-(void)removeAllActions;
-(void)_setParent:(id)arg1 ;
-(void)setPosition:(SCNVector3)arg1 ;
-(char)isPaused;
-(SCNNode *)parentNode;
-(void)setFilters:(NSArray *)arg1 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)setOpacity:(double)arg1 ;
-(SCNVector4)orientation;
-(id)presentationInstance;
-(void)setScale:(SCNVector3)arg1 ;
-(id)animationForKey:(id)arg1 ;
-(unsigned long long)countOfChildNodes;
-(NSArray *)childNodes;
-(NSArray *)constraints;
-(void)removeAnimationForKey:(id)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(void)setTransform:(CATransform3D)arg1 ;
-(id)entity;
-(void)setEntity:(id)arg1 ;
-(void)setRotation:(SCNVector4)arg1 ;
-(char)_isEffectivelyHidden;
-(NSArray *)filters;
-(double)opacity;
-(id)clone;
-(NSArray *)animationKeys;
-(id)mutableChildNodes;
-(id)objectInChildNodesAtIndex:(unsigned long long)arg1 ;
-(void)renderInContext:(void*)arg1 ;
-(void)removeAllAnimations;
-(void)setPaused:(char)arg1 ;
-(_C3DNode*)nodeRef;
-(id)attributeForKey:(id)arg1 ;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(id)debugQuickLookObject;
-(id)actions;
-(void)setCamera:(SCNCamera *)arg1 ;
-(SCNCamera *)camera;
-(SCNGeometry *)geometry;
-(void)setGeometry:(SCNGeometry *)arg1 ;
-(void)setConstraints:(NSArray *)arg1 ;
-(void)_setPosition:;
-(id)scene;
-(void)addChildNode:(id)arg1 ;
-(SCNLight *)light;
-(void)setLight:(SCNLight *)arg1 ;
-(SCD_Struct_SC61)_quaternion;
-(char)isGizmo;
-(unsigned long long)indexOfChildNode:(id)arg1 ;
-(void)removeFromParentNode;
-(void)insertChildNode:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)enumerateChildNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)setWorldTransform:(CATransform3D)arg1 ;
-(CATransform3D)worldTransform;
-(void)setQuaternion:(SCNVector4)arg1 ;
-(SCNVector4)quaternion;
-(void)enumerateNodesUsingBlock:(/*^block*/id)arg1 ;
-(C3DSceneRef)sceneRef;
-(void)_syncObjCModel;
-(void)_syncObjCAnimations;
-(C3DAnimationManagerRef)animationManager;
-(void)_syncEntityObjCModel;
-(void)addAnimation:(id)arg1 ;
-(void)pauseAnimationForKey:(id)arg1 ;
-(void)resumeAnimationForKey:(id)arg1 ;
-(void)_registerAsObserver;
-(char)castsShadow;
-(void)setCastsShadow:(char)arg1 ;
-(id)initPresentationNodeWithNodeRef:(_C3DNode*)arg1 ;
-(SCNMorpher *)morpher;
-(SCNSkinner *)skinner;
-(void)_dump:(id)arg1 ;
-(void)_setAttributes:(id)arg1 ;
-(CATransform3D)pivot;
-(void)setPivot:(CATransform3D)arg1 ;
-(long long)renderingOrder;
-(void)setRenderingOrder:(long long)arg1 ;
-(id<SCNNodeRendererDelegate>)rendererDelegate;
-(void)setRendererDelegate:(id<SCNNodeRendererDelegate>)arg1 ;
-(void)setSkinner:(SCNSkinner *)arg1 ;
-(void)setMorpher:(SCNMorpher *)arg1 ;
-(id)_copyRecursively;
-(void)_initChildNodesArray;
-(id)initWithNodeRef:(_C3DNode*)arg1 ;
-(char)_childNodesPassingTest:(/*^block*/id)arg1 recursively:(char)arg2 output:(id)arg3 ;
-(id)childNodesPassingTest:(/*^block*/id)arg1 recursively:(char)arg2 ;
-(void)_childNodesWithAttribute:(Class)arg1 output:(id)arg2 recursively:(char)arg3 ;
-(id)objectInChildNodesWithAttribute:(id)arg1 firstOnly:(char)arg2 ;
-(id)__light;
-(id)__skinner;
-(id)__morpher;
-(id)__camera;
-(id)__geometry;
-(void)insertObject:(id)arg1 inChildNodesAtIndex:(unsigned long long)arg2 ;
-(char)canAddChildNode:(id)arg1 ;
-(void)__insertObject:(id)arg1 inChildNodesAtIndex:(unsigned long long)arg2 ;
-(void)__removeObjectFromChildNodesAtIndex:(unsigned long long)arg1 ;
-(void)removeObjectFromChildNodesAtIndex:(unsigned long long)arg1 ;
-(void)replaceObjectInChildNodesAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)replaceChildNode:(id)arg1 with:(id)arg2 ;
-(id)childNodeWithName:(id)arg1 ;
-(id)jsChildNodesWithAttribute:(id)arg1 ;
-(char)isPresentationInstance;
-(SCNNode *)presentationNode;
-(id)objectInChildNodesWithName:(id)arg1 ;
-(id)childNodesWithAttribute:(Class)arg1 recursively:(char)arg2 ;
-(char)isJoint;
-(void)setGizmo:(char)arg1 ;
-(void)removeAllChilds;
-(id)flattenedCopy;
-(id)childNodeWithName:(id)arg1 recursively:(char)arg2 ;
-(const void*)__CFObject;
-(id)childNodesPassingTest:(/*^block*/id)arg1 ;
-(char)getBoundingSphereCenter:(SCNVector3*)arg1 radius:(double*)arg2 ;
-(char)getBoundingBoxMin:(SCNVector3*)arg1 max:(SCNVector3*)arg2 ;
-(id)getBoundingBox;
-(id)getBoundingSphere;
-(void)addAudioPlayer:(id)arg1 ;
-(id)audioPlayers;
-(void)removeAudioPlayer:(id)arg1 ;
-(id)particleSystems;
-(void)setAuthoringEnvironmentNode:(char)arg1 ;
-(void)setAuthoringCameraType:(long long)arg1 ;
-(void)setEulerAngles:(SCNVector3)arg1 ;
-(void)setSimdWorldPosition:;
-(char)authoringEnvironmentNode;
-(void)setHittable:(char)arg1 ;
-(SCNPhysicsField *)physicsField;
-(void)setSimdPivot:(SCD_Struct_SC60)arg1 ;
-(void)setAuthoringEnvironmentCompanionNode:(id)arg1 ;
-(void)setSimdScale:;
-(void)setSimdPosition:;
-()simdScale;
-(SCD_Struct_SC60)simdWorldTransform;
-(void)setSimdWorldTransform:(SCD_Struct_SC60)arg1 ;
-(long long)authoringCameraType;
-(void)setAuthoringEnvironmentPresentationNode:(id)arg1 ;
-()simdWorldPosition;
-()simdWorldFront;
-(id)authoringEnvironmentCompanionNode;
-(SCNVector3)convertVector:(SCNVector3)arg1 fromNode:(id)arg2 ;
-()simdWorldRight;
-(4)simdConvertPosition:(id)arg1 ;
-(SCNVector3)worldFront;
-(id)hitTestWithSegmentFromPoint:(SCNVector3)arg1 toPoint:(SCNVector3)arg2 options:(id)arg3 ;
-(void)addAnimationPlayer:(id)arg1 forKey:(id)arg2 ;
-(id)_scnAnimationForKey:(id)arg1 ;
-(id)animationPlayerForKey:(id)arg1 ;
-(void)_pauseAnimation:(char)arg1 forKey:(id)arg2 pausedByNode:(char)arg3 ;
-(void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2 ;
-(void)_copyAnimationsFrom:(id)arg1 ;
-(char)_isAReference;
-(void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2 ;
-(void)setSpeed:(double)arg1 forAnimationKey:(id)arg2 ;
-(char)isAnimationForKeyPaused:(id)arg1 ;
-(char)__removeAnimation:(id)arg1 forKey:(id)arg2 ;
-(id)_scnBindings;
-(void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4 ;
-(void)unbindAnimatablePath:(id)arg1 ;
-(void)removeAllBindings;
-(id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2 ;
-(char)isPausedOrPausedByInheritance;
-(char)parseSpecialKey:(id)arg1 withPath:(id)arg2 intoDestination:(id*)arg3 ;
-(SCNPhysicsBody *)physicsBody;
-(unsigned long long)categoryBitMask;
-(void)simdLocalTranslateBy:;
-(void)simdLocalRotateBy:(SCD_Struct_SC61)arg1 ;
-(4)simdConvertVector:(id)arg1 ;
-(SCD_Struct_SC61)simdWorldOrientation;
-(void)setSimdWorldOrientation:(SCD_Struct_SC61)arg1 ;
-(SCD_Struct_SC61)simdOrientation;
-(void)setSimdOrientation:(SCD_Struct_SC61)arg1 ;
-(4)simdConvertPosition:(id)arg1 ;
-(4)simdConvertVector:(id)arg1 ;
-()simdWorldUp;
-(void)simdRotateBy:(SCD_Struct_SC61)arg1 ;
-(SCNVector3)worldUp;
-(CATransform3D)convertTransform:(CATransform3D)arg1 toNode:(id)arg2 ;
-(void)_addSkinnerWithMDLMesh:(id)arg1 sceneNodes:(id)arg2 ;
-(id)_associatedMDLObject;
-(void)_bakeNodes:(id)arg1 folderPath:(id)arg2 inVertex:(char)arg3 bakeAO:(char)arg4 quality:(float)arg5 attenuation:(float)arg6 geomSetter:(/*^block*/id)arg7 terminateSetter:(/*^block*/id)arg8 ;
-(void)enumerateHierarchyUsingBlock:(/*^block*/id)arg1 ;
-(void)removeParticleSystem:(id)arg1 ;
-(void)addParticleSystem:(id)arg1 ;
-(void)setCategoryBitMask:(unsigned long long)arg1 ;
-(SCNVector3)eulerAngles;
-(long long)movabilityHint;
-(void)setMovabilityHint:(long long)arg1 ;
-(void)setPhysicsField:(SCNPhysicsField *)arg1 ;
-(long long)focusBehavior;
-(void)setFocusBehavior:(long long)arg1 ;
-(NSArray *)actionKeys;
-(void)runAction:(id)arg1 forKey:(id)arg2 ;
-(void)setPhysicsBody:(SCNPhysicsBody *)arg1 ;
-(char)_enumerateChildNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)_findComponentWithType:(long long)arg1 ;
-(void)_setComponent:(id)arg1 withType:(long long)arg2 ;
-(void)_updateAffine;
-()simdRotation;
-()simdEulerAngles;
-(void)setSimdEulerAngles:;
-()simdPosition;
-(void)setSimdRotation:;
-(void)setSimdTransform:(SCD_Struct_SC60)arg1 ;
-(SCD_Struct_SC60)simdTransform;
-(SCD_Struct_SC60)simdPivot;
-(void)_removeComponentWithType:(long long)arg1 ;
-(void)_assignComponent:(id)arg1 toContainerWithType:(long long)arg2 ;
-(void)_reSyncModelTree;
-(void)_setHasFocusableChild;
-(void)_setPausedOrPausedByInheritance:(char)arg1 ;
-(void)_updateFocusableCache;
-(char)simdGetBoundingSphereCenter:(1*)arg1 radius:(float*)arg2 ;
-(id)flattenedClone;
-(void)_focusableCandidates:(id)arg1 ;
-(char)isFocusInteractionEnabled;
-(void)removeActionForKey:(id)arg1 ;
-(void)runAction:(id)arg1 forKey:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_removeDeadParticleSystem:(C3DParticleSystemRef)arg1 ;
-(id)_particleSystems;
-(id)_audioPlayers;
-(SCD_Struct_SC60)simdConvertTransform:(SCD_Struct_SC60)arg1 toNode:(id)arg2 ;
-(SCD_Struct_SC60)simdConvertTransform:(SCD_Struct_SC60)arg1 fromNode:(id)arg2 ;
-(void)setBoundingBoxMin:(SCNVector3*)arg1 max:(SCNVector3*)arg2 ;
-(void)_customEncodingOfSCNNode:(id)arg1 usePresentationInstance:(char)arg2 ;
-(void)_encodeNodePropertiesWithCoder:(id)arg1 ;
-(void)_customDecodingOfSCNNode:(id)arg1 ;
-(void)_didDecodeSCNNode:(id)arg1 ;
-(void)runAction:(id)arg1 ;
-(void)runAction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)hasActions;
-(id)_dumpTree;
-(void)_updateTransform;
-(long long)rotationRepresentation;
-(SCNVector4)worldOrientation;
-(void)setWorldOrientation:(SCNVector4)arg1 ;
-(void)_setQuaternion:(SCD_Struct_SC61)arg1 ;
-(1)_euler;
-(void)_setScale:;
-(void)setWorldPosition:(SCNVector3)arg1 ;
-(SCNVector3)worldPosition;
-(char)isHittable;
-(void)setIsJoint:(char)arg1 ;
-(char)getFrustum:(SCD_Struct_SC112*)arg1 ;
-(id)_subdividedCopyWithSubdivisionLevel:(long long)arg1 ;
-(char)canBecomeFocused;
-(char)_isEligibleForFocus;
-(void)_removeAction:(id)arg1 forKey:(id)arg2 ;
-(void)removeAllParticleSystems;
-(unsigned long long)countOfParticleSystems;
-(id)objectInParticleSystemsAtIndex:(unsigned long long)arg1 ;
-(void)insertObject:(id)arg1 inParticleSystemsAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectFromParticleSystemsAtIndex:(unsigned long long)arg1 ;
-(void)replaceObjectInParticleSystemsAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)removeAllAudioPlayers;
-(unsigned long long)countOfAudioPlayers;
-(id)objectInAudioPlayersAtIndex:(unsigned long long)arg1 ;
-(void)insertObject:(id)arg1 inAudioPlayersAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectFromAudioPlayersAtIndex:(unsigned long long)arg1 ;
-(void)replaceObjectInAudioPlayerAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(SCNVector3)convertPosition:(SCNVector3)arg1 toNode:(id)arg2 ;
-(SCNVector3)convertPosition:(SCNVector3)arg1 fromNode:(id)arg2 ;
-(SCNVector3)convertVector:(SCNVector3)arg1 toNode:(id)arg2 ;
-(CATransform3D)convertTransform:(CATransform3D)arg1 fromNode:(id)arg2 ;
-(id)authoringEnvironmentPresentationNode;
-(void)simdLookAt:;
-(void)simdLookAt:up:localFront:;
-(SCNVector3)worldRight;
-(void)lookAt:(SCNVector3)arg1 ;
-(void)lookAt:(SCNVector3)arg1 up:(SCNVector3)arg2 localFront:(SCNVector3)arg3 ;
-(void)localTranslateBy:(SCNVector3)arg1 ;
-(void)localRotateBy:(SCNVector4)arg1 ;
-(void)rotateBy:(SCNVector4)arg1 aroundTarget:(SCNVector3)arg2 ;
-(id)debugQuickLookData;
@end

