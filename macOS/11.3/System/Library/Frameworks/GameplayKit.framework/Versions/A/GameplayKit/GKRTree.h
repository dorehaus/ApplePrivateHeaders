/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/Versions/A/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameplayKit/GameplayKit-Structs.h>
@interface GKRTree : NSObject {

	GKCRTree<NSObject, float __attribute__((ext_vector_type(2)))>* _cRTree;
	unsigned long long _queryReserve;

}

@property (assign) unsigned long long queryReserve;              //@synthesize queryReserve=_queryReserve - In the implementation block
+(id)treeWithMaxNumberOfChildren:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithMaxNumberOfChildren:(unsigned long long)arg1 ;
-(void)setQueryReserve:(unsigned long long)arg1 ;
-(unsigned long long)queryReserve;
-(void)addElement:(id)arg1 boundingRectMin:(long long)arg2 ;
-(void)removeElement:(id)arg1 ;
-(id)elementsInBoundingRectMin:rectMax:;
@end

