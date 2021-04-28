/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCCKDatabaseMigrator, FCCKZonePruningAssistant;
@class FCCKPrivateDatabase, CKRecordZoneID, NSMutableSet, NSMutableArray;

@interface FCCKDatabaseZoneMigrationOperation : FCOperation {

	FCCKPrivateDatabase* _database;
	CKRecordZoneID* _recordZoneID;
	id<FCCKDatabaseMigrator> _migrator;
	id<FCCKZonePruningAssistant> _pruningAssistant;
	/*^block*/id _migrationCompletionHandler;
	NSMutableSet* _createdZones;
	NSMutableArray* _resultZoneIDsEligibleForDeletion;
	NSMutableArray* _resultRecordIDsEligibleForDeletion;

}
-(void)performOperation;
-(void)prepareOperation;
-(char)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
@end

