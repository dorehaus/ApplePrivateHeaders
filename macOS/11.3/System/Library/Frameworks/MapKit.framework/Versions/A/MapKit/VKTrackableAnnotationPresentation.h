/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VKTrackableAnnotationPresentation <NSObject>
@property (assign,nonatomic) CGSize presentationCoordinate; 
@property (assign,nonatomic) char tracking; 
@property (assign,getter=isAnimatingAccuracy,nonatomic) char animatingAccuracy; 
@property (assign,nonatomic) double presentationAccuracy; 
@property (nonatomic,readonly) double minimumAccuracy; 
@property (nonatomic,readonly) VKEdgeInsets annotationTrackingEdgeInsets; 
@required
-(void)setTracking:(char)arg1;
-(char)tracking;
-(double)presentationAccuracy;
-(void)setPresentationAccuracy:(double)arg1;
-(void)setPresentationCoordinate:(CGSize)arg1;
-(CGSize)presentationCoordinate;
-(char)isAnimatingAccuracy;
-(void)setAnimatingAccuracy:(char)arg1;
-(double)minimumAccuracy;
-(VKEdgeInsets)annotationTrackingEdgeInsets;

@end

