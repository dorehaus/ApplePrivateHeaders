/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Coherence.framework/Versions/A/Coherence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID;

typedef struct TopoReplica {
	NSUUID* uuid;
	unsigned index;
} TopoReplica;

typedef struct TopoID {
	TopoReplica replica;
	unsigned clock;
} TopoID;

typedef struct _compressed_pair<std::__1::pair<TopoID, TopoID> *, std::__1::allocator<std::__1::pair<TopoID, TopoID>>> {
	pair<TopoID, TopoID> __value_;
} compressed_pair<std::__1::pair<TopoID, TopoID> *, std::__1::allocator<std::__1::pair<TopoID, TopoID>>>;

typedef struct vector<std::__1::pair<TopoID, TopoID>, std::__1::allocator<std::__1::pair<TopoID, TopoID>>> {
	pair<TopoID, TopoID> __begin_;
	pair<TopoID, TopoID> __end_;
	compressed_pair<std::__1::pair<TopoID, TopoID> *, std::__1::allocator<std::__1::pair<TopoID, TopoID>>> __end_cap_;
} vector<std::__1::pair<TopoID, TopoID>, std::__1::allocator<std::__1::pair<TopoID, TopoID>>>;

typedef struct _compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *>> {
	TopoSubstring __value_;
} compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *>>;

typedef struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *>> {
	TopoSubstring __begin_;
	TopoSubstring __end_;
	compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *>> __end_cap_;
} vector<TopoSubstring *, std::__1::allocator<TopoSubstring *>>;

typedef struct _NSZone* NSZoneRef;

