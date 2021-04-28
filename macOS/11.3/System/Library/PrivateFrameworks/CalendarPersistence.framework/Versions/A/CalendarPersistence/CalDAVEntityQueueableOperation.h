/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarPersistence/CalDAVPersistentQueueableOperation.h>
#import <libobjc.A.dylib/CoreDAVGetTaskDelegate.h>

@class CalDAVCalendarSource, NSString;

@interface CalDAVEntityQueueableOperation : CalDAVPersistentQueueableOperation <CoreDAVGetTaskDelegate> {

	CalDAVCalendarSource* _source;
	NSString* _entityLocalUID;
	NSString* _entitySharedUID;
	NSString* _calendarTitle;
	NSString* _principalTitle;
	NSString* _serverFilename;
	char _clearEventFromQueueAfterForce;

}

@property (retain) CalDAVCalendarSource * source;                   //@synthesize source=_source - In the implementation block
@property (retain) NSString * entitySharedUID;                      //@synthesize entitySharedUID=_entitySharedUID - In the implementation block
@property (retain) NSString * entityLocalUID;                       //@synthesize entityLocalUID=_entityLocalUID - In the implementation block
@property (retain) NSString * calendarTitle;                        //@synthesize calendarTitle=_calendarTitle - In the implementation block
@property (retain) NSString * principalTitle;                       //@synthesize principalTitle=_principalTitle - In the implementation block
@property (retain) NSString * serverFilename;                       //@synthesize serverFilename=_serverFilename - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CalDAVCalendarSource *)source;
-(void)setError:(id)arg1 ;
-(void)setSource:(CalDAVCalendarSource *)arg1 ;
-(void)performOperation;
-(void)setCalendarTitle:(NSString *)arg1 ;
-(NSString *)serverFilename;
-(NSString *)calendarTitle;
-(id)initWithChangeRequest:(id)arg1 andSession:(id)arg2 ;
-(void)setServerFilename:(NSString *)arg1 ;
-(void)setEntityLocalUID:(NSString *)arg1 ;
-(void)setEntitySharedUID:(NSString *)arg1 ;
-(NSString *)entitySharedUID;
-(NSString *)entityLocalUID;
-(id)initWithChangeRequest:(id)arg1 andSource:(id)arg2 ;
-(void)forceEntityFromServer;
-(void)performOperation:(char)arg1 ;
-(void)setPrincipalTitle:(NSString *)arg1 ;
-(void)configureWithSource:(id)arg1 inObjectContext:(id)arg2 ;
-(void)forceEntityFromServerAndClearEventFromQueue:(char)arg1 ;
-(void)forceEntityFromServerAndClearEventFromQueue:(char)arg1 withContext:(id)arg2 ;
-(void)_cleanUpOperationAfterForceWithContext:(id)arg1 ;
-(id)extraUserInfoForRebuiltError;
-(void)updateAttachmentUrlIfDirectory:(id)arg1 context:(id)arg2 event:(id)arg3 ;
-(void)configureOperationDependencies;
-(void)getTask:(id)arg1 data:(id)arg2 error:(id)arg3 ;
-(void)forceEntityToServer;
-(void)setError:(id)arg1 withResponseStatus:(id)arg2 forItem:(id)arg3 ;
-(void)queueAttachmentOperations:(id)arg1 event:(id)arg2 ;
-(NSString *)principalTitle;
-(void)updateInFlightTagsInContext:(id)arg1 ;
-(char)shouldHaveTagsUpdated;
@end

