/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UXKit.framework/Versions/A/UXKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray, UXViewController;

@interface _UXNavigationRequest : NSObject {

	NSMutableArray* _addedViewControllers;
	char _animated;
	long long _operation;
	NSArray* _viewControllers;

}

@property (nonatomic,readonly) long long operation;                            //@synthesize operation=_operation - In the implementation block
@property (nonatomic,readonly) UXViewController * viewController; 
@property (nonatomic,readonly) NSArray * viewControllers;                      //@synthesize viewControllers=_viewControllers - In the implementation block
@property (nonatomic,readonly) char animated;                                  //@synthesize animated=_animated - In the implementation block
+(id)_requestWithOperation:(long long)arg1 viewControllers:(id)arg2 animated:(char)arg3 ;
+(id)pushRequestWithViewController:(id)arg1 animated:(char)arg2 ;
+(id)popRequestWithViewController:(id)arg1 animated:(char)arg2 ;
+(id)setRequestWithViewControllers:(id)arg1 animated:(char)arg2 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(long long)operation;
-(UXViewController *)viewController;
-(NSArray *)viewControllers;
-(char)animated;
-(void)setupContainmentIfNeededInParentViewController:(id)arg1 ;
-(void)tearDownContainmentIfNeeded;
-(char)isEqualToNavigationRequest:(id)arg1 ;
@end

