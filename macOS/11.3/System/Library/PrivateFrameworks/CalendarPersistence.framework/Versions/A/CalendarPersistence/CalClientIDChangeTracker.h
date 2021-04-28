/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary;

@interface CalClientIDChangeTracker : NSObject {

	NSMutableDictionary* allChanges;
	NSDictionary* entities;

}
+(id)defaultTracker;
-(id)init;
-(void)cleanup;
-(id)removals;
-(void)computeAndStoreChangeIds;
-(id)trackerFor:(id)arg1 ;
-(id)initForRead;
-(void)clearChanges;
-(id)remappings;
@end
