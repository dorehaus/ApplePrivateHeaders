/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/Versions/A/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSPredicate, NSDate;

@interface _OSLogEventSerializationMetadata : NSObject {

	NSMutableDictionary* _indexToStringMapping;
	NSMutableDictionary* _stringToIndexMapping;
	unsigned long long _flags;
	NSPredicate* _filterPredicate;
	unsigned long long _maxLogEventBatchSize;
	unsigned long long _serializedEventCount;
	NSDate* _firstDate;
	NSDate* _lastDate;

}

@property (nonatomic,readonly) NSMutableDictionary * stringToIndexMapping;              //@synthesize stringToIndexMapping=_stringToIndexMapping - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * indexToStringMapping;              //@synthesize indexToStringMapping=_indexToStringMapping - In the implementation block
@property (assign,nonatomic) unsigned long long flags;                                  //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) NSPredicate * filterPredicate;                             //@synthesize filterPredicate=_filterPredicate - In the implementation block
@property (assign,nonatomic) unsigned long long maxLogEventBatchSize;                   //@synthesize maxLogEventBatchSize=_maxLogEventBatchSize - In the implementation block
@property (assign,nonatomic) unsigned long long serializedEventCount;                   //@synthesize serializedEventCount=_serializedEventCount - In the implementation block
@property (nonatomic,retain) NSDate * firstDate;                                        //@synthesize firstDate=_firstDate - In the implementation block
@property (nonatomic,retain) NSDate * lastDate;                                         //@synthesize lastDate=_lastDate - In the implementation block
-(NSMutableDictionary *)stringToIndexMapping;
-(NSMutableDictionary *)indexToStringMapping;
-(unsigned long long)maxLogEventBatchSize;
-(unsigned long long)serializedEventCount;
-(void)setMaxLogEventBatchSize:(unsigned long long)arg1 ;
-(void)setSerializedEventCount:(unsigned long long)arg1 ;
-(void)setFirstDate:(NSDate *)arg1 ;
-(unsigned long long)flags;
-(id)init;
-(id)dataRepresentation;
-(id)initWithDataRepresentation:(id)arg1 ;
-(void)setFlags:(unsigned long long)arg1 ;
-(NSPredicate *)filterPredicate;
-(void)setFilterPredicate:(NSPredicate *)arg1 ;
-(NSDate *)lastDate;
-(NSDate *)firstDate;
-(id)stringForIndex:(id)arg1 ;
-(id)indexForString:(id)arg1 ;
-(void)setLastDate:(NSDate *)arg1 ;
@end

