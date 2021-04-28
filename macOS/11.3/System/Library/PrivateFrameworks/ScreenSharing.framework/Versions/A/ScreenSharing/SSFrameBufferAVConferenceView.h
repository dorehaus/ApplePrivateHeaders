/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenSharing/ScreenSharing-Structs.h>
#import <ScreenSharing/SSFrameBufferView.h>

@interface SSFrameBufferAVConferenceView : SSFrameBufferView {

	unsigned _layerRotation;
	CGPoint _scrollPoint;
	CGRect _conferenceDimensions;

}

@property (assign) CGRect conferenceDimensions;              //@synthesize conferenceDimensions=_conferenceDimensions - In the implementation block
@property (assign) unsigned layerRotation;                   //@synthesize layerRotation=_layerRotation - In the implementation block
@property (assign) CGPoint scrollPoint;                      //@synthesize scrollPoint=_scrollPoint - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)mouseMoved:(id)arg1 ;
-(void)scrollPoint:(CGPoint)arg1 ;
-(void)mouseDragged:(id)arg1 ;
-(CGPoint)scrollPoint;
-(void)setScrollPoint:(CGPoint)arg1 ;
-(void)setUseCachedImage:(char)arg1 ;
-(char)useCachedImage;
-(void)setAVConferenceLayerRotation:(unsigned)arg1 ;
-(CGRect)conferenceFrame;
-(void)setConferenceDimensions:(CGRect)arg1 ;
-(void)sendMouseButtonEventWithWindowCoordinates:(CGPoint)arg1 withButton:(unsigned long long)arg2 withState:(int)arg3 withClickCount:(long long)arg4 ;
-(void)sendMouseButtonEvent:(id)arg1 withButton:(unsigned long long)arg2 withState:(int)arg3 ;
-(unsigned)layerRotation;
-(SSPoint)frameBufferCoordinatesFromWindowCoordinates:(CGPoint)arg1 ;
-(CGRect)conferenceDimensions;
-(void)setLayerRotation:(unsigned)arg1 ;
-(SSPoint)frameBufferCoordinatesFromNSEvent:(id)arg1 ;
@end
