/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/Versions/A/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IMPowerAssertion, NSMutableArray, NSMutableDictionary, NSDate, NSArray;

@interface IMAVCallManager : NSObject {

	IMPowerAssertion* _powerAssertion;
	NSMutableArray* _chatArray;
	NSMutableArray* _acChatProxyArray;
	NSMutableArray* _avChatProxyArray;
	NSMutableDictionary* _guidToACChatProxyMap;
	NSMutableDictionary* _guidToAVChatProxyMap;
	NSDate* _lastCallStateChange;
	int _avToken;
	int _acToken;
	unsigned _avCallState;
	unsigned _acCallState;
	unsigned _globalCallState;

}

@property (nonatomic,readonly) NSArray * _FTCalls; 
@property (nonatomic,readonly) unsigned callState; 
@property (nonatomic,readonly) char hasActiveCall; 
@property (nonatomic,readonly) NSArray * calls; 
+(id)sharedInstance;
-(id)init;
-(NSArray *)calls;
-(unsigned)callState;
-(unsigned)_callState;
-(id)_calls;
-(void)_updateAVCallState;
-(void)_updateACCallState;
-(void)_updateACChatProxyWithInfo:(id)arg1 ;
-(void)_updateAVChatProxyWithInfo:(id)arg1 ;
-(void)_updateOverallChatState;
-(void)_addIMAVChatToChatList:(id)arg1 ;
-(void)_addAVChatProxy:(id)arg1 ;
-(void)_addACChatProxy:(id)arg1 ;
-(void)_removeIMAVChatFromChatList:(id)arg1 ;
-(void)_sendProxyUpdate;
-(void)_setAVCallState:(unsigned)arg1 ;
-(void)_setACCallState:(unsigned)arg1 ;
-(void)_setAVCallState:(unsigned)arg1 quietly:(char)arg2 ;
-(void)_setACCallState:(unsigned)arg1 quietly:(char)arg2 ;
-(NSArray *)_FTCalls;
-(id)_mutableFTCalls;
-(id)_copyMutableFTCalls;
-(void)_postStateChangeNamed:(id)arg1 fromState:(unsigned)arg2 toState:(unsigned)arg3 postType:(char)arg4 type:(unsigned)arg5 ;
-(void)_postStateChangeIfNecessary;
-(unsigned)_callStateForType:(unsigned)arg1 ;
-(id)_nonRetainingChatList;
-(char)hasActiveCall;
-(char)_hasActiveFaceTimeCall;
-(char)_hasActiveAudioCall;
-(id)_activeFaceTimeCall;
-(id)_activeAudioCall;
@end
