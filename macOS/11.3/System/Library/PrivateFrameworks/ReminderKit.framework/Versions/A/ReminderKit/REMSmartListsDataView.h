/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/Versions/A/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class REMStore;

@interface REMSmartListsDataView : NSObject {

	REMStore* _store;

}

@property (nonatomic,readonly) REMStore * store;              //@synthesize store=_store - In the implementation block
+(id)smartListsFromSmartListStorages:(id)arg1 store:(id)arg2 ;
-(id)initWithStore:(id)arg1 ;
-(REMStore *)store;
-(id)fetchSmartListWithSmartListType:(id)arg1 createIfNeeded:(char)arg2 error:(id*)arg3 ;
-(id)fetchSmartListWithSmartListType:(id)arg1 reminderIDs:(id)arg2 createIfNeeded:(char)arg3 error:(id*)arg4 ;
@end

