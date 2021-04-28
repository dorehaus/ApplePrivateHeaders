/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarPersistence/CalExchangePersistentOperation.h>
#import <CalendarPersistence/CalRevertableOperation.h>
#import <CalendarPersistence/CalDeleteCalendarItemOperation.h>
#import <CalendarPersistence/CalMessageTraceableOpearation.h>

@class EWSBaseItemIdType, NSManagedObjectID, NSString;

@interface CalExchangeDeleteItemOperation : CalExchangePersistentOperation <CalRevertableOperation, CalDeleteCalendarItemOperation, CalMessageTraceableOpearation> {

	EWSBaseItemIdType* _itemId;
	NSManagedObjectID* _itemObjectID;
	NSString* _itemName;
	int _itemType;
	char _shouldSendCancellation;

}
+(char)supportsSecureCoding;
-(void)dealloc;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)objectID;
-(id)itemId;
-(id)errorDescription;
-(id)createRevertOperationInContext:(id)arg1 inSession:(id)arg2 ;
-(char)shouldDeletePendingOperation:(id)arg1 ;
-(id)debugTitle;
-(char)executeWithBinding:(id)arg1 inSession:(id)arg2 inContext:(id)arg3 error:(id*)arg4 ;
-(id)messageTracerName;
-(id)messageTracerUUID;
-(char)deleteItemsWithIds:(id)arg1 binding:(id)arg2 inContext:(id)arg3 error:(id*)arg4 ;
-(id)initWithSessionID:(id)arg1 itemId:(id)arg2 itemObjectID:(id)arg3 itemName:(id)arg4 itemType:(int)arg5 shouldSendCancellation:(char)arg6 ;
@end

