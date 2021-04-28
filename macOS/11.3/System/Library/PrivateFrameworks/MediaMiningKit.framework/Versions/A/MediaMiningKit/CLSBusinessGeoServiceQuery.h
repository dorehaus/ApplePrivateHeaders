/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/Versions/A/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLSQueryProtocol.h>

@protocol GEOMapServiceTicket;
@class CLSPOICache, NSArray, NSString;

@interface CLSBusinessGeoServiceQuery : NSObject <CLSQueryProtocol> {

	CLSPOICache* _cache;
	char _isCancelled;
	NSArray* _muids;
	id<GEOMapServiceTicket> _ticket;
	NSArray* _resolvedBusinessItems;

}

@property (nonatomic,readonly) char isCancelled;                             //@synthesize isCancelled=_isCancelled - In the implementation block
@property (nonatomic,copy,readonly) NSArray * muids;                         //@synthesize muids=_muids - In the implementation block
@property (nonatomic,readonly) id<GEOMapServiceTicket> ticket;               //@synthesize ticket=_ticket - In the implementation block
@property (nonatomic,readonly) NSArray * resolvedBusinessItems;              //@synthesize resolvedBusinessItems=_resolvedBusinessItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(char)isCancelled;
-(id<GEOMapServiceTicket>)ticket;
-(NSArray *)muids;
-(void)submitWithHandler:(/*^block*/id)arg1 ;
-(NSArray *)resolvedBusinessItems;
-(void)prepareForRetry;
-(id)initWithMUIDs:(id)arg1 ;
@end
