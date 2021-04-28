/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/ResponsiveDesignContainerViewDelegate.h>

@class ResponsiveDesignShelfViewController, WindowBackdropVisualEffectView, ResponsiveDesignContainerView, NSLayoutConstraint, WKWebView, NSString;

@interface ResponsiveDesignViewController : NSViewController <ResponsiveDesignContainerViewDelegate> {

	ResponsiveDesignShelfViewController* _shelfViewController;
	WindowBackdropVisualEffectView* _visualEffectView;
	ResponsiveDesignContainerView* _responsiveDesignContainerView;
	NSLayoutConstraint* _visualEffectViewTopConstraint;
	char _ignoreDisplayBrowserSizeChange;
	WKWebView* _webView;

}

@property (assign,nonatomic) CGSize browserSize; 
@property (assign,nonatomic) unsigned long long pixelRatio; 
@property (nonatomic,readonly) WKWebView * webView;                      //@synthesize webView=_webView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewFrameChanged:(id)arg1 ;
-(void)updateViewConstraints;
-(void)viewDidLoad;
-(void)viewWillAppear;
-(WKWebView *)webView;
-(id)initWithWebView:(id)arg1 ;
-(void)webViewDidNavigateOrReload;
-(id)snapWidthsForResponsiveDesignContainerView:(id)arg1 ;
-(id)snapHeightsForResponsiveDesignContainerView:(id)arg1 ;
-(void)setBrowserSize:(CGSize)arg1 ;
-(CGSize)browserSize;
-(void)responsiveDesignContainerView:(id)arg1 didChangeBrowserSize:(CGSize)arg2 ;
-(unsigned long long)pixelRatio;
-(void)setPixelRatio:(unsigned long long)arg1 ;
-(void)magnifyToFitResponsiveDesignContainerView;
@end

