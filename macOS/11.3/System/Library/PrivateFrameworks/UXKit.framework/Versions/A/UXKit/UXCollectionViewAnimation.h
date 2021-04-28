/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UXKit.framework/Versions/A/UXKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UXKit/UXKit-Structs.h>
@class UXCollectionReusableView, UXCollectionViewLayoutAttributes, NSMutableArray;

@interface UXCollectionViewAnimation : NSObject {

	UXCollectionReusableView* _view;
	UXCollectionViewLayoutAttributes* _finalLayoutAttributes;
	double _startFraction;
	double _endFraction;
	unsigned long long _viewType;
	NSMutableArray* _completionHandlers;
	NSMutableArray* _startupHandlers;
	/*^block*/id _animationBlock;
	struct {
		unsigned animateFromCurrentPosition : 1;
		unsigned deleteAterAnimation : 1;
		unsigned rasterizeAfterAnimation : 1;
		unsigned resetRasterizationAfterAnimation : 1;
	}  _collectionViewAnimationFlags;

}

@property (nonatomic,readonly) UXCollectionReusableView * view;                                       //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) unsigned long long viewType;                                           //@synthesize viewType=_viewType - In the implementation block
@property (nonatomic,readonly) UXCollectionViewLayoutAttributes * finalLayoutAttributes;              //@synthesize finalLayoutAttributes=_finalLayoutAttributes - In the implementation block
@property (nonatomic,readonly) double startFraction;                                                  //@synthesize startFraction=_startFraction - In the implementation block
@property (nonatomic,readonly) double endFraction;                                                    //@synthesize endFraction=_endFraction - In the implementation block
@property (nonatomic,readonly) char animateFromCurrentPosition; 
@property (nonatomic,readonly) char deleteAfterAnimation; 
@property (assign,nonatomic) char rasterizeAfterAnimation; 
@property (assign,nonatomic) char resetRasterizationAfterAnimation; 
-(void)dealloc;
-(id)description;
-(void)start;
-(UXCollectionReusableView *)view;
-(char)animateFromCurrentPosition;
-(char)deleteAfterAnimation;
-(void)setRasterizeAfterAnimation:(char)arg1 ;
-(char)rasterizeAfterAnimation;
-(void)setResetRasterizationAfterAnimation:(char)arg1 ;
-(char)resetRasterizationAfterAnimation;
-(void)addCompletionHandler:(/*^block*/id)arg1 ;
-(void)addStartupHandler:(/*^block*/id)arg1 ;
-(unsigned long long)viewType;
-(UXCollectionViewLayoutAttributes *)finalLayoutAttributes;
-(double)startFraction;
-(double)endFraction;
-(id)initWithView:(id)arg1 viewType:(unsigned long long)arg2 finalLayoutAttributes:(id)arg3 startFraction:(double)arg4 endFraction:(double)arg5 animateFromCurrentPosition:(char)arg6 deleteAfterAnimation:(char)arg7 customAnimations:(/*^block*/id)arg8 ;
@end

