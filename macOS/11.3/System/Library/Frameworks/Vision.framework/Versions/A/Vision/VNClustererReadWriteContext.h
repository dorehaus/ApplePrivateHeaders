/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Vision.framework/Versions/A/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/VNClustererContextBase.h>
#import <libobjc.A.dylib/VNClustererModelQuerying.h>
#import <libobjc.A.dylib/VNClustererModelBuilding.h>

@protocol VNClusteringReadOnlyVNClusteringWritableVNClusteringCancelling;
@class NSString, NSNumber;

@interface VNClustererReadWriteContext : VNClustererContextBase <VNClustererModelQuerying, VNClustererModelBuilding> {

	id<VNClusteringReadOnly><VNClusteringWritable><VNClusteringCancelling> _clusterer;
	NSString* _ageClassifierModelFilePath;
	NSNumber* _ageClassifierBabyThreshold;
	NSNumber* _ageClassifierKidThreshold;

}
+(id)clustererModelFileNamesFromState:(id)arg1 storedInPath:(id)arg2 error:(id*)arg3 ;
+(id)nonGroupedGroupID;
+(id)representativenessForFaces:(id)arg1 error:(id*)arg2 ;
+(id)distanceBetweenFacesWithFaceprint:(id)arg1 andFaceprint:(id)arg2 error:(id*)arg3 ;
+(id)distanceBetweenFacesWithFaceObservation:(id)arg1 andFaceObservation:(id)arg2 error:(id*)arg3 ;
-(char)cancelClustering:(id*)arg1 ;
-(id)getDistances:(id)arg1 to:(id)arg2 error:(id*)arg3 ;
-(id)maximumFaceIdInModelAndReturnError:(id*)arg1 ;
-(void)_initializeGreedyClustererOptions:(id)arg1 ;
-(id)allClusteredFaceIdsAndReturnError:(id*)arg1 ;
-(id)clusteredFaceIdsForClusterContainingFaceId:(id)arg1 error:(id*)arg2 ;
-(id)getAllClustersAndReturnError:(id*)arg1 ;
-(id)l1ClusteredFaceIdsGroupedByL0ClustersForClustersContainingFaceIds:(id)arg1 error:(id*)arg2 ;
-(id)distanceBetweenClustersWithFaceId:(id)arg1 andFaceId:(id)arg2 error:(id*)arg3 ;
-(id)distanceBetweenLevel1Clusters:(id)arg1 error:(id*)arg2 ;
-(id)suggestionsForClustersWithFaceIds:(id)arg1 affinityThreshold:(float)arg2 canceller:(id)arg3 error:(id*)arg4 ;
-(id)updateModelByAddingFaces:(id)arg1 canceller:(id)arg2 error:(id*)arg3 ;
-(id)updateModelByRemovingFaces:(id)arg1 canceller:(id)arg2 error:(id*)arg3 ;
-(char)resetModelState:(id)arg1 error:(id*)arg2 ;
-(id)saveAndReturnCurrentModelState:(id*)arg1 ;
-(id)updateModelByAddingFaces:(id)arg1 andRemovingFaces:(id)arg2 canceller:(id)arg3 error:(id*)arg4 ;
-(id)updateModelByAddingFaces:(id)arg1 withGroupingIdentifiers:(id)arg2 andRemovingFaces:(id)arg3 canceller:(id)arg4 error:(id*)arg5 ;
-(id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 babyThreshold:(float)arg5 kidThreshold:(float)arg6 requestRevision:(unsigned long long)arg7 error:(id*)arg8 ;
-(id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 torsoThreshold:(float)arg5 babyThreshold:(float)arg6 kidThreshold:(float)arg7 requestRevision:(unsigned long long)arg8 error:(id*)arg9 ;
@end

