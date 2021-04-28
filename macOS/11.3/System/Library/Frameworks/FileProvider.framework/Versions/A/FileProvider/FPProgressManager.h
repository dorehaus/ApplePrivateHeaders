/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/FileProvider.framework/Versions/A/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMapTable;

@interface FPProgressManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMapTable* _downloadProgressPerItemIDs;
	NSMapTable* _uploadProgressPerItemIDs;
	NSMapTable* _copyProgressPerItemIDs;

}
+(id)defaultManager;
-(id)init;
-(id)downloadProgressForItem:(id)arg1 ;
-(id)uploadProgressForItem:(id)arg1 ;
-(id)copyProgressForItem:(id)arg1 ;
-(id)_progressForItem:(id)arg1 usingProgressMap:(id)arg2 ;
-(void)attachProgressToItemsIfNeeded:(id)arg1 ;
-(void)registerCopyProgress:(id)arg1 forItemID:(id)arg2 ;
-(void)removeCopyProgressForItemID:(id)arg1 ;
-(void)removeDownloadProgressForItemID:(id)arg1 ;
-(void)removeCopyProgress:(id)arg1 ;
@end
