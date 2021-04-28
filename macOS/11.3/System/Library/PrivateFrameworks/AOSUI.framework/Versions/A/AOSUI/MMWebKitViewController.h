/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AOSUI/AOSUI-Structs.h>
#import <libobjc.A.dylib/MMWebKitControllerDelegate.h>

@protocol MMWebKitViewControllerDelegate;
@class MMWebKitController, NSString, NSMutableDictionary, NSNumber, NSTextField, NSProgressIndicator, NSView, NSImageView, NSWindow, NSDictionary;

@interface MMWebKitViewController : NSObject <MMWebKitControllerDelegate> {

	MMWebKitController* _webKitController;
	SEL _classCreationSelector;
	NSString* _accountID;
	NSString* _password;
	NSMutableDictionary* _authenticationResults;
	NSNumber* _librarySize;
	unsigned long long _mmWebKitViewType;
	NSMutableDictionary* _webKitContext;
	NSMutableDictionary* _storageContext;
	struct {
		unsigned delegateDidCancel : 1;
		unsigned delegateDidSucceed : 1;
		unsigned delegateDidFailLoading : 1;
		unsigned delegateDidFinishLoading : 1;
		unsigned delegateDidDismiss : 1;
		unsigned delegateDidReceiveResponse : 1;
		unsigned padding : 3;
	}  _delegateFlags;
	id<MMWebKitViewControllerDelegate> _delegate;
	NSTextField* _loadingText;
	NSProgressIndicator* _loadingProgress;
	NSView* _loadingView;
	NSImageView* _serverErrorImageView;
	NSTextField* _serverErrorTitle;
	NSView* _serverErrorView;
	NSView* _contentView;
	NSWindow* _window;
	NSWindow* _parentWindow;

}

@property (nonatomic,retain) MMWebKitController * webKitController;                     //@synthesize webKitController=_webKitController - In the implementation block
@property (assign,nonatomic) SEL classCreationSelector;                                 //@synthesize classCreationSelector=_classCreationSelector - In the implementation block
@property (assign,nonatomic) unsigned long long mmWebKitViewType;                       //@synthesize mmWebKitViewType=_mmWebKitViewType - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * webKitContext;                       //@synthesize webKitContext=_webKitContext - In the implementation block
@property (assign,nonatomic) NSWindow * parentWindow;                                   //@synthesize parentWindow=_parentWindow - In the implementation block
@property (assign,nonatomic) id<MMWebKitViewControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) NSWindow * window;                                  //@synthesize window=_window - In the implementation block
@property (nonatomic,copy) NSString * accountID;                                        //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,copy) NSString * password;                                         //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * authenticationResults;               //@synthesize authenticationResults=_authenticationResults - In the implementation block
@property (nonatomic,copy) NSDictionary * storageContext;                               //@synthesize storageContext=_storageContext - In the implementation block
@property (nonatomic,retain) NSNumber * librarySize;                                    //@synthesize librarySize=_librarySize - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * loadingText;                          //@synthesize loadingText=_loadingText - In the implementation block
@property (assign,nonatomic,__weak) NSProgressIndicator * loadingProgress;              //@synthesize loadingProgress=_loadingProgress - In the implementation block
@property (assign,nonatomic,__weak) NSView * loadingView;                               //@synthesize loadingView=_loadingView - In the implementation block
@property (assign,nonatomic,__weak) NSImageView * serverErrorImageView;                 //@synthesize serverErrorImageView=_serverErrorImageView - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * serverErrorTitle;                     //@synthesize serverErrorTitle=_serverErrorTitle - In the implementation block
@property (nonatomic,retain) NSView * serverErrorView;                                  //@synthesize serverErrorView=_serverErrorView - In the implementation block
@property (assign,nonatomic,__weak) NSView * contentView;                               //@synthesize contentView=_contentView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(id<MMWebKitViewControllerDelegate>)delegate;
-(void)setDelegate:(id<MMWebKitViewControllerDelegate>)arg1 ;
-(NSString *)password;
-(NSWindow *)window;
-(NSWindow *)parentWindow;
-(void)setPassword:(NSString *)arg1 ;
-(NSView *)contentView;
-(void)setWindow:(NSWindow *)arg1 ;
-(void)setContentView:(NSView *)arg1 ;
-(void)setParentWindow:(NSWindow *)arg1 ;
-(NSString *)accountID;
-(void)setAccountID:(NSString *)arg1 ;
-(NSTextField *)loadingText;
-(void)setLoadingText:(NSTextField *)arg1 ;
-(void)setAuthenticationResults:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)authenticationResults;
-(id)initInView:(id)arg1 ;
-(void)setWebKitController:(MMWebKitController *)arg1 ;
-(MMWebKitController *)webKitController;
-(void)loadURLRequest:(id)arg1 ;
-(void)closeModalSheet;
-(NSView *)loadingView;
-(void)setLoadingView:(NSView *)arg1 ;
-(void)okButton:(id)arg1 ;
-(char)isShowingSheet;
-(void)mmWebView:(id)arg1 setFrame:(CGRect)arg2 ;
-(void)mmWebKitControllerConfigureForFrame:(id)arg1 ;
-(void)mmWebKitControllerDidCancel:(id)arg1 ;
-(void)mmWebKitControllerDidSucceed:(id)arg1 ;
-(void)mmWebKitControllerDidFailLoading:(id)arg1 error:(id)arg2 ;
-(void)mmWebKitControllerDidFinishLoading:(id)arg1 ;
-(void)mmWebKitControllerDidReceiveResponse:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)mmWebKitControllerWindow;
-(NSProgressIndicator *)loadingProgress;
-(void)setLoadingProgress:(NSProgressIndicator *)arg1 ;
-(id)initForStorageUpgradeWithAccountID:(id)arg1 ;
-(void)setLibrarySize:(NSNumber *)arg1 ;
-(void)setStorageContext:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)webKitContext;
-(void)transitionToLoadingViewAnimated:(char)arg1 ;
-(void)beginModalDialogWithParentWindow:(id)arg1 shouldNest:(char)arg2 ;
-(void)handleLoadFailureWithError:(id)arg1 ;
-(id)initForStorageManagementWithAccountID:(id)arg1 ;
-(void)beginModalSheetForWindow:(id)arg1 ;
-(void)transitionToWebViewAnimated:(char)arg1 ;
-(id)initForMailAccountCreationWithAccountID:(id)arg1 ;
-(id)initForAccountCreation;
-(void)_window:(id)arg1 setFrame:(CGRect)arg2 ;
-(OpaqueJSClassRef)_createAccountCreationClass;
-(void)setClassCreationSelector:(SEL)arg1 ;
-(void)setMmWebKitViewType:(unsigned long long)arg1 ;
-(OpaqueJSClassRef)_createTOSMailNotesClass;
-(OpaqueJSClassRef)_createQuotaClass;
-(void)_hideLoadingView:(char)arg1 ;
-(NSImageView *)serverErrorImageView;
-(NSTextField *)serverErrorTitle;
-(NSView *)serverErrorView;
-(unsigned long long)mmWebKitViewType;
-(void)transitionToServerErrorViewWithTitle:(id)arg1 image:(id)arg2 animated:(char)arg3 ;
-(SEL)classCreationSelector;
-(id)initForNotesAccountCreationWithAccountID:(id)arg1 ;
-(id)initForTermsOfServiceWithAccountID:(id)arg1 password:(id)arg2 authenticationResults:(id)arg3 ;
-(NSNumber *)librarySize;
-(void)setWebKitContext:(NSMutableDictionary *)arg1 ;
-(void)setServerErrorImageView:(NSImageView *)arg1 ;
-(void)setServerErrorTitle:(NSTextField *)arg1 ;
-(void)setServerErrorView:(NSView *)arg1 ;
-(NSDictionary *)storageContext;
@end

