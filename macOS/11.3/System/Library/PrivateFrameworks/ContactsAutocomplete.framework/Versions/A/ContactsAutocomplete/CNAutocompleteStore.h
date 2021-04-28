/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/Versions/A/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNAutocompleteProbeProvider, CNScheduler;
@class CNAutocompleteStoreQueryHelper, CNCancelationToken, CNAutocompleteUserSession, CNAutocompleteStoreReproStringRecorder;

@interface CNAutocompleteStore : NSObject {

	double _fetchCoalescingInterval;
	CNAutocompleteStoreQueryHelper* _queryHelper;
	CNCancelationToken* _currentFetchToken;
	CNAutocompleteUserSession* _userSession;
	CNAutocompleteStoreReproStringRecorder* _reproStringRecorder;
	id<CNAutocompleteProbeProvider> _probeProvider;
	id<CNScheduler> _scheduler;

}

@property (nonatomic,readonly) CNAutocompleteStoreQueryHelper * queryHelper;                            //@synthesize queryHelper=_queryHelper - In the implementation block
@property (assign,nonatomic,__weak) CNCancelationToken * currentFetchToken;                             //@synthesize currentFetchToken=_currentFetchToken - In the implementation block
@property (nonatomic,retain) CNAutocompleteUserSession * userSession;                                   //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,retain) CNAutocompleteStoreReproStringRecorder * reproStringRecorder;              //@synthesize reproStringRecorder=_reproStringRecorder - In the implementation block
@property (nonatomic,readonly) id<CNAutocompleteProbeProvider> probeProvider;                           //@synthesize probeProvider=_probeProvider - In the implementation block
@property (nonatomic,readonly) id<CNAutocompleteSearchProvider> searchProvider; 
@property (nonatomic,readonly) id<CNScheduler> scheduler;                                               //@synthesize scheduler=_scheduler - In the implementation block
@property (assign,nonatomic) double fetchCoalescingInterval;                                            //@synthesize fetchCoalescingInterval=_fetchCoalescingInterval - In the implementation block
+(double)defaultFetchCoalescingInterval;
-(id)init;
-(id)initWithDelegate:(id)arg1 ;
-(void)setUserSession:(CNAutocompleteUserSession *)arg1 ;
-(CNAutocompleteUserSession *)userSession;
-(id<CNScheduler>)scheduler;
-(id)executeFetchRequest:(id)arg1 ;
-(id)scheduleFetchRequest:(id)arg1 ;
-(id<CNAutocompleteProbeProvider>)probeProvider;
-(id)initWithDelegate:(id)arg1 searchProvider:(id)arg2 probeProvider:(id)arg3 scheduler:(id)arg4 ;
-(CNAutocompleteStoreQueryHelper *)queryHelper;
-(id<CNAutocompleteSearchProvider>)searchProvider;
-(id)scheduleFetchRequest:(id)arg1 delegate:(id)arg2 ;
-(double)fetchCoalescingInterval;
-(id)executeFetchRequest:(id)arg1 delegate:(id)arg2 ;
-(id)executeFetchRequest:(id)arg1 afterDelay:(double)arg2 delegate:(id)arg3 ;
-(CNAutocompleteStoreReproStringRecorder *)reproStringRecorder;
-(CNCancelationToken *)currentFetchToken;
-(void)setCurrentFetchToken:(CNCancelationToken *)arg1 ;
-(void)userSelectedResult:(id)arg1 atSortedIndex:(unsigned long long)arg2 ;
-(void)ignoreResult:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setFetchCoalescingInterval:(double)arg1 ;
-(void)setReproStringRecorder:(CNAutocompleteStoreReproStringRecorder *)arg1 ;
@end

