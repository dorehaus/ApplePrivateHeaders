/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AXHearingSupport.framework/Versions/A/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AXHearingSupport/AXHearingSupport-Structs.h>
@class CHManager, AXCloudKitHelper, NSManagedObjectContext;

@interface TTYDatabaseHelper : NSObject {

	sqlite3Ref _database;
	CHManager* _callHistoryManager;
	AXCloudKitHelper* _cloudKitHelper;
	NSManagedObjectContext* _managedObjectContext;

}

@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
+(id)sharedHelper;
-(void)dealloc;
-(id)init;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(NSManagedObjectContext *)managedObjectContext;
-(void)setupDatabase;
-(char)contactIsTTYContact:(id)arg1 ;
-(id)conversationForCallUID:(id)arg1 ;
-(char)saveConversation:(id)arg1 ;
-(char)deleteConversationWithCallUID:(id)arg1 ;
-(char)contactIDIsTTYContact:(id)arg1 ;
-(char)contactPathWasUsedForTTY:(id)arg1 ;
-(void)callHistoryDBDidChange:(id)arg1 ;
-(char)deleteConversationsWithCallUIDs:(id)arg1 ;
-(char)saveIfPossible;
-(void)storesWillChange:(id)arg1 ;
-(void)contentDidUpdate:(id)arg1 ;
-(id)ttyDirectoryPath;
-(id)ttyDatabaseFilePath;
@end

