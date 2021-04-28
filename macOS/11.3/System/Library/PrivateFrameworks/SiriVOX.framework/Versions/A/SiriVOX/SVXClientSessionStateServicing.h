/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/Versions/A/SiriVOX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SVXClientSessionStateServicing <NSObject>
@property (nonatomic,readonly) long long currentState; 
@property (assign,nonatomic,__weak) id<SVXClientSessionStateServiceDelegate> delegate; 
@required
-(id<SVXClientSessionStateServiceDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(long long)currentState;
-(void)fetchStateWithCompletion:(/*^block*/id)arg1;

@end
