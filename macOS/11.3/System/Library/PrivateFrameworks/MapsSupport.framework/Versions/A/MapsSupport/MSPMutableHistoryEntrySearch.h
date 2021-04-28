/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/Versions/A/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MSPMutableHistoryEntry.h>
#import <libobjc.A.dylib/MSPHistoryEntrySearch.h>

@class NSString, GEOMapRegion, NSDate;

@interface MSPMutableHistoryEntrySearch : MSPMutableHistoryEntry <MSPHistoryEntrySearch>

@property (nonatomic,copy) NSString * query; 
@property (nonatomic,copy) NSString * locationDisplayString; 
@property (nonatomic,copy) NSString * languageCode; 
@property (nonatomic,copy) GEOMapRegion * mapRegion; 
@property (nonatomic,copy,readonly) NSDate * usageDate; 
@property (nonatomic,readonly) char tracksRAPReportingOnly; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)mutableObjectClass;
+(id)mutableObjectProtocol;
+(Class)immutableObjectClass;
+(id)immutableObjectProtocol;
-(NSString *)query;
-(NSString *)languageCode;
-(void)setQuery:(NSString *)arg1 ;
-(GEOMapRegion *)mapRegion;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(id)initWithStorage:(id)arg1 ;
-(id)transferToImmutableIfValidWithError:(out id*)arg1 ;
-(char)_isUserVisibleDuplicateOfSameClassObject:(id)arg1 ;
-(NSString *)locationDisplayString;
-(void)setLocationDisplayString:(NSString *)arg1 ;
@end

