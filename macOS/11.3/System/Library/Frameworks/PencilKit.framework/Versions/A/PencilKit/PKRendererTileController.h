/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/PencilKit.framework/Versions/A/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface PKRendererTileController : NSObject {

	NSObject*<OS_dispatch_queue> _tileQueue;
	NSMutableDictionary* _tileFramebuffers;

}
+(id)sharedController;
-(id)init;
-(id)framebufferForTile:(id)arg1 createIfNeeded:(char)arg2 device:(id)arg3 pixelFormat:(unsigned long long)arg4 clearFramebufferBlock:(/*^block*/id)arg5 ;
-(void)didTeardownTile:(id)arg1 ;
@end
