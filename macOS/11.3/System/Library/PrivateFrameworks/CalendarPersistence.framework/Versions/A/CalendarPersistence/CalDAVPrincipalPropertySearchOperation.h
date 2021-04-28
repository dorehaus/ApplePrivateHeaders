/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarPersistence/CalSingleSynchronousTask.h>

@class CalDAVSession, NSSet, NSMutableArray, NSArray;

@interface CalDAVPrincipalPropertySearchOperation : CalSingleSynchronousTask {

	CalDAVSession* _session;
	NSSet* _searchStrings;
	NSMutableArray* _results;
	NSSet* _searchTypes;
	id delegate;
	char _isRunning;
	char _attendeeMultipleStringPrefixSearch;

}

@property (readonly) NSArray * results;              //@synthesize results=_results - In the implementation block
+(void)submitSearchForPrincipal:(id)arg1 forStrings:(id)arg2 ofType:(id)arg3 withReply:(/*^block*/id)arg4 ;
-(NSArray *)results;
-(id)managedPrincipalInContext:(id)arg1 ;
-(id)initWithSession:(id)arg1 forStrings:(id)arg2 ofTypes:(id)arg3 ;
-(void)performSynchronousSearch;
-(void)processCompletedRequest:(id)arg1 ;
@end
