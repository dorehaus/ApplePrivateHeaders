/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class geo_isolater, NSHashTable, NSMapTable;

@interface GEOImageServiceRequester : NSObject {

	geo_isolater* _isolater;
	NSHashTable* _pendingRequests;
	NSMapTable* _requestToIdentifier;

}
+(id)sharedRequester;
-(id)init;
-(unsigned long long)calculateFreeableSize;
-(char)_finishRequest:(id)arg1 ;
-(void)startImageServiceRequest:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3 queue:(id)arg4 finished:(/*^block*/id)arg5 networkActivity:(/*^block*/id)arg6 error:(/*^block*/id)arg7 ;
-(void)cancelImageServiceRequest:(id)arg1 ;
-(unsigned long long)shrinkDiskCacheToSize:(unsigned long long)arg1 ;
@end

