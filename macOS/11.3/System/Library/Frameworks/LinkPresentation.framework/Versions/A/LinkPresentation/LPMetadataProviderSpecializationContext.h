/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/Versions/A/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString, WKWebView, LPEvent;

@interface LPMetadataProviderSpecializationContext : NSObject {

	char _hasLoadedResource;
	char _shouldFetchSubresources;
	NSURL* _URL;
	NSString* _MIMEType;
	WKWebView* _webView;
	unsigned long long _allowedSpecializations;
	LPEvent* _event;
	/*^block*/id _eventGenerator;

}

@property (nonatomic,copy,readonly) NSURL * URL;                                       //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy,readonly) NSString * MIMEType;                               //@synthesize MIMEType=_MIMEType - In the implementation block
@property (nonatomic,readonly) char hasLoadedResource;                                 //@synthesize hasLoadedResource=_hasLoadedResource - In the implementation block
@property (nonatomic,readonly) char shouldFetchSubresources;                           //@synthesize shouldFetchSubresources=_shouldFetchSubresources - In the implementation block
@property (nonatomic,retain,readonly) WKWebView * webView;                             //@synthesize webView=_webView - In the implementation block
@property (nonatomic,readonly) unsigned long long allowedSpecializations;              //@synthesize allowedSpecializations=_allowedSpecializations - In the implementation block
@property (nonatomic,retain) LPEvent * event;                                          //@synthesize event=_event - In the implementation block
@property (nonatomic,copy) id eventGenerator;                                          //@synthesize eventGenerator=_eventGenerator - In the implementation block
-(NSURL *)URL;
-(NSString *)MIMEType;
-(LPEvent *)event;
-(void)setEvent:(LPEvent *)arg1 ;
-(WKWebView *)webView;
-(id)initWithURL:(id)arg1 MIMEType:(id)arg2 webView:(id)arg3 hasLoadedResource:(char)arg4 shouldFetchSubresources:(char)arg5 allowedSpecializations:(unsigned long long)arg6 ;
-(void)setEventGenerator:(id)arg1 ;
-(void)ensureEvent;
-(char)shouldFetchSubresources;
-(unsigned long long)allowedSpecializations;
-(char)hasLoadedResource;
-(id)eventGenerator;
@end

