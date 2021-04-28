/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PAImaging.framework/Versions/A/PAImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PAImaging/PAImaging-Structs.h>
#import <AppKit/NSView.h>
#import <PAImaging/PANUMediaViewDelegate.h>

@protocol PANUMediaView;
@class NSView, PAItemView, PAItemViewConfiguration, NSString;

@interface PACanvasItemView : NSView <PANUMediaViewDelegate> {

	double _zoomFactor;
	double _zoomToFitFactor;
	char _zoomToFit;
	char _allowScaleUpInZoomToFit;
	char _shouldPerformLayout;
	NSView*<PANUMediaView> _mediaView;
	NSView* _overlayView;
	NSView* _contentOverlayView;
	PAItemView* _itemViewImpl;

}

@property (retain) PAItemView * itemViewImpl;                                      //@synthesize itemViewImpl=_itemViewImpl - In the implementation block
@property (retain) PAItemView * itemView; 
@property (nonatomic,retain) NSView*<PANUMediaView> mediaView;                     //@synthesize mediaView=_mediaView - In the implementation block
@property (nonatomic,readonly) NSView * overlayView;                               //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,readonly) NSView * contentOverlayView;                        //@synthesize contentOverlayView=_contentOverlayView - In the implementation block
@property (assign,nonatomic) char shouldPerformLayout;                             //@synthesize shouldPerformLayout=_shouldPerformLayout - In the implementation block
@property (assign,nonatomic) char allowScaleUpInZoomToFit;                         //@synthesize allowScaleUpInZoomToFit=_allowScaleUpInZoomToFit - In the implementation block
@property (assign,nonatomic) char zoomToFit;                                       //@synthesize zoomToFit=_zoomToFit - In the implementation block
@property (assign,nonatomic) double zoomFactor;                                    //@synthesize zoomFactor=_zoomFactor - In the implementation block
@property (nonatomic,readonly) double zoomToFitFactor;                             //@synthesize zoomToFitFactor=_zoomToFitFactor - In the implementation block
@property (nonatomic,readonly) CGRect visibleContentRect; 
@property (nonatomic,retain) PAItemViewConfiguration * configuration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)automaticallyNotifiesObserversOfZoomFactor;
+(char)automaticallyNotifiesObserversOfZoomToFit;
+(char)automaticallyNotifiesObserversOfZoomToFitFactor;
-(NSString *)description;
-(void)layout;
-(char)isOpaque;
-(char)wantsUpdateLayer;
-(void)setNeedsLayout:(char)arg1 ;
-(void)setFrameSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(PAItemView *)itemView;
-(PAItemViewConfiguration *)configuration;
-(NSView *)overlayView;
-(void)resizeSubviewsWithOldSize:(CGSize)arg1 ;
-(void)setItemView:(PAItemView *)arg1 ;
-(void)setConfiguration:(PAItemViewConfiguration *)arg1 ;
-(void)updateLayout;
-(NSView *)contentOverlayView;
-(double)zoomFactor;
-(void)setZoomFactor:(double)arg1 ;
-(NSView*<PANUMediaView>)mediaView;
-(void)setMediaView:(NSView*<PANUMediaView>)arg1 ;
-(CGRect)visibleContentRect;
-(void)mediaView:(id)arg1 didZoom:(double)arg2 ;
-(void)_updateContentFrame;
-(void)_updateContentViewFrameWithFrame:(CGRect)arg1 ;
-(void)layoutSubviewsWithConfiguration:(id)arg1 ;
-(void)_updateZoomToFitFactor:(double)arg1 ;
-(double)zoomToFitFactor;
-(void)setZoomToFit:(char)arg1 ;
-(void)addMouseTracker:(id)arg1 ;
-(CGPoint)convertPointToContent:(CGPoint)arg1 ;
-(CGPoint)convertPointFromContent:(CGPoint)arg1 ;
-(CGRect)convertRectToContent:(CGRect)arg1 ;
-(CGRect)convertRectFromContent:(CGRect)arg1 ;
-(CGPoint)convertWindowPointToContentView:(CGPoint)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 fromContentViewToView:(id)arg2 ;
-(char)allowScaleUpInZoomToFit;
-(void)setAllowScaleUpInZoomToFit:(char)arg1 ;
-(char)zoomToFit;
-(char)shouldPerformLayout;
-(void)setShouldPerformLayout:(char)arg1 ;
-(PAItemView *)itemViewImpl;
-(void)setItemViewImpl:(PAItemView *)arg1 ;
@end
