/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/Versions/A/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestionsPortraitConnector.h>

@class NSMutableDictionary, PPLocationQuery, PPNamedEntityQuery, NSArray, NSError, NSString;

@interface MapsSuggestionsFakePortraitConnector : NSObject <MapsSuggestionsPortraitConnector> {

	unsigned long long _calledLocationQuery;
	unsigned long long _calledNamedEntityQuery;
	unsigned long long _calledIterRankedLocations;
	unsigned long long _calledNamedEntityStoreRegisterFeedback;
	unsigned long long _calledLocationStoreRegisterFeedback;
	unsigned long long _calledConnectionsStoreRegisterFeedback;
	unsigned long long _calledIterRecentLocationsForConsumer;
	NSMutableDictionary* _configuredRankedLocationsForQuery;
	PPLocationQuery* _configuredLocationQuery;
	PPNamedEntityQuery* _configuredNamedEntityQuery;
	unsigned long long _currentRankedLocationIndex;
	NSArray* _configuredConnectionsLocations;
	unsigned long long _currentConnectionsLocationIndex;
	unsigned long long _calledRankedNamedEntitiesWithQuery;
	NSArray* _configuredNamedEntities;
	NSError* _configuredError;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(char)iterRankedLocationsWithQuery:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(char)iterRecentLocationsForConsumer:(unsigned long long)arg1 criteria:(id)arg2 limit:(unsigned long long)arg3 client:(id)arg4 error:(id*)arg5 block:(/*^block*/id)arg6 ;
-(void)configureError:(id)arg1 ;
-(id)locationQuery:(unsigned long long)arg1 fromDate:(id)arg2 consumerType:(unsigned long long)arg3 ;
-(void)locationStore_registerFeedback:(id)arg1 clientIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)connectionsStore_registerFeedback:(id)arg1 clientIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)namedEntityStore_registerFeedback:(id)arg1 clientIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)namedEntityQuery:(unsigned long long)arg1 fromDate:(id)arg2 consumerType:(unsigned long long)arg3 ;
-(id)rankedNamedEntitiesWihQuery:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)calledNamedEntityStoreRegisterFeedback;
-(unsigned long long)calledLocationStoreRegisterFeedback;
-(unsigned long long)calledConnectionsStoreRegisterFeedback;
-(void)configureLocationQuery:(id)arg1 ;
-(void)configureNamedEntityQuery:(id)arg1 ;
-(void)configureRankedLocations:(id)arg1 forQuery:(id)arg2 ;
-(void)configureConnectionLocations:(id)arg1 ;
-(void)configureNamedEntites:(id)arg1 ;
@end

