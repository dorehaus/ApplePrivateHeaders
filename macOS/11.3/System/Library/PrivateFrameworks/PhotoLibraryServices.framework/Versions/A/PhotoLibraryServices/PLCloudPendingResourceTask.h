/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CPLResourceTransferTask, NSDate, NSMutableDictionary;

@interface PLCloudPendingResourceTask : NSObject {

	CPLResourceTransferTask* _transferTask;
	NSDate* _lastUpdated;
	char _completed;
	char _transferTaskRemoved;
	NSMutableDictionary* _taskIdentifierToProgressBlock;
	NSMutableDictionary* _taskIdentifierToCompletionHandler;

}
-(void)cancelTaskWithIdentifier:(id)arg1 ;
-(id)lastUpdated;
-(void)reportProgress:(float)arg1 ;
-(void)keepAlive;
-(void)reportCompletionWithError:(id)arg1 ;
-(id)taskIDs;
-(void)setTransferTask:(id)arg1 ;
-(id)initWithProgressBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 forTaskIdentifier:(id)arg3 ;
-(void)addProgressBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 withTaskIdentifier:(id)arg3 ;
@end
