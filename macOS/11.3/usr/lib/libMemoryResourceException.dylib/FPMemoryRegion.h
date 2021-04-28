/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libMemoryResourceException.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libMemoryResourceException.dylib/libMemoryResourceException.dylib-Structs.h>
@class FPMemoryObject, NSString, FPRangeList;

@interface FPMemoryRegion : NSObject {

	unsigned _wired : 1;
	unsigned _inSharedCache : 1;
	unsigned _unusedSharedCacheRegion : 1;
	unsigned _ownedExclusivelyByParentProcess : 1;
	unsigned _verbose : 1;
	unsigned char _segment;
	unsigned char _share_mode;
	unsigned _user_tag;
	FPMemoryObject* _memoryObject;
	NSString* _name;
	NSString* _detailedName;
	unsigned long long _offset;
	unsigned long long _start;
	unsigned long long _size;
	unsigned long long _dirtySize;
	unsigned long long _reclaimableSize;
	unsigned long long _swappedSize;
	unsigned long long _cleanNonSpecSize;
	unsigned long long _object_id;
	FPRangeList* _subrangeList;

}

@property (nonatomic,retain) FPRangeList * subrangeList;                        //@synthesize subrangeList=_subrangeList - In the implementation block
@property (assign,nonatomic) FPMemoryObject * memoryObject;                     //@synthesize memoryObject=_memoryObject - In the implementation block
@property (nonatomic,copy) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * detailedName;                             //@synthesize detailedName=_detailedName - In the implementation block
@property (nonatomic,readonly) NSString * fullName; 
@property (assign,nonatomic) unsigned long long offset;                         //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) unsigned long long start;                          //@synthesize start=_start - In the implementation block
@property (assign,nonatomic) unsigned long long size;                           //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned long long end; 
@property (assign,nonatomic) unsigned char segment;                             //@synthesize segment=_segment - In the implementation block
@property (assign,nonatomic) unsigned long long dirtySize;                      //@synthesize dirtySize=_dirtySize - In the implementation block
@property (assign,nonatomic) unsigned long long reclaimableSize;                //@synthesize reclaimableSize=_reclaimableSize - In the implementation block
@property (assign,nonatomic) unsigned long long swappedSize;                    //@synthesize swappedSize=_swappedSize - In the implementation block
@property (assign,nonatomic) unsigned long long cleanNonSpecSize;               //@synthesize cleanNonSpecSize=_cleanNonSpecSize - In the implementation block
@property (nonatomic,readonly) unsigned long long wiredSize; 
@property (assign,nonatomic) char wired; 
@property (assign,nonatomic) unsigned user_tag;                                 //@synthesize user_tag=_user_tag - In the implementation block
@property (assign,nonatomic) unsigned long long object_id;                      //@synthesize object_id=_object_id - In the implementation block
@property (assign,nonatomic) unsigned char share_mode;                          //@synthesize share_mode=_share_mode - In the implementation block
@property (assign,nonatomic) char inSharedCache; 
@property (assign,nonatomic) char unusedSharedCacheRegion; 
@property (assign,nonatomic) char verbose; 
@property (getter=isFake,nonatomic,readonly) char fake; 
@property (nonatomic,readonly) char eligibleForProcessView; 
@property (assign,nonatomic) char ownedExclusivelyByParentProcess; 
+(id)categoryNameForTag:(unsigned)arg1 ;
+(id)vmLedgerNameForTag:(unsigned long long)arg1 ;
-(unsigned long long)size;
-(NSString *)name;
-(long long)compare:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)start;
-(void)setSize:(unsigned long long)arg1 ;
-(unsigned long long)offset;
-(unsigned char)segment;
-(unsigned long long)end;
-(void)setOffset:(unsigned long long)arg1 ;
-(NSString *)fullName;
-(void)setEnd:(unsigned long long)arg1 ;
-(void)setStart:(unsigned long long)arg1 ;
-(unsigned long long)dirtySize;
-(char)verbose;
-(void)setVerbose:(char)arg1 ;
-(void)setSegment:(unsigned char)arg1 ;
-(FPRangeList *)subrangeList;
-(unsigned long long)swappedSize;
-(unsigned long long)cleanNonSpecSize;
-(unsigned long long)reclaimableSize;
-(unsigned long long)wiredSize;
-(char)wired;
-(void)setDirtySize:(unsigned long long)arg1 ;
-(void)setReclaimableSize:(unsigned long long)arg1 ;
-(void)setObject_id:(unsigned long long)arg1 ;
-(void)setCleanNonSpecSize:(unsigned long long)arg1 ;
-(void)setDetailedName:(NSString *)arg1 ;
-(void)setWired:(char)arg1 ;
-(void)setSwappedSize:(unsigned long long)arg1 ;
-(void)setUser_tag:(unsigned)arg1 ;
-(char)unusedSharedCacheRegion;
-(void)setShare_mode:(unsigned char)arg1 ;
-(void)setInSharedCache:(char)arg1 ;
-(void)setUnusedSharedCacheRegion:(char)arg1 ;
-(char)ownedExclusivelyByParentProcess;
-(void)addSubrange:(NSRange)arg1 memoryTotal:(SCD_Struct_FP0*)arg2 pageSize:(unsigned long long)arg3 ;
-(void)setOwnedExclusivelyByParentProcess:(char)arg1 ;
-(char)eligibleForSubrangesUsingPageSize:(unsigned long long)arg1 ;
-(NSString *)detailedName;
-(unsigned long long)object_id;
-(char)eligibleForProcessView;
-(void)freeSubrangeList;
-(char)isFake;
-(char)inSharedCache;
-(FPMemoryObject *)memoryObject;
-(void)setMemoryObject:(FPMemoryObject *)arg1 ;
-(unsigned)user_tag;
-(unsigned char)share_mode;
-(void)setSubrangeList:(FPRangeList *)arg1 ;
@end

