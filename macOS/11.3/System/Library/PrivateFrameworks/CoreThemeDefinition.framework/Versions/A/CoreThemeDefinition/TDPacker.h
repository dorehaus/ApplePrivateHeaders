/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/Versions/A/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
@class NSArray, _TDPackerNode;

@interface TDPacker : NSObject {

	/*^block*/id _sizeHandler;
	NSArray* _objectsToPack;
	_TDPackerNode* _root;
	NSArray* _packedObjects;

}

@property (retain) _TDPackerNode * root;                                          //@synthesize root=_root - In the implementation block
@property (retain) NSArray * packedObjects;                                       //@synthesize packedObjects=_packedObjects - In the implementation block
@property (nonatomic,retain) NSArray * objectsToPack; 
@property (nonatomic,readonly) unsigned long long countOfEmptyNodes; 
-(void)dealloc;
-(void)setRoot:(_TDPackerNode *)arg1 ;
-(_TDPackerNode *)root;
-(void)setSizeHandler:(/*^block*/id)arg1 ;
-(void)setObjectsToPack:(NSArray *)arg1 ;
-(void)pack;
-(char)objectAtIndexFit:(long long)arg1 ;
-(CGPoint)fitPositionOfObjectAtIndex:(long long)arg1 ;
-(CGSize)enclosingSize;
-(unsigned long long)countOfEmptyNodes;
-(void)setPackedObjects:(NSArray *)arg1 ;
-(NSArray *)objectsToPack;
-(id)_findNode:(id)arg1 ofSize:(CGSize)arg2 ;
-(id)_splitNode:(id)arg1 toSize:(CGSize)arg2 ;
-(id)_growNodeToSize:(CGSize)arg1 ;
-(void)_countOfEmptyNodes:(id)arg1 count:(unsigned long long*)arg2 ;
-(id)_growRight:(CGSize)arg1 ;
-(id)_growDown:(CGSize)arg1 ;
-(/*^block*/id)sizeHandler;
-(NSArray *)packedObjects;
@end
