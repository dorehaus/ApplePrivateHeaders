/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Frameworks/OpusKit.framework/Versions/A/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKWidgetContentEffect.h>

@class NSDictionary;

@interface OKWidgetContentKenburnsEffect : OKWidgetContentEffect {

	NSDictionary* _settings;
	double _animationStartTime;
	double _animationCurrentTime;

}
+(id)supportedSettings;
-(void)dealloc;
-(id)init;
-(void)stopAnimation;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(id)initWithSettings:(id)arg1 ;
-(void)pauseAnimation;
-(void)resumeAnimation;
-(id)settingObjectForKey:(id)arg1 ;
-(void)applyAnimationModification;
-(void)applyLayerValueOnAnimation;
-(void)applyEndAnimation;
-(void)applySettings;
-(void)startAnimationWithView:(id)arg1 ;
-(double)animationCurrentTime;
@end

