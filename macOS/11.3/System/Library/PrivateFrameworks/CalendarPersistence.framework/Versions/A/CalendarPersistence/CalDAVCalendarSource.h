/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectID, NSString, NSSet, CalDAVSession;

@interface CalDAVCalendarSource : NSObject {

	NSManagedObjectID* _objectID;
	NSString* _path;
	NSString* _uid;
	NSSet* _capabilities;
	CalDAVSession* _session;

}

@property (retain,readonly) NSManagedObjectID * objectID;              //@synthesize objectID=_objectID - In the implementation block
@property (retain,readonly) NSString * path;                           //@synthesize path=_path - In the implementation block
@property (retain,readonly) NSString * uid;                            //@synthesize uid=_uid - In the implementation block
@property (retain,readonly) NSSet * capabilities;                      //@synthesize capabilities=_capabilities - In the implementation block
@property (__weak,readonly) CalDAVSession * session;                   //@synthesize session=_session - In the implementation block
-(NSString *)path;
-(NSString *)uid;
-(NSManagedObjectID *)objectID;
-(CalDAVSession *)session;
-(NSSet *)capabilities;
-(char)hasCapability:(id)arg1 ;
-(id)initWithSession:(id)arg1 calendar:(id)arg2 ;
-(void)setupCapabilitiesForSession:(id)arg1 calendar:(id)arg2 ;
-(void)processResourcesFromServer:(id)arg1 failedResources:(id)arg2 inManagedObjectContext:(id)arg3 ;
-(void)operation:(id)arg1 deleteResourcesWithFilenames:(id)arg2 ;
-(void)processResourcesFromServer:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(void)operation:(id)arg1 processResources:(id)arg2 inManagedObjectContext:(id)arg3 ;
-(void)processGetData:(id)arg1 inManagedObjectContext:(id)arg2 ;
@end

