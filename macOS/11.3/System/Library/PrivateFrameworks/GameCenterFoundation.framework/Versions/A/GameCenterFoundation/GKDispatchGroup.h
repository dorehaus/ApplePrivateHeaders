/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/Versions/A/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSString, NSObject, GKThreadsafeDictionary, NSError, GKActivity;

@interface GKDispatchGroup : NSObject {

	NSString* _name;
	NSObject*<OS_dispatch_group> _group;
	GKThreadsafeDictionary* _values;
	NSError* _error;
	id result;
	int _sequence;
	char _loggingEnabled;
	id _result;
	GKActivity* _activity;

}

@property (retain) GKActivity * activity;                                              //@synthesize activity=_activity - In the implementation block
@property (retain) NSError * error;                                                    //@synthesize error=_error - In the implementation block
@property (retain) id result;                                                          //@synthesize result=_result - In the implementation block
@property (assign,getter=isLoggingEnabled,nonatomic) char loggingEnabled;              //@synthesize loggingEnabled=_loggingEnabled - In the implementation block
+(id)mainQueue;
+(void)waitUntilDone:(/*^block*/id)arg1 ;
+(id)dispatchGroup;
+(id)dispatchGroupWithName:(id)arg1 ;
+(id)defaultConcurrentQueue;
+(id)backgroundConcurrentQueue;
-(void)dealloc;
-(id)description;
-(id)init;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)_values;
-(NSError *)error;
-(id)allValues;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)initWithName:(id)arg1 ;
-(id)result;
-(void)setResult:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)wait;
-(void)perform:(/*^block*/id)arg1 ;
-(GKActivity *)activity;
-(void)setActivity:(GKActivity *)arg1 ;
-(long long)waitWithTimeout:(double)arg1 ;
-(void)setLoggingEnabled:(char)arg1 ;
-(void)enter;
-(void)leave;
-(char)isLoggingEnabled;
-(void)notifyOnMainQueueWithBlock:(/*^block*/id)arg1 ;
-(void)notifyOnQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(long long)_waitWithDispatchTimeout:(unsigned long long)arg1 ;
-(void)join:(id)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
@end

