/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary, NSData, NSArray, NSDictionary;

@interface WBSCloudHistoryFetchResult : NSObject {

	NSMutableArray* _mutableCloudHistoryVisits;
	NSMutableArray* _mutableHistoryTombstones;
	NSMutableDictionary* _mutableClientVersions;
	NSData* _serverChangeTokenData;

}

@property (nonatomic,readonly) NSArray * cloudHistoryVisits; 
@property (nonatomic,readonly) NSArray * historyTombstones; 
@property (nonatomic,readonly) NSDictionary * clientVersions; 
@property (nonatomic,readonly) NSData * serverChangeTokenData;              //@synthesize serverChangeTokenData=_serverChangeTokenData - In the implementation block
-(id)description;
-(id)init;
-(NSData *)serverChangeTokenData;
-(NSArray *)cloudHistoryVisits;
-(NSArray *)historyTombstones;
-(void)_addCloudHistoryVisit:(id)arg1 ;
-(NSDictionary *)clientVersions;
-(void)_updateClientVersion:(unsigned long long)arg1 seenAt:(id)arg2 ;
-(void)_addHistoryTombstone:(id)arg1 ;
-(void)_setServerChangeTokenData:(id)arg1 ;
@end

