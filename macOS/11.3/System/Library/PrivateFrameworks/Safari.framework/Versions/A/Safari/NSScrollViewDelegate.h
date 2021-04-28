/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSScrollViewDelegate <NSObject>
@property (setter=_setWantsPageAlignedHorizontalAxis:) char _wantsPageAlignedHorizontalAxis; 
@property (setter=_setWantsPageAlignedVerticalAxis:) char _wantsPageAlignedVerticalAxis; 
@optional
-(void)didBeginScrollInScrollView:(id)arg1;
-(void)didScrollInScrollView:(id)arg1;
-(void)didEndScrollInScrollView:(id)arg1;
-(void)scrollViewBeganMomentum:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3;
-(double)scrollView:(id)arg1 pageAlignedOriginOnAxis:(long long)arg2 forProposedDestination:(double)arg3 currentOrigin:(double)arg4 initialOrigin:(double)arg5 velocity:(double)arg6;
-(void)scrollView:(id)arg1 didChangePresentationOrigin:(CGPoint)arg2 active:(char)arg3;
-(id)magnificationInflectionPointsForScrollView:(id)arg1;
-(char)allowPanningInScrollView:(id)arg1;
-(char)_wantsPageAlignedHorizontalAxis;
-(void)_setWantsPageAlignedHorizontalAxis:(char)arg1;
-(char)_wantsPageAlignedVerticalAxis;
-(void)_setWantsPageAlignedVerticalAxis:(char)arg1;

@end

