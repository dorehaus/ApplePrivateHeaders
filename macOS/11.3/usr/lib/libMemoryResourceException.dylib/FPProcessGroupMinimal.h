/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libMemoryResourceException.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface FPProcessGroupMinimal : NSObject {

	NSMutableSet* _processes;
	unsigned long long _hashValue;

}

@property (nonatomic,retain) NSMutableSet * processes;                  //@synthesize processes=_processes - In the implementation block
@property (assign,nonatomic) unsigned long long hashValue;              //@synthesize hashValue=_hashValue - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(NSMutableSet *)processes;
-(void)setHashValue:(unsigned long long)arg1 ;
-(unsigned long long)hashValue;
-(id)immutableCopy;
-(void)setProcesses:(NSMutableSet *)arg1 ;
-(void)addProcess:(id)arg1 ;
@end

