/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/Versions/A/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthKitUI/AuthKitUI-Structs.h>
#import <libobjc.A.dylib/AKICAUIDelegate.h>
#import <libobjc.A.dylib/AKICAWebKitViewControllerDelegate.h>
#import <AuthKitUI/AuthWebViewDelegate.h>
#import <libobjc.A.dylib/AKWebViewButtonBarDelegate.h>
#import <libobjc.A.dylib/AKMBICAUIDelegate.h>
#import <libobjc.A.dylib/AKInAssistantNavigationHandler.h>

@protocol AuthWebViewDelegate, MBUIDelegate, MBWebKitViewControllerDelegate;
@class NSView, NSTextField, NSProgressIndicator, NSWindow, NSLayoutConstraint, AKICAWebKitViewController, NSURLRequest, NSString, JSValue, AKWebViewButtonBar, NSTimer, AKAppleIDServerResourceLoadDelegate, NSImage, ADMChangePasswordController, NSHTTPURLResponse, AKServerRequestConfiguration, AKAppleIDAuthenticationInAppContext, AKAppleIDServerUIContextController;

@interface AKAuthWebTabView : NSObject <AKICAUIDelegate, AKICAWebKitViewControllerDelegate, AuthWebViewDelegate, AKWebViewButtonBarDelegate, AKMBICAUIDelegate, AKInAssistantNavigationHandler> {

	NSView* _containerView;
	NSView* _webViewContainer;
	NSView* _webView;
	NSView* _loadingView;
	NSView* _loadingViewCancelButton;
	NSView* _unavailibleView;
	NSView* _unavailibleViewCancelButton;
	NSTextField* _unavailableTextField;
	NSView* _addiCloudMemberViewContainer;
	NSView* _addiCloudMemberView;
	NSProgressIndicator* _loadingSpinner;
	NSWindow* _sheet;
	NSView* _sheetContent;
	NSView* _buttonBarView;
	NSLayoutConstraint* _buttonBarHeight;
	NSLayoutConstraint* _buttonBarWidth;
	AKICAWebKitViewController* webViewVC;
	NSURLRequest* _urlRequest;
	NSString* _viewName;
	NSString* _url;
	NSString* _content;
	NSString* _parentURL;
	NSString* _accountID;
	NSWindow* _parentWindow;
	AKAuthWebTabView* nestedWebView;
	unsigned long long _webViewType;
	JSValue* _callback;
	char _isShowingNestedSheet;
	CGSize _contentSize;
	AKWebViewButtonBar* buttonBar;
	char _isButtonBarShown;
	char _isResizeAvailible;
	char _isWebClientIsReadyCalled;
	char _isWebClientHasLoadedCalled;
	char _isAddMemberCompleted;
	NSTimer* _waitTimer;
	AKAppleIDServerResourceLoadDelegate* _resourceLoadDelegate;
	/*^block*/id _defaultAction;
	NSImage* _displayImage;
	ADMChangePasswordController* mChangePasswordController;
	NSHTTPURLResponse* _latestReadResponse;
	struct {
		unsigned delegateSetWindowTitle : 1;
		unsigned delegateSetWindowMessage : 1;
		unsigned delegateSetPageImageIsHidden : 1;
		unsigned delegateSetPageSymbol : 1;
		unsigned delegateSetLeftButtonTitle : 1;
		unsigned delegateSetLeftButtonEnabled : 1;
		unsigned delegateSetRightButtonTitle : 1;
		unsigned delegateSetRightButtonEnabled : 1;
		unsigned delegateSetAlternateButtonTitle : 1;
		unsigned delegateSetAlternateButtonEnabled : 1;
		unsigned delegateSaveFile : 1;
		unsigned delegateSaveFileWithName : 1;
		unsigned delegateShowTerms : 1;
		unsigned delegateAppleIDOptOut : 1;
		unsigned delegateDidCancel : 1;
		unsigned delegateDidDismiss : 1;
		unsigned delegateDidSucceed : 1;
		unsigned delegateDidFinishLoading : 1;
		unsigned delegateDidFail : 1;
		unsigned delegateSkipSignIn : 1;
		unsigned delegateModifyURLRequest : 1;
		unsigned padding : 1;
	}  _flags;
	JSValue* _leftButtonCallback;
	JSValue* _rightButtonCallback;
	JSValue* _alternateButtonCallback;
	char _loadContentImmediately;
	char _contentLoaded;
	id<AuthWebViewDelegate> _delegate;
	id<MBUIDelegate> _mbUIDelegate;
	id<MBWebKitViewControllerDelegate> _mbWebKitViewControllerDelegate;
	AKServerRequestConfiguration* _serverRequestConfiguration;
	AKAppleIDAuthenticationInAppContext* _context;
	AKAppleIDServerUIContextController* _serverUIContext;

}

@property (retain) NSWindow * parentWindow;                                                                         //@synthesize parentWindow=_parentWindow - In the implementation block
@property (retain) NSTimer * waitTimer;                                                                             //@synthesize waitTimer=_waitTimer - In the implementation block
@property (nonatomic,retain) JSValue * leftButtonCallback;                                                          //@synthesize leftButtonCallback=_leftButtonCallback - In the implementation block
@property (nonatomic,retain) JSValue * rightButtonCallback;                                                         //@synthesize rightButtonCallback=_rightButtonCallback - In the implementation block
@property (nonatomic,retain) JSValue * alternateButtonCallback;                                                     //@synthesize alternateButtonCallback=_alternateButtonCallback - In the implementation block
@property (retain) NSHTTPURLResponse * latestReadResponse;                                                          //@synthesize latestReadResponse=_latestReadResponse - In the implementation block
@property (retain) AKAppleIDServerUIContextController * serverUIContext;                                            //@synthesize serverUIContext=_serverUIContext - In the implementation block
@property (nonatomic,retain) AKServerRequestConfiguration * serverRequestConfiguration;                             //@synthesize serverRequestConfiguration=_serverRequestConfiguration - In the implementation block
@property (copy) NSString * viewName;                                                                               //@synthesize viewName=_viewName - In the implementation block
@property (copy) NSString * url;                                                                                    //@synthesize url=_url - In the implementation block
@property (copy) NSString * parentURL;                                                                              //@synthesize parentURL=_parentURL - In the implementation block
@property (copy) NSString * content;                                                                                //@synthesize content=_content - In the implementation block
@property (retain) JSValue * callback;                                                                              //@synthesize callback=_callback - In the implementation block
@property (__weak) id<AuthWebViewDelegate> delegate;                                                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<MBUIDelegate> mbUIDelegate;                                                  //@synthesize mbUIDelegate=_mbUIDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<MBWebKitViewControllerDelegate> mbWebKitViewControllerDelegate;              //@synthesize mbWebKitViewControllerDelegate=_mbWebKitViewControllerDelegate - In the implementation block
@property (copy) NSString * accountID;                                                                              //@synthesize accountID=_accountID - In the implementation block
@property (assign,nonatomic) unsigned long long webViewType;                                                        //@synthesize webViewType=_webViewType - In the implementation block
@property (retain) NSView * webViewContainer;                                                                       //@synthesize webViewContainer=_webViewContainer - In the implementation block
@property (retain) NSView * containerView;                                                                          //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) NSView * webView;                                                                      //@synthesize webView=_webView - In the implementation block
@property (retain) NSView * loadingView;                                                                            //@synthesize loadingView=_loadingView - In the implementation block
@property (retain) NSView * loadingViewCancelButton;                                                                //@synthesize loadingViewCancelButton=_loadingViewCancelButton - In the implementation block
@property (retain) NSView * unavailibleView;                                                                        //@synthesize unavailibleView=_unavailibleView - In the implementation block
@property (retain) NSView * unavailibleViewCancelButton;                                                            //@synthesize unavailibleViewCancelButton=_unavailibleViewCancelButton - In the implementation block
@property (retain) NSTextField * unavailableTextField;                                                              //@synthesize unavailableTextField=_unavailableTextField - In the implementation block
@property (retain) NSView * addiCloudMemberViewContainer;                                                           //@synthesize addiCloudMemberViewContainer=_addiCloudMemberViewContainer - In the implementation block
@property (retain) NSView * addiCloudMemberView;                                                                    //@synthesize addiCloudMemberView=_addiCloudMemberView - In the implementation block
@property (retain) NSProgressIndicator * loadingSpinner;                                                            //@synthesize loadingSpinner=_loadingSpinner - In the implementation block
@property (retain) NSView * sheetContent;                                                                           //@synthesize sheetContent=_sheetContent - In the implementation block
@property (retain) NSView * buttonBarView;                                                                          //@synthesize buttonBarView=_buttonBarView - In the implementation block
@property (retain) NSLayoutConstraint * buttonBarHeight;                                                            //@synthesize buttonBarHeight=_buttonBarHeight - In the implementation block
@property (retain) NSLayoutConstraint * buttonBarWidth;                                                             //@synthesize buttonBarWidth=_buttonBarWidth - In the implementation block
@property (nonatomic,retain) NSWindow * sheet;                                                                      //@synthesize sheet=_sheet - In the implementation block
@property (assign) CGSize contentSize;                                                                              //@synthesize contentSize=_contentSize - In the implementation block
@property (assign) char isButtonBarShown;                                                                           //@synthesize isButtonBarShown=_isButtonBarShown - In the implementation block
@property (assign) char isResizeAvailible;                                                                          //@synthesize isResizeAvailible=_isResizeAvailible - In the implementation block
@property (assign) char isWebClientIsReadyCalled;                                                                   //@synthesize isWebClientIsReadyCalled=_isWebClientIsReadyCalled - In the implementation block
@property (assign) char isWebClientHasLoadedCalled;                                                                 //@synthesize isWebClientHasLoadedCalled=_isWebClientHasLoadedCalled - In the implementation block
@property (copy) id defaultAction;                                                                                  //@synthesize defaultAction=_defaultAction - In the implementation block
@property (retain) NSImage * displayImage;                                                                          //@synthesize displayImage=_displayImage - In the implementation block
@property (assign) char loadContentImmediately;                                                                     //@synthesize loadContentImmediately=_loadContentImmediately - In the implementation block
@property (assign) char contentLoaded;                                                                              //@synthesize contentLoaded=_contentLoaded - In the implementation block
@property (nonatomic,retain) AKAppleIDAuthenticationInAppContext * context;                                         //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(id<AuthWebViewDelegate>)delegate;
-(void)setDelegate:(id<AuthWebViewDelegate>)arg1 ;
-(NSString *)url;
-(void)setUrl:(NSString *)arg1 ;
-(NSWindow *)parentWindow;
-(AKAppleIDAuthenticationInAppContext *)context;
-(void)setContent:(NSString *)arg1 ;
-(NSString *)content;
-(void)setContext:(AKAppleIDAuthenticationInAppContext *)arg1 ;
-(JSValue *)callback;
-(void)setCallback:(JSValue *)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(id)touchBar;
-(void)endSheet:(id)arg1 ;
-(CGSize)contentSize;
-(NSView *)containerView;
-(void)setContainerView:(NSView *)arg1 ;
-(void)setParentWindow:(NSWindow *)arg1 ;
-(NSWindow *)sheet;
-(NSView *)webView;
-(NSString *)viewName;
-(NSString *)accountID;
-(void)setAccountID:(NSString *)arg1 ;
-(void)setDisplayImage:(NSImage *)arg1 ;
-(id)clientInfo;
-(void)setWebView:(NSView *)arg1 ;
-(NSImage *)displayImage;
-(void)cleanUp;
-(id)initWithServerConfiguration:(id)arg1 parentWindow:(id)arg2 ;
-(void)setLoadContentImmediately:(char)arg1 ;
-(void)getAuthKitDataWithResponse:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setDefaultAction:(id)arg1 ;
-(id)defaultAction;
-(void)setMbWebKitViewControllerDelegate:(id<MBWebKitViewControllerDelegate>)arg1 ;
-(void)setMbUIDelegate:(id<MBUIDelegate>)arg1 ;
-(void)endWebView:(id)arg1 ;
-(void)sizeChangedFrom:(CGSize)arg1 toSize:(CGSize)arg2 webViewName:(id)arg3 callback:(id)arg4 ;
-(void)loadFailed:(id)arg1 withError:(id)arg2 ;
-(void)skipAndContinueSignIn;
-(void)leftNavigationButtonClicked:(id)arg1 ;
-(void)rightNavigationButtonClicked:(id)arg1 ;
-(void)alternateNavigationButtonClicked:(id)arg1 ;
-(NSView *)buttonBarView;
-(void)icaWebKitViewControllerSheetDidEnd:(id)arg1 withData:(id)arg2 ;
-(void)icaWebKitViewControllerDidFinishLoading:(id)arg1 ;
-(void)icaWebKitViewControllerDidFail:(id)arg1 error:(id)arg2 ;
-(void)icaWebKitViewControllerSignRequest:(id)arg1 ;
-(void)icaWebKitViewControllerDidReceiveResponse:(id)arg1 ;
-(id)webViewWindow;
-(unsigned long long)presentationType;
-(void)icaSetButtonBar:(id)arg1 ;
-(void)icaWebKitViewIsAvailable;
-(void)icaWebKitViewHasLoaded;
-(void)resizeToWidth:(unsigned long long)arg1 heigth:(unsigned long long)arg2 callback:(id)arg3 ;
-(void)beginSheetWithURL:(id)arg1 initialWidth:(unsigned long long)arg2 initialHeight:(unsigned long long)arg3 callback:(id)arg4 optionalContext:(id)arg5 ;
-(void)beginSheetWithContent:(id)arg1 initialWidth:(unsigned long long)arg2 initialHeight:(unsigned long long)arg3 callback:(id)arg4 optionalContext:(id)arg5 ;
-(void)exitWebView:(id)arg1 ;
-(void)setNavTitle:(id)arg1 ;
-(void)setPageSubTitle:(id)arg1 ;
-(void)setPageImageIsHidden:(char)arg1 ;
-(void)setPageSymbol:(id)arg1 ;
-(void)setLeftNavButton:(id)arg1 callback:(id)arg2 ;
-(void)setRightNavButton:(id)arg1 callback:(id)arg2 ;
-(void)setAlternateNavButton:(id)arg1 callback:(id)arg2 ;
-(void)saveTOS:(id)arg1 content:(id)arg2 ;
-(void)saveTOS:(id)arg1 localizedName:(id)arg2 content:(id)arg3 ;
-(void)resetCompleted:(id)arg1 password:(id)arg2 ;
-(void)showTermsAndConditions:(id)arg1 callback:(id)arg2 ;
-(void)dismiss:(id)arg1 ;
-(void)skipSignIn;
-(void)triggerAKAction:(id)arg1 ;
-(void)obtainAuthRight:(id)arg1 ;
-(void)runAppleIDOptOut:(id)arg1 ;
-(void)validateLocalPassword:(id)arg1 ;
-(void)wasNotifiedOfDataChange:(id)arg1 ;
-(void)refreshWithConfiguration:(id)arg1 ;
-(void)beginModalSheet;
-(char)hasModalSheet;
-(void)closeModalSheet;
-(void)resizeModalSheet:(CGSize)arg1 ;
-(AKServerRequestConfiguration *)serverRequestConfiguration;
-(void)loadContent;
-(void)setServerRequestConfiguration:(AKServerRequestConfiguration *)arg1 ;
-(void)setViewName:(NSString *)arg1 ;
-(void)refreshNotification:(id)arg1 ;
-(void)setIsWebClientIsReadyCalled:(char)arg1 ;
-(void)setIsWebClientHasLoadedCalled:(char)arg1 ;
-(void)setWebViewType:(unsigned long long)arg1 ;
-(void)setServerUIContext:(AKAppleIDServerUIContextController *)arg1 ;
-(void)_destroyWaitTimer;
-(void)setLatestReadResponse:(NSHTTPURLResponse *)arg1 ;
-(char)isButtonBarShown;
-(void)setIsButtonBarShown:(char)arg1 ;
-(NSString *)parentURL;
-(void)_createWaitTimer;
-(void)setIsResizeAvailible:(char)arg1 ;
-(char)loadContentImmediately;
-(char)contentLoaded;
-(void)setContentLoaded:(char)arg1 ;
-(id)webViewWithInviteDict:(id)arg1 ;
-(NSTimer *)waitTimer;
-(void)_fireWaitTimer:(id)arg1 ;
-(void)setWaitTimer:(NSTimer *)arg1 ;
-(void)_createWaitTimerWithTimeInternval:(double)arg1 ;
-(void)webviewFailedWithError:(id)arg1 ;
-(char)shouldShowButtonBar:(id)arg1 ;
-(id)initWithContent:(id)arg1 andAccountID:(id)arg2 parentWindow:(id)arg3 ;
-(void)setParentURL:(NSString *)arg1 ;
-(void)beginModalSheetWithInitialWidth:(unsigned long long)arg1 initialHeight:(unsigned long long)arg2 callback:(id)arg3 optionalContext:(id)arg4 ;
-(id)initWithURL:(id)arg1 andAccountID:(id)arg2 parentWindow:(id)arg3 ;
-(char)isResizeAvailible;
-(NSHTTPURLResponse *)latestReadResponse;
-(id<MBUIDelegate>)mbUIDelegate;
-(void)setLeftButtonCallback:(JSValue *)arg1 ;
-(void)setRightButtonCallback:(JSValue *)arg1 ;
-(void)setAlternateButtonCallback:(JSValue *)arg1 ;
-(id<MBWebKitViewControllerDelegate>)mbWebKitViewControllerDelegate;
-(void)_displayAuthRightWithCallback:(id)arg1 ;
-(unsigned long long)webViewType;
-(void)_refreshPage;
-(AKAppleIDServerUIContextController *)serverUIContext;
-(char)_loadRequestAgain;
-(void)icaWebKitViewControllerDidCancel:(id)arg1 ;
-(void)icaWebKitViewControllerDidSucceed:(id)arg1 ;
-(id)initWithName:(id)arg1 andAccountID:(id)arg2 parentWindow:(id)arg3 ;
-(id)webViewWithWorkflowDict:(id)arg1 ;
-(void)beginModalSheetWithInviteDict:(id)arg1 ;
-(id)urlRequestFromInfo:(id)arg1 ;
-(void)OKPressed:(id)arg1 ;
-(void)cancelPressed:(id)arg1 ;
-(void)showUnavailable:(id)arg1 ;
-(void)updateContinueButton:(char)arg1 ;
-(char)willChangetoLocation:(id)arg1 toSection:(id)arg2 withContext:(id)arg3 ;
-(void)didChangetoLocation:(id)arg1 toSection:(id)arg2 withContext:(id)arg3 ;
-(char)shouldSelectToLocation:(id)arg1 toSection:(id)arg2 ;
-(NSView *)webViewContainer;
-(void)setWebViewContainer:(NSView *)arg1 ;
-(NSView *)loadingView;
-(void)setLoadingView:(NSView *)arg1 ;
-(NSView *)loadingViewCancelButton;
-(void)setLoadingViewCancelButton:(NSView *)arg1 ;
-(NSView *)unavailibleView;
-(void)setUnavailibleView:(NSView *)arg1 ;
-(NSView *)unavailibleViewCancelButton;
-(void)setUnavailibleViewCancelButton:(NSView *)arg1 ;
-(NSTextField *)unavailableTextField;
-(void)setUnavailableTextField:(NSTextField *)arg1 ;
-(NSView *)addiCloudMemberViewContainer;
-(void)setAddiCloudMemberViewContainer:(NSView *)arg1 ;
-(NSView *)addiCloudMemberView;
-(void)setAddiCloudMemberView:(NSView *)arg1 ;
-(NSProgressIndicator *)loadingSpinner;
-(void)setLoadingSpinner:(NSProgressIndicator *)arg1 ;
-(NSView *)sheetContent;
-(void)setSheetContent:(NSView *)arg1 ;
-(void)setButtonBarView:(NSView *)arg1 ;
-(NSLayoutConstraint *)buttonBarHeight;
-(void)setButtonBarHeight:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)buttonBarWidth;
-(void)setButtonBarWidth:(NSLayoutConstraint *)arg1 ;
-(char)isWebClientHasLoadedCalled;
-(char)isWebClientIsReadyCalled;
-(JSValue *)leftButtonCallback;
-(JSValue *)rightButtonCallback;
-(JSValue *)alternateButtonCallback;
-(void)setSheet:(NSWindow *)arg1 ;
@end

