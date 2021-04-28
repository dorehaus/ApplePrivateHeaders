/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzComposer/QuartzComposer-Structs.h>
@class QCSCN_Node;

@interface QCSCN_Scene : NSObject {

	id _reserved;

}

@property (nonatomic,readonly) QCSCN_Node * rootNode; 
+(id)scene;
+(char)isKeyExcludedFromWebScript:(const char*)arg1 ;
+(id)propertyKeys;
+(id)sceneWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)sceneWithData:(id)arg1 options:(id)arg2 ;
+(id)sceneWithURL:(id)arg1 options:(id)arg2 ;
+(id)sceneWithURL:(id)arg1 atIndex:(long long)arg2 options:(id)arg3 ;
+(id)sceneWithData:(id)arg1 atIndex:(long long)arg2 options:(id)arg3 ;
+(id)sceneWithSceneRef:(_C3DScene*)arg1 ;
+(Class)typeForProperty:(id)arg1 ;
+(int)_baseTypeForProperty:(id)arg1 ;
+(SEL)jsConstructor;
+(id)argumentForSelector:(SEL)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(id)init;
-(void)lock;
-(void)unlock;
-(id)valueForUndefinedKey:(id)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(id)root;
-(QCSCN_Node *)rootNode;
-(void)setFrameRate:(double)arg1 ;
-(double)frameRate;
-(id)attributeForKey:(id)arg1 ;
-(void)setEndTime:(double)arg1 ;
-(double)endTime;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(_C3DLibrary*)library;
-(id)scene;
-(float)playbackSpeed;
-(void)setPlaybackSpeed:(float)arg1 ;
-(void)setRootNode:(QCSCN_Node *)arg1 ;
-(void)_setRootNode:(id)arg1 ;
-(void)setLibrary:(_C3DLibrary*)arg1 ;
-(_C3DAnimationTarget*)targetForKey:(id)arg1 ;
-(id)propertyKeys;
-(_C3DScene*)sceneRef;
-(id)initWithSceneRef:(_C3DScene*)arg1 ;
-(id)initForJavascript:(id)arg1 ;
-(id)_sceneRefs;
-(void*)__CFObject;
-(void)addSceneAnimation:(id)arg1 forKey:(id)arg2 target:(id)arg3 ;
@end
