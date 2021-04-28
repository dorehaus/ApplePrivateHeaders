/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@interface WebScrollbarPartAnimation : NSObject {

	Scrollbar* _scrollbar;
	RetainPtr<NSScrollerImp>* _scrollerImp;
	int _featureToAnimate;
	double _startValue;
	double _endValue;
	double _duration;
	RetainPtr<NSTimer>* _timer;
	RetainPtr<NSDate>* _startDate;
	RefPtr<WebCore::CubicBezierTimingFunction, WTF::RawPtrTraits<WebCore::CubicBezierTimingFunction>, WTF::DefaultRefDerefTraits<WebCore::CubicBezierTimingFunction>>* _timingFunction;

}
-(void)invalidate;
-(void)setDuration:(double)arg1 ;
-(void)startAnimation;
-(void)setCurrentProgress:(id)arg1 ;
-(void)stopAnimation;
-(id)initWithScrollbar:(Scrollbar*)arg1 featureToAnimate:(int)arg2 animateFrom:(double)arg3 animateTo:(double)arg4 duration:(double)arg5 ;
-(void)setStartValue:(double)arg1 ;
-(void)setEndValue:(double)arg1 ;
@end

