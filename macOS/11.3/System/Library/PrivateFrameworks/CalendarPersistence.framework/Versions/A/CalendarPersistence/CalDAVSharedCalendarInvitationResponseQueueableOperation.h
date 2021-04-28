/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarPersistence/CalDAVPersistentQueueableOperation.h>
#import <libobjc.A.dylib/CoreDAVTaskGroupDelegate.h>

@class CalDAVReplyToSharedCalendarInvitationTaskGroup, NSData, NSURL, NSString;

@interface CalDAVSharedCalendarInvitationResponseQueueableOperation : CalDAVPersistentQueueableOperation <CoreDAVTaskGroupDelegate> {

	int _response;
	CalDAVReplyToSharedCalendarInvitationTaskGroup* _taskGroup;
	NSData* _invitation;
	NSURL* _calendarHomeURL;

}

@property (retain) CalDAVReplyToSharedCalendarInvitationTaskGroup * taskGroup;              //@synthesize taskGroup=_taskGroup - In the implementation block
@property (retain) NSData * invitation;                                                     //@synthesize invitation=_invitation - In the implementation block
@property (retain) NSURL * calendarHomeURL;                                                 //@synthesize calendarHomeURL=_calendarHomeURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performOperation;
-(void)setCalendarHomeURL:(NSURL *)arg1 ;
-(void)setInvitation:(NSData *)arg1 ;
-(NSURL *)calendarHomeURL;
-(NSData *)invitation;
-(void)taskGroup:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)setTaskGroup:(CalDAVReplyToSharedCalendarInvitationTaskGroup *)arg1 ;
-(CalDAVReplyToSharedCalendarInvitationTaskGroup *)taskGroup;
-(id)initWithChangeRequest:(id)arg1 forSession:(id)arg2 ;
-(void)useCoreDAV;
-(id)_originalManagedMessageInNewContext;
@end
