/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/MKModernControlAppearanceView.h>
#import <libobjc.A.dylib/NSViewLayerContentScaleDelegate.h>

@class MKModernControlAppearanceHelper, NSImageView, NSButton, MKMapView, NSString;

@interface MKZoomControl : NSView <MKModernControlAppearanceView, NSViewLayerContentScaleDelegate> {

	MKModernControlAppearanceHelper* _appearanceHelper;
	int _zoomState;
	NSImageView* _minusImageView;
	NSImageView* _plusImageView;
	NSButton* _minusButton;
	NSButton* _plusButton;
	char _userInteractionEnabled;
	char _hovering;
	MKMapView* _mapView;

}

@property (assign,nonatomic) char userInteractionEnabled; 
@property (assign,nonatomic) char hovering;                            //@synthesize hovering=_hovering - In the implementation block
@property (assign,nonatomic,__weak) MKMapView * mapView;               //@synthesize mapView=_mapView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)zoomControlWithMapView:(id)arg1 ;
-(char)isFlipped;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)viewDidChangeEffectiveAppearance;
-(void)viewDidMoveToWindow;
-(void)mouseMoved:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
-(id)initWithMapView:(id)arg1 ;
-(void)updateAppearance;
-(char)userInteractionEnabled;
-(void)setHovering:(char)arg1 ;
-(void)setUserInteractionEnabled:(char)arg1 ;
-(char)hovering;
-(void)zoomControlMinusAction:(id)arg1 ;
-(void)zoomControlPlusAction:(id)arg1 ;
@end
