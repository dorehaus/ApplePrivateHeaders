/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/Versions/A/IMSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUI/IMSharedUI-Structs.h>
#import <QuartzCore/CALayer.h>

@protocol IMDynamicGradientReferenceView;
@class NSArray, CALayer, CATransformLayer;

@interface IMDynamicGradientLayer : CALayer {

	CGColorSpaceRef _colorSpace;
	double _screenScale;
	id<IMDynamicGradientReferenceView> _referenceView;
	NSArray* _colors;
	CALayer* _gradientLayer;
	CATransformLayer* _trackingLayer;
	CGRect _gradientFrame;

}

@property (nonatomic,retain) CALayer * gradientLayer;                                              //@synthesize gradientLayer=_gradientLayer - In the implementation block
@property (assign,nonatomic) CGRect gradientFrame;                                                 //@synthesize gradientFrame=_gradientFrame - In the implementation block
@property (nonatomic,retain) CATransformLayer * trackingLayer;                                     //@synthesize trackingLayer=_trackingLayer - In the implementation block
@property (assign,nonatomic) double screenScale;                                                   //@synthesize screenScale=_screenScale - In the implementation block
@property (assign,nonatomic) CGColorSpaceRef colorSpace;                                           //@synthesize colorSpace=_colorSpace - In the implementation block
@property (assign,nonatomic,__weak) id<IMDynamicGradientReferenceView> referenceView;              //@synthesize referenceView=_referenceView - In the implementation block
@property (nonatomic,copy) NSArray * colors;                                                       //@synthesize colors=_colors - In the implementation block
@property (nonatomic,readonly) CGImageRef gradient; 
-(void)dealloc;
-(id)description;
-(id)init;
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
-(CGColorSpaceRef)colorSpace;
-(void)setColors:(NSArray *)arg1 ;
-(void)layoutSublayers;
-(void)layerDidBecomeVisible:(char)arg1 ;
-(NSArray *)colors;
-(CGImageRef)gradient;
-(double)screenScale;
-(void)setGradientLayer:(CALayer *)arg1 ;
-(CALayer *)gradientLayer;
-(void)setScreenScale:(double)arg1 ;
-(id<IMDynamicGradientReferenceView>)referenceView;
-(void)setReferenceView:(id<IMDynamicGradientReferenceView>)arg1 ;
-(void)setTrackingLayer:(CATransformLayer *)arg1 ;
-(void)_updateAnimation;
-(CGRect)gradientFrame;
-(void)setGradientFrame:(CGRect)arg1 ;
-(CATransformLayer *)trackingLayer;
-(void)_updateGradientImage;
-(double)_floorToPixels:(double)arg1 ;
-(void)didMoveToWindow:(id)arg1 ;
@end

