/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PAImaging.framework/Versions/A/PAImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PAImaging/PAImaging-Structs.h>
#import <AppKit/NSView.h>

@class PAItemViewConfiguration;

@interface PAItemView : NSView {

	PAItemViewConfiguration* _configuration;
	char _inLiveResize;

}

@property (nonatomic,copy) PAItemViewConfiguration * configuration; 
@property (assign,nonatomic) CGSize originalSize; 
@property (assign,nonatomic) long long originalOrientation; 
@property (assign,nonatomic) CGAffineTransform originalTransform; 
@property (nonatomic,readonly) CGSize contentSize; 
@property (nonatomic,readonly) CGRect contentBounds; 
@property (assign,nonatomic) double contentScale; 
@property (assign,nonatomic) CGPoint contentAnchor; 
@property (assign,nonatomic) SCD_Struct_PA9 frameRenderTime; 
@property (assign,nonatomic) CGPoint viewAnchorPoint; 
@property (assign,nonatomic) CGPoint contentOrigin; 
@property (assign,nonatomic) CGPoint contentOriginPoint; 
@property (assign,nonatomic) CGRect contentClipRect; 
@property (nonatomic,readonly) CGSize viewContentSize; 
@property (nonatomic,readonly) CGRect viewContentBounds; 
@property (nonatomic,readonly) CGRect visibleViewContentBounds; 
@property (nonatomic,readonly) CGRect visibleContentBounds; 
@property (nonatomic,readonly) CGRect visibleOriginalContentBounds; 
+(id)keyPathsForValuesAffectingContentSize;
+(double)contentScaleToFitInSize:(CGSize)arg1 withContentSize:(CGSize)arg2 ;
+(id)originalTransformWithSize:(CGSize)arg1 transform:(CGAffineTransform)arg2 orientation:(long long)arg3 contentClipRect:(CGRect)arg4 ;
+(id)originalTransformWithSize:(CGSize)arg1 orientation:(long long)arg2 ;
+(CGAffineTransform)originalTransformWithSize:(CGSize)arg1 transform:(CGAffineTransform)arg2 orientation:(long long)arg3 ;
+(CGRect)visibleOriginalContentRectForViewRect:(CGRect)arg1 originalTransform:(id)arg2 contentTransform:(id)arg3 ;
+(double)contentScaleToFitInSize:(CGSize)arg1 withOriginalTransform:(id)arg2 ;
-(char)isOpaque;
-(void)setFrameSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)viewDidMoveToWindow;
-(CGSize)contentSize;
-(char)inLiveResize;
-(void)viewWillStartLiveResize;
-(void)viewDidEndLiveResize;
-(PAItemViewConfiguration *)configuration;
-(CGRect)contentBounds;
-(CGSize)originalSize;
-(void)setConfiguration:(PAItemViewConfiguration *)arg1 ;
-(double)contentScale;
-(long long)originalOrientation;
-(void)setOriginalOrientation:(long long)arg1 ;
-(void)setContentScale:(double)arg1 ;
-(void)setContentOrigin:(CGPoint)arg1 ;
-(CGPoint)contentOrigin;
-(void)setOriginalSize:(CGSize)arg1 ;
-(SCD_Struct_PA9)frameRenderTime;
-(void)setFrameRenderTime:(SCD_Struct_PA9)arg1 ;
-(CGPoint)contentPointToViewPoint:(CGPoint)arg1 ;
-(CGPoint)viewPointToContentPoint:(CGPoint)arg1 ;
-(CGRect)contentRectToViewRect:(CGRect)arg1 ;
-(CGRect)viewRectToContentRect:(CGRect)arg1 ;
-(CGSize)viewContentSize;
-(CGRect)viewContentBounds;
-(CGRect)visibleContentBounds;
-(CGRect)visibleViewContentBounds;
-(void)setContentAnchor:(CGPoint)arg1 ;
-(double)contentScaleToFitInSize:(CGSize)arg1 ;
-(CGPoint)contentAnchor;
-(char)canRescaleLayerDuringLiveResize;
-(void)setOriginalSizeHoldingScaleEquivalent:(CGSize)arg1 orientation:(long long)arg2 ;
-(CGAffineTransform)originalTransform;
-(void)setOriginalTransform:(CGAffineTransform)arg1 ;
-(CGPoint)viewAnchorPoint;
-(void)setViewAnchorPoint:(CGPoint)arg1 ;
-(CGPoint)contentOriginPoint;
-(void)setContentOriginPoint:(CGPoint)arg1 ;
-(CGRect)contentClipRect;
-(void)setContentClipRect:(CGRect)arg1 ;
-(void)updateTransforms;
-(CGRect)visibleOriginalContentBounds;
-(double)contentScaleToFitInSize:(CGSize)arg1 withOriginalSize:(CGSize)arg2 orientation:(long long)arg3 ;
-(double)contentScaleToFitInSize:(CGSize)arg1 withOriginalSize:(CGSize)arg2 transform:(CGAffineTransform)arg3 orientation:(long long)arg4 clipRect:(CGRect)arg5 ;
-(double)_contentScaleToFitInSize:(CGSize)arg1 withContentSize:(CGSize)arg2 ;
-(CGPoint)contentPointToOriginalPoint:(CGPoint)arg1 ;
-(CGPoint)originalPointToContentPoint:(CGPoint)arg1 ;
-(CGRect)contentRectToOriginalRect:(CGRect)arg1 ;
-(CGRect)originalRectToContentRect:(CGRect)arg1 ;
-(CGPoint)originalPointToViewPoint:(CGPoint)arg1 ;
-(CGPoint)viewPointToOriginalPoint:(CGPoint)arg1 ;
-(CGRect)originalRectToViewRect:(CGRect)arg1 ;
-(CGRect)viewRectToOriginalRect:(CGRect)arg1 ;
@end

