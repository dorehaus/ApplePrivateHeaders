/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class IKNImageViewHandler, IKNSelection;

@interface IKNKnobsLayer : CALayer {

	IKNImageViewHandler* _handler;
	CGPathRef _handlePath;
	char _selectionsCanBeModified;
	IKNSelection* _mouseOverSelection;
	long long _mouseOverKnob;
	char _hideNonSelectedKnobs;
	long long _autoItemGuideIndex;
	long long _mouseOverGuideIndex;
	char _drawGuides;
	long long _guideCount;
	CGPoint _guidePoints[8];

}

@property (assign,nonatomic) IKNImageViewHandler * handler;              //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) char hideNonSelectedKnobs;                  //@synthesize hideNonSelectedKnobs=_hideNonSelectedKnobs - In the implementation block
@property (assign,nonatomic) char selectionsCanBeModified;               //@synthesize selectionsCanBeModified=_selectionsCanBeModified - In the implementation block
@property (retain) IKNSelection * mouseOverSelection;                    //@synthesize mouseOverSelection=_mouseOverSelection - In the implementation block
+(void)initialize;
-(void)adjustToViewFrameChange:(id)arg1 ;
-(void)setHideNonSelectedKnobs:(char)arg1 ;
-(char)selectionsCanBeModified;
-(void)setSelectionsCanBeModified:(char)arg1 ;
-(void)resetMouseOverInfo;
-(void)dragWithEvent:(id)arg1 layers:(id)arg2 ;
-(void)addGuideFrom:(CGPoint)arg1 to:(CGPoint)arg2 index:(long long*)arg3 ;
-(char)drawGuideForResizing:(CGPoint)arg1 autoItem:(id)arg2 ;
-(void)updateGuidesForAutodetectedItem:(id)arg1 drawSingleGuide:(char)arg2 ;
-(void)drawHandleInContext:(CGContextRef)arg1 atPoint:(CGPoint)arg2 filled:(char)arg3 ;
-(void)drawCircleInContext:(CGContextRef)arg1 center:(CGPoint)arg2 radius:(double)arg3 relativeTo:(id)arg4 ;
-(void)setMouseOverSelection:(IKNSelection *)arg1 ;
-(void)rotateWithEvent:(id)arg1 layers:(id)arg2 ;
-(void)resizeWithEvent:(id)arg1 item:(id)arg2 knob:(long long)arg3 ;
-(char)hideNonSelectedKnobs;
-(IKNSelection *)mouseOverSelection;
-(void)dealloc;
-(IKNImageViewHandler *)handler;
-(void)setHandler:(IKNImageViewHandler *)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)mouseMoved:(id)arg1 ;
-(char)containsPoint:(CGPoint)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setup;
@end

