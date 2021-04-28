/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class BRCAccountSession, NSString;

@interface BRCSideCarSyncUpOperation : _BRCOperation <BRCOperationSubclass> {

	BRCAccountSession* _session;
	char _shouldPerformAnotherBatch;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(id)initWithSession:(id)arg1 ;
-(char)shouldRetryForError:(id)arg1 ;
-(id)createActivity;
-(void)_markItemsFailedSync;
-(void)_syncUpRecordBatchWithModifiedRecords:(id)arg1 deletedRecordIDs:(id)arg2 recordIDToZoneMap:(id)arg3 requestID:(unsigned long long)arg4 ;
-(id)_itemsNeedingSyncUpEnumerator;
-(void)fakeSyncForItem:(id)arg1 itemRank:(unsigned long long)arg2 ;
-(char)shouldPerformAnotherBatch;
@end
