/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSPromise.h>

@class NSLock;

@interface SSLazyPromise : SSPromise {

	char _executedBlock;
	/*^block*/id _block;
	NSLock* _executeBlockLock;

}

@property (nonatomic,copy) id block;                                 //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) NSLock * executeBlockLock;              //@synthesize executeBlockLock=_executeBlockLock - In the implementation block
@property (assign,nonatomic) char executedBlock;                     //@synthesize executedBlock=_executedBlock - In the implementation block
-(id)block;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)resultWithError:(id*)arg1 ;
-(void)setBlock:(id)arg1 ;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(id)resultWithTimeout:(double)arg1 error:(id*)arg2 ;
-(void)addErrorBlock:(/*^block*/id)arg1 ;
-(char)_runBlock;
-(char)executedBlock;
-(void)setExecutedBlock:(char)arg1 ;
-(NSLock *)executeBlockLock;
-(void)setExecuteBlockLock:(NSLock *)arg1 ;
@end

