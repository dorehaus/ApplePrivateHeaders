/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraph.h>

@interface PGOnDiskGraph : PGGraph
+(Class)concreteGraphClass;
-(id)dateNodeForLocalDate:(id)arg1 ;
-(void)cacheNodesWithProgressBlock:(/*^block*/id)arg1 ;
-(id)allMomentUUIDs;
-(id)cachedMomentNodeForMomentUUID:(id)arg1 ;
-(void)cacheMomentNode:(id)arg1 forMomentUUID:(id)arg2 checkUnicity:(char)arg3 ;
-(void)uncacheMomentNodesForMomentUUIDs:(id)arg1 ;
-(void)uncacheMomentNodeForMomentUUID:(id)arg1 checkExistence:(char)arg2 ;
-(id)cachedHighlightNodeForHighlightUUID:(id)arg1 ;
-(void)cacheHighlightNode:(id)arg1 forHighlightUUID:(id)arg2 checkUnicity:(char)arg3 ;
-(void)uncacheHighlightNodesForHighlightUUIDs:(id)arg1 ;
-(void)uncacheHighlightNodeForHighlightUUID:(id)arg1 checkExistence:(char)arg2 ;
-(id)yearNodeIdentifiersForMomentNodeIdentifiers:(id)arg1 ;
-(id)momentNodeIdentifiersForYearNodeIdentifiers:(id)arg1 ;
-(id)momentNodesInSameCityAsMomentNodes:(id)arg1 ;
-(id)sortedSocialGroupNodeForMomentNodeIdentifiers:(id)arg1 ;
-(id)personNodesForPersonIdentifiers:(id)arg1 ;
-(id)personNodeForPersonLocalIdentifier:(id)arg1 ;
-(id)insertPersonNodeForPerson:(id)arg1 ;
@end

