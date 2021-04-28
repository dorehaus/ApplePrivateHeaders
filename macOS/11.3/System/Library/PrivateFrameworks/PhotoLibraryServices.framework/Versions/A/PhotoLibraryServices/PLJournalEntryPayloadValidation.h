/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLJournalEntryPayloadValidation
@required
+(id)relationshipKeyPathsForPrefetching;
+(id)modelProperties;
+(unsigned)minimumSnapshotPayloadVersion;
+(id)snapshotSortDescriptors;
+(void)validatePayloadPropertiesForManagedObjectModel:(id)arg1;
+(char)isValidForPersistenceWithObjectDictionary:(id)arg1;
+(id)additionalEntityNames;
+(char)shouldPersistForChangedKeys:(id)arg1 entityName:(id)arg2;
-(char)comparePayloadToObjectDictionary:(id)arg1 usingModelProperties:(id)arg2 errorDescriptions:(id)arg3;

@end
