/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MRTransitionManager : NSObject {

	NSMutableDictionary* mTransitionSets;
	NSMutableDictionary* mTransitionPools;

}
+(void)initialize;
+(id)sharedManager;
-(void)dealloc;
-(void)cleanup;
-(void)releaseResources;
-(id)initWithPaths:(id)arg1 ;
-(id)transitionWithTransitionID:(id)arg1 ;
-(id)descriptionForTransitionID:(id)arg1 ;
-(void)recycleTransition:(id)arg1 ;
-(id)resourcePathForTransitionID:(id)arg1 andResource:(id)arg2 ;
-(char)canHandleKenBurnsForTransitionID:(id)arg1 ;
-(char)noContentsMotionForTransitionID:(id)arg1 ;
-(char)needsSourceLayerImageForPrecomputingForTransitionID:(id)arg1 ;
-(char)needsTargetLayerImageForPrecomputingForTransitionID:(id)arg1 ;
-(char)needsSourceLayerToBeOpaqueForSimple3DTransitionSubtype:(long long)arg1 ;
-(char)needsTargetLayerToBeOpaqueForSimple3DTransitionSubtype:(long long)arg1 ;
@end

