/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RBNode;

@interface CALRedBlackTree : NSObject {

	RBNode* _root;
	long long _count;

}

@property (retain) RBNode * root;              //@synthesize root=_root - In the implementation block
-(id)description;
-(long long)count;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setRoot:(RBNode *)arg1 ;
-(RBNode *)root;
-(id)_rightRotate:(id)arg1 ;
-(id)_leftRotate:(id)arg1 ;
-(void)_rebalanceFromNode:(id)arg1 ;
-(char)_recursiveInsertNode:(id)arg1 fromNode:(id)arg2 ;
-(id)_recursiveFindNodeWithKey:(id)arg1 fromNode:(id)arg2 ;
-(id)_recursiveLargestNodeWithKeyLessThanOrEqualTo:(id)arg1 fromNode:(id)arg2 ;
-(id)_recursiveSmallestNodeWithKeyGreaterThanOrEqualTo:(id)arg1 fromNode:(id)arg2 ;
-(id)_recursiveRemoveNodeWithKey:(id)arg1 fromNode:(id)arg2 isDone:(char*)arg3 ;
-(id)_balanceAfterRemove:(id)arg1 isRight:(char)arg2 isDone:(char*)arg3 ;
-(void)_recursiveTraverseFromNode:(id)arg1 intoArray:(id)arg2 ;
-(void)_recursiveTraverseFromNode:(id)arg1 intoArray:(id)arg2 startingAtOrAfterKey:(id)arg3 stoppingBeforeKey:(id)arg4 ;
-(void)_recursiveTraverseKeysFromNode:(id)arg1 intoArray:(id)arg2 startingAtOrAfterKey:(id)arg3 stoppingBeforeKey:(id)arg4 ;
-(id)allNodes;
-(id)nodeAtOrBelowKey:(id)arg1 ;
-(id)nodeAtOrAboveKey:(id)arg1 ;
-(void)removeObjectsStartingAt:(id)arg1 endingBefore:(id)arg2 ;
-(id)nodesStartingAt:(id)arg1 endingBefore:(id)arg2 ;
@end

