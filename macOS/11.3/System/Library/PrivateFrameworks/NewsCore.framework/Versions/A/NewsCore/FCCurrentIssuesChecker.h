/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCCurrentIssuesChecker.h>

@protocol FCCurrentIssuesChecker <NSObject>
@required
-(void)fetchUsersCurrentIssuesWithCompletion:(/*^block*/id)arg1;
-(void)fetchCurrentIssuesWithCompletion:(/*^block*/id)arg1;

@end


@protocol FCContentContext, FCBundleSubscriptionProviderType;
@class FCSubscriptionController, FCIssueReadingHistory, NSString;

@interface FCCurrentIssuesChecker : NSObject <FCCurrentIssuesChecker> {

	id<FCContentContext> _context;
	FCSubscriptionController* _subscriptionController;
	FCIssueReadingHistory* _issueReadingHistory;
	id<FCBundleSubscriptionProviderType> _bundleSubscriptionProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithContext:(id)arg1 subscriptionController:(id)arg2 issueReadingHistory:(id)arg3 bundleSubscriptionProvider:(id)arg4 ;
-(void)fetchUsersCurrentIssuesWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchCurrentIssuesWithCompletion:(/*^block*/id)arg1 ;
@end

