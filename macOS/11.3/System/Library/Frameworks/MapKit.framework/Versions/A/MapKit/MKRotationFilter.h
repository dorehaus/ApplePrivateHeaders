/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKRotationFilterDelegate;
#import <MapKit/MapKit-Structs.h>
@class VKMapView;

@interface MKRotationFilter : NSObject {

	VKMapView* _mapLayer;
	double _gestureStartAngle;
	char _userRotatedAwayFromVerticalYaw;
	double _previousVerticalYawOverride;
	char _snappedToNorth;
	char _snappedAtStart;
	char _snappingEnabled;
	double _additionalSnappingAngle;
	id<MKRotationFilterDelegate> _delegate;

}

@property (assign,getter=isSnappedToNorth,nonatomic) char snappedToNorth;               //@synthesize snappedToNorth=_snappedToNorth - In the implementation block
@property (assign,nonatomic) double additionalSnappingAngle;                            //@synthesize additionalSnappingAngle=_additionalSnappingAngle - In the implementation block
@property (assign,nonatomic,__weak) id<MKRotationFilterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<MKRotationFilterDelegate>)delegate;
-(void)setDelegate:(id<MKRotationFilterDelegate>)arg1 ;
-(void)startRotatingWithFocusPoint:(CGPoint)arg1 withSnapping:(char)arg2 ;
-(void)updateRotationWithFocusPoint:(CGPoint)arg1 newValue:(double)arg2 ;
-(void)stopRotatingWithFocusPoint:(CGPoint)arg1 ;
-(void)updateSnappedToNorth;
-(void)setSnappedToNorth:(char)arg1 ;
-(char)hasAdditionalSnappingAngle;
-(id)initWithMapLayer:(id)arg1 ;
-(void)snapToNorthAnimated:(char)arg1 forceTrueNorth:(char)arg2 ;
-(char)isSnappedToNorth;
-(double)additionalSnappingAngle;
-(void)setAdditionalSnappingAngle:(double)arg1 ;
@end

