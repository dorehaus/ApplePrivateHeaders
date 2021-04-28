/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLCloudPersistentHistoryMigratorContext
@required
-(void)setLocalVersion:(id)arg1;
-(id)readMigrationMarker;
-(void)setMigrationMarker:(id)arg1;
-(void)setMigratedLocalVersion:(id)arg1;
-(id)readLocalVersion;
-(void)resetSyncDueToMigrationMarker;
-(void)saveTokenObject:(id)arg1;
-(void)updateTransferCountsWithInsertedPhotoCount:(unsigned long long)arg1 insertedVideoCount:(unsigned long long)arg2;

@end

