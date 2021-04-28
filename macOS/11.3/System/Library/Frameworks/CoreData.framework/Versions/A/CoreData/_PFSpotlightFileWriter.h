/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSPersistentStoreCoordinator, NSManagedObjectContext, NSManagedObjectModel, NSMutableDictionary;

@interface _PFSpotlightFileWriter : NSObject {

	NSString* externalRecordsPath;
	NSString* storeUUID;
	NSString* fileExtension;
	unsigned long long externalRecordsFileFormat;
	NSPersistentStoreCoordinator* psc;
	NSManagedObjectContext* moc;
	NSManagedObjectModel* model;
	char useUbiquityExternalRecordsLayout;
	NSMutableDictionary* changedObjectsContent;

}
+(id)directoryPathForPrimaryKey:(id)arg1 ;
-(void)writeSupportFilesWithDict:(id)arg1 managedObjectContext:(id)arg2 ;
-(id)fetchDestinationsForRelationship:(id)arg1 onSource:(id)arg2 ;
-(id)truthContentForInstanceWithData:(id)arg1 entityHasTransformables:(char)arg2 ;
-(void)writeFilesForEntities:(id)arg1 forOperation:(int)arg2 ;
-(void)dealloc;
@end

