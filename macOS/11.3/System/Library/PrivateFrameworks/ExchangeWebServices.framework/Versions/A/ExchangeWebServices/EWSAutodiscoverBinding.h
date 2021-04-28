/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EWSAutodiscoverBindingDelegate;
@class NSString, EWSAutodiscoverOperation;

@interface EWSAutodiscoverBinding : NSObject {

	char _logsActivity;
	NSString* _host;
	id<EWSAutodiscoverBindingDelegate> _delegate;
	EWSAutodiscoverOperation* _operation;

}

@property (assign,nonatomic,__weak) EWSAutodiscoverOperation * operation;                       //@synthesize operation=_operation - In the implementation block
@property (nonatomic,copy,readonly) NSString * host;                                            //@synthesize host=_host - In the implementation block
@property (nonatomic,__weak,readonly) id<EWSAutodiscoverBindingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) char logsActivity;                                                           //@synthesize logsActivity=_logsActivity - In the implementation block
-(id)init;
-(id<EWSAutodiscoverBindingDelegate>)delegate;
-(NSString *)host;
-(EWSAutodiscoverOperation *)operation;
-(void)setOperation:(EWSAutodiscoverOperation *)arg1 ;
-(void)sendMessage:(id)arg1 ;
-(void)setLogsActivity:(char)arg1 ;
-(char)logsActivity;
-(id)initWithHost:(id)arg1 delegate:(id)arg2 ;
@end

