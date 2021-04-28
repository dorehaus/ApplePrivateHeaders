/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SCNSceneSource, SCNPhysicsWorld, SCNNode, SCNMaterialProperty, NSMutableDictionary, NSURL, SCNAuthoringEnvironment;

@interface SCNScene : NSObject <NSSecureCoding> {

	C3DSceneRef _scene;
	SCNSceneSource* _sceneSource;
	SCNPhysicsWorld* _physicsWorld;
	SCNNode* _rootNode;
	SCNNode* _layerRootNode[4];
	SCNMaterialProperty* _background;
	SCNMaterialProperty* _environment;
	NSMutableDictionary* _userAttributes;
	double _fogStartDistance;
	double _fogEndDistance;
	double _fogDensityExponent;
	id _fogColor;
	char _wantsScreenSpaceReflection;
	long long _screenSpaceReflectionSampleCount;
	double _screenSpaceReflectionMaxRayDistance;
	double _screenSpaceReflectionStride;
	char _paused;
	NSURL* _sourceURL;
	char _pausedForEditing;
	char _allowsDefaultLightingEnvironmentFallback;
	SCNAuthoringEnvironment* _authoringEnvironment;

}

@property (nonatomic,readonly) SCNNode * rootNode; 
@property (nonatomic,readonly) SCNPhysicsWorld * physicsWorld; 
@property (nonatomic,readonly) SCNMaterialProperty * background; 
@property (nonatomic,readonly) SCNMaterialProperty * lightingEnvironment; 
@property (assign,nonatomic) double fogStartDistance; 
@property (assign,nonatomic) double fogEndDistance; 
@property (assign,nonatomic) double fogDensityExponent; 
@property (nonatomic,retain) id fogColor; 
@property (assign,nonatomic) char wantsScreenSpaceReflection; 
@property (assign,nonatomic) long long screenSpaceReflectionSampleCount; 
@property (assign,nonatomic) double screenSpaceReflectionMaximumDistance; 
@property (assign,nonatomic) double screenSpaceReflectionStride; 
@property (assign,getter=isPaused,nonatomic) char paused; 
+(char)supportsSecureCoding;
+(id)scene;
+(id)sceneWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)sceneWithData:(id)arg1 options:(id)arg2 ;
+(id)sceneWithURL:(id)arg1 options:(id)arg2 ;
+(id)sceneWithURL:(id)arg1 atIndex:(long long)arg2 options:(id)arg3 ;
+(id)sceneWithData:(id)arg1 atIndex:(long long)arg2 options:(id)arg3 ;
+(id)sceneWithSceneRef:(C3DSceneRef)arg1 ;
+(SEL)jsConstructor;
+(id)sceneWithMDLAsset:(id)arg1 options:(id)arg2 ;
+(id)sceneWithMDLAsset:(id)arg1 ;
+(id)sceneNamed:(id)arg1 inDirectory:(id)arg2 options:(id)arg3 ;
+(char)canImportFileExtension:(id)arg1 ;
+(id)sceneNamed:(id)arg1 ;
+(id)sceneNamed:(id)arg1 options:(id)arg2 ;
+(char)canImportFileUTI:(id)arg1 ;
+(id)supportedFileUTIsForImport;
+(id)supportedFileUTIsForExport;
+(id)_indexPathForNode:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)lock;
-(void)unlock;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)root;
-(SCNNode *)rootNode;
-(char)isPaused;
-(void)setFrameRate:(double)arg1 ;
-(double)frameRate;
-(void)setPaused:(char)arg1 ;
-(id)attributeForKey:(id)arg1 ;
-(void)setEndTime:(double)arg1 ;
-(double)endTime;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(id)debugQuickLookObject;
-(id)scene;
-(SCNMaterialProperty *)background;
-(float)playbackSpeed;
-(void)setPlaybackSpeed:(float)arg1 ;
-(void)setRootNode:(SCNNode *)arg1 ;
-(void)_setRootNode:(id)arg1 ;
-(C3DSceneRef)sceneRef;
-(void)_syncObjCModel;
-(id)initWithSceneRef:(C3DSceneRef)arg1 ;
-(id)initForJavascript:(id)arg1 ;
-(const void*)__CFObject;
-(void)addSceneAnimation:(id)arg1 forKey:(id)arg2 target:(id)arg3 ;
-(id)particleSystems;
-(void)setRootNode:(id)arg1 forLayer:(int)arg2 ;
-(SCNPhysicsWorld *)physicsWorld;
-(id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2 ;
-(char)isPausedOrPausedByInheritance;
-(SCNVector3)upAxis;
-(void)_resetSceneTimeRange;
-(void)removeParticleSystem:(id)arg1 ;
-(id)copyAnimationChannelForKeyPath:(id)arg1 property:(id)arg2 ;
-(void)removeAllParticleSystems;
-(id)_physicsWorldCreateIfNeeded:(char)arg1 ;
-(void)setUpAxis:(SCNVector3)arg1 ;
-(char)writeToURLWithUSDKit:(id)arg1 ;
-(char)writeToURL:(id)arg1 options:(id)arg2 delegate:(id)arg3 progressHandler:(/*^block*/id)arg4 ;
-(id)_nodeWithIndexPath:(id)arg1 ;
-(SCNMaterialProperty *)lightingEnvironment;
-(void)set_allowsDefaultLightingEnvironmentFallback:(char)arg1 ;
-(void)_customEncodingOfSCNScene:(id)arg1 ;
-(void)_didEncodeSCNScene:(id)arg1 ;
-(void)_customDecodingOfSCNScene:(id)arg1 ;
-(void)setFogStartDistance:(double)arg1 ;
-(void)setFogEndDistance:(double)arg1 ;
-(void)setFogDensityExponent:(double)arg1 ;
-(void)setWantsScreenSpaceReflection:(char)arg1 ;
-(void)setScreenSpaceReflectionSampleCount:(long long)arg1 ;
-(void)setScreenSpaceReflectionMaximumDistance:(double)arg1 ;
-(void)setScreenSpaceReflectionStride:(double)arg1 ;
-(void)setFogColor:(id)arg1 ;
-(void)_didDecodeSCNScene:(id)arg1 ;
-(void)_clearSceneRef;
-(void)_setSourceURL:(id)arg1 ;
-(id)_scenes;
-(void)setSceneSource:(id)arg1 ;
-(id)sceneSource;
-(id)rootNodeForLayer:(int)arg1 ;
-(void)_scaleSceneBy:(double)arg1 ;
-(char)_allowsDefaultLightingEnvironmentFallback;
-(id)fogColor;
-(double)fogEndDistance;
-(double)fogDensityExponent;
-(double)fogStartDistance;
-(char)wantsScreenSpaceReflection;
-(long long)screenSpaceReflectionSampleCount;
-(double)screenSpaceReflectionDepthThreshold;
-(void)setScreenSpaceReflectionDepthThreshold:(double)arg1 ;
-(double)screenSpaceReflectionMaximumDistance;
-(double)screenSpaceReflectionStride;
-(void)_dumpToDisk;
-(void)addParticleSystem:(id)arg1 withTransform:(CATransform3D)arg2 ;
-(void)setPausedForEditing:(char)arg1 ;
-(char)isPausedForEditing;
-(id)_subnodeFromIndexPath:(id)arg1 ;
-(void)_prettifyForPreview;
-(id)debugQuickLookObjectWithPointOfView:(id)arg1 ;
-(id)_exportAsMovieOperationWithDestinationURL:(id)arg1 size:(CGSize)arg2 attributes:(id)arg3 delegate:(id)arg4 didEndSelector:(SEL)arg5 userInfo:(void*)arg6 ;
-(char)writeToURL:(id)arg1 options:(id)arg2 ;
-(id)exportAsMovieOperationWithDestinationURL:(id)arg1 size:(CGSize)arg2 attributes:(id)arg3 delegate:(id)arg4 didEndSelector:(SEL)arg5 userInfo:(void*)arg6 ;
-(id)exportAsCOLLADAOperationWithDestinationURL:(id)arg1 attributes:(id)arg2 delegate:(id)arg3 didEndSelector:(SEL)arg4 userInfo:(void*)arg5 ;
@end

