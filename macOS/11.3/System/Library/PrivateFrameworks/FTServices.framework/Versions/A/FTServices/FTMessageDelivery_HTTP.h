/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/Versions/A/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FTServices/FTMessageDelivery.h>
#import <FTServices/FTMessageQueueDelegate.h>

@protocol FTMessageDeliveryRemoteURLConnectionFactory, FTMessageDeliveryRemoteURLConnection, FTMessageDeliveryHTTPMobileNetworkManager;
@class IDSServerBag;

@interface FTMessageDelivery_HTTP : FTMessageDelivery <FTMessageQueueDelegate> {

	id<FTMessageDeliveryRemoteURLConnectionFactory> _remoteConnectionFactory;
	id<FTMessageDeliveryRemoteURLConnection> _remoteConnection;
	id<FTMessageDeliveryHTTPMobileNetworkManager> _mobileNetworkManager;
	char _pendingRetryAfterAirplaneMode;
	double _retryTimeAfterAirplaneMode;
	/*^block*/id _retryBackoffProvider;
	IDSServerBag* _idsServerBag;
	IDSServerBag* _iMessageServerBag;

}
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(char)busy;
-(char)sendMessage:(id)arg1 ;
-(void)networkStateChanged;
-(void)_clearRetryTimer;
-(char)_sendMessageAsynchronously:(id)arg1 error:(id*)arg2 ;
-(void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2 ;
-(void)cancelMessage:(id)arg1 ;
-(id)initWithIDSServerBag:(id)arg1 ;
-(id)initWithIDSServerBag:(id)arg1 iMessageServerBag:(id)arg2 remoteConnectionFactory:(id)arg3 mobileNetworkManager:(id)arg4 retryBackoffProvider:(/*^block*/id)arg5 ;
-(void)_serverBagLoaded:(id)arg1 ;
-(void)_cleanupURLConnection;
-(void)_dequeueIfNeeded;
-(char)_tryRetryMessageWithTimeInterval:(double)arg1 ;
-(void)_informDelegatesOfMessage:(id)arg1 result:(id)arg2 resultCode:(long long)arg3 error:(id)arg4 ;
-(id)_processResultData:(id)arg1 forMessage:(id)arg2 error:(id*)arg3 ;
-(void)_notifyDelegateAboutError:(id)arg1 ;
-(void)_urlRequestWithURL:(id)arg1 andData:(id)arg2 message:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_updateWiFiAssertions;
-(char)sendMessageAtTopOfTheQueue:(id)arg1 ;
@end

