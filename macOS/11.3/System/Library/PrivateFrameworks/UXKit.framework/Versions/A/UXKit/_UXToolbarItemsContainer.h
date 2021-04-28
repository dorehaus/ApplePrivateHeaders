/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UXKit.framework/Versions/A/UXKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UXKit/UXKit-Structs.h>
#import <UXKit/UXView.h>
#import <UXKit/_UXBarItemsContainer.h>

@class NSMutableArray, NSArray, NSString;

@interface _UXToolbarItemsContainer : UXView <_UXBarItemsContainer> {

	NSMutableArray* __addedConstraints;
	char _singleItemMode;
	char _isTransitioning;
	NSArray* _items;
	double _interitemSpacing;
	double _baselineOffsetFromBottom;

}

@property (nonatomic,readonly) NSArray * items;                            //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) double interitemSpacing;                      //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) double baselineOffsetFromBottom;              //@synthesize baselineOffsetFromBottom=_baselineOffsetFromBottom - In the implementation block
@property (nonatomic,readonly) char hidesGlobalTrailingView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)toolbarItemsContainerForToolbar:(id)arg1 items:(id)arg2 ;
-(void)updateConstraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)baselineOffsetFromBottom;
-(double)lastBaselineOffsetFromBottom;
-(NSArray *)items;
-(void)prepareForTransition;
-(double)interitemSpacing;
-(void)setInteritemSpacing:(double)arg1 ;
-(char)hidesGlobalTrailingView;
-(void)setBaselineOffsetFromBottom:(double)arg1 ;
@end

