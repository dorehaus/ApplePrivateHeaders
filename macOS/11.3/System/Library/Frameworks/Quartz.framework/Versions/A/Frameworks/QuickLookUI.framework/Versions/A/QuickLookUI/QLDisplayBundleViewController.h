/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/QLPreviewOverlayDataSource.h>
#import <libobjc.A.dylib/QLMarkupControllerDelegate.h>

@class NSURL, QLDisplayBundle, NSView, QLOverlayBorderView, QLPreviewNavigationController, QLPreviewOverlayController, NSArray, QLMarkupController, STBlockingViewController, CALayer, NSString;

@interface QLDisplayBundleViewController : NSViewController <QLPreviewOverlayDataSource, QLMarkupControllerDelegate> {

	QLDisplayBundle* _displayBundle;
	int _mode;
	NSView* _contentView;
	QLOverlayBorderView* _borderView;
	QLPreviewNavigationController* _navigationController;
	QLPreviewOverlayController* _overlayController;
	char _showsOverlayControls;
	CGRect _customOverlayFrame;
	CGRect _customRolloverFrame;
	NSArray* _contentViewSizingConstraints;
	QLMarkupController* _markupController;
	STBlockingViewController* _blockingViewController;

}

@property (retain) NSArray * contentViewSizingConstraints;                            //@synthesize contentViewSizingConstraints=_contentViewSizingConstraints - In the implementation block
@property (retain) STBlockingViewController * blockingViewController;                 //@synthesize blockingViewController=_blockingViewController - In the implementation block
@property (retain) QLMarkupController * markupController;                             //@synthesize markupController=_markupController - In the implementation block
@property (assign,nonatomic,__weak) QLDisplayBundle * displayBundle;                  //@synthesize displayBundle=_displayBundle - In the implementation block
@property (readonly) int mode; 
@property (nonatomic,retain) NSView * contentView;                                    //@synthesize contentView=_contentView - In the implementation block
@property (readonly) CALayer * maskedContentLayer; 
@property (readonly) char useLayerMaskForCorners; 
@property (retain) QLOverlayBorderView * borderView;                                  //@synthesize borderView=_borderView - In the implementation block
@property (readonly) CGRect borderFrame; 
@property (readonly) NSView * borderContainerView; 
@property (retain) QLPreviewOverlayController * overlayController;                    //@synthesize overlayController=_overlayController - In the implementation block
@property (assign) CGRect customOverlayFrame;                                         //@synthesize customOverlayFrame=_customOverlayFrame - In the implementation block
@property (assign) CGRect customRolloverFrame;                                        //@synthesize customRolloverFrame=_customRolloverFrame - In the implementation block
@property (retain) QLPreviewNavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (readonly) NSView * markupToolbarView; 
@property (readonly) NSView * overlayParentView; 
@property (readonly) CALayer * overlayParentLayer; 
@property (readonly) double backingScaleFactor; 
@property (readonly) CGRect overlayFrame; 
@property (readonly) CGRect rolloverFrame; 
@property (readonly) char showControls; 
@property (readonly) char shouldAlwaysHandleMultiClicks; 
@property (readonly) char needsPlayControl; 
@property (readonly) char needsTimeControl; 
@property (assign) char playing; 
@property (readonly) float progress; 
@property (readonly) char needsPageControl; 
@property (readonly) unsigned long long numberOfPages; 
@property (assign) unsigned long long currentPage; 
@property (readonly) double rolloverActivationDelay; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSURL * urlForMarkup; 
@property (readonly) NSURL * savedCopyURL; 
+(id)keyPathsForValuesAffectingNeedsTimeControl;
+(id)keyPathsForValuesAffectingNumberOfPages;
+(id)keyPathsForValuesAffectingCurrentPage;
+(id)keyPathsForValuesAffectingOverlayFrame;
+(id)keyPathsForValuesAffectingPlaying;
+(id)keyPathsForValuesAffectingProgress;
-(char)updateOverlayFrame;
-(void)updateNavigationControls;
-(char)needsPageControl;
-(char)needsTimeControl;
-(void)_deactivateOverlayControls;
-(void)_activateOverlayControls;
-(char)hasContentAtLocation:(CGPoint)arg1 ;
-(CGRect)rolloverFrame;
-(CALayer *)overlayParentLayer;
-(NSView *)overlayParentView;
-(char)shouldAlwaysHandleMultiClicks;
-(double)rolloverActivationDelay;
-(void)setMarkupController:(QLMarkupController *)arg1 ;
-(void)_updateOverlayBorder;
-(char)_hasOverlayControls;
-(void)_updateNavigationController;
-(void)updateContentViewCrop;
-(NSArray *)contentViewSizingConstraints;
-(void)setContentViewSizingConstraints:(NSArray *)arg1 ;
-(NSView *)borderContainerView;
-(CALayer *)maskedContentLayer;
-(char)useLayerMaskForCorners;
-(void)_attachToOverlayControls:(id)arg1 ;
-(CGRect)_contentFrameInViewSpace;
-(CGRect)_convertRectFromDisplayBundleToView:(CGRect)arg1 ;
-(CGRect)customOverlayFrame;
-(CGRect)customRolloverFrame;
-(void)_updateOverlayControls;
-(void)setCustomOverlayFrame:(CGRect)arg1 ;
-(void)setCustomRolloverFrame:(CGRect)arg1 ;
-(void)setShowsOverlayControls:(char)arg1 withOverlayController:(id)arg2 ;
-(void)presentScreenTimeLockoutWithPolicy:(long long)arg1 displayBundle:(id)arg2 ;
-(NSView *)markupToolbarView;
-(void)dealloc;
-(void)cleanup;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(float)progress;
-(int)mode;
-(NSView *)contentView;
-(void)setContentView:(NSView *)arg1 ;
-(double)backingScaleFactor;
-(void)loadView;
-(void)viewFrameChanged:(id)arg1 ;
-(void)viewWillStartLiveResize;
-(void)viewDidEndLiveResize;
-(unsigned long long)currentPage;
-(void)viewDidAppear;
-(void)setCurrentPage:(unsigned long long)arg1 ;
-(char)playing;
-(unsigned long long)numberOfPages;
-(CGRect)overlayFrame;
-(QLPreviewNavigationController *)navigationController;
-(CGRect)borderFrame;
-(void)setPlaying:(char)arg1 ;
-(NSURL *)urlForMarkup;
-(id)replaceContentWithMarkupViewController:(id)arg1 ;
-(NSURL *)savedCopyURL;
-(void)didSave:(char)arg1 toURL:(id)arg2 ;
-(void)markupBecameDirty:(char)arg1 ;
-(void)editOccuredOnPage:(long long)arg1 ;
-(void)revertMarkup;
-(void)promptSaveForCloseWithCloseHandler:(/*^block*/id)arg1 ;
-(void)willShow;
-(void)enableBorder;
-(void)disableBorder;
-(STBlockingViewController *)blockingViewController;
-(void)setBorderView:(QLOverlayBorderView *)arg1 ;
-(QLOverlayBorderView *)borderView;
-(void)willHide;
-(void)setNavigationController:(QLPreviewNavigationController *)arg1 ;
-(void)didLoad;
-(char)showControls;
-(QLPreviewOverlayController *)overlayController;
-(void)setOverlayController:(QLPreviewOverlayController *)arg1 ;
-(char)mustHandleDragAtLocation:(CGPoint)arg1 ;
-(char)needsPlayControl;
-(void)setBlockingViewController:(STBlockingViewController *)arg1 ;
-(QLDisplayBundle *)displayBundle;
-(QLMarkupController *)markupController;
-(void)setOverlayControlOverlayFrame:(CGRect)arg1 rollOverFrame:(CGRect)arg2 ;
-(void)setDisplayBundle:(QLDisplayBundle *)arg1 ;
-(char)hasOverlayControlAtPoint:(CGPoint)arg1 ;
-(char)hasTimeControlsAtLocation:(CGPoint)arg1 ;
-(void)enterMarkupWithSaveInPlace:(char)arg1 ;
-(void)teardownMarkup:(long long)arg1 needsSave:(char*)arg2 ;
@end

