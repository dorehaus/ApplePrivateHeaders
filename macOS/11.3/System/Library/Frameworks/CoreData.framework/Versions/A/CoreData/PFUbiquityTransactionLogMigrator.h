/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectModel, NSMappingModel, NSString, NSDictionary, NSSet;

@interface PFUbiquityTransactionLogMigrator : NSObject {

	NSManagedObjectModel* _srcModel;
	NSManagedObjectModel* _dstModel;
	NSMappingModel* _mappingModel;
	NSString* _localPeerID;
	NSDictionary* _mappingsByEntityName;
	NSSet* _removedEntities;
	char _throttleLogs;

}

@property (readonly) char throttleLogs;              //@synthesize throttleLogs=_throttleLogs - In the implementation block
-(void)populateMappingsByEntityName;
-(char)migrateTransactionLogFromLocation:(id)arg1 toLocation:(id)arg2 error:(id*)arg3 ;
-(char)migrateBaselineFromLocation:(id)arg1 toLocation:(id)arg2 error:(id*)arg3 ;
-(char)throttleLogs;
-(id)createDestinationObjectsFromSourceObjects:(id)arg1 migrationContext:(id)arg2 ;
-(id)createDestinationGlobalObjectIDFromSourceGlobalObjectID:(id)arg1 ;
-(id)createDestinationObjectContentFromSourceObjectContent:(id)arg1 withEntityMapping:(id)arg2 migrationContext:(id)arg3 ;
-(id)initWithSourceModel:(id)arg1 destinationModel:(id)arg2 mappingModel:(id)arg3 localPeerID:(id)arg4 ;
-(char)migrateTransactionLogsForStoreName:(id)arg1 andLocalPeerID:(id)arg2 atUbiquityRootLocation:(id)arg3 error:(id*)arg4 ;
-(void)dealloc;
@end
