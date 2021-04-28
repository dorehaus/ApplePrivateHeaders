/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/PFCloudKitImportRecordsWorkItem.h>

@class NSArray, NSMutableDictionary, NSDictionary;

@interface PFCloudKitImporterZoneChangedWorkItem : PFCloudKitImportRecordsWorkItem {

	NSArray* _changedRecordZoneIDs;
	NSMutableDictionary* _fetchedZoneIDToChangeToken;
	NSMutableDictionary* _fetchedZoneIDToMoreComing;

}

@property (nonatomic,readonly) NSArray * changedRecordZoneIDs;                         //@synthesize changedRecordZoneIDs=_changedRecordZoneIDs - In the implementation block
@property (nonatomic,readonly) NSDictionary * fetchedZoneIDToChangeToken;              //@synthesize fetchedZoneIDToChangeToken=_fetchedZoneIDToChangeToken - In the implementation block
@property (nonatomic,readonly) NSDictionary * fetchedZoneIDToMoreComing;               //@synthesize fetchedZoneIDToMoreComing=_fetchedZoneIDToMoreComing - In the implementation block
-(NSArray *)changedRecordZoneIDs;
-(void)executeImportOperationsAndAccumulateRecordsWithManagedObjectContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)commitMetadataChangesWithContext:(id)arg1 forStore:(id)arg2 error:(id*)arg3 ;
-(char)updateMetadataForAccumulatedChangesInContext:(id)arg1 inStore:(id)arg2 error:(id*)arg3 ;
-(void)serverChangeTokenUpdated:(id)arg1 forRecordZoneWithID:(id)arg2 ;
-(void)fetchFinishedForZoneWithID:(id)arg1 serverChangeToken:(id)arg2 moreComing:(char)arg3 error:(id)arg4 ;
-(id)initWithChangedRecordZoneIDs:(id)arg1 options:(id)arg2 request:(id)arg3 ;
-(NSDictionary *)fetchedZoneIDToChangeToken;
-(NSDictionary *)fetchedZoneIDToMoreComing;
-(void)dealloc;
-(id)description;
@end

