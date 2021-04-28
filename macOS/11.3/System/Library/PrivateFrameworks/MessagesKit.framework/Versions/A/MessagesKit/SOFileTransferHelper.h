/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MessagesKit.framework/Versions/A/MessagesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesKit/SOHelper.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface SOFileTransferHelper : SOHelper {

	NSMutableDictionary* _guidToResolvedBookmarkMap;
	NSObject*<OS_dispatch_queue> _workerQueue;

}

@property (retain) NSMutableDictionary * guidToResolvedBookmarkMap;                 //@synthesize guidToResolvedBookmarkMap=_guidToResolvedBookmarkMap - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workerQueue;              //@synthesize workerQueue=_workerQueue - In the implementation block
+(id)sharedInstance;
+(id)bundleName;
-(id)init;
-(NSObject*<OS_dispatch_queue>)workerQueue;
-(void)setWorkerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)visibleFileTransferGUIDs;
-(void)addVisibleTransferGUIDs:(id)arg1 ;
-(void)removeVisibleTransferGUIDs:(id)arg1 ;
-(void)setUserVisibleURL:(id)arg1 fileTransferGUID:(id)arg2 ;
-(id)userVisibleURLForGUID:(id)arg1 ;
-(char)atLeastOneTransferIncomplete;
-(id)fileTransfersIncompleteAlert;
-(id)otherPersonForFileTransferGUID:(id)arg1 ;
-(id)accountIDForFileTransferGUID:(id)arg1 ;
-(void)runBlockWhenDoneArchiving:(/*^block*/id)arg1 ;
-(id)archiveURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)guidToResolvedBookmarkMap;
-(void)setGuidToResolvedBookmarkMap:(NSMutableDictionary *)arg1 ;
@end

