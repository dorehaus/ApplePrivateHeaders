/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface _GEOPlaceDataPendingRequestManager : NSObject {

	NSMutableDictionary* _requestHandlersPending;

}
-(id)init;
-(id)_finished:(id)arg1 withResult:(id)arg2 error:(id)arg3 ;
-(void)_cleanUpFinishedHandlers:(id)arg1 ;
-(void)failedToResolveIdentifiers:(id)arg1 withError:(id)arg2 ;
-(void)willUpdateExpiredIdentifiers:(id)arg1 ;
-(id)identifiersRequested:(id)arg1 forHandler:(/*^block*/id)arg2 ;
-(void)didResolveItems:(id)arg1 forIdentifiers:(id)arg2 ;
-(void)_failAllPendingRequests;
@end

