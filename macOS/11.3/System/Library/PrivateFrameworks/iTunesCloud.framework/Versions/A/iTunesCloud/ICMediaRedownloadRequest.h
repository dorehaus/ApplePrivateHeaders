/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, ICMediaRedownloadResponse, ICStoreURLRequest, NSDictionary, NSString;

@interface ICMediaRedownloadRequest : ICRequestOperation {

	ICStoreRequestContext* _requestContext;
	ICMediaRedownloadResponse* _redownloadResponse;
	ICStoreURLRequest* _storeURLRequest;
	char _playbackRequest;
	char _streamingRental;
	char _usePrioritizedURLSession;
	char _includeKeybagSyncData;
	char _includeSubscriptionKeybagSyncData;
	NSDictionary* _redownloadParameters;
	NSString* _requestURLBagKey;

}

@property (nonatomic,copy) ICStoreRequestContext * requestContext;                       //@synthesize requestContext=_requestContext - In the implementation block
@property (nonatomic,copy) NSDictionary * redownloadParameters;                          //@synthesize redownloadParameters=_redownloadParameters - In the implementation block
@property (nonatomic,copy) NSString * requestURLBagKey;                                  //@synthesize requestURLBagKey=_requestURLBagKey - In the implementation block
@property (assign,nonatomic) char includeKeybagSyncData;                                 //@synthesize includeKeybagSyncData=_includeKeybagSyncData - In the implementation block
@property (assign,nonatomic) char includeSubscriptionKeybagSyncData;                     //@synthesize includeSubscriptionKeybagSyncData=_includeSubscriptionKeybagSyncData - In the implementation block
@property (assign,getter=isPlaybackRequest,nonatomic) char playbackRequest;              //@synthesize playbackRequest=_playbackRequest - In the implementation block
@property (assign,getter=isStreamingRental,nonatomic) char streamingRental;              //@synthesize streamingRental=_streamingRental - In the implementation block
@property (assign,nonatomic) char usePrioritizedURLSession;                              //@synthesize usePrioritizedURLSession=_usePrioritizedURLSession - In the implementation block
-(id)init;
-(void)cancel;
-(void)execute;
-(ICStoreRequestContext *)requestContext;
-(void)setRequestContext:(ICStoreRequestContext *)arg1 ;
-(NSDictionary *)redownloadParameters;
-(void)performRequestWithResponseHandler:(/*^block*/id)arg1 ;
-(id)initWithRequestContext:(id)arg1 redownloadParameters:(id)arg2 ;
-(id)initWithRequestContext:(id)arg1 redownloadParametersString:(id)arg2 ;
-(void)_executeWithActiveICloudAccountProperties:(id)arg1 ;
-(char)isPlaybackRequest;
-(void)setPlaybackRequest:(char)arg1 ;
-(char)isStreamingRental;
-(void)setStreamingRental:(char)arg1 ;
-(char)usePrioritizedURLSession;
-(void)setUsePrioritizedURLSession:(char)arg1 ;
-(void)setRedownloadParameters:(NSDictionary *)arg1 ;
-(NSString *)requestURLBagKey;
-(void)setRequestURLBagKey:(NSString *)arg1 ;
-(char)includeKeybagSyncData;
-(void)setIncludeKeybagSyncData:(char)arg1 ;
-(char)includeSubscriptionKeybagSyncData;
-(void)setIncludeSubscriptionKeybagSyncData:(char)arg1 ;
@end

