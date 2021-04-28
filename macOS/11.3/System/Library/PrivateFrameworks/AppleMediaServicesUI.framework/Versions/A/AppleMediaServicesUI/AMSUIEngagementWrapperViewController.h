/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/Versions/A/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServicesUI/AMSUICommonViewController.h>

@class NSViewController;

@interface AMSUIEngagementWrapperViewController : AMSUICommonViewController {

	/*^block*/id _dismissBlock;
	NSViewController* _viewController;

}

@property (copy) id dismissBlock;                                    //@synthesize dismissBlock=_dismissBlock - In the implementation block
@property (readonly) NSViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(void)dealloc;
-(void)loadView;
-(NSViewController *)viewController;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewWillLayoutSubviews;
-(id)initWithViewController:(id)arg1 ;
-(void)setDismissBlock:(id)arg1 ;
-(id)dismissBlock;
@end

