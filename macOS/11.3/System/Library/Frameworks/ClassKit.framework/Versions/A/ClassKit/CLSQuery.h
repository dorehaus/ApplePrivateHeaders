/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ClassKit.framework/Versions/A/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassKit/ClassKit-Structs.h>
#import <ClassKit/CLSDataObserver.h>
#import <libobjc.A.dylib/NSLocking.h>
#import <libobjc.A.dylib/CLSQuery.h>

@protocol CLSQuery <CLSClientRemoteObject,CLSChangeNotifiable>
@required
-(oneway void)clientRemote_finishWithState:(unsigned long long)arg1 error:(id)arg2;

@end


@class NSMutableArray, CLSSearchSpecification, CLSQuerySpecification, NSDate, NSString;

@interface CLSQuery : CLSDataObserver <NSLocking, CLSQuery> {

	NSMutableArray* _results;
	os_unfair_lock_s _lock;
	char _executing;
	char _shouldAddResultsToDataStore;
	char _shouldFaultResults;
	long long _fetchLimit;
	CLSSearchSpecification* _searchSpec;
	CLSQuerySpecification* _querySpec;
	/*^block*/id _completion;
	NSDate* _startDate;
	unsigned long long _state;

}

@property (getter=isExecuting) char executing;                                   //@synthesize executing=_executing - In the implementation block
@property (assign,nonatomic) char shouldAddResultsToDataStore;                   //@synthesize shouldAddResultsToDataStore=_shouldAddResultsToDataStore - In the implementation block
@property (assign,nonatomic) char shouldFaultResults;                            //@synthesize shouldFaultResults=_shouldFaultResults - In the implementation block
@property (retain) NSDate * startDate;                                           //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) unsigned long long state;                           //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long fetchLimit;                               //@synthesize fetchLimit=_fetchLimit - In the implementation block
@property (nonatomic,readonly) CLSSearchSpecification * searchSpec;              //@synthesize searchSpec=_searchSpec - In the implementation block
@property (nonatomic,readonly) CLSQuerySpecification * querySpec;                //@synthesize querySpec=_querySpec - In the implementation block
@property (nonatomic,copy) id completion;                                        //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)queryWithObjectType:(Class)arg1 predicate:(id)arg2 error:(id*)arg3 ;
+(id)queryWithObjectType:(Class)arg1 predicate:(id)arg2 ;
+(id)queryWithSearchSpecification:(id)arg1 ;
+(id)queryWithObjectType:(Class)arg1 querySpecification:(id)arg2 error:(id*)arg3 ;
-(NSString *)description;
-(void)lock;
-(void)unlock;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)reset;
-(char)isExecuting;
-(NSDate *)startDate;
-(void)setFetchLimit:(long long)arg1 ;
-(long long)fetchLimit;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)completion;
-(void)setExecuting:(char)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(oneway void)clientRemote_invalidate;
-(oneway void)clientRemote_deliverObject:(id)arg1 ;
-(id)initWithObjectType:(Class)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 error:(id*)arg4 ;
-(id)initWithSearchSpecification:(id)arg1 error:(id*)arg2 ;
-(id)initWithObjectType:(Class)arg1 querySpecification:(id)arg2 error:(id*)arg3 ;
-(char)shouldFaultResults;
-(void)_notifyOfCompletionWithError:(id)arg1 ;
-(void)_faultResultsAndComplete;
-(void)_notifyOfCompletionWithResults:(id)arg1 error:(id)arg2 ;
-(oneway void)clientRemote_finishWithState:(unsigned long long)arg1 error:(id)arg2 ;
-(CLSSearchSpecification *)searchSpec;
-(CLSQuerySpecification *)querySpec;
-(char)shouldAddResultsToDataStore;
-(void)setShouldAddResultsToDataStore:(char)arg1 ;
-(void)setShouldFaultResults:(char)arg1 ;
@end

