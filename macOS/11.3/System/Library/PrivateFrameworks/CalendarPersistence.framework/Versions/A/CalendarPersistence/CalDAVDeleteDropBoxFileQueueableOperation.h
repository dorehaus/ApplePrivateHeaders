/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarPersistence/CalDAVEntityQueueableOperation.h>

@class NSString, CALEntity;

@interface CalDAVDeleteDropBoxFileQueueableOperation : CalDAVEntityQueueableOperation {

	NSString* _attachmentName;
	CALEntity* _masterEntity;

}
-(void)performOperation;
-(id)masterEntity;
-(id)initWithChangeRequest:(id)arg1 attachmentName:(id)arg2 entity:(id)arg3 fromSource:(id)arg4 ;
@end

