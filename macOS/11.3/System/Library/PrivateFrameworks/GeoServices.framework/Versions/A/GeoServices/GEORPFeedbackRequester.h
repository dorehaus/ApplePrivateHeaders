/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOServiceRequester.h>

@interface GEORPFeedbackRequester : GEOServiceRequester
+(id)sharedInstance;
-(void)startWithRequest:(id)arg1 traits:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cancelRequest:(id)arg1 ;
-(id)_validateResponse:(id)arg1 ;
-(id)_requestConfigForRequest:(id)arg1 ;
@end

