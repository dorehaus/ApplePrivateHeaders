/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNEditAuthorizationViewController.h>

@protocol CNEditAuthorizationViewControllerDelegate;
@interface CNDelegateRetainingEditAuthorizationViewController : CNEditAuthorizationViewController {

	id<CNEditAuthorizationViewControllerDelegate> _delegateRetainedDuringAuthorization;

}

@property (nonatomic,retain) id<CNEditAuthorizationViewControllerDelegate> delegateRetainedDuringAuthorization;              //@synthesize delegateRetainedDuringAuthorization=_delegateRetainedDuringAuthorization - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(void)cancelButtonPressed:(id)arg1 ;
-(void)didAuthorize;
-(void)didNotAuthorize;
-(void)setDelegateRetainedDuringAuthorization:(id<CNEditAuthorizationViewControllerDelegate>)arg1 ;
-(id<CNEditAuthorizationViewControllerDelegate>)delegateRetainedDuringAuthorization;
@end
