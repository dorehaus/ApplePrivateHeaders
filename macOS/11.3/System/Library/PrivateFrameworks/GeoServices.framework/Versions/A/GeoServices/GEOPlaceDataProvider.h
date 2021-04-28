/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GEOPlaceDataProvider : NSObject {

	char _isLoading;
	/*^block*/id _finishedHandler;
	/*^block*/id _errorHandler;

}

@property (assign,nonatomic) char isLoading;                //@synthesize isLoading=_isLoading - In the implementation block
@property (nonatomic,copy) id finishedHandler;              //@synthesize finishedHandler=_finishedHandler - In the implementation block
@property (nonatomic,copy) id errorHandler;                 //@synthesize errorHandler=_errorHandler - In the implementation block
-(void)dealloc;
-(id)errorHandler;
-(void)setErrorHandler:(id)arg1 ;
-(char)isLoading;
-(void)setFinishedHandler:(id)arg1 ;
-(id)finishedHandler;
-(void)cancelRequest;
-(void)setIsLoading:(char)arg1 ;
-(void)startProviderWithRequest:(id)arg1 appIdentifier:(id)arg2 ;
-(void)cancelProviderRequest;
-(void)requestCompleted;
-(void)providerReceivedErrorCode:(long long)arg1 userInfo:(id)arg2 ;
-(void)startRequest:(id)arg1 appIdentifier:(id)arg2 finished:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(void)providerReceivedResponse:(id)arg1 userInfo:(id)arg2 ;
-(void)providerDidCancel;
@end

