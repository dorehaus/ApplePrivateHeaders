/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/Versions/A/SiriVOX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVXClientServiceConsuming.h>
#import <libobjc.A.dylib/SVXClientSessionServicing.h>

@protocol SVXPerforming, SVXClientServiceProviding, SVXClientSessionServiceDelegate;
@class NSString;

@interface SVXClientSessionService : NSObject <SVXClientServiceConsuming, SVXClientSessionServicing> {

	id<SVXPerforming> _performer;
	id<SVXClientServiceProviding> _clientServiceProvider;
	char _isActive;
	long long _currentState;
	id<SVXClientSessionServiceDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long currentState;                                         //@synthesize currentState=_currentState - In the implementation block
@property (assign,nonatomic,__weak) id<SVXClientSessionServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SVXClientSessionServiceDelegate>)delegate;
-(void)setDelegate:(id<SVXClientSessionServiceDelegate>)arg1 ;
-(long long)currentState;
-(void)fetchStateWithCompletion:(/*^block*/id)arg1 ;
-(void)_setCurrentState:(long long)arg1 ;
-(id)initWithClientServiceProvider:(id)arg1 analytics:(id)arg2 performer:(id)arg3 ;
-(void)clientServiceDidChange:(char)arg1 ;
-(void)fetchAlarmAndTimerFiringContextWithCompletion:(/*^block*/id)arg1 ;
-(void)handleWillChangeStateFrom:(long long)arg1 to:(long long)arg2 ;
-(void)handleDidChangeStateFrom:(long long)arg1 to:(long long)arg2 ;
-(void)handleWillPresentFeedbackWithDialogIdentifier:(id)arg1 ;
-(void)handleWillStartSoundWithID:(long long)arg1 ;
-(void)handleDidStartSoundWithID:(long long)arg1 ;
-(void)handleDidStopSoundWithID:(long long)arg1 error:(id)arg2 ;
-(void)handleWillBecomeActiveWithActivationContext:(id)arg1 ;
-(void)handleDidBecomeActiveWithActivationContext:(id)arg1 ;
-(void)handleWillResignActiveWithOptions:(unsigned long long)arg1 duration:(double)arg2 ;
-(void)handleDidResignActiveWithDeactivationContext:(id)arg1 ;
@end

