/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookCore.framework/Versions/A/AddressBookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ABMergeFilter : NSObject {

	/*function pointer*/void* _equal;
	/*function pointer*/void* _hash;
	SEL _merge;
	NSMutableDictionary* _dict;

}

@property (assign) /*function pointer*/void* equal;              //@synthesize equal=_equal - In the implementation block
@property (assign) /*function pointer*/void* hash;               //@synthesize hash=_hash - In the implementation block
@property (assign) SEL merge;                                    //@synthesize merge=_merge - In the implementation block
@property (retain) NSMutableDictionary * dict;                   //@synthesize dict=_dict - In the implementation block
-(void)dealloc;
-(/*function pointer*/void*)hash;
-(NSMutableDictionary *)dict;
-(void)setHash:(/*function pointer*/void*)arg1 ;
-(/*function pointer*/void*)equal;
-(void)setEqual:(/*function pointer*/void*)arg1 ;
-(SEL)merge;
-(void)setMerge:(SEL)arg1 ;
-(void)setDict:(NSMutableDictionary *)arg1 ;
@end
