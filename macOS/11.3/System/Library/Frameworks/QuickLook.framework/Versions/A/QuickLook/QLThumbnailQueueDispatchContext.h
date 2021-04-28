/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QuickLook.framework/Versions/A/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface QLThumbnailQueueDispatchContext : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _completion;

}

@property (retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (copy) id completion;                                     //@synthesize completion=_completion - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
@end

