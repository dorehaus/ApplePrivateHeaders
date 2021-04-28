/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/Versions/A/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class AKAnnotation, AKPageController, CALayer;

@interface AKAdornmentLayer : CALayer {

	char _isObservingAnnotation;
	char _isObservingEventHandling;
	AKAnnotation* _annotation;
	AKPageController* _pageController;
	double _currentScaleFactor;
	CALayer* _handleContainerLayer;

}

@property (retain) AKAnnotation * annotation;                      //@synthesize annotation=_annotation - In the implementation block
@property (__weak) AKPageController * pageController;              //@synthesize pageController=_pageController - In the implementation block
@property (assign) char isObservingAnnotation;                     //@synthesize isObservingAnnotation=_isObservingAnnotation - In the implementation block
@property (retain) CALayer * handleContainerLayer;                 //@synthesize handleContainerLayer=_handleContainerLayer - In the implementation block
@property (assign) double currentScaleFactor;                      //@synthesize currentScaleFactor=_currentScaleFactor - In the implementation block
@property (assign) char isObservingEventHandling;                  //@synthesize isObservingEventHandling=_isObservingEventHandling - In the implementation block
+(Class)_adornmentClassForAnnotation:(id)arg1 ;
+(id)newAdornmentLayerForAnnotation:(id)arg1 withPageController:(id)arg2 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)actionForKey:(id)arg1 ;
-(AKAnnotation *)annotation;
-(void)setAnnotation:(AKAnnotation *)arg1 ;
-(void)_stopObservingAnnotation;
-(void)_startObservingAnnotation;
-(void)teardown;
-(double)currentScaleFactor;
-(AKPageController *)pageController;
-(id)_initWithAnnotation:(id)arg1 andPageController:(id)arg2 ;
-(void)setPageController:(AKPageController *)arg1 ;
-(unsigned long long)currentlyDraggedArea;
-(void)updateAdornmentElements;
-(void)updateSublayersWithScale:(double)arg1 ;
-(char)needsUpdateWhenDraggingStartsOrEnds;
-(void)setCurrentScaleFactor:(double)arg1 ;
-(void)setHandleContainerLayer:(CALayer *)arg1 ;
-(CALayer *)handleContainerLayer;
-(void)_startObservingAnnotationEventHandlers;
-(void)_stopObservingAnnotationEventHandlers;
-(void)_addHandleSublayerAtPoint:(CGPoint)arg1 withStyle:(unsigned long long)arg2 ;
-(char)isObservingAnnotation;
-(void)setIsObservingAnnotation:(char)arg1 ;
-(char)isObservingEventHandling;
-(void)setIsObservingEventHandling:(char)arg1 ;
-(void)updatePixelAlignment;
@end

