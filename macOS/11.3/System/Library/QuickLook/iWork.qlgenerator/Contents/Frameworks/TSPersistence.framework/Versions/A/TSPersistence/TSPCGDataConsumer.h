/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, TSUStreamWriteChannel;
#import <TSPersistence/TSPersistence-Structs.h>
@class NSObject, NSError;

@interface TSPCGDataConsumer : NSObject {

	NSObject*<OS_dispatch_queue> _writeQueue;
	id<TSUStreamWriteChannel> _writeChannel;
	NSError* _error;

}
+(CGDataConsumerRef)newCGDataConsumerForWriteChannel:(id)arg1 ;
-(id)init;
-(void)close;
-(void)_close;
-(id)initWithWriteChannel:(id)arg1 ;
-(unsigned long long)putBytes:(const void*)arg1 count:(unsigned long long)arg2 ;
@end

