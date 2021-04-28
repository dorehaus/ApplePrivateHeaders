/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaLibrary.framework/Versions/A/MediaLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MLMediaLibraryImpl, NSDictionary;

@interface MLMediaLibrary : NSObject {

	MLMediaLibraryImpl* _impl;

}

@property (copy,readonly) NSDictionary * mediaSources; 
+(void)initialize;
+(void)unboxURLWithKey1:(id)arg1 key2:(id)arg2 inDictionary:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(id)initWithOptions:(id)arg1 ;
-(id)service;
-(id)outboundRequestQueue;
-(id)outboundRequestCondition;
-(void)setOutboundRequestInFlight:(char)arg1 ;
-(char)outboundRequestInFlight;
-(void)xpcConnectionWasInterrupted;
-(void)setMediaSources:(NSDictionary *)arg1 ;
-(id)mediaObjectAttributesExpectedClasses;
-(void)cacheDeletePurgeable:(id)arg1 urgency:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cacheDeletePurge:(id)arg1 urgency:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cacheDeleteCancel;
-(void)cacheDeletePeriodic:(id)arg1 urgency:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSDictionary *)mediaSources;
@end
