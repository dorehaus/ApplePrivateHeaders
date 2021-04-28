/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Versions/A/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RMAssetResolver.h>

@protocol RMAssetResolver
@required
-(id)dataTaskWithAsset:(id)arg1 queryParameters:(id)arg2 statusUpdater:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(id)downloadTaskWithAsset:(id)arg1 queryParameters:(id)arg2 statusUpdater:(id)arg3 completionHandler:(/*^block*/id)arg4;

@end


@protocol OS_dispatch_queue;
@class NSURLSession, RMConfigurationStatusUpdater, NSObject;

@interface RMAssetResolver : NSObject <RMAssetResolver> {

	NSURLSession* _URLSession;
	RMConfigurationStatusUpdater* _statusUpdater;
	NSObject*<OS_dispatch_queue> _completionQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionQueue;                //@synthesize completionQueue=_completionQueue - In the implementation block
@property (nonatomic,retain) NSURLSession * URLSession;                                   //@synthesize URLSession=_URLSession - In the implementation block
@property (nonatomic,readonly) RMConfigurationStatusUpdater * statusUpdater;              //@synthesize statusUpdater=_statusUpdater - In the implementation block
-(id)init;
-(void)setCompletionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(NSURLSession *)URLSession;
-(void)setURLSession:(NSURLSession *)arg1 ;
-(id)userAgent;
-(id)initWithURLSessionConfiguration:(id)arg1 ;
-(id)initWithURLSession:(id)arg1 ;
-(id)_dataURLForAsset:(id)arg1 reference:(id)arg2 queryParameters:(id)arg3 ;
-(id)_createRequestWithURL:(id)arg1 acceptType:(id)arg2 ;
-(char)_validateAsset:(id)arg1 reference:(id)arg2 didFinishWithResponse:(id)arg3 data:(id)arg4 error:(id*)arg5 ;
-(id)dataTaskWithAsset:(id)arg1 queryParameters:(id)arg2 statusUpdater:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)downloadTaskWithAsset:(id)arg1 queryParameters:(id)arg2 statusUpdater:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)resolveAssets:(id)arg1 statusUpdater:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(RMConfigurationStatusUpdater *)statusUpdater;
@end
