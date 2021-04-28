/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, BRCRelativePath;

@interface BRCAsyncDirectoryEnumerator : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _targetQueue;
	long long _batchSize;
	char _isRecursive;
	int _error;
	BRCRelativePath* _rootPath;

}

@property (nonatomic,readonly) BRCRelativePath * rootPath;              //@synthesize rootPath=_rootPath - In the implementation block
-(void)dealloc;
-(BRCRelativePath *)rootPath;
-(id)initForEnumeratingBelow:(id)arg1 recursive:(char)arg2 batchSize:(long long)arg3 targetQueue:(id)arg4 ;
-(void)scheduleWithProcessBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
@end
