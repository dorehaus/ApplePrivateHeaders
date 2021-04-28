/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/Versions/A/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestionsVirtualGarageConnectorDelegate.h>

@protocol MapsSuggestionsVirtualGarageConnector, OS_dispatch_queue;
@class MapsSuggestionsObservers, NSObject, NSString;

@interface MapsSuggestionsVirtualGarage : NSObject <MapsSuggestionsVirtualGarageConnectorDelegate> {

	id<MapsSuggestionsVirtualGarageConnector> _connector;
	MapsSuggestionsObservers* _observers;
	NSObject*<OS_dispatch_queue> _queue;
	char _isConnectedToVG;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)openConnection;
-(void)closeConnection;
-(id)initFromResourceDepot:(id)arg1 ;
-(void)virtualGarageDidUpdateUnpairedVehicles:(id)arg1 ;
-(id)initWithConnector:(id)arg1 ;
-(char)entriesForUnpairedVehiclesWithHandler:(/*^block*/id)arg1 ;
-(void)stateOfChargeForVehicleWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

