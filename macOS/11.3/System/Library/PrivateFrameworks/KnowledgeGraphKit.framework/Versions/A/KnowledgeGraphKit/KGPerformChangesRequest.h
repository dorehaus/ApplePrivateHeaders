/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/Versions/A/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface KGPerformChangesRequest : NSObject

@property (nonatomic,readonly) unsigned long long count; 
-(unsigned long long)count;
-(void)removeAllObjects;
-(void)recordNodeRequest:(id)arg1 ;
-(void)recordEdgeRequest:(id)arg1 ;
-(char)_applyChangesForGraph:(id)arg1 error:(id*)arg2 ;
-(char)commitRequestInGraph:(id)arg1 error:(id*)arg2 ;
@end

