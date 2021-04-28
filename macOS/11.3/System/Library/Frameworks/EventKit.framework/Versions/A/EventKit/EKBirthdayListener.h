/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CalContactsProviderDelegate.h>

@protocol OS_dispatch_queue;
@class CalLimitingQueue, NSObject;

@interface EKBirthdayListener : NSObject <CalContactsProviderDelegate> {

	CalLimitingQueue* _updateQueue;
	NSObject*<OS_dispatch_queue> _updateJobQueue;
	char _needsReset;
	char _shutdown;

}
+(id)sharedListener;
+(id)eventStoreProvider;
-(void)reset;
-(void)stop;
-(id)eventStore;
-(void)contactsReset;
-(void)contactsInserted:(id)arg1 updated:(id)arg2 deleted:(id)arg3 ;
-(id)initSingleton;
-(char)areBirthdaysEnabled;
-(id)birthdayCalendarsInStore:(id)arg1 ;
-(void)resetAllBirthdaysInStore:(id)arg1 ;
-(void)disableBirthdayCalendarsInStore:(id)arg1 ;
-(void)_localeChanged;
-(void)checkForFailures;
-(void)setDefaultBirthdayAlarms:(id)arg1 forCalendar:(id)arg2 ;
-(void)insertEventWithContact:(id)arg1 forDateComponents:(id)arg2 intoCalendar:(id)arg3 inStore:(id)arg4 ;
-(id)birthdayCalendarsCreateIfNeeded:(char)arg1 inStore:(id)arg2 originalIdentifier:(id)arg3 originalAlarms:(id)arg4 ignoreAlarms:(char)arg5 ;
-(id)allContactsWithBirthdays;
-(void)_insertEventsForContact:(id)arg1 intoCalendar:(id)arg2 inStore:(id)arg3 ;
-(void)addBirthdayCalendars;
-(void)disableBirthdayCalendars;
@end

