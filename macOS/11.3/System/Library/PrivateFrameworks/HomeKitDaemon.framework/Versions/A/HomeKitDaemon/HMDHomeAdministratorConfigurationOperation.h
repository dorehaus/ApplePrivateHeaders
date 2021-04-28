/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFOperation.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMFMessage, HMDHome, NSString;

@interface HMDHomeAdministratorConfigurationOperation : HMFOperation <HMFLogging> {

	char _shouldSuspendSyncing;
	HMFMessage* _message;
	HMDHome* _home;
	/*^block*/id _sendCompletionBlock;
	/*^block*/id _responseHandler;

}

@property (readonly) HMFMessage * message;                          //@synthesize message=_message - In the implementation block
@property (__weak,readonly) HMDHome * home;                         //@synthesize home=_home - In the implementation block
@property (assign) char shouldSuspendSyncing;                       //@synthesize shouldSuspendSyncing=_shouldSuspendSyncing - In the implementation block
@property (copy) id sendCompletionBlock;                            //@synthesize sendCompletionBlock=_sendCompletionBlock - In the implementation block
@property (copy) id responseHandler;                                //@synthesize responseHandler=_responseHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)timeout;
+(id)logCategory;
-(HMFMessage *)message;
-(void)main;
-(HMDHome *)home;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(id)logIdentifier;
-(id)messageDispatcher;
-(id)sendCompletionBlock;
-(void)setSendCompletionBlock:(id)arg1 ;
-(id)initWithMessage:(id)arg1 home:(id)arg2 ;
-(char)shouldSuspendSyncing;
-(void)setShouldSuspendSyncing:(char)arg1 ;
@end

