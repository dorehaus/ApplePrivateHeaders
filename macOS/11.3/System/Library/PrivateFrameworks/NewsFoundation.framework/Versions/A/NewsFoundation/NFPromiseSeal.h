/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/Versions/A/NewsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError, NSMutableArray, NFUnfairLock;

@interface NFPromiseSeal : NSObject {

	id _value;
	NSError* _error;
	unsigned long long _state;
	NSMutableArray* _handlers;
	NFUnfairLock* _lock;

}

@property (nonatomic,retain) id value;                               //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSError * error;                        //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) unsigned long long state;               //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSMutableArray * handlers;              //@synthesize handlers=_handlers - In the implementation block
@property (nonatomic,readonly) NFUnfairLock * lock;                  //@synthesize lock=_lock - In the implementation block
-(void)dealloc;
-(id)init;
-(NFUnfairLock *)lock;
-(unsigned long long)state;
-(NSError *)error;
-(id)value;
-(void)setError:(NSError *)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(id)initWithError:(id)arg1 ;
-(void)setValue:(id)arg1 ;
-(id)initWithValue:(id)arg1 ;
-(NSMutableArray *)handlers;
-(void)setHandlers:(NSMutableArray *)arg1 ;
-(void)alwaysOn:(id)arg1 always:(/*^block*/id)arg2 ;
-(void)resolve:(id)arg1 ;
-(void)reject:(id)arg1 ;
-(void)resolveOn:(id)arg1 reject:(/*^block*/id)arg2 resolve:(/*^block*/id)arg3 ;
-(void)seal:(id)arg1 error:(id)arg2 resolution:(unsigned long long)arg3 ;
-(void)registerHandler:(/*^block*/id)arg1 ;
@end

