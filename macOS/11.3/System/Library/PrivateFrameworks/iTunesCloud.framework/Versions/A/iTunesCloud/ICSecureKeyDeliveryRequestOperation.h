/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICAsyncOperation.h>

@class ICSecureKeyDeliveryRequest;

@interface ICSecureKeyDeliveryRequestOperation : ICAsyncOperation {

	ICSecureKeyDeliveryRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) ICSecureKeyDeliveryRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                                //@synthesize responseHandler=_responseHandler - In the implementation block
-(ICSecureKeyDeliveryRequest *)request;
-(void)execute;
-(void)setRequest:(ICSecureKeyDeliveryRequest *)arg1 ;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(id)_createDefaultProtocolRequestBodyUsingPlaybackContextData:(id)arg1 ;
-(id)_createAudioProtocolRequestBodyUsingPlaybackContextData:(id)arg1 ;
-(void)_createServerPlaybackContextUsingCertificateData:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

