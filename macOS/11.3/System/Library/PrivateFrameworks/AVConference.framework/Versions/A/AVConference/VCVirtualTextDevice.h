/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VCMediaStreamProtocol.h>
#import <libobjc.A.dylib/VCTextSender.h>
#import <libobjc.A.dylib/VCTextReceiverDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface VCVirtualTextDevice : NSObject <VCMediaStreamProtocol, VCTextSender, VCTextReceiverDelegate> {

	int _clientPid;
	long long _state;
	NSObject*<OS_dispatch_queue> _queue;
	id _sendDelegate;
	id _mediaStreamDelegate;
	NSObject*<OS_dispatch_queue> _mediaStreamDelegateQueue;

}

@property (assign,nonatomic) NSObject*<VCMediaStreamDelegate> mediaStreamDelegate; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> mediaStreamDelegateQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)resume;
-(void)pause;
-(void)start;
-(void)stop;
-(void)setPause:(char)arg1 ;
-(void)sendCharacter:(unsigned short)arg1 ;
-(void)sendText:(id)arg1 ;
-(void)didReceiveText:(id)arg1 ;
-(id)initWithSendDelegate:(id)arg1 clientPid:(int)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 ;
-(char)setStreamConfig:(id)arg1 withError:(id*)arg2 ;
-(NSObject*<VCMediaStreamDelegate>)mediaStreamDelegate;
-(id)sendDelegate;
-(NSObject*<OS_dispatch_queue>)mediaStreamDelegateQueue;
-(void)setMediaStreamDelegate:(NSObject*<VCMediaStreamDelegate>)arg1 ;
-(void)setMediaStreamDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

