/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FCNetworkBehaviorMonitor;

@interface FCCKContentDatabase : NSObject {

	char _isProductionEnvironment;
	char _shouldUseCloudd;
	char _shouldUseSecureConnectionForCKAssetURLs;
	char _shouldBypassCDNForCKAssetURLs;
	NSString* _containerIdentifier;
	FCNetworkBehaviorMonitor* _networkBehaviorMonitor;
	double _maximumRetryAfterForCK;

}

@property (nonatomic,copy,readonly) NSString * containerIdentifier;                            //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,readonly) char isProductionEnvironment;                                   //@synthesize isProductionEnvironment=_isProductionEnvironment - In the implementation block
@property (nonatomic,readonly) FCNetworkBehaviorMonitor * networkBehaviorMonitor;              //@synthesize networkBehaviorMonitor=_networkBehaviorMonitor - In the implementation block
@property (nonatomic,readonly) char shouldUseCloudd;                                           //@synthesize shouldUseCloudd=_shouldUseCloudd - In the implementation block
@property (assign,nonatomic) char shouldUseSecureConnectionForCKAssetURLs;                     //@synthesize shouldUseSecureConnectionForCKAssetURLs=_shouldUseSecureConnectionForCKAssetURLs - In the implementation block
@property (assign,nonatomic) char shouldBypassCDNForCKAssetURLs;                               //@synthesize shouldBypassCDNForCKAssetURLs=_shouldBypassCDNForCKAssetURLs - In the implementation block
@property (assign,nonatomic) double maximumRetryAfterForCK;                                    //@synthesize maximumRetryAfterForCK=_maximumRetryAfterForCK - In the implementation block
-(id)init;
-(void)addOperation:(id)arg1 ;
-(NSString *)containerIdentifier;
-(double)maximumRetryAfterForCK;
-(id)permanentURLForRecordID:(id)arg1 field:(long long)arg2 ;
-(FCNetworkBehaviorMonitor *)networkBehaviorMonitor;
-(id)initWithContainerIdentifier:(id)arg1 productionEnvironment:(char)arg2 networkBehaviorMonitor:(id)arg3 ;
-(char)shouldBypassCDNForCKAssetURLs;
-(char)shouldUseSecureConnectionForCKAssetURLs;
-(id)initWithContextConfiguration:(id)arg1 networkBehaviorMonitor:(id)arg2 ;
-(void)updateAssetURLHostIfNeededWithComponents:(id)arg1 ;
-(id)permanentURLForRecordID:(id)arg1 field:(long long)arg2 useSecureConnection:(char)arg3 ;
-(char)isProductionEnvironment;
-(char)shouldUseCloudd;
-(void)setShouldUseSecureConnectionForCKAssetURLs:(char)arg1 ;
-(void)setShouldBypassCDNForCKAssetURLs:(char)arg1 ;
-(void)setMaximumRetryAfterForCK:(double)arg1 ;
@end

