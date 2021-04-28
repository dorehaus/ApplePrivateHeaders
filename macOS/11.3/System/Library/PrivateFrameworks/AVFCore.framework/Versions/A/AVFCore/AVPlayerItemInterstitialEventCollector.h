/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVPlayerItemMediaDataCollector.h>

@protocol OS_dispatch_queue;
@class NSObject, AVPlayerItem;

@interface AVPlayerItemInterstitialEventCollector : AVPlayerItemMediaDataCollector {

	NSObject*<OS_dispatch_queue> _ivarAccessQueue;
	/*^block*/id _obtainCoordinator;
	AVPlayerItem* _weakReferenceToPlayerItem;

}
-(void)dealloc;
-(id)initWithCoordinatorGenerator:(/*^block*/id)arg1 ;
-(char)_attachToPlayerItem:(id)arg1 ;
-(void)_detatchFromPlayerItem;
-(void)_updateTaggedRangeMetadataArray:(id)arg1 ;
@end
