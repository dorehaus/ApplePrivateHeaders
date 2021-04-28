/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreUI.framework/Versions/A/StoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@class FRViewNavigationController, NSURL;

@interface FRContentViewController : NSViewController {

	FRViewNavigationController* _navigationController;
	NSURL* _activeURL;
	double _topContentInset;

}

@property (assign,nonatomic,__weak) FRViewNavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,readonly) NSURL * activeURL;                                                   //@synthesize activeURL=_activeURL - In the implementation block
@property (assign,nonatomic) double topContentInset;                                                //@synthesize topContentInset=_topContentInset - In the implementation block
-(void)reload;
-(FRViewNavigationController *)navigationController;
-(char)canGoBack;
-(char)canGoForward;
-(void)goBack;
-(void)goForward;
-(void)searchForString:(id)arg1 ;
-(NSURL *)activeURL;
-(void)clearHistory;
-(double)topContentInset;
-(void)setTopContentInset:(double)arg1 ;
-(void)setNavigationController:(FRViewNavigationController *)arg1 ;
-(char)canLoadURL:(id)arg1 ;
-(char)loadURL:(id)arg1 referrer:(id)arg2 ;
-(char)canSearchForString;
-(id)navigationTabs;
-(char)isTabEnabled:(id)arg1 ;
-(unsigned long long)badgeCountForTab:(id)arg1 ;
@end
