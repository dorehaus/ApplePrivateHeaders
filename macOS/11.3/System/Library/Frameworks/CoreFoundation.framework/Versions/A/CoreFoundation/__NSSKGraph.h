/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface __NSSKGraph : NSObject {

	edge* _edges;
	vertex* _vertices;
	unsigned long long _numV;
	unsigned long long _numE;
	unsigned long long _currE;
	unsigned long long _dump;
	unsigned long long _l_end;

}
-(void)dealloc;
-(char)isEmpty;
-(id)initWithNumberOfVertices:(long long)arg1 numberOfEdges:(long long)arg2 ;
-(char)addEdgeWithH1:(unsigned long long)arg1 withH2:(unsigned long long)arg2 ;
-(unsigned long long)numOfEdges;
-(edge*)isAcyclic;
@end

