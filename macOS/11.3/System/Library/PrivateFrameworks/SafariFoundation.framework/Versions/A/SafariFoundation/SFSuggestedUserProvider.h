/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/Versions/A/SafariFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray;

@interface SFSuggestedUserProvider : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _suggestedEmails;
	NSArray* _suggestedNonEmails;

}
+(id)sharedProvider;
-(id)init;
-(void)_passwordStoreChangedNotification:(id)arg1 ;
-(id)_allCachedSuggestedUsersWithType:(long long)arg1 ;
-(void)suggestedUsersOfType:(long long)arg1 matchingText:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_cachedSuggestedUsersWithType:(long long)arg1 matchingText:(id)arg2 ;
-(void)_getSuggestedUsersFromSavedPasswords:(id)arg1 suggestedEmails:(id*)arg2 suggestedNonEmails:(id*)arg3 ;
-(void)suggestedUsersOfType:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

