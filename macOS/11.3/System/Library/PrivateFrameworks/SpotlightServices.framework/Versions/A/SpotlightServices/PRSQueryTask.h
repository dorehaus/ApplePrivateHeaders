/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/Versions/A/SpotlightServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol PRSSearchQueryHandler, OS_dispatch_queue;
@class NSDictionary, NSArray, SPSearchQueryContext, NSString, PRSSearchFeedback, NSObject, PRSSearchSession;

@interface PRSQueryTask : NSObject <NSSecureCoding> {

	char _started;
	char _canceled;
	char _webSearch;
	long long _queryId;
	NSDictionary* _category_stats;
	NSDictionary* _server_features;
	NSArray* _parsecCategoryOrder;
	id _representedObject;
	SPSearchQueryContext* _queryContext;
	NSString* _queryString;
	unsigned long long _queryIdent;
	PRSSearchFeedback* _feedback;
	id<PRSSearchQueryHandler> _handler;
	NSObject*<OS_dispatch_queue> _queue;
	PRSSearchSession* _session;
	NSString* _fbq;

}

@property (assign,nonatomic) char started;                                       //@synthesize started=_started - In the implementation block
@property (assign,nonatomic) char canceled;                                      //@synthesize canceled=_canceled - In the implementation block
@property (retain) PRSSearchFeedback * feedback;                                 //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,retain) id<PRSSearchQueryHandler> handler;                  //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                 //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) PRSSearchSession * session;                  //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSString * fbq;                                     //@synthesize fbq=_fbq - In the implementation block
@property (assign) char webSearch;                                               //@synthesize webSearch=_webSearch - In the implementation block
@property (assign) long long queryId;                                            //@synthesize queryId=_queryId - In the implementation block
@property (nonatomic,retain) NSDictionary * category_stats;                      //@synthesize category_stats=_category_stats - In the implementation block
@property (nonatomic,retain) NSDictionary * server_features;                     //@synthesize server_features=_server_features - In the implementation block
@property (nonatomic,retain) NSArray * parsecCategoryOrder;                      //@synthesize parsecCategoryOrder=_parsecCategoryOrder - In the implementation block
@property (assign,nonatomic,__weak) id representedObject;                        //@synthesize representedObject=_representedObject - In the implementation block
@property (nonatomic,readonly) SPSearchQueryContext * queryContext;              //@synthesize queryContext=_queryContext - In the implementation block
@property (nonatomic,retain) NSString * queryString;                             //@synthesize queryString=_queryString - In the implementation block
@property (assign) unsigned long long queryIdent;                                //@synthesize queryIdent=_queryIdent - In the implementation block
+(void)initialize;
+(char)supportsSecureCoding;
+(void)suspendDecoding;
+(void)resumeDecoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)resume;
-(void)setRepresentedObject:(id)arg1 ;
-(id<PRSSearchQueryHandler>)handler;
-(void)setHandler:(id<PRSSearchQueryHandler>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)cancel;
-(char)started;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)representedObject;
-(PRSSearchSession *)session;
-(void)setSession:(PRSSearchSession *)arg1 ;
-(void)invalidateHandler;
-(SPSearchQueryContext *)queryContext;
-(NSString *)queryString;
-(void)setQueryString:(NSString *)arg1 ;
-(void)setStarted:(char)arg1 ;
-(void)setFeedback:(PRSSearchFeedback *)arg1 ;
-(PRSSearchFeedback *)feedback;
-(char)canceled;
-(char)webSearch;
-(void)setWebSearch:(char)arg1 ;
-(void)setCanceled:(char)arg1 ;
-(void)setQueryId:(long long)arg1 ;
-(long long)queryId;
-(unsigned long long)queryIdent;
-(void)setParsecState:(char)arg1 ;
-(NSDictionary *)category_stats;
-(NSArray *)parsecCategoryOrder;
-(void)setParsecCategoryOrder:(NSArray *)arg1 ;
-(void)setFbq:(NSString *)arg1 ;
-(NSString *)fbq;
-(id)initWithSession:(id)arg1 handler:(id)arg2 queue:(id)arg3 feedback:(id)arg4 queryContext:(id)arg5 ;
-(id)feedbackQueryIdentifier;
-(void)setCategory_stats:(NSDictionary *)arg1 ;
-(NSDictionary *)server_features;
-(void)setServer_features:(NSDictionary *)arg1 ;
-(void)setQueryIdent:(unsigned long long)arg1 ;
@end
