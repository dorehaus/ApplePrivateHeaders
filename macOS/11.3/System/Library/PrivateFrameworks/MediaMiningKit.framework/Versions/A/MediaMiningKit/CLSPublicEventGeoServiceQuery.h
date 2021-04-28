/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/Versions/A/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLSQueryProtocol.h>

@protocol GEOMapServiceSpatialEventLookupTicket, OS_dispatch_queue;
@class NSArray, NSDictionary, NSObject, NSString;

@interface CLSPublicEventGeoServiceQuery : NSObject <CLSQueryProtocol> {

	char _isCancelled;
	NSArray* _timeLocationTuples;
	double _radius;
	NSDictionary* _parametersByTimeLocationTupleIdentifier;
	id<GEOMapServiceSpatialEventLookupTicket> _ticket;
	NSDictionary* _resolvedPublicEventsForTimeLocationTuples;
	NSDictionary* _invalidationTokens;
	NSObject*<OS_dispatch_queue> _geoQueue;

}

@property (nonatomic,readonly) NSArray * timeLocationTuples;                                        //@synthesize timeLocationTuples=_timeLocationTuples - In the implementation block
@property (nonatomic,readonly) double radius;                                                       //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) char isCancelled;                                                    //@synthesize isCancelled=_isCancelled - In the implementation block
@property (nonatomic,readonly) NSDictionary * parametersByTimeLocationTupleIdentifier;              //@synthesize parametersByTimeLocationTupleIdentifier=_parametersByTimeLocationTupleIdentifier - In the implementation block
@property (nonatomic,readonly) id<GEOMapServiceSpatialEventLookupTicket> ticket;                    //@synthesize ticket=_ticket - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> geoQueue;                               //@synthesize geoQueue=_geoQueue - In the implementation block
@property (nonatomic,retain) NSDictionary * resolvedPublicEventsForTimeLocationTuples;              //@synthesize resolvedPublicEventsForTimeLocationTuples=_resolvedPublicEventsForTimeLocationTuples - In the implementation block
@property (nonatomic,retain) NSDictionary * invalidationTokens;                                     //@synthesize invalidationTokens=_invalidationTokens - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)maximumBatchSize;
-(void)cancel;
-(char)isCancelled;
-(double)radius;
-(id<GEOMapServiceSpatialEventLookupTicket>)ticket;
-(void)submitWithHandler:(/*^block*/id)arg1 ;
-(NSDictionary *)invalidationTokens;
-(NSDictionary *)resolvedPublicEventsForTimeLocationTuples;
-(id)initWithTimeLocationTuples:(id)arg1 radius:(double)arg2 ;
-(void)prepareForRetry;
-(NSArray *)timeLocationTuples;
-(NSDictionary *)parametersByTimeLocationTupleIdentifier;
-(NSObject*<OS_dispatch_queue>)geoQueue;
-(id)_publicEventsForGeoEvent:(id)arg1 matchingParameters:(id)arg2 ;
-(id)_parametersByTimeLocationTupleIdentifierForTimeLocationTuples:(id)arg1 ;
-(void)setResolvedPublicEventsForTimeLocationTuples:(NSDictionary *)arg1 ;
-(void)setInvalidationTokens:(NSDictionary *)arg1 ;
@end

