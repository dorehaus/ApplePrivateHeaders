/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MRLayer, MCTransitionTrigger, MRGesturePanZoomRotation;

@interface MRTransitionChanges : NSObject {

	double startTime;
	double duration;
	char isBackwards;
	MRLayer* _currentSublayer;
	MRLayer* _nextSublayer;
	MCTransitionTrigger* _transition;
	MRGesturePanZoomRotation* _pzr;

}

@property (retain) MRLayer * currentSublayer;                     //@synthesize currentSublayer=_currentSublayer - In the implementation block
@property (retain) MRLayer * nextSublayer;                        //@synthesize nextSublayer=_nextSublayer - In the implementation block
@property (retain) MCTransitionTrigger * transition;              //@synthesize transition=_transition - In the implementation block
@property (retain) MRGesturePanZoomRotation * pzr;                //@synthesize pzr=_pzr - In the implementation block
-(void)dealloc;
-(MCTransitionTrigger *)transition;
-(void)setTransition:(MCTransitionTrigger *)arg1 ;
-(MRLayer *)currentSublayer;
-(void)setPzr:(MRGesturePanZoomRotation *)arg1 ;
-(void)setCurrentSublayer:(MRLayer *)arg1 ;
-(void)setNextSublayer:(MRLayer *)arg1 ;
-(MRLayer *)nextSublayer;
-(MRGesturePanZoomRotation *)pzr;
@end
