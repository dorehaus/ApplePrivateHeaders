/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/Versions/A/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSUserDefaults, NSObject;

@interface SGPreferenceManager : NSObject {

	NSUserDefaults* _suggestionsDefaults;
	NSObject*<OS_dispatch_queue> _settingsUpdateQueue;
	char _isQueueSuspended;

}
+(id)defaultManager;
-(id)init;
-(int)registerBlock:(/*^block*/id)arg1 ;
-(void)_suspendNotificationQueue;
-(void)_resumeNotificationQueue;
@end

