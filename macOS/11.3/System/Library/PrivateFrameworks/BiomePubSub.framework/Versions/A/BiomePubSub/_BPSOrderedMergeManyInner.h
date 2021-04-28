/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/Versions/A/BiomePubSub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiomePubSub/_BPSAbstractOrderedMerge.h>

@interface _BPSOrderedMergeManyInner : _BPSAbstractOrderedMerge {

	/*^block*/id _comparator;

}

@property (nonatomic,copy) id comparator;              //@synthesize comparator=_comparator - In the implementation block
-(id)comparator;
-(void)setComparator:(id)arg1 ;
-(long long)compareFirst:(id)arg1 withSecond:(id)arg2 ;
-(id)initWithDownstream:(id)arg1 upstreamCount:(unsigned long long)arg2 comparator:(/*^block*/id)arg3 ;
@end
