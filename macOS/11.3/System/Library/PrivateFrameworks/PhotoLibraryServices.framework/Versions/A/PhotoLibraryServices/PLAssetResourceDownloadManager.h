/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSOperationQueue, NSObject, NSMutableDictionary;

@interface PLAssetResourceDownloadManager : NSObject {

	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_queue> _requestIsolationQueue;
	os_unfair_lock_s _lock;
	NSMutableDictionary* _requestById;
	Ai _currentRequestId;

}
+(id)defaultManager;
-(id)init;
-(void)cancelRequest:(int)arg1 ;
-(int)requestCloudResourceType:(unsigned long long)arg1 assetObjectID:(id)arg2 library:(id)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_requestWithID:(int)arg1 ;
-(void)_setRequest:(id)arg1 forRequestID:(int)arg2 ;
@end

