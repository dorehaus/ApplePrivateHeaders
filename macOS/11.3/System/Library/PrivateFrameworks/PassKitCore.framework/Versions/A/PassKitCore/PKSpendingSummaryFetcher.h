/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/PKPaymentDataProviderDelegate.h>
#import <libobjc.A.dylib/PKAccountServiceObserver.h>

@protocol OS_dispatch_queue;
@class PKTransactionSourceCollection, PKAccount, NSCache, NSDate, NSObject, PKPaymentDefaultDataProvider, NSCalendar, NSHashTable, NSMutableOrderedSet, NSMutableDictionary, NSArray, NSString;

@interface PKSpendingSummaryFetcher : NSObject <PKPaymentDataProviderDelegate, PKAccountServiceObserver> {

	PKTransactionSourceCollection* _transactionSourceCollection;
	PKAccount* _account;
	NSCache* _weeklySummaryItemsPerStartDate;
	NSCache* _monthlySummaryItemsPerStartDate;
	NSCache* _yearlySummaryItemsPerStartDate;
	NSDate* _oldestTransactionDate;
	NSDate* _newestTransactionDate;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _replyQueue;
	PKPaymentDefaultDataProvider* _paymentDataProvider;
	NSCalendar* _currentCalendar;
	os_unfair_lock_s _observersLock;
	NSHashTable* _observers;
	os_unfair_lock_s _requestsLock;
	NSMutableOrderedSet* _pendingRequests;
	NSMutableDictionary* _blockPendingRequests;
	char _processingRequest;
	NSArray* _statements;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)previousStartOfWeekFromDate:(id)arg1 ;
+(id)nextStartOfWeekFromDate:(id)arg1 ;
+(id)summaryWithTransactions:(id)arg1 transactionSourceCollection:(id)arg2 currency:(id)arg3 type:(unsigned long long)arg4 startDate:(id)arg5 endDate:(id)arg6 lastSummary:(id)arg7 ;
+(id)_summaryWithTransactions:(id)arg1 currency:(id)arg2 type:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 lastSummary:(id)arg6 ;
+(id)_sortedTransactions:(id)arg1 ascending:(char)arg2 ;
+(id)_spendingCategoriesFromTransactions:(id)arg1 currencyCode:(id)arg2 ;
+(id)_spendingMerchantsFromTransaction:(id)arg1 currencyCode:(id)arg2 ;
-(void)dealloc;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(void)transactionSourceIdentifier:(id)arg1 didReceiveTransaction:(id)arg2 ;
-(void)_accessObserversWithHandler:(/*^block*/id)arg1 ;
-(void)statementsChangedForAccountIdentifier:(id)arg1 ;
-(void)_resetCurrentCalendar;
-(void)_timeZoneChanged:(id)arg1 ;
-(id)_cachedSpendingSummaryStartingWithDate:(id)arg1 type:(unsigned long long)arg2 withLastPeriodChange:(char)arg3 ;
-(id)_cacheForType:(unsigned long long)arg1 ;
-(void)_processNextRequest;
-(void)_spendingSummaryStartingWithDate:(id)arg1 endDate:(id)arg2 type:(unsigned long long)arg3 withLastPeriodChange:(char)arg4 completion:(/*^block*/id)arg5 ;
-(id)initWithTransactionSourceCollection:(id)arg1 account:(id)arg2 ;
-(void)availableSummaries:(/*^block*/id)arg1 ;
-(id)cachedSpendingSummaryStartingWithDate:(id)arg1 type:(unsigned long long)arg2 ;
-(void)spendingSummaryStartingWithDate:(id)arg1 type:(unsigned long long)arg2 includingLastPeriodChange:(char)arg3 completion:(/*^block*/id)arg4 ;
@end
