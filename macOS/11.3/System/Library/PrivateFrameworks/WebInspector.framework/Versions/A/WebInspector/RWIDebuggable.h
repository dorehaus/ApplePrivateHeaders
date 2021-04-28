/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/Versions/A/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RWIDebuggableDelegate, RWIDebugger;
@class NSString, NSNumber, NSDictionary, RWIApplication;

@interface RWIDebuggable : NSObject {

	id<RWIDebuggableDelegate> _delegate;
	NSString* _uuid;
	NSNumber* _pageId;
	NSString* _url;
	NSString* _title;
	NSString* _displayName;
	NSDictionary* _userInfo;
	RWIApplication* _application;
	long long _type;
	long long _debuggerState;
	RWIApplication* _proxyApplication;
	id<RWIDebugger> _debugger;

}

@property (nonatomic,readonly) RWIApplication * proxyApplication;                    //@synthesize proxyApplication=_proxyApplication - In the implementation block
@property (nonatomic,readonly) RWIApplication * owningApplication; 
@property (assign,nonatomic,__weak) id<RWIDebugger> debugger;                        //@synthesize debugger=_debugger - In the implementation block
@property (assign,nonatomic,__weak) id<RWIDebuggableDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * uuid;                                 //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * pageId;                               //@synthesize pageId=_pageId - In the implementation block
@property (nonatomic,copy,readonly) NSString * url;                                  //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy) NSString * displayName;                                   //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;                         //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) RWIApplication * application;                         //@synthesize application=_application - In the implementation block
@property (nonatomic,readonly) long long type;                                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long debuggerState;                              //@synthesize debuggerState=_debuggerState - In the implementation block
-(NSString *)name;
-(NSDictionary *)userInfo;
-(id<RWIDebuggableDelegate>)delegate;
-(void)setDelegate:(id<RWIDebuggableDelegate>)arg1 ;
-(NSString *)uuid;
-(long long)type;
-(NSString *)displayName;
-(NSString *)url;
-(RWIApplication *)application;
-(NSString *)title;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSNumber *)pageId;
-(long long)debuggerState;
-(void)setIndicating:(char)arg1 ;
-(RWIApplication *)owningApplication;
-(RWIApplication *)proxyApplication;
-(void)hostApplicationNowAvailable:(id)arg1 ;
-(id)initWithApplication:(id)arg1 proxyApplication:(id)arg2 pageId:(id)arg3 url:(id)arg4 title:(id)arg5 type:(long long)arg6 debuggerState:(long long)arg7 userInfo:(id)arg8 ;
-(void)changeURL:(id)arg1 title:(id)arg2 debuggerState:(long long)arg3 userInfo:(id)arg4 ;
-(void)setDebugger:(id<RWIDebugger>)arg1 ;
-(id<RWIDebugger>)debugger;
@end
