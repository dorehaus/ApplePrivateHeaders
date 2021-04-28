/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSAnimation.h>

@class ImageHopAnimationController;

@interface ImageHopAnimation : NSAnimation {

	ImageHopAnimationController* _animationController;

}

@property (__weak) ImageHopAnimationController * animationController;              //@synthesize animationController=_animationController - In the implementation block
-(void)setCurrentProgress:(float)arg1 ;
-(void)setAnimationController:(ImageHopAnimationController *)arg1 ;
-(ImageHopAnimationController *)animationController;
-(CGPoint)_centerPointForProgress:(double)arg1 ;
@end

