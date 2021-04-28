/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/Versions/A/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _TVRCMediaRemoteDeviceQueryDelegate;
@interface _TVRCMediaRemoteDeviceQuery : NSObject {

	void* _televisionController;
	id<_TVRCMediaRemoteDeviceQueryDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_TVRCMediaRemoteDeviceQueryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<_TVRCMediaRemoteDeviceQueryDelegate>)delegate;
-(void)setDelegate:(id<_TVRCMediaRemoteDeviceQueryDelegate>)arg1 ;
-(void)start;
-(void)stop;
-(char)_shouldUseMediaRemoteForConnection:(void*)arg1 ;
-(void)_discoveredTelevision:(void*)arg1 ;
-(void)_removedTelevision:(void*)arg1 ;
@end

