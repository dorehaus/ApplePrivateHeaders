/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMDCKAttachmentSyncCKOperationFactory : NSObject
+(id)_desiredKeysArrayForType:(long long)arg1 ;
-(id)_operationGroupWithName:(id)arg1 ;
-(id)fetchAttachmentZoneRecords:(id)arg1 desiredKeys:(long long)arg2 operationGroupName:(id)arg3 activity:(id)arg4 ;
-(id)fetchAttachmentZoneChangesCKOperationUsingToken:(id)arg1 zoneID:(id)arg2 resultsLimit:(unsigned long long)arg3 desiredKeys:(long long)arg4 operationGroupName:(id)arg5 activity:(id)arg6 ;
-(id)saveAttachmentsCKOperationUsingRecordsToSave:(id)arg1 activity:(id)arg2 ;
-(id)deleteAttachmentCKOperationUsingRecordIDstoDelete:(id)arg1 activity:(id)arg2 ;
-(id)_attachmentFetchRecordZoneChangesOptionsDictionaryUsingToken:(id)arg1 zoneID:(id)arg2 resultsLimit:(unsigned long long)arg3 desiredKeys:(long long)arg4 ;
-(char)_defaultsSayWeHaveSyncedOnce;
@end

