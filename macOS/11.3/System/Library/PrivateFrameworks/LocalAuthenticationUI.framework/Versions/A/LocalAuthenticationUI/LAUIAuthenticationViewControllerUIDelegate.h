/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/LocalAuthenticationUI.framework/Versions/A/LocalAuthenticationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LAUIDelegate.h>

@class LAUIAuthenticationViewController;

@interface LAUIAuthenticationViewControllerUIDelegate : NSObject <LAUIDelegate> {

	LAUIAuthenticationViewController* _viewController;

}

@property (assign,nonatomic,__weak) LAUIAuthenticationViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(void)setViewController:(LAUIAuthenticationViewController *)arg1 ;
-(LAUIAuthenticationViewController *)viewController;
-(id)initWithViewController:(id)arg1 ;
-(void)event:(long long)arg1 params:(id)arg2 reply:(/*^block*/id)arg3 ;
@end

