/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/Versions/A/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAutocompletePerformanceProbe.h>

@class CNTracedLogger, NSMutableArray, NSString;

@interface CNAutocompletePerformanceTracing : NSObject <CNAutocompletePerformanceProbe> {

	CNTracedLogger* _logger;
	NSMutableArray* _pendingLogs;

}

@property (nonatomic,retain) CNTracedLogger * logger;                   //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingLogs;              //@synthesize pendingLogs=_pendingLogs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)domain;
-(CNTracedLogger *)logger;
-(void)setLogger:(CNTracedLogger *)arg1 ;
-(void)recordNumberOfResultsReturned:(unsigned long long)arg1 inTimeInterval:(double)arg2 forBatch:(unsigned long long)arg3 includesServers:(char)arg4 ;
-(void)sendData;
-(id)initWithTracedLogger:(id)arg1 ;
-(id)buildTraceLogWithSource:(id)arg1 numberOfResults:(unsigned long long)arg2 latency:(double)arg3 ;
-(NSMutableArray *)pendingLogs;
-(void)recordLatency:(double)arg1 forResultCount:(unsigned long long)arg2 forSource:(id)arg3 ;
-(void)recordNumberOfRecentResults:(unsigned long long)arg1 inTimeInterval:(double)arg2 ;
-(void)recordNumberOfContactResults:(unsigned long long)arg1 inTimeInterval:(double)arg2 ;
-(void)recordNumberOfSuggestionResults:(unsigned long long)arg1 inTimeInterval:(double)arg2 ;
-(void)recordNumberOfDirectoryServerResults:(unsigned long long)arg1 inTimeInterval:(double)arg2 ;
-(void)recordNumberOfPredictionResults:(unsigned long long)arg1 inTimeInterval:(double)arg2 ;
-(void)recordNumberOfSupplementalResults:(unsigned long long)arg1 inTimeInterval:(double)arg2 ;
-(void)recordNumberOfCalendarServerResults:(unsigned long long)arg1 inTimeInterval:(double)arg2 ;
-(void)setPendingLogs:(NSMutableArray *)arg1 ;
@end
