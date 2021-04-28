/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/Versions/A/PDSAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PDSRemote
@required
-(void)storeEntries:(id)arg1 deleteEntries:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)batchUpdateEntries:(id)arg1 forClientID:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)removeAllEntriesForUser:(id)arg1 withClientID:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)entriesForUser:(id)arg1 clientID:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)activeUsersWithClientID:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)usersWithClientID:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)entriesForClientID:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end

