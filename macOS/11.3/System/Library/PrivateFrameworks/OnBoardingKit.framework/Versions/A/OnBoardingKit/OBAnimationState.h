/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/Versions/A/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface OBAnimationState : NSObject {

	NSString* _name;
	double _transitionDuration;
	double _transitionSpeed;
	NSString* _darkName;

}

@property (nonatomic,retain) NSString * darkName;                    //@synthesize darkName=_darkName - In the implementation block
@property (nonatomic,retain) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) double transitionDuration;              //@synthesize transitionDuration=_transitionDuration - In the implementation block
@property (assign,nonatomic) double transitionSpeed;                 //@synthesize transitionSpeed=_transitionSpeed - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(double)transitionSpeed;
-(double)transitionDuration;
-(id)stateForLayer:(id)arg1 inView:(id)arg2 ;
-(id)initWithStateName:(id)arg1 transitionDuration:(double)arg2 transitionSpeed:(double)arg3 ;
-(char)_shouldShowDarkModeAnimationState:(id)arg1 ;
-(NSString *)darkName;
-(id)initWithStateName:(id)arg1 darkStateName:(id)arg2 transitionDuration:(double)arg3 transitionSpeed:(double)arg4 ;
-(void)setTransitionDuration:(double)arg1 ;
-(void)setTransitionSpeed:(double)arg1 ;
-(void)setDarkName:(NSString *)arg1 ;
@end
