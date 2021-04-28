/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSMutableSet, CKServerChangeToken;

@interface PFCloudKitImportDatabaseContext : NSObject {

	NSSet* _interestingZoneIDs;
	NSMutableSet* _changedRecordZoneIDs;
	NSMutableSet* _deletedRecordZoneIDs;
	NSMutableSet* _purgedRecordZoneIDs;
	CKServerChangeToken* _updatedChangeToken;

}

@property (nonatomic,copy,readonly) NSSet * interestingZoneIDs;                     //@synthesize interestingZoneIDs=_interestingZoneIDs - In the implementation block
@property (nonatomic,readonly) NSSet * changedRecordZoneIDs;                        //@synthesize changedRecordZoneIDs=_changedRecordZoneIDs - In the implementation block
@property (nonatomic,readonly) NSSet * deletedRecordZoneIDs;                        //@synthesize deletedRecordZoneIDs=_deletedRecordZoneIDs - In the implementation block
@property (nonatomic,readonly) NSSet * purgedRecordZoneIDs;                         //@synthesize purgedRecordZoneIDs=_purgedRecordZoneIDs - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * updatedChangeToken;              //@synthesize updatedChangeToken=_updatedChangeToken - In the implementation block
-(id)initWithInterestingZoneIDs:(id)arg1 ;
-(char)hasWorkToDo;
-(void)zoneWithIDChanged:(id)arg1 ;
-(void)zoneWithIDWasDeleted:(id)arg1 ;
-(void)zoneWithIDWasPurged:(id)arg1 ;
-(NSSet *)changedRecordZoneIDs;
-(NSSet *)purgedRecordZoneIDs;
-(CKServerChangeToken *)updatedChangeToken;
-(void)setUpdatedChangeToken:(CKServerChangeToken *)arg1 ;
-(NSSet *)interestingZoneIDs;
-(void)dealloc;
-(id)description;
-(NSSet *)deletedRecordZoneIDs;
@end
