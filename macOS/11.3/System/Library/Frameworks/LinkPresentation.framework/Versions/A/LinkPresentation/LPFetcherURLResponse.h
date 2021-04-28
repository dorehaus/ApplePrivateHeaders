/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/Versions/A/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LPFetcherResponse.h>

@class NSURL;

@interface LPFetcherURLResponse : LPFetcherResponse {

	NSURL* _URL;

}

@property (nonatomic,copy,readonly) NSURL * URL;              //@synthesize URL=_URL - In the implementation block
-(NSURL *)URL;
-(id)initWithURL:(id)arg1 fetcher:(id)arg2 ;
@end
