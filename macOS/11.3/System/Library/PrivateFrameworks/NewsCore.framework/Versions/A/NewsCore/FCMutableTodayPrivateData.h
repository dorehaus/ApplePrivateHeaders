/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCTodayPrivateData.h>
#import <libobjc.A.dylib/FCMutableTodayPrivateData.h>
@class NSSet, NSArray, NSDictionary, NSNumber, FCBundleSubscription;


@protocol FCMutableTodayPrivateData <FCTodayPrivateData>
@property (nonatomic,copy) id<FCDerivedPersonalizationData><NSCoding> derivedPersonalizationData; 
@property (nonatomic,copy) NSSet * mutedTagIDs; 
@property (nonatomic,copy) NSArray * autoFavoriteTagIDs; 
@property (nonatomic,copy) NSSet * purchasedTagIDs; 
@property (nonatomic,copy) NSArray * rankedAllSubscribedTagIDs; 
@property (nonatomic,copy) NSArray * recentlySeenHistoryItems; 
@property (nonatomic,copy) NSDictionary * recentlyReadHistoryItems; 
@property (nonatomic,copy) NSNumber * onboardingVersion; 
@property (nonatomic,copy) FCBundleSubscription * bundleSubscription; 
@required
-(void)setOnboardingVersion:(id)arg1;
-(NSNumber *)onboardingVersion;
-(NSArray *)autoFavoriteTagIDs;
-(FCBundleSubscription *)bundleSubscription;
-(NSSet *)purchasedTagIDs;
-(id<FCDerivedPersonalizationData><NSCoding>)derivedPersonalizationData;
-(NSSet *)mutedTagIDs;
-(NSArray *)rankedAllSubscribedTagIDs;
-(NSArray *)recentlySeenHistoryItems;
-(NSDictionary *)recentlyReadHistoryItems;
-(void)setDerivedPersonalizationData:(id)arg1;
-(void)setMutedTagIDs:(id)arg1;
-(void)setAutoFavoriteTagIDs:(id)arg1;
-(void)setPurchasedTagIDs:(id)arg1;
-(void)setRankedAllSubscribedTagIDs:(id)arg1;
-(void)setRecentlySeenHistoryItems:(id)arg1;
-(void)setRecentlyReadHistoryItems:(id)arg1;
-(void)setBundleSubscription:(id)arg1;

@end


@class NSSet, NSArray, NSDictionary, NSNumber, FCBundleSubscription, NSMutableDictionary, NSString;

@interface FCMutableTodayPrivateData : FCTodayPrivateData <FCMutableTodayPrivateData>

@property (nonatomic,readonly) NSMutableDictionary * dictionary; 
@property (nonatomic,copy) id<FCDerivedPersonalizationData><NSCoding> derivedPersonalizationData; 
@property (nonatomic,copy) NSSet * mutedTagIDs; 
@property (nonatomic,copy) NSArray * autoFavoriteTagIDs; 
@property (nonatomic,copy) NSSet * purchasedTagIDs; 
@property (nonatomic,copy) NSArray * rankedAllSubscribedTagIDs; 
@property (nonatomic,copy) NSArray * recentlySeenHistoryItems; 
@property (nonatomic,copy) NSDictionary * recentlyReadHistoryItems; 
@property (nonatomic,copy) NSNumber * onboardingVersion; 
@property (nonatomic,copy) FCBundleSubscription * bundleSubscription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(void)setOnboardingVersion:(NSNumber *)arg1 ;
-(void)_deleteObjectsForOldKeys;
-(void)setDerivedPersonalizationData:(id<FCDerivedPersonalizationData><NSCoding>)arg1 ;
-(void)setMutedTagIDs:(NSSet *)arg1 ;
-(void)setAutoFavoriteTagIDs:(NSArray *)arg1 ;
-(void)setPurchasedTagIDs:(NSSet *)arg1 ;
-(void)setRankedAllSubscribedTagIDs:(NSArray *)arg1 ;
-(void)setRecentlySeenHistoryItems:(NSArray *)arg1 ;
-(void)setRecentlyReadHistoryItems:(NSDictionary *)arg1 ;
-(void)setBundleSubscription:(FCBundleSubscription *)arg1 ;
@end

