/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSApplication.framework/Versions/A/TSApplication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol KNImplicitAmbientAnimating <NSObject>
@property (nonatomic,readonly) char canAddImplicitAmbientAnimations; 
@property (nonatomic,readonly) NSString * implicitAmbientAnimationEffectIdentifier; 
@property (nonatomic,readonly) char supportsImplicitAmbientAnimationsAfterStartingActionBuilds; 
@property (nonatomic,readonly) char shouldRemoveImplicitAmbientAnimationsAtEndOfNoneTransition; 
@required
-(char)canAddImplicitAmbientAnimations;
-(NSString *)implicitAmbientAnimationEffectIdentifier;
-(char)supportsImplicitAmbientAnimationsAfterStartingActionBuilds;
-(char)shouldRemoveImplicitAmbientAnimationsAtEndOfNoneTransition;
-(id)newImplicitAmbientBuildRendererWithAnimatedBuild:(id)arg1 buildChunk:(id)arg2 session:(id)arg3 animatedSlideView:(id)arg4;

@end

