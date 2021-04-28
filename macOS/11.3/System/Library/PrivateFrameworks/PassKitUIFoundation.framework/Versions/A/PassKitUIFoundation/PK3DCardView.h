/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/Versions/A/PassKitUIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUIFoundation/PassKitUIFoundation-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/SCNSceneRendererDelegate.h>

@protocol PK3DLiveCardViewDelegate;
@class SCNView, SCNMaterial, NSString;

@interface PK3DCardView : NSView <SCNSceneRendererDelegate> {

	SCNView* _sceneView;
	SCNMaterial* _cardMaterial;
	int _design;
	 _lastRollPitch;
	char _renderedOnce;
	char _motionEnabled;
	BOOL _invalidated;
	id<PK3DLiveCardViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PK3DLiveCardViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(id<PK3DLiveCardViewDelegate>)delegate;
-(void)setDelegate:(id<PK3DLiveCardViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)resizeSubviewsWithOldSize:(CGSize)arg1 ;
-(void)renderer:(id)arg1 didRenderScene:(id)arg2 atTime:(double)arg3 ;
-(void)setRollPitch:;
-(void)setMotionEnabled:(char)arg1 ;
-(void)renderSceneWithTextures:(id)arg1 shaders:(id)arg2 ;
@end
