/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ShazamInsights.framework/Versions/A/ShazamInsights
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SHLouvainClusterQuery, SHDataStoreMetadata;


@protocol SHDataStore <NSObject>
@property (readonly) SHLouvainClusterQuery * query; 
@property (retain) SHDataStoreMetadata * metadata; 
@required
-(SHLouvainClusterQuery *)query;
-(SHDataStoreMetadata *)metadata;
-(void)setMetadata:(id)arg1;
-(char)saveContextWithError:(id*)arg1;
-(char)loadClustersLineByLineFromDataURL:(id)arg1 error:(id*)arg2;
-(char)isDataLoaded;
-(void)removeAllData;

@end

