/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PGRelationshipAnalyzer.h>

@class PGGraphRelationshipProcessor, NSString;

@interface PGRelationshipAnniversaryAnalyzer : NSObject <PGRelationshipAnalyzer> {

	PGGraphRelationshipProcessor* _processor;

}

@property (nonatomic,__weak,readonly) PGGraphRelationshipProcessor * processor;              //@synthesize processor=_processor - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(void)runAnalysisWithProgressBlock:(/*^block*/id)arg1 ;
-(PGGraphRelationshipProcessor *)processor;
-(id)initWithRelationshipProcessor:(id)arg1 ;
@end

