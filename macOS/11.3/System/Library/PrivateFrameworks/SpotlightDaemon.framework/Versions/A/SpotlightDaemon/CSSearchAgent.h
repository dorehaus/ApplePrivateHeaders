/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/Versions/A/SpotlightDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpotlight/CSXPCConnection.h>

@protocol MDIndexer;
@class NSMutableDictionary;

@interface CSSearchAgent : CSXPCConnection {

	id<MDIndexer> _indexer;
	NSMutableDictionary* _searchConnections;

}

@property (nonatomic,retain) NSMutableDictionary * searchConnections;              //@synthesize searchConnections=_searchConnections - In the implementation block
@property (nonatomic,retain) id<MDIndexer> indexer;                                //@synthesize indexer=_indexer - In the implementation block
+(id)searchAgent:(char)arg1 serviceName:(id)arg2 ;
+(id)searchAgent;
-(void)preheat:(id)arg1 ;
-(void)cancelQuery:(id)arg1 ;
-(char)addClientConnectionIfAllowedForConnection:(id)arg1 ;
-(char)handleCommand:(const char*)arg1 info:(id)arg2 connection:(id)arg3 ;
-(char)lostClientConnection:(id)arg1 error:(id)arg2 ;
-(char)addClientConnectionIfAllowedForConfiguration:(id)arg1 ;
-(id<MDIndexer>)indexer;
-(void)setIndexer:(id<MDIndexer>)arg1 ;
-(void)setSearchConnections:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)searchConnections;
-(id)searchConnection:(id)arg1 ;
-(void)startQuery:(id)arg1 ;
-(void)startSimpleQuery:(id)arg1 ;
-(void)cancelSimpleQuery:(id)arg1 ;
-(void)handleEngagement:(id)arg1 forConnection:(id)arg2 ;
@end
