/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioHistory.framework/Versions/A/AudioHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AudioHistory/AudioHistory-Structs.h>
@interface AudioHistoryObject : NSObject {

	shared_ptr<AudioHistory::ObjCObjectDelegateAdapter>* _delegate;
	shared_ptr<AudioHistory::Object>* _object;

}

@property (assign,nonatomic,__weak) id<AudioHistoryObjectDelegate> delegate; 
-(id)init;
-(id<AudioHistoryObjectDelegate>)delegate;
-(void)setDelegate:(id<AudioHistoryObjectDelegate>)arg1 ;
-(void)writeEventWithSelector:(SEL)arg1 withPayload:(id)arg2 andTimeStamp:(AudioHistoryEventTimeStamp)arg3 andErrorHandler:(/*^block*/id)arg4 ;
-(void)writeEventWithSelector:(SEL)arg1 payload:(id)arg2 debugDescription:(id)arg3 timeStamp:(AudioHistoryEventTimeStamp)arg4 andErrorHandler:(/*^block*/id)arg5 ;
-(char)registerWithSystem:(id)arg1 name:(id)arg2 error:(id*)arg3 ;
-(char)unregisterFromSystem:(id)arg1 error:(id*)arg2 ;
-(void)writeEventWithType:(const char*)arg1 withPayload:(id)arg2 ;
-(void)writeEventWithType:(const char*)arg1 withPayload:(id)arg2 andErrorHandler:(/*^block*/id)arg3 ;
-(void)writeEventWithSelector:(SEL)arg1 withPayload:(id)arg2 ;
-(void)writeEventWithSelector:(SEL)arg1 withPayload:(id)arg2 andErrorHandler:(/*^block*/id)arg3 ;
-(void)writeEventWithType:(const char*)arg1 withPayloadBlock:(/*^block*/id)arg2 ;
-(void)writeEventWithType:(const char*)arg1 withPayloadBlock:(/*^block*/id)arg2 andErrorHandler:(/*^block*/id)arg3 ;
-(void)writeEventWithSelector:(SEL)arg1 withPayloadBlock:(/*^block*/id)arg2 ;
-(void)writeEventWithSelector:(SEL)arg1 withPayloadBlock:(/*^block*/id)arg2 andErrorHandler:(/*^block*/id)arg3 ;
-(void)writeEventWithType:(const char*)arg1 withPayload:(id)arg2 andTimeStamp:(AudioHistoryEventTimeStamp)arg3 ;
-(void)writeEventWithType:(const char*)arg1 withPayload:(id)arg2 andTimeStamp:(AudioHistoryEventTimeStamp)arg3 andErrorHandler:(/*^block*/id)arg4 ;
-(void)writeEventWithSelector:(SEL)arg1 withPayload:(id)arg2 andTimeStamp:(AudioHistoryEventTimeStamp)arg3 ;
-(void)writeEventWithType:(const char*)arg1 payload:(id)arg2 debugDescription:(id)arg3 andTimeStamp:(AudioHistoryEventTimeStamp)arg4 ;
-(void)writeEventWithType:(const char*)arg1 payload:(id)arg2 debugDescription:(id)arg3 timeStamp:(AudioHistoryEventTimeStamp)arg4 andErrorHandler:(/*^block*/id)arg5 ;
-(void)writeEventWithSelector:(SEL)arg1 payload:(id)arg2 debugDescription:(id)arg3 andTimeStamp:(AudioHistoryEventTimeStamp)arg4 ;
@end

