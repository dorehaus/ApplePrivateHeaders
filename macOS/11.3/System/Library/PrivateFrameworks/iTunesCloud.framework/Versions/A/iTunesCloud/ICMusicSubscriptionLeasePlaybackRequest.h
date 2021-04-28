/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, ICStoreRequestContext;

@interface ICMusicSubscriptionLeasePlaybackRequest : NSObject <NSCopying> {

	char _shouldPreventLeaseAcquisition;
	char _shouldRequireLeaseAcquisition;
	char _triggeredByLeasePrevention;
	char _followUp;
	NSString* _assetSourceStorefrontID;
	ICStoreRequestContext* _requestContext;
	unsigned long long _storeCloudID;
	long long _storePurchasedAdamID;
	long long _storeSubscriptionAdamID;
	NSString* _cloudUniversalLibraryID;

}

@property (nonatomic,copy) NSString * assetSourceStorefrontID;                                                 //@synthesize assetSourceStorefrontID=_assetSourceStorefrontID - In the implementation block
@property (nonatomic,copy,readonly) ICStoreRequestContext * requestContext;                                    //@synthesize requestContext=_requestContext - In the implementation block
@property (assign,nonatomic) unsigned long long storeCloudID;                                                  //@synthesize storeCloudID=_storeCloudID - In the implementation block
@property (assign,nonatomic) long long storePurchasedAdamID;                                                   //@synthesize storePurchasedAdamID=_storePurchasedAdamID - In the implementation block
@property (assign,nonatomic) long long storeSubscriptionAdamID;                                                //@synthesize storeSubscriptionAdamID=_storeSubscriptionAdamID - In the implementation block
@property (nonatomic,copy) NSString * cloudUniversalLibraryID;                                                 //@synthesize cloudUniversalLibraryID=_cloudUniversalLibraryID - In the implementation block
@property (assign,nonatomic) char shouldPreventLeaseAcquisition;                                               //@synthesize shouldPreventLeaseAcquisition=_shouldPreventLeaseAcquisition - In the implementation block
@property (assign,nonatomic) char shouldRequireLeaseAcquisition;                                               //@synthesize shouldRequireLeaseAcquisition=_shouldRequireLeaseAcquisition - In the implementation block
@property (assign,getter=isTriggeredByLeasePrevention,nonatomic) char triggeredByLeasePrevention;              //@synthesize triggeredByLeasePrevention=_triggeredByLeasePrevention - In the implementation block
@property (assign,getter=isFollowUp,nonatomic) char followUp;                                                  //@synthesize followUp=_followUp - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(ICStoreRequestContext *)requestContext;
-(id)initWithRequestContext:(id)arg1 ;
-(NSString *)cloudUniversalLibraryID;
-(unsigned long long)storeCloudID;
-(void)setStoreCloudID:(unsigned long long)arg1 ;
-(void)setCloudUniversalLibraryID:(NSString *)arg1 ;
-(long long)storePurchasedAdamID;
-(void)setStorePurchasedAdamID:(long long)arg1 ;
-(long long)storeSubscriptionAdamID;
-(void)setStoreSubscriptionAdamID:(long long)arg1 ;
-(NSString *)assetSourceStorefrontID;
-(void)setAssetSourceStorefrontID:(NSString *)arg1 ;
-(char)isFollowUp;
-(void)setFollowUp:(char)arg1 ;
-(char)shouldPreventLeaseAcquisition;
-(void)setShouldPreventLeaseAcquisition:(char)arg1 ;
-(char)shouldRequireLeaseAcquisition;
-(void)setShouldRequireLeaseAcquisition:(char)arg1 ;
-(char)isTriggeredByLeasePrevention;
-(void)setTriggeredByLeasePrevention:(char)arg1 ;
@end

