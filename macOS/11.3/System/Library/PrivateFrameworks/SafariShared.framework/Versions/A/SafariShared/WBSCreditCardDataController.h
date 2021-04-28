/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMapTable, NSObject, PKVirtualCardManager, NSArray;

@interface WBSCreditCardDataController : NSObject {

	NSMapTable* _creditCardDataKeychainReferences;
	NSObject*<OS_dispatch_queue> _internalQueue;
	PKVirtualCardManager* _virtualCardManager;

}

@property (nonatomic,readonly) NSArray * creditCardData; 
+(char)hasCreditCardData;
-(id)init;
-(void)_sortCreditCardDataArray:(id)arg1 ;
-(id)_creditCardData;
-(char)_shouldOfferVirtualCards;
-(unsigned long long)virtualCardFieldsToRequest;
-(id)_virtualCardDataFromPKVirtualCards:(id)arg1 ;
-(id)_deduplicatedVirtualCardDataArray:(id)arg1 andCreditCardDataArray:(id)arg2 ;
-(char)hasUsedNonVirtualCard;
-(char)authenticationRequiredForVirtualCard:(id)arg1 ;
-(id)_neverSavedCreditCardSuffixFromCardNumber:(id)arg1 ;
-(NSArray *)creditCardData;
-(char)shouldNeverSaveCardWithNumber:(id)arg1 ;
-(id)existingCardWithNumber:(id)arg1 ;
-(id)_uniqueCardNameForCardName:(id)arg1 ;
-(id)defaultNameForCardOfType:(unsigned long long)arg1 cardholderName:(id)arg2 ;
-(void)creditCardDataDidChange;
-(void)replaceCreditCardData:(id)arg1 withCard:(id)arg2 ;
-(void)setHasUsedNonVirtualCard;
-(void)_removeNeverSaveCreditCardData:(id)arg1 ;
-(char)shouldAddCardWithNumber:(id)arg1 ;
-(void)saveCreditCardData:(id)arg1 ;
-(id)_neverSavedCreditCardSuffixFromCard:(id)arg1 ;
-(void)invalidateCreditCardData;
-(id)urlForVirtualCard:(id)arg1 ;
-(void)getCreditCardDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getVirtualCardsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getVirtualCardCredentialsFromKeychainWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getCreditCardDataToFill:(id)arg1 externalizedContext:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)savableCreditCardDataInForm:(id)arg1 ;
-(void)removeCreditCardData:(id)arg1 ;
-(void)markCreditCardDataAsMostRecentlyUsed:(id)arg1 ;
-(void)saveCreditCardDataIfAllowed:(id)arg1 ;
-(char)isCreditCardDataSaved:(id)arg1 ;
-(void)neverSaveCreditCardData:(id)arg1 ;
-(void)clearCreditCardData;
-(void)savePendingChangesBeforeTermination;
-(id)_testVirtualCard;
-(void)isVirtualCard:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

