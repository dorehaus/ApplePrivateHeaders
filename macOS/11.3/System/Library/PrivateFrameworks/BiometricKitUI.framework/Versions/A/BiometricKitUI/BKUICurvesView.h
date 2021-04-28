/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/Versions/A/BiometricKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiometricKitUI/BiometricKitUI-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/NSXMLParserDelegate.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <libobjc.A.dylib/NSAccessibilityImage.h>

@protocol OS_os_log;
@class NSMutableArray, NSColor, CABasicAnimation, NSCondition, NSXMLParser, NSBezierPath, CAShapeLayer, NSObject, NSNumber, NSString;

@interface BKUICurvesView : NSView <NSXMLParserDelegate, CAAnimationDelegate, NSAccessibilityImage> {

	NSMutableArray* _pathLayers;
	NSColor* _color;
	unsigned long long _currentLayer;
	unsigned long long _preEstimateLayer;
	float _progress;
	char _estimateFailed;
	char _estimating;
	CABasicAnimation* _lastAnimation;
	double _lastRatio;
	CGSize _lastFrameSize;
	NSCondition* _initCondition;
	BOOL _inited;
	NSXMLParser* _parser;
	NSBezierPath* _wholePath;
	NSMutableArray* _paths;
	CAShapeLayer* _fingerLayer;
	NSObject*<OS_os_log> bkui_curves_view_log;
	NSNumber* _speed;

}

@property (retain) NSNumber * speed;                                //@synthesize speed=_speed - In the implementation block
@property (assign) float progress; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(float)progress;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(id)accessibilityLabel;
-(CGRect)accessibilityFrame;
-(void)setSpeed:(NSNumber *)arg1 ;
-(NSNumber *)speed;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(void)setProgress:(float)arg1 ;
-(void)_resetLayers;
-(void)_waitForInit;
-(void)_startAnimation:(unsigned long long)arg1 withColor:(id)arg2 isLast:(char)arg3 ;
-(void)_animateFromLayer:(unsigned long long)arg1 toLayer:(unsigned long long)arg2 withColor:(id)arg3 ;
-(void)_animateEstimateFailure;
-(void)estimateFailed;
-(unsigned long long)_animateFromLayer:(unsigned long long)arg1 toProgress:(float)arg2 withColor:(id)arg3 ;
-(void)_addEstimateWatchDog;
-(void)_removeEstimateWatchDog;
-(void)_checkEstimateFailedAfterAnimation:(id)arg1 ;
-(double)_getRatio:(CGSize)arg1 ;
-(CGPathRef)newQuartzPath:(id)arg1 transform:(CGAffineTransform*)arg2 ;
-(CGPoint)_getPoint:(id)arg1 ;
-(void)_resetEstimate:(id)arg1 ;
-(void)estimateProgress:(float)arg1 ;
-(void)loadDataFromXML:(id)arg1 name:(id)arg2 color:(id)arg3 ;
-(void)setSublayersSize:(CGSize)arg1 ;
@end
