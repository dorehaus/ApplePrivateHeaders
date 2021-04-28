/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/Versions/A/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NetworkServiceProxy/NetworkServiceProxy-Structs.h>
@interface NPTuscanyLoopbackConnection : NSObject {

	unsigned long long _blobSizes[4];
	nw_protocol* _protocol;
	nw_frame_array_s* _currentInputFrames;
	char _waitingForOutput;
	unsigned long long _currentBlobSizeIndex;

}

@property (readonly) nw_protocol* protocol; 
@property (assign) unsigned long long currentBlobSizeIndex;              //@synthesize currentBlobSizeIndex=_currentBlobSizeIndex - In the implementation block
@property (assign) char waitingForOutput;                                //@synthesize waitingForOutput=_waitingForOutput - In the implementation block
-(void)dealloc;
-(id)init;
-(nw_protocol*)protocol;
-(unsigned long long)currentBlobSizeIndex;
-(void)setCurrentBlobSizeIndex:(unsigned long long)arg1 ;
-(char)waitingForOutput;
-(void)setWaitingForOutput:(char)arg1 ;
-(void)handleDetachedFromProtocol;
-(unsigned)addOutputFramesToArray:(nw_frame_array_s*)arg1 maximumBytes:(unsigned)arg2 minimumBytes:(unsigned)arg3 maximumFrameCount:(unsigned)arg4 ;
-(unsigned)addInputFramesToArray:(nw_frame_array_s*)arg1 maximumBytes:(unsigned)arg2 minimumBytes:(unsigned)arg3 maximumFrameCount:(unsigned)arg4 ;
-(void)handleOutputFrame:(id)arg1 ;
-(void)notifyInputHandler;
@end
