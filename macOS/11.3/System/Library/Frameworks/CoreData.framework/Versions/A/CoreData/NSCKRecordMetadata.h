/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSData, NSNumber, NSCKRecordZoneMetadata;

@interface NSCKRecordMetadata : NSManagedObject

@property (nonatomic,retain) NSString * ckRecordName; 
@property (nonatomic,retain) NSData * ckRecordSystemFields; 
@property (nonatomic,retain) NSNumber * entityId; 
@property (nonatomic,retain) NSNumber * entityPK; 
@property (nonatomic,retain) NSData * ckShare; 
@property (nonatomic,retain) NSCKRecordZoneMetadata * recordZone; 
@property (assign,nonatomic) char needsUpload; 
@property (assign,nonatomic) char needsLocalDelete; 
@property (assign,nonatomic) char needsCloudDelete; 
@property (nonatomic,retain) NSNumber * lastExportedTransactionNumber; 
@property (nonatomic,retain) NSNumber * pendingExportTransactionNumber; 
@property (nonatomic,retain) NSNumber * pendingExportChangeTypeNumber; 
+(id)entityPath;
+(id)createMapOfMetadataMatchingObjectIDs:(id)arg1 inStore:(id)arg2 inManagedObjectContext:(id)arg3 error:(id*)arg4 ;
+(id)metadataForRecordIDs:(id)arg1 fromStore:(id)arg2 inManagedObjectContext:(id)arg3 error:(id*)arg4 ;
+(id)createMapOfMetadataMatchingRecords:(id)arg1 andRecordIDs:(id)arg2 inStore:(id)arg3 withManagedObjectContext:(id)arg4 error:(id*)arg5 ;
+(id)metadataForObjectIDs:(id)arg1 inStore:(id)arg2 withManagedObjectContext:(id)arg3 error:(id*)arg4 ;
+(id)batchUpdateMetadataMatchingEntityIdsAndPKs:(id)arg1 withUpdates:(id)arg2 inStore:(id)arg3 withManagedObjectContext:(id)arg4 error:(id*)arg5 ;
+(id)insertMetadataForObject:(id)arg1 setRecordName:(char)arg2 inZone:(id)arg3 recordNamePrefix:(id)arg4 error:(id*)arg5 ;
+(id)countRecordMetadataInStore:(id)arg1 matchingPredicate:(id)arg2 withManagedObjectContext:(id)arg3 error:(id*)arg4 ;
+(char)purgeRecordMetadataWithRecordIDs:(id)arg1 inStore:(id)arg2 withManagedObjectContext:(id)arg3 error:(id*)arg4 ;
+(id)metadataForObject:(id)arg1 inManagedObjectContext:(id)arg2 error:(id*)arg3 ;
+(id)metadataForRecord:(id)arg1 inManagedObjectContext:(id)arg2 fromStore:(id)arg3 error:(id*)arg4 ;
+(id)countRecordMetadataInStore:(id)arg1 matchingRecordIDs:(id)arg2 withManagedObjectContext:(id)arg3 error:(id*)arg4 ;
+(id)countRecordMetadataInStore:(id)arg1 inManagedObjectContext:(id)arg2 error:(id*)arg3 ;
-(id)createRecordFromSystemFields;
@end

