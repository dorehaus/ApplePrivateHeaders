/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString, NSMutableSet, NSDictionary, NSSet, NSArray;

@interface BRCSyncHealthReport : NSObject {

	NSMutableDictionary* _syncUpErrorsByMangledID;
	NSMutableDictionary* _syncDownErrorsByMangledID;
	NSString* _dsid;
	NSString* _rampNumber;
	NSMutableSet* _syncUpFailures;
	NSMutableSet* _uploadFailures;
	NSMutableSet* _downloadFailures;
	unsigned long long _totalZoneCount;
	unsigned long long _blockedZonesCount;
	unsigned long long _totalItemsCount;

}

@property (nonatomic,readonly) unsigned long long totalZoneCount;                     //@synthesize totalZoneCount=_totalZoneCount - In the implementation block
@property (nonatomic,readonly) unsigned long long blockedZonesCount;                  //@synthesize blockedZonesCount=_blockedZonesCount - In the implementation block
@property (nonatomic,readonly) unsigned long long totalItemsCount;                    //@synthesize totalItemsCount=_totalItemsCount - In the implementation block
@property (nonatomic,readonly) NSDictionary * syncUpErrorsByMangledID;                //@synthesize syncUpErrorsByMangledID=_syncUpErrorsByMangledID - In the implementation block
@property (nonatomic,readonly) NSDictionary * syncDownErrorsByMangledID;              //@synthesize syncDownErrorsByMangledID=_syncDownErrorsByMangledID - In the implementation block
@property (nonatomic,readonly) NSSet * syncUpFailures;                                //@synthesize syncUpFailures=_syncUpFailures - In the implementation block
@property (nonatomic,readonly) NSSet * uploadFailures;                                //@synthesize uploadFailures=_uploadFailures - In the implementation block
@property (nonatomic,readonly) NSSet * downloadFailures;                              //@synthesize downloadFailures=_downloadFailures - In the implementation block
@property (nonatomic,readonly) NSString * dsid;                                       //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,readonly) NSString * rampNumber;                                 //@synthesize rampNumber=_rampNumber - In the implementation block
@property (nonatomic,readonly) NSArray * telemetryErrorEvents; 
-(id)init;
-(NSString *)dsid;
-(void)generateReportWithSession:(id)arg1 ;
-(NSArray *)telemetryErrorEvents;
-(void)syncErrors:(/*^block*/id)arg1 ;
-(id)_injectionForAnalyticsServiceCode:(int)arg1 ;
-(void)_fillTransferFailure:(id)arg1 withRowID:(unsigned long long)arg2 atDate:(id)arg3 session:(id)arg4 ;
-(id)getRampNumberForSession:(id)arg1 ;
-(unsigned long long)totalZoneCount;
-(unsigned long long)blockedZonesCount;
-(unsigned long long)totalItemsCount;
-(NSDictionary *)syncUpErrorsByMangledID;
-(NSDictionary *)syncDownErrorsByMangledID;
-(NSSet *)syncUpFailures;
-(NSSet *)uploadFailures;
-(NSSet *)downloadFailures;
-(NSString *)rampNumber;
@end
