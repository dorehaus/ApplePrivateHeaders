/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/Versions/A/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDS/IDSTransactionLogTask.h>

@interface IDSTransactionLogSyncTask : IDSTransactionLogTask {

	/*^block*/id _batchProcessingBlock;
	/*^block*/id _knownRecordIDsFromList;
	char _shouldContinueFromLastSyncPoint;

}

@property (nonatomic,copy) id batchProcessingBlock;                             //@synthesize batchProcessingBlock=_batchProcessingBlock - In the implementation block
@property (nonatomic,copy) id knownRecordIDsFromList;                           //@synthesize knownRecordIDsFromList=_knownRecordIDsFromList - In the implementation block
@property (assign,nonatomic) char shouldContinueFromLastSyncPoint;              //@synthesize shouldContinueFromLastSyncPoint=_shouldContinueFromLastSyncPoint - In the implementation block
-(id)batchProcessingBlock;
-(void)setBatchProcessingBlock:(id)arg1 ;
-(id)knownRecordIDsFromList;
-(void)setKnownRecordIDsFromList:(id)arg1 ;
-(char)shouldContinueFromLastSyncPoint;
-(void)setShouldContinueFromLastSyncPoint:(char)arg1 ;
@end
