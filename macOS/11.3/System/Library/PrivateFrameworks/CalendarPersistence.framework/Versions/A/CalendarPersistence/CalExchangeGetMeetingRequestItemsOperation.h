/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarPersistence/CalExchangeOperation.h>

@class EWSItemIdType, NSArray;

@interface CalExchangeGetMeetingRequestItemsOperation : CalExchangeOperation {

	EWSItemIdType* _associatedCalendarItemID;
	NSArray* _requestMessages;
	NSArray* _itemIds;

}

@property (retain) NSArray * requestMessages;                             //@synthesize requestMessages=_requestMessages - In the implementation block
@property (retain) EWSItemIdType * associatedCalendarItemID;              //@synthesize associatedCalendarItemID=_associatedCalendarItemID - In the implementation block
@property (retain) NSArray * itemIds;                                     //@synthesize itemIds=_itemIds - In the implementation block
-(void)dealloc;
-(NSArray *)itemIds;
-(void)setItemIds:(NSArray *)arg1 ;
-(char)executeWithBinding:(id)arg1 inSession:(id)arg2 inContext:(id)arg3 error:(id*)arg4 ;
-(NSArray *)requestMessages;
-(void)setRequestMessages:(NSArray *)arg1 ;
-(id)initWithSessionID:(id)arg1 associatedCalendarItemID:(id)arg2 ;
-(id)_findMeetingRequestItemsWithBinding:(id)arg1 session:(id)arg2 context:(id)arg3 error:(id*)arg4 ;
-(id)_getItemsResponseShape:(char)arg1 ;
-(EWSItemIdType *)associatedCalendarItemID;
-(id)_findItemsResponseShape;
-(void)setAssociatedCalendarItemID:(EWSItemIdType *)arg1 ;
@end
