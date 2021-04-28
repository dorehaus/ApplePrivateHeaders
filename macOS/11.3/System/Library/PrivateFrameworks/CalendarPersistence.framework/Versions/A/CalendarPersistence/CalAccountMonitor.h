/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarPersistence/CalPersistenceMonitor.h>

@interface CalAccountMonitor : CalPersistenceMonitor
+(id)defaultMonitor;
+(char)thisIsFirstNetworkAccountToBeAdded;
+(char)noSubscriptionCalendarsInContext:(id)arg1 ;
+(void)findAndRemoveEmptyLocalCalendarsInContext:(id)arg1 ;
+(void)_updateSessionForObjectID:(id)arg1 isDelete:(char)arg2 ;
+(void)_updatePushForObjectID:(id)arg1 isDelete:(char)arg2 ;
+(void)_createLocalCalendarsIfNeededWithLogTag:(id)arg1 ;
+(void)_updateRefreshForObjectID:(id)arg1 ;
+(void)_updateAlarms;
+(void)processAddition:(id)arg1 ;
+(void)processRemoval:(id)arg1 ;
+(void)processChange:(id)arg1 changes:(id)arg2 ;
+(void)completelyDisableAccountMonitorInThisProcess;
-(void)managedObjectContextWillSave:(id)arg1 ;
-(void)managedObjectContextDidSave:(id)arg1 ;
@end
