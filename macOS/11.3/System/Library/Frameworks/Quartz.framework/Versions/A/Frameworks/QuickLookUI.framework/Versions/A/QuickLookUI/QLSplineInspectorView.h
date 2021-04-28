/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <AppKit/NSView.h>

@interface QLSplineInspectorView : NSView {

	function<void (QLSplineInspectorView *, CGRect)>* _draw;
	function<void (QLSplineInspectorView *, CGPoint)>* _mouseDown;
	function<void (QLSplineInspectorView *, CGPoint)>* _mouseDragged;
	double _scale;
	long long _trackingKnotIndex;

}

@property (assign,nonatomic) double scale;                             //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) long long trackingKnotIndex;              //@synthesize trackingKnotIndex=_trackingKnotIndex - In the implementation block
-(void)setTrackingKnotIndex:(long long)arg1 ;
-(long long)trackingKnotIndex;
-(double)scale;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setScale:(double)arg1 ;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
@end
