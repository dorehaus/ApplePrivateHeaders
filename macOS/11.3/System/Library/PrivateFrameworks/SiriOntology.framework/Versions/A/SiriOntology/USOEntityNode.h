/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/Versions/A/SiriOntology
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriOntology/SiriOntology-Structs.h>
#import <SiriOntology/USOGraphNode.h>

@interface USOEntityNode : USOGraphNode {

	UsoEntityNode* _usoEntityNode;

}
-(void)addUtteranceAlignmentWithAsrIndex:(unsigned)arg1 StartIndex:(unsigned)arg2 endIndex:(unsigned)arg3 startUnicodeScalarIndex:(unsigned)arg4 endUnicodeScalarIndex:(unsigned)arg5 ;
-(void)addIdentifierWithValue:(id)arg1 appBundleId:(id)arg2 namespaceString:(id)arg3 ;
-(id)initWithCppEntityNode:(UsoEntityNode*)arg1 ;
@end

