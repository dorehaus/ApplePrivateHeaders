/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AOSUI/AOSUI-Structs.h>
#import <libobjc.A.dylib/MMWebKitControllerDelegate.h>

@protocol MBUIDelegate, MBWebKitViewControllerDelegate;
@class MMWebKitController, NSView, MMJSDialogController, NSString, NSDictionary, WebView;

@interface MMMBWebKitViewController : NSObject <MMWebKitControllerDelegate> {

	MMWebKitController* _webKitController;
	NSView* _parentView;
	MMJSDialogController* _mmJSDialogController;
	NSString* _accountID;
	NSString* _password;
	NSDictionary* _delegatePlist;
	NSDictionary* _authenticationResults;
	OpaqueJSValueRef _leftButtonCallback;
	OpaqueJSValueRef _rightButtonCallback;
	OpaqueJSValueRef _alternateButtonCallback;
	char _supportsWindowResize;
	struct {
		unsigned delegateSetWindowTitle : 1;
		unsigned delegateSetWindowMessage : 1;
		unsigned delegateSetLeftButtonTitle : 1;
		unsigned delegateSetLeftButtonEnabled : 1;
		unsigned delegateSetRightButtonTitle : 1;
		unsigned delegateSetRightButtonEnabled : 1;
		unsigned delegateSetAlternateButtonTitle : 1;
		unsigned delegateSetAlternateButtonEnabled : 1;
		unsigned delegateSaveFile : 1;
		unsigned delegateSaveFileWithName : 1;
		unsigned delegateShowTerms : 1;
		unsigned delegateDidCancel : 1;
		unsigned delegateDidDismiss : 1;
		unsigned delegateDidSucceed : 1;
		unsigned delegateDidFinishLoading : 1;
		unsigned delegateDidFail : 1;
		unsigned delegateDidReceiveResponse : 1;
		unsigned padding : 2;
	}  _flags;
	id<MBUIDelegate> _mbUIDelegate;
	id<MBWebKitViewControllerDelegate> _mbWebKitViewControllerDelegate;

}

@property (nonatomic,retain) NSView * parentView;                                                            //@synthesize parentView=_parentView - In the implementation block
@property (assign,nonatomic) OpaqueJSValueRef leftButtonCallback;                                            //@synthesize leftButtonCallback=_leftButtonCallback - In the implementation block
@property (assign,nonatomic) OpaqueJSValueRef rightButtonCallback;                                           //@synthesize rightButtonCallback=_rightButtonCallback - In the implementation block
@property (assign,nonatomic) OpaqueJSValueRef alternateButtonCallback;                                       //@synthesize alternateButtonCallback=_alternateButtonCallback - In the implementation block
@property (nonatomic,retain) MMWebKitController * webKitController;                                          //@synthesize webKitController=_webKitController - In the implementation block
@property (nonatomic,retain) MMJSDialogController * mmJSDialogController;                                    //@synthesize mmJSDialogController=_mmJSDialogController - In the implementation block
@property (nonatomic,copy) NSString * password;                                                              //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) NSDictionary * delegatePlist;                                                     //@synthesize delegatePlist=_delegatePlist - In the implementation block
@property (assign,nonatomic) id<MBUIDelegate> mbUIDelegate;                                                  //@synthesize mbUIDelegate=_mbUIDelegate - In the implementation block
@property (assign,nonatomic) id<MBWebKitViewControllerDelegate> mbWebKitViewControllerDelegate;              //@synthesize mbWebKitViewControllerDelegate=_mbWebKitViewControllerDelegate - In the implementation block
@property (nonatomic,readonly) WebView * webView; 
@property (nonatomic,copy) NSString * accountID;                                                             //@synthesize accountID=_accountID - In the implementation block
@property (assign,nonatomic) char supportsWindowResize;                                                      //@synthesize supportsWindowResize=_supportsWindowResize - In the implementation block
@property (nonatomic,copy) NSDictionary * authenticationResults;                                             //@synthesize authenticationResults=_authenticationResults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(NSView *)parentView;
-(void)setParentView:(NSView *)arg1 ;
-(WebView *)webView;
-(NSString *)accountID;
-(void)setAccountID:(NSString *)arg1 ;
-(void)setAuthenticationResults:(NSDictionary *)arg1 ;
-(NSDictionary *)authenticationResults;
-(void)setMbWebKitViewControllerDelegate:(id<MBWebKitViewControllerDelegate>)arg1 ;
-(void)setMbUIDelegate:(id<MBUIDelegate>)arg1 ;
-(void)leftNavigationButtonClicked:(id)arg1 ;
-(void)rightNavigationButtonClicked:(id)arg1 ;
-(void)alternateNavigationButtonClicked:(id)arg1 ;
-(void)setWebKitController:(MMWebKitController *)arg1 ;
-(void)setSupportsWindowResize:(char)arg1 ;
-(MMWebKitController *)webKitController;
-(void)loadURLRequest:(id)arg1 ;
-(char)supportsWindowResize;
-(id<MBUIDelegate>)mbUIDelegate;
-(void)setLeftButtonCallback:(OpaqueJSValueRef)arg1 ;
-(void)setRightButtonCallback:(OpaqueJSValueRef)arg1 ;
-(void)setAlternateButtonCallback:(OpaqueJSValueRef)arg1 ;
-(id<MBWebKitViewControllerDelegate>)mbWebKitViewControllerDelegate;
-(OpaqueJSValueRef)leftButtonCallback;
-(OpaqueJSValueRef)rightButtonCallback;
-(OpaqueJSValueRef)alternateButtonCallback;
-(void)mmWebView:(id)arg1 setFrame:(CGRect)arg2 ;
-(void)mmWebKitControllerConfigureForFrame:(id)arg1 ;
-(void)mmWebKitControllerDidCancel:(id)arg1 ;
-(void)mmWebKitControllerDidSucceed:(id)arg1 ;
-(void)mmWebKitControllerDidFailLoading:(id)arg1 error:(id)arg2 ;
-(void)mmWebKitControllerDidFinishLoading:(id)arg1 ;
-(void)mmWebKitControllerDidReceiveResponse:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)mmWebKitControllerWillSendRequest:(id)arg1 willSendRequest:(id)arg2 ;
-(id)mmWebKitControllerWindow;
-(MMJSDialogController *)mmJSDialogController;
-(void)setMmJSDialogController:(MMJSDialogController *)arg1 ;
-(id)initMBWebKitViewControllerInView:(id)arg1 mbUIDelegate:(id)arg2 authenticationResults:(id)arg3 ;
-(void)_window:(id)arg1 setFrame:(CGRect)arg2 ;
-(id)initMBWebKitViewControllerInView:(id)arg1 mbUIDelegate:(id)arg2 ;
-(NSDictionary *)delegatePlist;
-(void)setDelegatePlist:(NSDictionary *)arg1 ;
@end

