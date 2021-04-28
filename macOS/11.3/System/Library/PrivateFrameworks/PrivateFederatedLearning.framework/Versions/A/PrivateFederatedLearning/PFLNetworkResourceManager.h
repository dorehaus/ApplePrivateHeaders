/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/Versions/A/PrivateFederatedLearning
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PFLNetworkHandler;
@interface PFLNetworkResourceManager : NSObject {

	id<PFLNetworkHandler> _networkHandler;

}

@property (nonatomic,readonly) id<PFLNetworkHandler> networkHandler;              //@synthesize networkHandler=_networkHandler - In the implementation block
-(id<PFLNetworkHandler>)networkHandler;
-(id)initWithNetworkHandler:(id)arg1 ;
-(void)fetchConfigurationWithHandler:(/*^block*/id)arg1 ;
-(id)_saveModel:(id)arg1 fromLocation:(id)arg2 ;
-(void)prepareModelResourceForTask:(id)arg1 modelIdentifier:(id)arg2 fromTemporaryLocation:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)handleResultsForIdentifier:(id)arg1 results:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

