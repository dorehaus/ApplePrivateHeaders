/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Versions/A/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VMUProcessObjectGraph;

@interface VMUGroupBy : NSObject {

	VMUProcessObjectGraph* _graph;

}

@property (readonly) VMUProcessObjectGraph * graph;              //@synthesize graph=_graph - In the implementation block
-(VMUProcessObjectGraph *)graph;
-(id)initWithGraph:(id)arg1 ;
-(void)enumerateGroups:(void*)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)typeNameForNode:(unsigned)arg1 ;
@end
