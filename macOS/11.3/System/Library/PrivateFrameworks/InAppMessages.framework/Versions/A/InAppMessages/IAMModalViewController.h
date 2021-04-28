/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/Versions/A/InAppMessages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InAppMessages/InAppMessages-Structs.h>
#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/NSWindowDelegate.h>

@protocol IAMViewControllerMetricsDelegate;
@class NSViewController, NSView, NSString;

@interface IAMModalViewController : NSViewController <NSWindowDelegate> {

	char _shouldPresentFullscreen;
	NSViewController* _contentViewController;
	id<IAMViewControllerMetricsDelegate> _metricsDelegate;
	/*^block*/id _viewControllerWillDismissBlock;
	NSView* _contentView;

}

@property (nonatomic,retain) NSView * contentView;                                                     //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) NSViewController * contentViewController;                                 //@synthesize contentViewController=_contentViewController - In the implementation block
@property (assign,nonatomic,__weak) id<IAMViewControllerMetricsDelegate> metricsDelegate;              //@synthesize metricsDelegate=_metricsDelegate - In the implementation block
@property (nonatomic,copy) id viewControllerWillDismissBlock;                                          //@synthesize viewControllerWillDismissBlock=_viewControllerWillDismissBlock - In the implementation block
@property (assign,nonatomic) char shouldPresentFullscreen;                                             //@synthesize shouldPresentFullscreen=_shouldPresentFullscreen - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSView *)contentView;
-(void)setContentView:(NSView *)arg1 ;
-(void)loadView;
-(void)setContentViewController:(NSViewController *)arg1 ;
-(void)windowDidEndSheet:(id)arg1 ;
-(NSViewController *)contentViewController;
-(void)viewDidLoad;
-(id<IAMViewControllerMetricsDelegate>)metricsDelegate;
-(void)setMetricsDelegate:(id<IAMViewControllerMetricsDelegate>)arg1 ;
-(id)viewControllerWillDismissBlock;
-(void)setViewControllerWillDismissBlock:(id)arg1 ;
-(char)shouldPresentFullscreen;
-(void)setShouldPresentFullscreen:(char)arg1 ;
@end

