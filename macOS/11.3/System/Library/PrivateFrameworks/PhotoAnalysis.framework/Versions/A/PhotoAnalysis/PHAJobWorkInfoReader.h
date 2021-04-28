/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Versions/A/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface PHAJobWorkInfoReader : NSObject {

	NSMutableArray* _workInfosQueue;
	unsigned long long _fetchLimit;

}

@property (assign,nonatomic) unsigned long long fetchLimit;                //@synthesize fetchLimit=_fetchLimit - In the implementation block
@property (nonatomic,readonly) unsigned long long queueCount; 
-(id)init;
-(void)setFetchLimit:(unsigned long long)arg1 ;
-(unsigned long long)fetchLimit;
-(unsigned long long)queueCount;
-(id)workInfoWithCount:(unsigned long long)arg1 fetchBlock:(/*^block*/id)arg2 ;
@end

