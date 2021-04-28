/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slideshows/Slideshows-Structs.h>
#import <libobjc.A.dylib/MPActionableSupportInternal.h>
#import <libobjc.A.dylib/MPNavigatorSupportInternal.h>
#import <libobjc.A.dylib/MPLayerableSupportInternal.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/MPAnimationSupport.h>
#import <libobjc.A.dylib/MPActionableSupport.h>
#import <libobjc.A.dylib/MPAudioSupport.h>
#import <libobjc.A.dylib/MPLayerableSupport.h>
#import <libobjc.A.dylib/MPNavigatorSupport.h>
#import <libobjc.A.dylib/MPGeometrySupport.h>
#import <libobjc.A.dylib/MPTimingSupport.h>
#import <libobjc.A.dylib/MPActionSupport.h>
#import <libobjc.A.dylib/MPAutomaticLayerSupport.h>
#import <libobjc.A.dylib/MPManualLayerSupport.h>

@class MPLayerGroupInternal, NSMutableArray, MCPlugParallel, MCContainerParallelizer, MPAudioPlaylist, NSMutableDictionary, NSColor, NSArray, NSString, NSDictionary;

@interface MPLayerGroup : NSObject <MPActionableSupportInternal, MPNavigatorSupportInternal, MPLayerableSupportInternal, NSCoding, NSCopying, MPAnimationSupport, MPActionableSupport, MPAudioSupport, MPLayerableSupport, MPNavigatorSupport, MPGeometrySupport, MPTimingSupport, MPActionSupport, MPAutomaticLayerSupport, MPManualLayerSupport> {

	MPLayerGroupInternal* _internal;
	NSMutableArray* _userProvidedVideoPaths;
	NSMutableArray* _userProvidedAudioPaths;
	MCPlugParallel* _plug;
	MCContainerParallelizer* _parallelizer;
	MPAudioPlaylist* _audioPlaylist;
	NSMutableArray* _layers;
	NSMutableDictionary* _layerDictionary;
	id _parent;
	NSMutableDictionary* _authoringOptions;
	NSMutableDictionary* _animationPaths;
	NSMutableDictionary* _actions;

}

@property (assign,nonatomic) unsigned long long loopingMode; 
@property (nonatomic,copy) NSColor * backgroundColor; 
@property (assign,nonatomic) CGColorRef backgroundCGColor; 
@property (nonatomic,copy) NSArray * videoPaths; 
@property (nonatomic,copy) NSArray * audioPaths; 
@property (assign,nonatomic) char autoAdjustDuration; 
@property (nonatomic,readonly) NSString * uuid; 
@property (assign,nonatomic) NSDictionary * initialState; 
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)container;
-(NSString *)uuid;
-(void)cleanup;
-(void)setSize:(CGSize)arg1 ;
-(id)parent;
-(double)scale;
-(CGPoint)position;
-(double)duration;
-(void)setPosition:(CGPoint)arg1 ;
-(void)setDuration:(double)arg1 ;
-(id)objectID;
-(void)setBackgroundColor:(NSColor *)arg1 ;
-(NSColor *)backgroundColor;
-(void)setOpacity:(double)arg1 ;
-(void)setScale:(double)arg1 ;
-(void)setZPosition:(double)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(void)setContainer:(id)arg1 ;
-(double)zPosition;
-(double)opacity;
-(void)setZIndex:(long long)arg1 ;
-(void)setNumberOfLoops:(double)arg1 ;
-(long long)zIndex;
-(id)layers;
-(id)observer;
-(void)setParent:(id)arg1 ;
-(void)setInitialState:(NSDictionary *)arg1 ;
-(NSDictionary *)initialState;
-(id)actions;
-(double)rotationAngle;
-(void)setRotationAngle:(double)arg1 ;
-(void)removePath:(id)arg1 ;
-(double)numberOfLoops;
-(double)videoDuration;
-(void)removeActionForKey:(id)arg1 ;
-(id)allEffects;
-(void)setAction:(id)arg1 forKey:(id)arg2 ;
-(void)addLayer:(id)arg1 ;
-(id)parentDocument;
-(void)addLayers:(id)arg1 ;
-(id)audioPlaylist;
-(id)styleID;
-(id)authoringOptionForKey:(id)arg1 ;
-(id)mainLayers;
-(id)plug;
-(id)animationPathForKey:(id)arg1 ;
-(double)posterTime;
-(NSArray *)audioPaths;
-(void)setAuthoringOption:(id)arg1 forKey:(id)arg2 ;
-(void)setVideoPaths:(NSArray *)arg1 ;
-(void)setAudioPaths:(NSArray *)arg1 ;
-(void)setLoopingMode:(unsigned long long)arg1 ;
-(void)removeAnimationPathForKey:(id)arg1 ;
-(NSArray *)videoPaths;
-(unsigned long long)setStyleID:(id)arg1 ;
-(id)authoringOptions;
-(id)actionableObjectForID:(id)arg1 ;
-(void)configureActions;
-(id)plugID;
-(void)copyActions:(id)arg1 ;
-(void)setTimeIn:(double)arg1 ;
-(void)setPhaseInDuration:(double)arg1 ;
-(void)setPhaseOutDuration:(double)arg1 ;
-(char)isTriggered;
-(void)setIsTriggered:(char)arg1 ;
-(id)animationPaths;
-(void)copyAnimationPaths:(id)arg1 ;
-(void)setAnimationPath:(id)arg1 forKey:(id)arg2 ;
-(double)phaseInDuration;
-(double)phaseOutDuration;
-(void)copyStruct:(id)arg1 ;
-(char)autoAdjustDuration;
-(void)resetDuration;
-(unsigned long long)loopingMode;
-(void)setAudioPlaylist:(id)arg1 ;
-(void)setPlug:(id)arg1 ;
-(long long)countOfLayers;
-(void)removeAllLayers;
-(void)setUsedAllPaths:(char)arg1 ;
-(void)setLastSlideUsed:(long long)arg1 ;
-(id)navigatorKey;
-(void)setLayer:(id)arg1 forKey:(id)arg2 ;
-(id)authoredVersionInfo;
-(void)setBackgroundCGColor:(CGColorRef)arg1 ;
-(void)removeLayersAtIndices:(id)arg1 ;
-(void)setAuthoredVersionInfo:(id)arg1 ;
-(void)reconnectAll;
-(void)reconfigureLoopingMode;
-(id)objectInLayersAtIndex:(long long)arg1 ;
-(char)detectFacesInBackground;
-(id)orderedVideoPaths;
-(void)setAuthoringOptions:(id)arg1 ;
-(void)cachePaths;
-(id)allSlides:(char)arg1 ;
-(void)addVideoPath:(id)arg1 ;
-(void)addVideoPaths:(id)arg1 ;
-(void)addAudioPath:(id)arg1 ;
-(void)addAudioPaths:(id)arg1 ;
-(void)removePaths:(id)arg1 ;
-(void)removeAllVideoPaths;
-(void)removeAllAudioPaths;
-(void)insertLayers:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeLayerForKey:(id)arg1 ;
-(void)moveLayersFromIndices:(id)arg1 toIndex:(long long)arg2 ;
-(id)layerForKey:(id)arg1 ;
-(CGColorRef)backgroundCGColor;
-(id)keyedLayers;
-(id)allEffectContainers;
-(id)allSongs;
-(void)setIsDocumentLayerGroup:(char)arg1 ;
-(id)absoluteVideoPaths;
-(char)nearingEndWithOptions:(id)arg1 ;
-(double)aspectRatioDidChange:(double)arg1 atTime:(double)arg2 ;
-(char)layersCanPositionZIndex;
-(id)valueInLayersWithName:(id)arg1 ;
-(void)insertObject:(id)arg1 inLayersAtIndex:(long long)arg2 ;
-(void)removeObjectFromLayersAtIndex:(long long)arg1 ;
-(void)replaceObjectInLayersAtIndex:(long long)arg1 withObject:(id)arg2 ;
-(double)xRotationAngle;
-(double)yRotationAngle;
-(void)copyAudioPlaylist:(id)arg1 ;
-(void)setXRotationAngle:(double)arg1 ;
-(void)setYRotationAngle:(double)arg1 ;
-(void)setBackgroundColorString:(id)arg1 ;
-(void)setStartsPaused:(char)arg1 ;
-(void)setDurationPadding:(double)arg1 ;
-(double)timeIn;
-(char)startsPaused;
-(id)layerKeyDictionary;
-(id)layerKey;
-(double)durationPadding;
-(id)liveLock;
-(void)setAutoAdjustDuration:(char)arg1 ;
-(void)copyLayers:(id)arg1 ;
-(void)copyLayerDictionary:(id)arg1 ;
-(long long)lastSlideUsed;
@end
