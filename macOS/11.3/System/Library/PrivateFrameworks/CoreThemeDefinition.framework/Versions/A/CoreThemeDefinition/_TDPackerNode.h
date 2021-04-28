/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/Versions/A/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
@interface _TDPackerNode : NSObject {

	char _used;
	char _fit;
	_TDPackerNode* _down;
	_TDPackerNode* _right;
	void* _node;
	CGSize _size;
	CGPoint _origin;

}

@property (assign,nonatomic) char used;                          //@synthesize used=_used - In the implementation block
@property (nonatomic,retain) _TDPackerNode * down;               //@synthesize down=_down - In the implementation block
@property (nonatomic,retain) _TDPackerNode * right;              //@synthesize right=_right - In the implementation block
@property (assign,nonatomic) char fit;                           //@synthesize fit=_fit - In the implementation block
@property (assign,nonatomic) CGSize size;                        //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) CGPoint origin;                     //@synthesize origin=_origin - In the implementation block
@property (assign,nonatomic) void* node;                         //@synthesize node=_node - In the implementation block
-(CGSize)size;
-(void)dealloc;
-(void*)node;
-(void)setSize:(CGSize)arg1 ;
-(_TDPackerNode *)right;
-(void)setNode:(void*)arg1 ;
-(CGPoint)origin;
-(void)setOrigin:(CGPoint)arg1 ;
-(char)used;
-(void)setRight:(_TDPackerNode *)arg1 ;
-(void)setDown:(_TDPackerNode *)arg1 ;
-(_TDPackerNode *)down;
-(void)setUsed:(char)arg1 ;
-(char)fit;
-(void)setFit:(char)arg1 ;
@end

