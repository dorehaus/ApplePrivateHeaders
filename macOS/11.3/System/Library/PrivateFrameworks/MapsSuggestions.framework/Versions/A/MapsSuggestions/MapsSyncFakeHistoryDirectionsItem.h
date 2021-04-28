/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/Versions/A/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSyncFakeHistoryItem.h>
#import <MapsSuggestions/MapsSyncHistoryDirectionsItem.h>

@class GEOStorageRouteRequestStorage, NSUUID, NSDate, NSString;

@interface MapsSyncFakeHistoryDirectionsItem : MapsSyncFakeHistoryItem <MapsSyncHistoryDirectionsItem> {

	char _navigationInterrupted;
	GEOStorageRouteRequestStorage* _routeRequestStorage;

}

@property (nonatomic,readonly) char navigationInterrupted;                                       //@synthesize navigationInterrupted=_navigationInterrupted - In the implementation block
@property (nonatomic,readonly) GEOStorageRouteRequestStorage * routeRequestStorage;              //@synthesize routeRequestStorage=_routeRequestStorage - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier; 
@property (nonatomic,copy,readonly) NSDate * createTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(GEOStorageRouteRequestStorage *)routeRequestStorage;
-(char)navigationInterrupted;
-(id)initWithIdentifier:(id)arg1 createTime:(id)arg2 routeRequestStorage:(id)arg3 navigationInterrupted:(char)arg4 ;
@end

