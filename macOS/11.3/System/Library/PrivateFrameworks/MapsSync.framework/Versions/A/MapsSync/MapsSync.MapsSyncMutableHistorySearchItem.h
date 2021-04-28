/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/Versions/A/MapsSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSync/MapsSync.MapsSyncMutableHistoryItem.h>

@class GEOMapRegion, NSString;

@interface MapsSync.MapsSyncMutableHistorySearchItem : MapsSync.MapsSyncMutableHistoryItem {

	 _proxyHistory;

}

@property (retain,nonatomic) GEOMapRegion * geoMapRegion; 
@property (copy,nonatomic) NSString * language; 
@property (copy,nonatomic) NSString * locationDisplay; 
@property (copy,nonatomic) NSString * query; 
-(NSString *)query;
-(void)setQuery:(NSString *)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(id)initWithProxyObject:(id)arg1 ;
-(GEOMapRegion *)geoMapRegion;
-(void)setGeoMapRegion:(GEOMapRegion *)arg1 ;
-(NSString *)locationDisplay;
-(void)setLocationDisplay:(NSString *)arg1 ;
@end
