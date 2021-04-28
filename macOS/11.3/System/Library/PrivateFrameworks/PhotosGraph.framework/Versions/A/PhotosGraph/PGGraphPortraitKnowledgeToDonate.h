/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray;

@interface PGGraphPortraitKnowledgeToDonate : NSObject {

	NSDictionary* _topics;
	NSArray* _namedEntities;
	NSArray* _locationNamedEntities;

}

@property (nonatomic,readonly) NSDictionary * topics;                        //@synthesize topics=_topics - In the implementation block
@property (nonatomic,readonly) NSArray * namedEntities;                      //@synthesize namedEntities=_namedEntities - In the implementation block
@property (nonatomic,readonly) NSArray * locationNamedEntities;              //@synthesize locationNamedEntities=_locationNamedEntities - In the implementation block
-(NSDictionary *)topics;
-(NSArray *)namedEntities;
-(id)initWithTopics:(id)arg1 namedEntities:(id)arg2 locationNamedEntities:(id)arg3 ;
-(NSArray *)locationNamedEntities;
@end

