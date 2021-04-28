/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSCH3DScenePropertyAccessorFactory;
#import <TSCharts/TSCharts-Structs.h>
@class NSObject, TSCH3DScenePropertyAccessor, NSMutableDictionary, TSUNoCopyDictionary, TSCH3DSceneObject, NSMutableArray, TSCH3DCamera, NSArray;

@interface TSCH3DScene : NSObject {

	TSCH3DScene* _original;
	NSObject*<TSCH3DScenePropertyAccessorFactory> _accessorFactory;
	TSCH3DScenePropertyAccessor* _accessor;
	NSMutableDictionary* _enumeratorMap;
	NSMutableDictionary* _propertiesMap;
	TSUNoCopyDictionary* _delegateMap;
	TSCH3DSceneObject* _main;
	NSMutableArray* _objects;
	TSCH3DCamera* _camera;

}

@property (nonatomic,retain) TSCH3DScene * original;                                                     //@synthesize original=_original - In the implementation block
@property (nonatomic,retain) NSObject*<TSCH3DScenePropertyAccessorFactory> accessorFactory; 
@property (nonatomic,retain) TSCH3DScenePropertyAccessor * accessor; 
@property (nonatomic,retain) TSCH3DSceneObject * main; 
@property (nonatomic,retain) TSCH3DCamera * camera; 
@property (nonatomic,readonly) id<TSCH3DSceneDelegate> delegate; 
@property (nonatomic,readonly) NSArray * debugObjects; 
+(id)scene;
-(id)description;
-(id)init;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(id<TSCH3DSceneDelegate>)delegate;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(tmat4x4<float>)transform;
-(TSCH3DSceneObject *)main;
-(TSCH3DScene *)original;
-(id)clone;
-(id)objects;
-(void)setCamera:(TSCH3DCamera *)arg1 ;
-(TSCH3DCamera *)camera;
-(void)setOriginal:(TSCH3DScene *)arg1 ;
-(void)resetObjects;
-(id)renderCache;
-(void)removeObjectsOfClass:(Class)arg1 ;
-(id)delegateForObject:(id)arg1 ;
-(void)makeDelegatesFromDelegator:(id)arg1 ;
-(id)propertiesForType:(id)arg1 ;
-(void)setProperties:(id)arg1 forType:(id)arg2 ;
-(id)delegateForSceneObject:(id)arg1 ;
-(id)mutablePropertiesForType:(id)arg1 ;
-(id)enumeratorForType:(id)arg1 ;
-(id)partForType:(id)arg1 ;
-(void)resetDelegates;
-(id)enumeratorMap;
-(id)propertiesMap;
-(id)delegateMap;
-(NSObject*<TSCH3DScenePropertyAccessorFactory>)accessorFactory;
-(void)overrideObjects;
-(TSCH3DScenePropertyAccessor *)accessor;
-(void)setEnumerator:(id)arg1 forType:(id)arg2 ;
-(void)setEnumerator:(id)arg1 properties:(id)arg2 forType:(id)arg3 ;
-(void)setDelegate:(id)arg1 forObject:(id)arg2 ;
-(void)setDelegate:(id)arg1 forSceneObject:(id)arg2 ;
-(id)reallocateObjects;
-(id)removeObjects:(char)arg1 ofClasses:(id)arg2 addTo:(id)arg3 ;
-(id)removeObjects:(char)arg1 ofClasses:(id)arg2 into:(id)arg3 ;
-(id)extractObjects:(char)arg1 ofClasses:(id)arg2 ;
-(void)resetEnumerator;
-(void)setAccessorFactory:(NSObject*<TSCH3DScenePropertyAccessorFactory>)arg1 ;
-(void)setMain:(TSCH3DSceneObject *)arg1 ;
-(NSArray *)debugObjects;
-(void)setAccessor:(TSCH3DScenePropertyAccessor *)arg1 ;
-(void)copyPropertiesFromScene:(id)arg1 ;
-(void)resetProperties;
-(void)setPart:(id)arg1 forType:(id)arg2 ;
-(void)enumerateAllObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)returnRemoved:(char)arg1 removeObjectsPassingTest:(/*^block*/id)arg2 ;
-(void)removeObjectsNotOfClass:(Class)arg1 ;
-(id)extractObjectsOfClass:(Class)arg1 ;
-(id)extractObjectsOfClasses:(id)arg1 ;
-(id)extractObjectsNotOfClass:(Class)arg1 ;
-(id)extractObjectsNotOfClasses:(id)arg1 ;
@end

