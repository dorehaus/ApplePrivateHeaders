/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/Versions/A/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface WFWhitelistSite : NSObject {

	NSString* _urlString;
	NSURL* _url;
	NSString* _domainName;

}

@property (retain) NSString * urlString;                        //@synthesize urlString=_urlString - In the implementation block
@property (retain) NSURL * url;                                 //@synthesize url=_url - In the implementation block
@property (retain,readonly) NSString * domainName;              //@synthesize domainName=_domainName - In the implementation block
-(char)hasMetasitePrefix:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)urlString;
-(void)setUrlString:(NSString *)arg1 ;
-(NSString *)domainName;
-(id)initWithURLString:(id)arg1 ;
@end

