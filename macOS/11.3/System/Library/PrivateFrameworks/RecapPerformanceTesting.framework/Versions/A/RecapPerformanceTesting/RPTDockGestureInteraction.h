/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RecapPerformanceTesting.framework/Versions/A/RecapPerformanceTesting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RPTInteraction.h>

@interface RPTDockGestureInteraction : NSObject <RPTInteraction> {

	unsigned long long _gestureStyle;
	double _amplitude;

}

@property (assign,nonatomic) unsigned long long gestureStyle;              //@synthesize gestureStyle=_gestureStyle - In the implementation block
@property (assign,nonatomic) double amplitude;                             //@synthesize amplitude=_amplitude - In the implementation block
-(double)amplitude;
-(void)setAmplitude:(double)arg1 ;
-(void)invokeWithComposer:(id)arg1 duration:(double)arg2 ;
-(id)reversedInteraction;
-(id)interactionByScalingBy:(double)arg1 ;
-(unsigned long long)gestureStyle;
-(id)initWithGestureStyle:(unsigned long long)arg1 ;
-(void)setGestureStyle:(unsigned long long)arg1 ;
@end

