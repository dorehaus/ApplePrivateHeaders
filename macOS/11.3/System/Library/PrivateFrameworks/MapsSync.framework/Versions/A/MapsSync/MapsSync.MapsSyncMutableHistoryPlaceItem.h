/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/Versions/A/MapsSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSync/MapsSync.MapsSyncMutableHistoryItem.h>

@class GEOMapItemStorage, NSUUID;

@interface MapsSync.MapsSyncMutableHistoryPlaceItem : MapsSync.MapsSyncMutableHistoryItem {

	 _proxyHistory;

}

@property (retain,nonatomic) GEOMapItemStorage * mapItemStorage; 
@property (copy,nonatomic) NSUUID * supersededSearchId; 
-(GEOMapItemStorage *)mapItemStorage;
-(void)setMapItemStorage:(GEOMapItemStorage *)arg1 ;
-(id)initWithProxyObject:(id)arg1 ;
-(NSUUID *)supersededSearchId;
-(void)setSupersededSearchId:(NSUUID *)arg1 ;
@end

