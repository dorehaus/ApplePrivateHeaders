/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOAbstractMapServiceTicket.h>

@class GEOBatchRevGeocodeRequest;

@interface _GEOLegacyBatchReverseGeocodeTicket : GEOAbstractMapServiceTicket {

	GEOBatchRevGeocodeRequest* _batchReverseGeocodeRequest;
	/*^block*/id _locationShifter;

}
-(id)description;
-(void)cancel;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(/*^block*/id)arg4 ;
-(void)_batchReverseGeocodeWithRequest:(id)arg1 auditToken:(id)arg2 handler:(/*^block*/id)arg3 networkActivity:(/*^block*/id)arg4 ;
-(id)initWithBatchReverseGeocodeRequest:(id)arg1 locationShifter:(/*^block*/id)arg2 traits:(id)arg3 ;
-(char)isEqualForHistoryToTicket:(id)arg1 ;
@end

