/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <AppKit/NSAnimation.h>

@class QLAnimationWindowEffect;

@interface QLWindowAnimation : NSAnimation {

	QLAnimationWindowEffect* _windowEffect;

}

@property (readonly) QLAnimationWindowEffect * windowEffect; 
-(float)_valueForProgress:(double)arg1 ;
-(id)initWithDuration:(double)arg1 animationTarget:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCurrentProgress:(float)arg1 ;
-(float)currentValue;
-(void)discardWindowEffect;
-(QLAnimationWindowEffect *)windowEffect;
@end

