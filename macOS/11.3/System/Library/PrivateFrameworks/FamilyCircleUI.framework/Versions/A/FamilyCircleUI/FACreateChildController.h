/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/Versions/A/FamilyCircleUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FamilyCircleUI/FamilyCircleUI-Structs.h>
#import <libobjc.A.dylib/iCloudWebViewDelegate.h>

@class NSWindow, NSImage, ACAccount, iCloudAccountDetailsWebTabView, NSString;

@interface FACreateChildController : NSObject <iCloudWebViewDelegate> {

	NSWindow* _hostWindow;
	NSImage* _displayImage;
	ACAccount* _appleAccount;
	iCloudAccountDetailsWebTabView* _repairView;

}

@property (nonatomic,retain) ACAccount * appleAccount;                                 //@synthesize appleAccount=_appleAccount - In the implementation block
@property (nonatomic,retain) iCloudAccountDetailsWebTabView * repairView;              //@synthesize repairView=_repairView - In the implementation block
@property (nonatomic,retain) NSWindow * hostWindow;                                    //@synthesize hostWindow=_hostWindow - In the implementation block
@property (nonatomic,retain) NSImage * displayImage;                                   //@synthesize displayImage=_displayImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDisplayImage:(NSImage *)arg1 ;
-(NSImage *)displayImage;
-(void)setHostWindow:(NSWindow *)arg1 ;
-(NSWindow *)hostWindow;
-(void)endWebView:(id)arg1 ;
-(void)sizeChangedFrom:(CGSize)arg1 toSize:(CGSize)arg2 webViewName:(id)arg3 callback:(id)arg4 ;
-(void)_setupPresentedViewController;
-(id)_createChildAuthContext;
-(void)repairChildAccountWithAuthenticationResults:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_dismissPresentedViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(id)_repairParametersFromAuthResults:(id)arg1 ;
-(ACAccount *)appleAccount;
-(void)setRepairView:(iCloudAccountDetailsWebTabView *)arg1 ;
-(iCloudAccountDetailsWebTabView *)repairView;
-(void)loadFailed:(id)arg1 ;
-(id)initWithAppleAccount:(id)arg1 ;
-(void)createChildAccountWithCompletion:(/*^block*/id)arg1 ;
-(id)_repairAuthContextWithAuthResults:(id)arg1 ;
-(void)setAppleAccount:(ACAccount *)arg1 ;
@end

