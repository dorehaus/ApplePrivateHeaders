/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/Versions/A/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSTask.h>

@class AMSDialogRequest, NSViewController;

@interface AMSUIAlertDialogTask : AMSTask {

	AMSDialogRequest* _request;
	NSViewController* _presentingViewController;

}

@property (readonly) AMSDialogRequest * request;                               //@synthesize request=_request - In the implementation block
@property (readonly) NSViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
+(id)_convertTextField:(id)arg1 ;
-(AMSDialogRequest *)request;
-(NSViewController *)presentingViewController;
-(id)present;
-(void)_presentMacAlertFromRequest:(id)arg1 viewController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_createMacAlertFromRequest:(id)arg1 ;
-(id)initWithRequest:(id)arg1 presentingViewController:(id)arg2 ;
@end

