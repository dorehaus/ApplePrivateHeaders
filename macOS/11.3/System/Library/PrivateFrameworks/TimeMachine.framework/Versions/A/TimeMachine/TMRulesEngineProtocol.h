/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TimeMachine.framework/Versions/A/TimeMachine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol TMRulesEngineProtocol
@property (readonly) char systemFilesExcluded; 
@property (copy,readonly) NSArray * pathExclusions; 
@property (copy,readonly) NSArray * appManagedExclusionPaths; 
@property (copy,readonly) NSArray * userManagedExclusionPaths; 
@property (copy,readonly) NSArray * standardExclusionPaths; 
@property (copy,readonly) NSArray * neverEnumeratePaths; 
@property (copy,readonly) NSArray * mountPointsForIncludedDisks; 
@property (copy,readonly) NSArray * deviceRulesEngines; 
@required
-(NSArray *)pathExclusions;
-(char)systemFilesExcluded;
-(NSArray *)deviceRulesEngines;
-(NSArray *)appManagedExclusionPaths;
-(NSArray *)userManagedExclusionPaths;
-(NSArray *)standardExclusionPaths;
-(NSArray *)neverEnumeratePaths;
-(NSArray *)mountPointsForIncludedDisks;

@end

