/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/Versions/A/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSString, NSObject;

@interface MSVTaskAssertion : NSObject {

	NSString* _uuid;
	NSString* _bundleID;
	NSString* _subsystem;
	int _pid;
	NSObject*<OS_dispatch_source> _invalidationTimer;
	char _acquired;
	NSString* _name;
	/*^block*/id _invalidationHandler;

}

@property (nonatomic,readonly) NSString * bundleID;                    //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) int pid; 
@property (getter=isValid,nonatomic,readonly) char valid; 
@property (nonatomic,readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                     //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(void)dealloc;
-(id)description;
-(id)init;
-(NSString *)name;
-(void)invalidate;
-(char)isValid;
-(void)setInvalidationHandler:(id)arg1 ;
-(NSString *)bundleID;
-(int)pid;
-(id)invalidationHandler;
-(char)acquire;
-(id)_initWithName:(id)arg1 bundleID:(id)arg2 pid:(int)arg3 subsystem:(id)arg4 reason:(unsigned long long)arg5 flags:(unsigned long long)arg6 ;
-(id)initWithName:(id)arg1 pid:(int)arg2 subsystem:(id)arg3 reason:(unsigned long long)arg4 flags:(unsigned long long)arg5 ;
-(id)initWithName:(id)arg1 pid:(int)arg2 bundleID:(id)arg3 subsystem:(id)arg4 reason:(unsigned long long)arg5 flags:(unsigned long long)arg6 ;
-(id)initWithName:(id)arg1 bundleID:(id)arg2 subsystem:(id)arg3 reason:(unsigned long long)arg4 flags:(unsigned long long)arg5 ;
-(void)invalidateOnDate:(id)arg1 ;
-(void)_cancelInvalidationTimerWithCompletion:(/*^block*/id)arg1 ;
@end

