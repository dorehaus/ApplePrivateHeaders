/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSDictionary;

@interface GEOURLWithHeaders : NSObject {

	NSURL* _URL;
	NSDictionary* _headerFields;

}

@property (nonatomic,readonly) NSURL * URL;                              //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) NSDictionary * headerFields;              //@synthesize headerFields=_headerFields - In the implementation block
-(id)init;
-(NSURL *)URL;
-(NSDictionary *)headerFields;
-(id)initWithURL:(id)arg1 headerFields:(id)arg2 ;
@end

