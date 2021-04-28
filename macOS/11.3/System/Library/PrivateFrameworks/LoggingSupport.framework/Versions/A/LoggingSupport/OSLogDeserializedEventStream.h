/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/Versions/A/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LoggingSupport/OSLogEventStreamBase.h>

@protocol OSLogEventDeserializerDataSourceDelegate;
@class _OSLogEventSerializationMetadata, NSArray, NSEnumerator, NSDate;

@interface OSLogDeserializedEventStream : OSLogEventStreamBase {

	char _hasActivated;
	_OSLogEventSerializationMetadata* _metadata;
	id<OSLogEventDeserializerDataSourceDelegate> _dataSourceDelegate;
	NSArray* _curEventArray;
	NSEnumerator* _eventDictionaryEnumerator;

}

@property (assign,nonatomic) char hasActivated;                                                              //@synthesize hasActivated=_hasActivated - In the implementation block
@property (nonatomic,readonly) _OSLogEventSerializationMetadata * metadata;                                  //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) id<OSLogEventDeserializerDataSourceDelegate> dataSourceDelegate;              //@synthesize dataSourceDelegate=_dataSourceDelegate - In the implementation block
@property (nonatomic,readonly) NSArray * curEventArray;                                                      //@synthesize curEventArray=_curEventArray - In the implementation block
@property (nonatomic,readonly) NSEnumerator * eventDictionaryEnumerator;                                     //@synthesize eventDictionaryEnumerator=_eventDictionaryEnumerator - In the implementation block
@property (nonatomic,readonly) NSDate * firstDate; 
@property (nonatomic,readonly) NSDate * lastDate; 
-(NSArray *)curEventArray;
-(NSEnumerator *)eventDictionaryEnumerator;
-(id)_nextEventDictionary;
-(void)_iterateThroughEventsWithProxy:(id)arg1 filter:(id)arg2 startingDate:(id)arg3 ;
-(id)_eventArrayFromData:(id)arg1 ;
-(void)_updateEventArray;
-(void)setHasActivated:(char)arg1 ;
-(char)hasActivated;
-(void)activate;
-(_OSLogEventSerializationMetadata *)metadata;
-(NSDate *)lastDate;
-(NSDate *)firstDate;
-(id<OSLogEventDeserializerDataSourceDelegate>)dataSourceDelegate;
-(void)activateStreamFromDate:(id)arg1 ;
-(id)initWithDataSourceDelegate:(id)arg1 ;
@end
