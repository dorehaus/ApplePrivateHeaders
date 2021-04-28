/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNCancelable;
@class NSDictionary, ABPersonListController, CNPublishingSubject;

@interface ABPersonListSearchHelper : NSObject {

	NSDictionary* _cachedPersonEntriesByIdentifier;
	NSDictionary* _cachedSuggestionEntriesByIdentifier;
	ABPersonListController* _personListController;
	/*^block*/id _resultHandler;
	CNPublishingSubject* _searchObservable;
	id<CNCancelable> _localSearchSubscription;
	id<CNCancelable> _suggestionSearchSubscription;
	char _includeSuggestions;

}

@property (nonatomic,retain) NSDictionary * cachedPersonEntriesByIdentifier;                    //@synthesize cachedPersonEntriesByIdentifier=_cachedPersonEntriesByIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * cachedSuggestionEntriesByIdentifier;                //@synthesize cachedSuggestionEntriesByIdentifier=_cachedSuggestionEntriesByIdentifier - In the implementation block
@property (assign,nonatomic,__weak) ABPersonListController * personListController;              //@synthesize personListController=_personListController - In the implementation block
@property (nonatomic,copy) id resultHandler;                                                    //@synthesize resultHandler=_resultHandler - In the implementation block
@property (nonatomic,retain) CNPublishingSubject * searchObservable;                            //@synthesize searchObservable=_searchObservable - In the implementation block
@property (nonatomic,retain) id<CNCancelable> localSearchSubscription;                          //@synthesize localSearchSubscription=_localSearchSubscription - In the implementation block
@property (nonatomic,retain) id<CNCancelable> suggestionSearchSubscription;                     //@synthesize suggestionSearchSubscription=_suggestionSearchSubscription - In the implementation block
@property (assign,nonatomic) char includeSuggestions;                                           //@synthesize includeSuggestions=_includeSuggestions - In the implementation block
+(char)entriesContainMeEntry:(id)arg1 ;
+(char)shouldIncludeDonatedMeCardForPersonListController:(id)arg1 ;
+(char)shouldIncludeSuggestionsForPersonListController:(id)arg1 ;
+(id)uniqueSuggestedEntries:(id)arg1 givenCuratedEntries:(id)arg2 ;
+(void)removeAllRecordsFromAddressBook:(id)arg1 ;
+(id)suggestedMeEntryInEntries:(id)arg1 ;
+(char)noAccountSelectedInPersonListController:(id)arg1 ;
+(char)isDisplayingAllContactsGroupInPersonListController:(id)arg1 ;
+(char)isDisplayingTopLevelGroupInPersonListController:(id)arg1 ;
-(void)setIncludeSuggestions:(char)arg1 ;
-(id)resultHandler;
-(void)setResultHandler:(id)arg1 ;
-(id)fetchSuggestedEntriesByUID;
-(void)expandPersonEntriesCacheWithEntry:(id)arg1 ;
-(void)searchForString:(id)arg1 ;
-(ABPersonListController *)personListController;
-(void)setPersonListController:(ABPersonListController *)arg1 ;
-(char)includeSuggestions;
-(id)initWithPersonListController:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)fetchLocalContacts;
-(void)removeEntries:(id)arg1 ;
-(void)performLocalSearch:(id)arg1 ;
-(void)performSuggestionSearch:(id)arg1 ;
-(void)cleaupPreviousSuggestions;
-(NSDictionary *)cachedPersonEntriesByIdentifier;
-(void)setCachedPersonEntriesByIdentifier:(NSDictionary *)arg1 ;
-(void)setCachedSuggestionEntriesByIdentifier:(NSDictionary *)arg1 ;
-(void)performEntryHandler;
-(NSDictionary *)cachedSuggestionEntriesByIdentifier;
-(id)fetchPersonEntriesByUID;
-(id)augmentEntriesWithDonatedMeEntryIfFound:(id)arg1 ;
-(id)fetchSuggestedMeEntryByUID;
-(CNPublishingSubject *)searchObservable;
-(void)setSearchObservable:(CNPublishingSubject *)arg1 ;
-(id<CNCancelable>)localSearchSubscription;
-(void)setLocalSearchSubscription:(id<CNCancelable>)arg1 ;
-(id<CNCancelable>)suggestionSearchSubscription;
-(void)setSuggestionSearchSubscription:(id<CNCancelable>)arg1 ;
@end

