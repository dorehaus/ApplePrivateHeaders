/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/Versions/A/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>

@class NSURL, NSSet, NSDictionary;

@interface CalDAVMkcalendarWithFallbackTaskGroup : CoreDAVTaskGroup {

	NSURL* _url;
	NSSet* _primaryElements;
	char _shouldSupportVEVENT;
	char _shouldSupportVTODO;
	NSDictionary* _headersToOverride;
	NSDictionary* _responseHeaders;
	NSSet* _fallbackElements;

}

@property (nonatomic,retain) NSSet * fallbackElements;                      //@synthesize fallbackElements=_fallbackElements - In the implementation block
@property (assign,nonatomic) char shouldSupportVEVENT;                      //@synthesize shouldSupportVEVENT=_shouldSupportVEVENT - In the implementation block
@property (assign,nonatomic) char shouldSupportVTODO;                       //@synthesize shouldSupportVTODO=_shouldSupportVTODO - In the implementation block
@property (nonatomic,retain) NSDictionary * headersToOverride;              //@synthesize headersToOverride=_headersToOverride - In the implementation block
@property (nonatomic,retain) NSDictionary * responseHeaders;                //@synthesize responseHeaders=_responseHeaders - In the implementation block
-(NSDictionary *)headersToOverride;
-(NSSet *)fallbackElements;
-(void)_mkcalendarAfterFailureCount:(unsigned long long)arg1 ;
-(NSDictionary *)responseHeaders;
-(void)setResponseHeaders:(NSDictionary *)arg1 ;
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 primaryPropertiesToSet:(id)arg3 fallbackPropertiesToSet:(id)arg4 atURL:(id)arg5 ;
-(void)startTaskGroup;
-(char)shouldSupportVEVENT;
-(void)setShouldSupportVEVENT:(char)arg1 ;
-(char)shouldSupportVTODO;
-(void)setShouldSupportVTODO:(char)arg1 ;
-(void)setHeadersToOverride:(NSDictionary *)arg1 ;
-(void)setFallbackElements:(NSSet *)arg1 ;
@end

