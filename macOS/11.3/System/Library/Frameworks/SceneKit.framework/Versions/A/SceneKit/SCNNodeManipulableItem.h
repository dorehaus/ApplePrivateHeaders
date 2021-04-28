/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNManipulableItem.h>

@interface SCNNodeManipulableItem : SCNManipulableItem
+(id)nodeManipulatorItemWithNode:(id)arg1 screenSize:(double)arg2 ;
+(void)addItems:(id)arg1 toScene:(id)arg2 ;
+(void)removeItemsFromScene:(id)arg1 ;
-(CATransform3D)transform;
-(SCNVector3)scale;
-(void)setPosition:(SCNVector3)arg1 ;
-(void)setTransform:(CATransform3D)arg1 ;
-(id)parentItem;
-(void)setWorldTransform:(CATransform3D)arg1 ;
-(CATransform3D)worldTransform;
-(char)isNodeManipulator;
-(id)cloneForManipulators;
-(void)validateClone;
@end
