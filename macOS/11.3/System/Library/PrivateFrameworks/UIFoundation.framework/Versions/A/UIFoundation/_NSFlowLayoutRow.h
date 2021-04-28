/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSMutableArray, _NSFlowLayoutSection;

@interface _NSFlowLayoutRow : NSObject {

	NSMutableArray* _items;
	_NSFlowLayoutSection* _section;
	CGSize _rowSize;
	CGRect _rowFrame;
	long long _index;
	char _isValid;
	char _complete;
	int _verticalAlignement;
	int _horizontalAlignement;
	double _availableSpace;
	CGPoint _rowOffsetForDropTargetInsertionGap;
	char _fixedItemSize;

}

@property (assign,nonatomic,__weak) _NSFlowLayoutSection * section;                   //@synthesize section=_section - In the implementation block
@property (assign,nonatomic) CGSize rowSize;                                          //@synthesize rowSize=_rowSize - In the implementation block
@property (assign,nonatomic) CGRect rowFrame;                                         //@synthesize rowFrame=_rowFrame - In the implementation block
@property (assign,nonatomic) CGPoint rowOffsetForDropTargetInsertionGap;              //@synthesize rowOffsetForDropTargetInsertionGap=_rowOffsetForDropTargetInsertionGap - In the implementation block
@property (assign,nonatomic) long long index;                                         //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) NSMutableArray * items;                                //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) char complete;                                           //@synthesize complete=_complete - In the implementation block
@property (assign,nonatomic) char fixedItemSize;                                      //@synthesize fixedItemSize=_fixedItemSize - In the implementation block
@property (assign,nonatomic) double availableSpace;                                   //@synthesize availableSpace=_availableSpace - In the implementation block
-(id)init;
-(void)invalidate;
-(long long)index;
-(void)setIndex:(long long)arg1 ;
-(void)removeItemAtIndex:(long long)arg1 ;
-(void)insertItem:(id)arg1 atIndex:(long long)arg2 ;
-(_NSFlowLayoutSection *)section;
-(NSMutableArray *)items;
-(id)snapshot;
-(char)complete;
-(void)setSection:(_NSFlowLayoutSection *)arg1 ;
-(CGRect)rowFrame;
-(CGSize)rowSize;
-(void)addItem:(id)arg1 atEnd:(char)arg2 ;
-(void)setComplete:(char)arg1 ;
-(void)layoutRow;
-(void)setFixedItemSize:(char)arg1 ;
-(void)setRowFrame:(CGRect)arg1 ;
-(long long)indexOfNearestItemAtPoint:(CGPoint)arg1 ;
-(id)copyFromSection:(id)arg1 ;
-(char)fixedItemSize;
-(void)setRowSize:(CGSize)arg1 ;
-(CGPoint)rowOffsetForDropTargetInsertionGap;
-(void)setRowOffsetForDropTargetInsertionGap:(CGPoint)arg1 ;
-(double)availableSpace;
-(void)setAvailableSpace:(double)arg1 ;
@end

