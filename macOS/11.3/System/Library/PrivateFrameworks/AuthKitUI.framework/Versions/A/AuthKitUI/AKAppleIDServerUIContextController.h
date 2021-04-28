/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/Versions/A/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHTTPURLResponse, AKServerRequestConfiguration, AKAppleIDServerResourceLoadDelegate, AKAppleIDServerUIDataHarvester, NSURL;

@interface AKAppleIDServerUIContextController : NSObject {

	/*^block*/id _serverUICompletion;
	NSHTTPURLResponse* _latestReadResponse;
	AKServerRequestConfiguration* _configuration;
	AKAppleIDServerResourceLoadDelegate* _serverUIDelegate;
	AKAppleIDServerUIDataHarvester* _serverDataHarvester;
	NSURL* _initiatingURL;

}

@property (nonatomic,readonly) AKAppleIDServerResourceLoadDelegate * serverUIDelegate;              //@synthesize serverUIDelegate=_serverUIDelegate - In the implementation block
@property (nonatomic,readonly) AKAppleIDServerUIDataHarvester * serverDataHarvester;                //@synthesize serverDataHarvester=_serverDataHarvester - In the implementation block
@property (nonatomic,copy,readonly) NSURL * initiatingURL;                                          //@synthesize initiatingURL=_initiatingURL - In the implementation block
-(void)signRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)completeWithError:(id)arg1 ;
-(id)initWithRequestConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)processResponse:(id)arg1 ;
-(void)completeWithFinalResponse:(id)arg1 ;
-(id)_headerValueFromType:(unsigned long long)arg1 ;
-(AKAppleIDServerUIDataHarvester *)serverDataHarvester;
-(void)_completeWithResponse:(id)arg1 additionalData:(id)arg2 error:(id)arg3 ;
-(void)tearDownContext;
-(char)handleAuthKitActionAttribute:(id)arg1 ;
-(void)completeWithError:(id)arg1 additionalData:(id)arg2 ;
-(AKAppleIDServerResourceLoadDelegate *)serverUIDelegate;
-(NSURL *)initiatingURL;
@end
