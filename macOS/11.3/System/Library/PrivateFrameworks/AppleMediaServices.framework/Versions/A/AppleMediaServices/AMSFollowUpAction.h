/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSString, AMSMetricsEvent, NSURL, NSObject, NSURLRequest;

@interface AMSFollowUpAction : NSObject {

	NSMutableDictionary* _userInfo;
	NSString* _identifier;
	NSString* _label;
	AMSMetricsEvent* _metricsEvent;
	NSURL* _url;
	NSString* _backingIdentifier;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _actionQueue;

}

@property (nonatomic,retain) NSString * backingIdentifier;                            //@synthesize backingIdentifier=_backingIdentifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> actionQueue;                //@synthesize actionQueue=_actionQueue - In the implementation block
@property (retain) NSString * identifier;                                             //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * label;                                                  //@synthesize label=_label - In the implementation block
@property (retain) NSString * logKey; 
@property (retain) AMSMetricsEvent * metricsEvent;                                    //@synthesize metricsEvent=_metricsEvent - In the implementation block
@property (retain) NSString * parentIdentifier; 
@property (retain) NSString * preferredClient; 
@property (retain) NSURLRequest * request; 
@property (assign) char requiresFollowUpUI; 
@property (assign) char shouldClear; 
@property (retain) NSURL * url;                                                       //@synthesize url=_url - In the implementation block
@property (retain) NSMutableDictionary * userInfo; 
-(NSMutableDictionary *)userInfo;
-(NSString *)identifier;
-(NSURL *)url;
-(void)setUserInfo:(NSMutableDictionary *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSURLRequest *)request;
-(id)initWithAction:(id)arg1 ;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithLabel:(id)arg1 ;
-(NSString *)parentIdentifier;
-(void)setParentIdentifier:(NSString *)arg1 ;
-(NSString *)logKey;
-(void)setLogKey:(NSString *)arg1 ;
-(AMSMetricsEvent *)metricsEvent;
-(void)setMetricsEvent:(AMSMetricsEvent *)arg1 ;
-(id)initWithLabel:(id)arg1 parentIdentifier:(id)arg2 ;
-(void)setPreferredClient:(NSString *)arg1 ;
-(NSString *)backingIdentifier;
-(id)initWithAction:(id)arg1 parentIdentifier:(id)arg2 ;
-(void)_setUserInfoProperty:(id)arg1 forKey:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)actionQueue;
-(char)requiresFollowUpUI;
-(char)shouldClear;
-(id)performActionsWithBag:(id)arg1 account:(id)arg2 ;
-(id)initWithItem:(id)arg1 action:(id)arg2 ;
-(NSString *)preferredClient;
-(void)setRequiresFollowUpUI:(char)arg1 ;
-(void)setShouldClear:(char)arg1 ;
-(id)generateAction;
-(id)postMetricsWithBag:(id)arg1 ;
-(id)performActionsWithContract:(id)arg1 account:(id)arg2 ;
-(id)postMetricsWithBagContract:(id)arg1 ;
-(void)setBackingIdentifier:(NSString *)arg1 ;
-(void)setActionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
