/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <libobjc.A.dylib/TabDialogPresenter.h>

@protocol TabDialogPresentationManagerDelegate;
@class BrowserViewController, TabDialogDimmingView, TabDialogInstaller, TabDialogViewController, NSString;

@interface TabDialogPresentationManager : NSObject <TabDialogPresenter> {

	BrowserViewController* _browserViewController;
	TabDialogDimmingView* _dimmingView;
	TabDialogInstaller* _tabDialogInstallerForRedirection;
	TabDialogViewController* _tabDialogViewController;
	id<TabDialogPresentationManagerDelegate> _delegate;

}

@property (nonatomic,readonly) TabDialogViewController * tabDialogViewController;                   //@synthesize tabDialogViewController=_tabDialogViewController - In the implementation block
@property (assign,nonatomic,__weak) id<TabDialogPresentationManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isShowingTabDialog,nonatomic,readonly) char showingTabDialog; 
@property (nonatomic,readonly) long long currentTabDialogType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<TabDialogPresentationManagerDelegate>)delegate;
-(void)setDelegate:(id<TabDialogPresentationManagerDelegate>)arg1 ;
-(void)dismissTabDialog;
-(void)presentTabDialogWithConfiguration:(id)arg1 dismissalBlock:(/*^block*/id)arg2 blocksWebProcessUntilDismissed:(char)arg3 cancellationExemptions:(id)arg4 ;
-(TabDialogViewController *)tabDialogViewController;
-(long long)currentTabDialogType;
-(char)isShowingTabDialog;
-(void)_didDismissTabDialogs;
-(void)transplantDialogToNewInstallationTarget;
-(void)unblockWebProcess:(int)arg1 ;
-(void)owningWebViewWillNavigate;
-(void)cancelAllDialogsFromOwningWebView;
-(void)cancelAllDialogsFromOwningWebViewOnCommittedNavigationWithURL:(id)arg1 ;
-(void)startRedirectingTabDialogPresentationForBrowserViewController:(id)arg1 ;
-(void)stopRedirectingTabDialogs;
-(void)showJavaScriptAlertWithMessage:(id)arg1 originStringForAccessibility:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)showJavaScriptConfirmWithMessage:(id)arg1 originStringForAccessibility:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)showJavaScriptPromptWithMessage:(id)arg1 defaultResponse:(id)arg2 originStringForAccessibility:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)updateCurrentDialogWithConfiguration:(id)arg1 dismissalBlock:(/*^block*/id)arg2 ;
-(void)_transplantDialogAndDimmingViewToTabContentViewIfNeeded;
-(id)_tabDialogViewControllerForConfiguration:(id)arg1 ;
-(char)_isRedirectingDialogPresentation;
-(void)_presentRedirectedDialogWithViewController:(id)arg1 ;
-(long long)_tabDialogVerticalPlacementPolicyForViewController:(id)arg1 ;
-(SCD_Struct_Al6)_tabDialogSlot;
-(void)dismissTabDialogWithResponse:(id)arg1 ;
-(char)_shouldSkipAnimationsDuringDismissal;
-(void)_dismissRedirectedDialogWithResponseBlock:(/*^block*/id)arg1 ;
-(id)_ensureTabDialogInstallerForRedirection;
@end
