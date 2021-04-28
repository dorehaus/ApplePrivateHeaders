/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/Versions/A/PassKitUIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUIFoundation/PassKitUIFoundation-Structs.h>
#import <AppKit/NSView.h>

@class SCNView, PKPeerPayment3DScene, NSMutableArray, PKPeerPayment3DStore, NSString;

@interface PKPeerPayment3DTextView : NSView {

	SCNView* _sceneView;
	PKPeerPayment3DScene* _scene;
	double _sceneWidthUnits;
	double _sceneHeightUnits;
	NSMutableArray* _performHandlers;
	double _dynamicRollPitchMix;
	double _startAnimationTime;
	double _animationDuration;
	double _lastRenderTime;
	char _liveMotionEnabled;
	char _willAnimate;
	char _snapshotRequested;
	char _usedForSnapshotting;
	unsigned long long _framesFullyRendered;
	PKPeerPayment3DStore* _3DStore;
	char _layoutRequested;
	NSMutableArray* _charactersToDraw;
	unsigned long long _renderStyle;
	NSString* _text;

}

@property (nonatomic,readonly) unsigned long long renderStyle;              //@synthesize renderStyle=_renderStyle - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;                        //@synthesize text=_text - In the implementation block
+(id)supportedCharacterSet;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)text;
-(void)resizeSubviewsWithOldSize:(CGSize)arg1 ;
-(char)setText:(NSString *)arg1 ;
-(void)layoutText;
-(void)renderer:(id)arg1 didRenderScene:(id)arg2 atTime:(double)arg3 ;
-(void)renderer:(id)arg1 updateAtTime:(double)arg2 ;
-(id)initWithFrame:(CGRect)arg1 renderStyle:(unsigned long long)arg2 usedForSnapshotting:(char)arg3 ;
-(void)updateSceneUnits;
-(void)loadCharactersAndLayout;
-(void)performPostRender:(/*^block*/id)arg1 ;
-(id)generatedSnapshot;
-(void)setMotionEffectEnabled:(char)arg1 animated:(char)arg2 ;
-(2)_fakeAnimationRollPitchWithElapsedTime:(double)arg1 ;
-(unsigned long long)renderStyle;
@end

