/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SKProductStorePromotionController : NSObject
+(id)defaultController;
-(void)_fetchProductsForPromotionOrder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchStorePromotionVisibilityForProduct:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateStorePromotionVisibility:(long long)arg1 forProduct:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchStorePromotionOrderWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateStorePromotionOrder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_clearPromotionInfo;
@end
