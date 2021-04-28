/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/Versions/A/AccessibilitySharedSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySharedSupport/AXSSCloudKitHelper.h>

@class AXDispatchTimer;

@interface AXSSPunctuationEntryCloudKitHelper : AXSSCloudKitHelper {

	AXDispatchTimer* _changeCoalescer;

}
-(void)dealloc;
-(id)recordType;
-(id)apsEnvironment;
-(void)beginWatchingForChanges;
-(id)testRecordForSchemaCreation:(id)arg1 ;
-(Class)managedObjectClass;
-(void)processServerUpdateChanges:(id)arg1 moc:(id)arg2 recordNameToManagedObject:(id)arg3 ;
-(void)clearRecordsForPurging:(id)arg1 ;
-(void)retrieveLocalChangesForCloud:(/*^block*/id)arg1 ;
-(id)createCKRecordFromObject:(id)arg1 ;
-(void)punctuationGroupChanged:(id)arg1 ;
-(id)createCKRecordFromEntry:(id)arg1 ;
-(void)_processPunctuationEntryFromCKRecord:(id)arg1 ;
@end

