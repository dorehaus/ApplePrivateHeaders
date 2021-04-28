/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKAnnotationContainerViewDelegate <NSObject>
@optional
-(void)annotationContainerDidFinishMapsTransitionExpanding:(id)arg1;

@required
-(CGPoint*)convertCoordinate:(CLLocationCoordinate2D)arg1 toPointToView:(id)arg2;
-(CGRect*)visibleRectInView:(id)arg1;
-(char)annotationContainerShouldAlignToPixels:(id)arg1;
-(char)annotationContainerIsRotated:(id)arg1;
-(id)annotationContainer:(id)arg1 requestAddingClusterForAnnotationViews:(id)arg2;
-(void)annotationContainer:(id)arg1 requestRemovingClusterAnnotationView:(id)arg2 updateVisible:(char)arg3;
-(void)annotationContainer:(id)arg1 calloutPrimaryActionTriggeredForAnnotationView:(id)arg2;
-(void)annotationContainer:(id)arg1 scrollToRevealCalloutWithOffset:(CGPoint)arg2 annotationCoordinate:(CLLocationCoordinate2D)arg3 completionHandler:(/*^block*/id)arg4;
-(double)annotationContainer:(id)arg1 pinDropDistanceForCoordinate:(CLLocationCoordinate2D)arg2 maxDistance:(double*)arg3;
-(void)annotationContainerWillAnimateBubble:(id)arg1;
-(void)annotationContainerDidAnimateBubble:(id)arg1;
-(void)annotationContainerWillDropPins:(id)arg1;
-(void)annotationContainerDidDropPins:(id)arg1;
-(CGRect*)visibleCenteringRectInView:(id)arg1;
-(CLLocationCoordinate2D*)convertPoint:(CGPoint)arg1 toCoordinateFromView:(id)arg2;
-(CGRect*)annotationContainerVisibleRect:(id)arg1;
-(char)annotationContainer:(id)arg1 isAnnotationView:(id)arg2 validForDisplayAtPoint:(CGPoint)arg3;

@end
