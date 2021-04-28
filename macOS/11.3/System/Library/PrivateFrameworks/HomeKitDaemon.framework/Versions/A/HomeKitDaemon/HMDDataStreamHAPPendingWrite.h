/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface HMDDataStreamHAPPendingWrite : NSObject {

	NSData* _data;
	/*^block*/id _completion;
	unsigned long long _bytesWritten;

}

@property (copy,readonly) NSData * data;                         //@synthesize data=_data - In the implementation block
@property (readonly) id completion;                              //@synthesize completion=_completion - In the implementation block
@property (assign) unsigned long long bytesWritten;              //@synthesize bytesWritten=_bytesWritten - In the implementation block
-(NSData *)data;
-(char)isComplete;
-(id)completion;
-(unsigned long long)bytesWritten;
-(void)setBytesWritten:(unsigned long long)arg1 ;
-(id)initWithData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)popNextFrameUpToMaxLength:(unsigned long long)arg1 ;
@end
