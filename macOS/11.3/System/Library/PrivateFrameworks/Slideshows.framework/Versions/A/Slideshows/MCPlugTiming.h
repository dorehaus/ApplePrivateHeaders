/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MCPlugTiming
@property (assign,nonatomic) double phaseInDuration; 
@property (assign,nonatomic) double loopDuration; 
@property (assign,nonatomic) double phaseOutDuration; 
@property (nonatomic,readonly) double fullDuration; 
@property (assign,nonatomic) double numberOfLoops; 
@required
-(void)setNumberOfLoops:(double)arg1;
-(double)fullDuration;
-(double)numberOfLoops;
-(double)loopDuration;
-(void)setPhaseInDuration:(double)arg1;
-(void)setLoopDuration:(double)arg1;
-(void)setPhaseOutDuration:(double)arg1;
-(double)phaseInDuration;
-(double)phaseOutDuration;

@end

