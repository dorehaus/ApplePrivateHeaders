/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DACalDAV.framework/Versions/A/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DACalDAV/MobileCalDAVCalendar.h>

@class MobileCalDAVAccount;

@interface MobileCalDAVNotificationCalendar : MobileCalDAVCalendar {

	int _mostRecentNotificationChangeIndex;

}

@property (nonatomic,readonly) MobileCalDAVAccount * daAccount; 
@property (assign,nonatomic) int mostRecentNotificationChangeIndex;              //@synthesize mostRecentNotificationChangeIndex=_mostRecentNotificationChangeIndex - In the implementation block
-(char)isNotification;
-(Class)appSpecificCalendarItemClass;
-(id)etagsForItemURLs:(id)arg1 ;
-(char)setEtag:(id)arg1 forItemAtURL:(id)arg2 ;
-(char)setScheduleTag:(id)arg1 forItemAtURL:(id)arg2 ;
-(char)setURL:(id)arg1 forResourceWithUUID:(id)arg2 ;
-(char)updateResourcesFromServer:(id)arg1 ;
-(id)allItemURLs;
-(void)prepareMergeSyncActionsWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)_notifications;
-(MobileCalDAVAccount *)daAccount;
-(id)initWithCalendarURL:(id)arg1 list:(id)arg2 principal:(id)arg3 title:(id)arg4 ;
-(id)daPrincipal;
-(char)_removeCalendarItemWithURL:(id)arg1 ;
-(void)clearEventChanges;
-(void)prepareSyncActionsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)recordDiagnosticsForAccountSync:(id)arg1 ;
-(id)_accountLoggingDescription;
-(id)_copyNotificationWithExternalID:(id)arg1 ;
-(id)_copyNotificationWithUniqueIdentifier:(id)arg1 ;
-(char)_handleInviteNotification:(id)arg1 withResource:(id)arg2 uid:(id)arg3 ;
-(char)_handleInviteReply:(id)arg1 withResource:(id)arg2 owningNotification:(id)arg3 uid:(id)arg4 ;
-(char)_handleResourceChanged:(id)arg1 withResource:(id)arg2 uid:(id)arg3 ;
-(id)_changedAttributesFromCalendarChanges:(id)arg1 ;
-(int)mostRecentNotificationChangeIndex;
-(void)setMostRecentNotificationChangeIndex:(int)arg1 ;
@end
