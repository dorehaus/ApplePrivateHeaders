/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/Versions/A/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpotlight/CSXPCConnection.h>

@class NSMutableDictionary;

@interface CSSearchConnection : CSXPCConnection {

	char _previouslyInitialized;
	NSMutableDictionary* _queries;

}

@property (nonatomic,retain) NSMutableDictionary * queries;              //@synthesize queries=_queries - In the implementation block
@property (nonatomic,readonly) char previouslyInitialized;               //@synthesize previouslyInitialized=_previouslyInitialized - In the implementation block
+(id)sharedSearchConnection;
+(id)sharedCSUserFSConnection;
-(id)init;
-(id)initWithMachServiceName:(id)arg1 ;
-(void)setQueries:(NSMutableDictionary *)arg1 ;
-(void)handleError:(id)arg1 ;
-(void)sendMessageAsync:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)previouslyInitialized;
-(void)handleReply:(id)arg1 ;
-(void)preheat:(id)arg1 ;
-(id)removeQueryForID:(id)arg1 ;
-(void)startQuery:(id)arg1 context:(id)arg2 ;
-(id)queryForID:(id)arg1 ;
-(void)setQuery:(id)arg1 forID:(id)arg2 ;
-(id)createXPCDictionaryForQuery:(id)arg1 queryID:(long long)arg2 queryContext:(id)arg3 needsInitialization:(char)arg4 ;
-(void)cancelQuery:(unsigned long long)arg1 ;
-(NSMutableDictionary *)queries;
@end

