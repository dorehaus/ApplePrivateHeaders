/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/Versions/A/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/CRCodeRedeemerViewDelegate.h>

@protocol AMSUICodeRedeemerViewControllerDelegate;
@class CRCodeRedeemerView, NSButton, NSString;

@interface AMSUICodeRedeemerViewController : NSViewController <CRCodeRedeemerViewDelegate> {

	id<AMSUICodeRedeemerViewControllerDelegate> _delegate;
	CRCodeRedeemerView* _codeRedeemView;
	NSButton* _dismissButton;

}

@property (retain) CRCodeRedeemerView * codeRedeemView;                               //@synthesize codeRedeemView=_codeRedeemView - In the implementation block
@property (readonly) NSButton * dismissButton;                                        //@synthesize dismissButton=_dismissButton - In the implementation block
@property (__weak) id<AMSUICodeRedeemerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) double sessionTimeout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isSupported;
-(id)init;
-(id<AMSUICodeRedeemerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<AMSUICodeRedeemerViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)viewWillLayout;
-(NSButton *)dismissButton;
-(void)startSession;
-(void)setSessionTimeout:(double)arg1 ;
-(void)stopSession;
-(double)sessionTimeout;
-(void)codeRedeemerView:(id)arg1 willRecognizeCodes:(id)arg2 ;
-(void)codeRedeemerView:(id)arg1 didSucceedWithCodes:(id)arg2 ;
-(void)codeRedeemerView:(id)arg1 didFailWithError:(id)arg2 ;
-(void)codeRedeemerViewWillFadeStatus:(id)arg1 ;
-(void)codeRedeemerViewDidFadeStatus:(id)arg1 ;
-(void)codeRedeemerViewDidFindBox:(id)arg1 ;
-(void)codeRedeemerViewCameraDidStart:(id)arg1 ;
-(void)stopSession:(id)arg1 ;
-(void)setCodeRedeemView:(CRCodeRedeemerView *)arg1 ;
-(CRCodeRedeemerView *)codeRedeemView;
-(id)initWithDismissButtonLabel:(id)arg1 ;
-(void)showStatus:(id)arg1 withColor:(CGColorRef)arg2 duration:(double)arg3 style:(unsigned long long)arg4 ;
@end

