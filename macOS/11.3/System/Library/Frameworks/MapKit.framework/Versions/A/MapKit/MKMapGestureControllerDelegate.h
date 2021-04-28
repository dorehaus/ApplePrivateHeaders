/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKMapGestureControllerDelegate <NSObject>
@required
-(void)gestureControllerWillStartUserInteraction:(id)arg1;
-(void)gestureControllerDidStopUserInteraction:(id)arg1;
-(void)gestureControllerWillStartPanning:(id)arg1;
-(void)gestureControllerDidStopPanning:(id)arg1 willDecelerate:(char)arg2;
-(void)gestureControllerDidStopPanningDecelerating:(id)arg1;
-(void)gestureControllerWillStartRotating:(id)arg1;
-(void)gestureControllerDidStopRotatingDecelerating:(id)arg1;
-(void)gestureControllerDidStopRotating:(id)arg1 willDecelerate:(char)arg2;
-(CGPoint*)gestureController:(id)arg1 focusPointForPoint:(CGPoint)arg2 gestureKind:(long long)arg3;
-(void)gestureControllerWillStartZooming:(id)arg1 animated:(char)arg2;
-(void)gestureControllerDidStopZooming:(id)arg1 direction:(long long)arg2 willDecelerate:(char)arg3;
-(void)gestureControllerDidStopZoomingDecelerating:(id)arg1 direction:(long long)arg2;
-(void)gestureControllerDidStopTilting:(id)arg1 willDecelerate:(char)arg2 tiltDirection:(long long)arg3;
-(void)gestureControllerWillStartTilting:(id)arg1;
-(void)gestureControllerDidStopTiltingDecelerating:(id)arg1;
-(char)gestureController:(id)arg1 shouldAttemptToRecognizeWithEvent:(id)arg2;
-(void)gestureControllerDidStopZooming:(id)arg1 direction:(long long)arg2 type:(long long)arg3 willDecelerate:(char)arg4;
-(void)gestureControllerDidStopZoomingDecelerating:(id)arg1 direction:(long long)arg2 type:(long long)arg3;

@end

